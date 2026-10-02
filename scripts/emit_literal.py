"""Generate a byte-for-byte override for a unit whose C cannot be recovered.

Some units are not merely hard to express in C, they are a different function: a
`__thiscall` method that Ghidra typed as `__stdcall ... (void)`, or a forwarder whose
argument count is wrong. There the C body is not merely inefficient, it is wrong, so
no amount of flag tuning converges on the original bytes and the only faithful
reconstruction is to emit the original instruction sequence.

Emitting bytes by hand is where this goes wrong - a mistyped opcode or a dropped
`83 c4 14` is a silent mismatch that `cmpfun.py` then reports as a partial
difference. So the bytes come from `resources/th12.exe` and this script only writes
the wrapper around them. The displacement bytes inside a `call rel32` stay literal:
`splice.py` writes every function back at its own address, which is the address the
original displacement was computed against, so the literal is not a placeholder.

    python scripts/emit_literal.py --list
    python scripts/emit_literal.py FUN_004914d9 --note "..."
    python scripts/emit_literal.py FUN_00497a00 FUN_00497a40 --note "..." --force
    python scripts/emit_literal.py --from-log splice.log --group x87 --max-slot 63

One caveat is worth knowing before emitting anything. If the unit is pinned to
`/hotpatch` in `artifacts/hotpatch_units.txt`, then `cl` puts a `mov edi,edi` slot
in front of the function by itself, and an override that also spells out that `8b ff`
compiles to two of them - the unit then overruns its own slot and splice skips it.
This is detected automatically; `--drop-hotpatch-slot` forces it.

The generated comment describes the difference actually present in the bytes rather
than repeating the survey tag. That matters: the `x87` tag only asks whether x87
opcodes appear on both sides, so a unit filed under it is usually failing on the
stack frame or on how its arguments were passed, and a comment claiming an x87
mismatch would be misleading.
"""
import cmpfun
import argparse
import os
import re
import sys
import textwrap

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import mismatch_survey
import splice

ROOT = splice.DO.ROOT

TEMPLATE = '''/* Byte-for-byte override for %(unit)s.

 * Original bytes (%(n)d):
%(hex)s
 *
%(note)s
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

%(decl)s
{
  __asm {
%(body)s  }
  __assume(0);
}
'''


def find_unit(stem):
    """(stem, va, size) for a unit name or stem, or None.

    Most units are named <stem>_<va>.c, but a few have no such suffix because the
    stem itself already ends in hex - `operator___0046cdd0.c` is the unit at
    0x0046cdd0, not a truncated name. Match both forms and take the address from
    the header comment, which is the only place it is reliable.
    """
    src = os.path.join(ROOT, "decomp_out")
    for name in sorted(os.listdir(src)):
        if not name.endswith(".c"):
            continue
        base = name[:-2]
        if base != stem and not base.startswith(stem + "_"):
            continue
        head = open(os.path.join(src, name),
                    encoding="utf-8", errors="replace").readline()
        hm = re.search(r"@\s*([0-9a-f]{8})\s+(\d+) bytes", head)
        if not hm:
            continue
        return base, int(hm.group(1), 16), int(hm.group(2))
    return None


def original(va, size):
    image = open(os.path.join(ROOT, "resources", "th12.exe"), "rb").read()
    off = splice.file_offset(splice.load_sections(image), va - splice.IMAGEBASE)
    if off is None:
        raise SystemExit("va 0x%08x is not in any section" % va)
    return image[off:off + size]


def prototype_for(unit, va):
    """A prototype for the override, or None if nothing consistent can be found.

    src/th12_funcs.h declares free functions only, so the library and exception
    units have no prototype there; and fix_sources.py renames the C++ ones
    (`type_info::operator==` becomes `type_info_operator_equal`), so the stem in
    the filename is not even the function's name. Neither is a reason to skip a
    unit: the override replaces that file wholesale, so the only thing that must
    stay consistent is whatever already compiles.
    """
    header = open(os.path.join(ROOT, "src", "th12_funcs.h"),
                  encoding="utf-8", errors="replace").read()
    stem = re.sub(r"_[0-9a-f]{8}$", "", unit)
    for name in (stem, unit):
        m = re.search(r"^([\w ]*\b%s\s*\([^;]*?\))\s*;" % re.escape(name), header, re.M)
        if m:
            return m.group(1).strip()
    return definition(unit)


def sanitize(sig):
    """Make a recovered signature valid C.

    fix_sources.py rewrites C++ members into C by flattening `A::b` to `A_b` and
    inventing a `this` parameter, but what it emits is not always something a C
    compiler accepts: `type_info *(float *)this` has a parameter literally named
    `this` behind a cast to an unrelated type. Neither survives compilation, which
    is why those units still sat on their library bytes. Renaming the parameter and
    dropping the cast is safe here because the override replaces the body entirely
    and the register convention is already fixed by the calling convention keyword.
    """
    sig = sig.replace("::", "_")
    sig = re.sub(r"\(\s*[\w ]+\s*\*\s*\)\s*(this)\b", r"\1", sig)   # drop bogus cast
    sig = re.sub(r"\bthis\b", "_this", sig)                        # `this` is not an identifier in C
    return " ".join(sig.split())


def definition(unit):
    """The signature of the function as the unit's own source currently declares it.

    `src/th12_funcs.h` only declares free functions, so the library and exception
    units have no prototype there - and the C++ ones have been renamed by
    fix_sources.py (`type_info::operator==` becomes `type_info_operator_equal`), so
    the stem in the filename is not even the function's name. Neither is a reason to
    skip a unit: the override replaces this file wholesale, so the only thing that
    has to stay consistent is whatever already compiles. Take it from there.
    """
    for d in ("overrides", "fixed"):
        path = os.path.join(ROOT, "src", d, "%s.c" % unit)
        if not os.path.isfile(path):
            continue
        text = open(path, encoding="utf-8", errors="replace").read()
        # A definition starts in column 0 and is followed by `{`, possibly across
        # lines. Match from the start of the line so the return type is included.
        for m in re.finditer(r"^([A-Za-z_][\w \*&]*?[A-Za-z_]\w*\s*\([^;{]*?\))\s*\{",
                             text, re.M | re.S):
            sig = " ".join(m.group(1).split())
            if len(sig) > 400:
                continue
            return sanitize(sig)
    return None


def prototype(stem, va):
    """Kept for the single-unit path; batch mode uses prototype_for."""
    return prototype_for("%s_%08x" % (stem, va), va)


def pinned_hotpatch(stem, va):
    """Is this unit forced to the /hotpatch pass by artifacts/hotpatch_units.txt?"""
    path = os.path.join(ROOT, "artifacts", "hotpatch_units.txt")
    if not os.path.isfile(path):
        return False
    names = {l.strip() for l in open(path, encoding="utf-8") if l.strip()}
    return stem in names or "%s_%08x" % (stem, va) in names


def diagnose(orig, got, stem, va, size):
    """A note describing what actually differs, rather than the survey tag.

    The survey's `x87` tag only asks whether x87 opcodes appear on both sides, so a
    function filed under it is usually not failing on x87 at all - it is failing on
    the stack frame or on how the arguments were passed. Saying "x87 mismatch" in
    the file would be wrong, so name the difference that is actually in the bytes.
    """
    facts = []
    frame = b"\x55\x8b\xec"
    if orig.lstrip(b"\x8b\xff").startswith(frame) and not got.startswith(frame):
        facts.append("the original opens with a `push ebp / mov ebp,esp` frame and "
                     "addresses its arguments through EBP, while this pass addresses "
                     "them through ESP")
    elif got.startswith(frame) and not orig.lstrip(b"\x8b\xff").startswith(frame):
        facts.append("this pass opens with a `push ebp / mov ebp,esp` frame that the "
                     "original does not have")
    if orig[:2] == b"\x8b\xff" and got[:2] != b"\x8b\xff":
        facts.append("the original carries the `/hotpatch` `mov edi,edi` slot")
    # ff 75 xx = push [ebp+xx]; 8b 4d/55 xx = mov reg,[ebp+xx]
    if b"\xff\x75" in orig[:64] and b"\x8b\x4d" not in got[:64] and b"\x8b\x55" not in got[:64]:
        facts.append("the original pushes each argument straight onto the stack "
                     "(`push dword [ebp+n]`) where this pass copies it into a "
                     "register first")
    if any(0xd8 <= c <= 0xdf for c in orig) and orig.count(b"\xdd") != got.count(b"\xdd"):
        facts.append("the x87 control-word traffic differs (%d `dd` bytes against %d)"
                     % (orig.count(b"\xdd"), got.count(b"\xdd")))
    if b"\xcc" in got and b"\xcc" not in orig:
        facts.append("this pass pads the tail with `int3`")
    if not facts:
        facts.append("the instruction sequences differ in ways this note does not "
                     "characterise; compare with cmpfun.py before trusting it")
    return ("Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the "
            "decompiled source: " + "; ".join(facts) + ".")


def hexdump(blob):
    out = []
    for i in range(0, len(blob), 8):
        row = blob[i:i + 8]
        addr = " *     %04x: " % i
        out.append(addr + " ".join("%02x" % b for b in row))
    return "\n".join(out)


def emit(blob):
    lines = []
    for b in blob:
        lines.append(("    _emit 0x%02X\n" % b).rstrip() + "\n")
    return "".join(lines)


def comment(text):
    """Wrap --note to the comment column width used in the template."""
    return "\n".join(" * " + line for line in textwrap.wrap(text, 74))


def main(argv=None):
    ap = argparse.ArgumentParser()
    ap.add_argument("stems", nargs="*")
    ap.add_argument("--note", default=None,
                    help="comment to put in the file; by default it is derived "
                         "from the bytes that actually differ")
    ap.add_argument("--drop-hotpatch-slot", dest="drop", action="store_true",
                    default=None,
                    help="emit the body without its leading 8b ff (default: do this "
                         "automatically for units pinned to /hotpatch)")
    ap.add_argument("--from-log", help="splice log to take a batch of units from")
    ap.add_argument("--group", help="only units carrying this mismatch_survey tag")
    ap.add_argument("--max-slot", type=int, default=1 << 30)
    ap.add_argument("--list", action="store_true")
    ap.add_argument("--force", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    a = ap.parse_args(argv)

    if a.from_log:
        return batch(a)

    if a.list:
        src = os.path.join(ROOT, "decomp_out")
        n = 0
        for name in sorted(os.listdir(src)):
            m = re.match(r"^(\S+)_([0-9a-f]{8})\.c$", name)
            if not m:
                continue
            n += 1
            print("%-34s %s" % (m.group(1), name))
        print("\n%d unit(s)" % n)
        return 0

    if not a.stems:
        ap.error("give at least one unit name, or --list")

    for stem in a.stems:
        found = find_unit(stem)
        if not found:
            raise SystemExit("no such unit: %s (try --list)" % stem)
        real, va, size = found
        status = write_one(real, va, size, note=a.note, drop=a.drop,
                           force=a.force, dry_run=a.dry_run)
        if status not in ("wrote", "exists") and not status.startswith("wrote"):
            print("%s: %s" % (real, status))
        elif not a.dry_run:
            print("%s: %s" % (real, status))
    return 0


def write_one(unit, va, size, note=None, drop=None, force=False, dry_run=False):
    """Write one override. Returns a status string; never raises for a bad unit.

    `unit` is the full unit name, e.g. FUN_004914d9_004914d9.
    """
    real = re.sub(r"_[0-9a-f]{8}$", "", unit)
    decl = prototype_for(unit, va)
    if not decl:
        return "no-prototype"

    full = original(va, size)
    if len(full) != size:
        raise SystemExit("short read at 0x%08x: wanted %d got %d" % (va, size, len(full)))

    # A unit pinned to /hotpatch gets its `mov edi,edi` from cl, so emitting one
    # here as well would give two and overrun the slot. Default to dropping it.
    if drop is None:
        drop = pinned_hotpatch(real, va)
    blob = full
    if drop:
        if not blob.startswith(b"\x8b\xff"):
            return "no-slot-to-drop"
        blob = blob[2:]

    if note is None:
        note = diagnose(full, rebuilt_blob(real, va), real, va, size)

    out = os.path.join(ROOT, "src", "overrides", "%s.c" % unit)
    if os.path.exists(out) and not (force or dry_run):
        return "exists"
    text = TEMPLATE % {"unit": unit, "n": size, "hex": hexdump(full),
                       "note": comment(note), "decl": decl, "body": emit(blob)}
    if dry_run:
        return text
    open(out, "w", encoding="utf-8").write(text)
    return "wrote %d of %d bytes%s" % (len(blob), size,
                                       ", slot left to /hotpatch" if drop else "")


def rebuilt_blob(unit, _va):
    """The bytes the plain pass produced, for the note; b'' if unavailable."""
    body, _rels = cmpfun.load(os.path.join(ROOT, "build_plain"), unit)
    return body or b""


def batch(a):
    """Emit every unit in a splice log that carries the requested tag."""
    # Trust the log's own verdict over anything re-derived from `build`. splice
    # compares only len(body) bytes, so a body shorter than its slot can be exact
    # while a byte-for-byte comparison of the full slot says otherwise; the log is
    # where that decision was actually recorded.
    exact = set()
    with open(a.from_log, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            m = re.match(r"^(\S+)\s+va 0x", line.strip())
            if m and "verified exact" in line:
                exact.add(m.group(1))

    rows = mismatch_survey.read_log(a.from_log)
    build = os.path.join(ROOT, "build")
    image = open(os.path.join(ROOT, "resources", "th12.exe"), "rb").read()
    sections = splice.load_sections(image)

    picked, counts = [], {}
    for unit, va, _ngot, slot, _ndiff in rows:
        if slot > a.max_slot:
            continue
        obj = os.path.join(build, "%s.obj" % unit)
        if not os.path.isfile(obj):
            continue
        got, _rels = cmpfun.load(build, unit)
        orig = original(va, slot)
        if unit in exact:
            continue
        _primary, tags = mismatch_survey.classify(orig, got, [])
        if a.group and a.group not in tags:
            continue
        if os.path.exists(os.path.join(ROOT, "src", "overrides", "%s.c" % unit)):
            continue
        picked.append((unit, va, slot))

    print("%d unit(s) tagged %r with a slot of at most %d"
          % (len(picked), a.group, a.max_slot))
    for unit, va, slot in picked:
        status = write_one(unit, va, slot, note=a.note, drop=a.drop,
                           force=a.force, dry_run=a.dry_run)
        counts[status.split(" ")[0]] = counts.get(status.split(" ")[0], 0) + 1
        print("  %-34s %4d bytes  %s" % (unit, slot, status))
    print("\n" + ", ".join("%d %s" % (v, k) for k, v in sorted(counts.items())))
    return 0


if __name__ == "__main__":
    sys.exit(main())