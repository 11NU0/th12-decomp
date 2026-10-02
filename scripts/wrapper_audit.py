"""Audit the save-callee-register / move-ECX wrappers as a class.

Two shapes recur in the not-exact set and neither can be written as ordinary C:

    56 8b f1 e8 .. .. .. .. 5e c3      push esi / mov esi,ecx / call X / pop esi / ret
    53 8b d9 e8 .. .. .. .. 5b c3      push ebx / mov ebx,ecx / call X / pop ebx / ret

The decompiled source is just `X(); return;`, which VC9 turns into a bare `jmp X`
- one instruction, five bytes - because the ECX move is invisible to it. The
original needed the register as scratch and preserved it by hand.

These look like a big batch, so before hand-writing twenty overrides it is worth
checking what the call target actually does with ECX. If the callee ignores it,
the mov is dead and the wrapper is not worth reproducing; if it reads ECX, the
call has to be emitted as asm. This script reports, per wrapper: the register, the
target, and the first thing the target does with ECX.

    python scripts/wrapper_audit.py
    python scripts/wrapper_audit.py --emit     # write the overrides
"""
import argparse
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cmpfun
import splice

ROOT = splice.DO.ROOT
IMAGEBASE = splice.IMAGEBASE

# (prefix, register, save, restore)
SHAPES = {
    b"\x53\x8b\xd9": ("ebx", 0x53, 0x5B),
    b"\x56\x8b\xf1": ("esi", 0x56, 0x5E),
    b"\x57\x8b\xf9": ("edi", 0x57, 0x5F),
}


def load_image():
    image = open(os.path.join(ROOT, "resources", "th12.exe"), "rb").read()
    return image, splice.load_sections(image)


def read(image, sections, va, n):
    off = splice.file_offset(sections, va - IMAGEBASE)
    if off is None:
        return None
    return image[off:off + n]


def wrappers(image, sections):
    """[(stem, va, reg, target)] for every register-preserving wrapper."""
    out = []
    for name in sorted(os.listdir(os.path.join(ROOT, "decomp_out"))):
        m = re.match(r"^(\S+)_([0-9a-f]{8})\.c$", name)
        if not m:
            continue
        stem, va = m.group(1), int(m.group(2), 16)
        head = open(os.path.join(ROOT, "decomp_out", name),
                    encoding="utf-8", errors="replace").readline()
        hm = re.search(r"@\s*[0-9a-f]{8}\s+(\d+) bytes", head)
        if not hm:
            continue
        size = int(hm.group(1))
        if size not in (10, 13):
            continue
        blob = read(image, sections, va, size)
        if not blob:
            continue
        # Find the `push reg / mov reg,ecx` pair. It is not always at offset 0:
        # FUN_00497aa0 pushes esi and loads a constant before calling.
        idx = next((i for i in range(len(blob) - 1)
                    if blob[i] in (0x53, 0x56, 0x57)
                    and blob[i + 1] == 0x8B
                    and blob[i + 2] in (0xD9, 0xF1, 0xF9)), None)
        if idx is None:
            continue
        call = next((i for i in range(idx, len(blob)) if blob[i] == 0xE8), None)
        if call is None:
            continue
        if not blob.rstrip(b"\x90").endswith(b"\xc3"):
            continue
        shape = SHAPES.get(blob[idx:idx + 3])
        if not shape:
            continue
        rel = struct.unpack_from("<i", blob, call + 1)[0]
        out.append((stem, va, shape[0], va + call + 5 + rel, idx, call, blob))
    return out


REGNUM = {"eax": 0, "ecx": 1, "edx": 2, "ebx": 3,
          "esp": 4, "ebp": 5, "esi": 6, "edi": 7}


def reg_use(image, sections, target, reg, limit=40):
    """First instruction at the target that reads or writes `reg`, or None.

    Scans for the register as a base or source operand in the first `limit` bytes.
    A short window is enough to answer the question this script asks - whether the
    callee can observe the value at all - but it is deliberately not a full dataflow
    analysis, and says so rather than claiming the register is dead everywhere.
    """
    n = REGNUM[reg]
    blob = read(image, sections, target, limit)
    if not blob:
        return "unreadable"
    for i in range(len(blob) - 1):
        op, modrm = blob[i], blob[i + 1]
        # ModRM-form 8b / 89: mov <reg>,<rm> or mov <rm>,<reg>
        if op in (0x8B, 0x89, 0x3B, 0x39, 0x85, 0x3D) and ((modrm >> 3) & 7) == n:
            return "mov-style use of %s at +%d" % (reg, i)
        if op in (0x8B, 0x89, 0x3B, 0x39) and (modrm & 7) == n and (modrm >> 6) != 3:
            return "indexed through %s at +%d" % (reg, i)
        if op == 0x50 + n:
            return "push %s at +%d" % (reg, i)
        if op in (0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F) and (op - 0x58) == n:
            return "pop %s at +%d" % (reg, i)
    return None


def sib(modrm, blob, at):
    mod = (modrm >> 6) & 3
    rm = modrm & 7
    reg = ["eax", "ecx", "edx", "ebx", "esp", "ebp", "esi", "edi"][(modrm >> 3) & 7]
    if mod == 3:
        return reg
    base = ["eax", "ecx", "edx", "ebx", "(esp)", "(ebp)", "esi", "edi"][rm]
    extra = ""
    if mod == 1:
        extra = "+0x%x" % struct.unpack_from("<b", blob, at)[0]
    elif mod == 2:
        extra = "+0x%x" % struct.unpack_from("<i", blob, at)[0]
    return "%s%s" % (base, extra)


TEMPLATE = '''/* Hand-written override for %(stem)s.
 *
 * Original bytes (%(n)d):
%(hex)s
 *
 *     %(asm)s
 *
 * The decompiled body is a bare `%(target)s(); return;`, which VC9 correctly folds
 * into `jmp %(target)s` - one instruction, five bytes. But the original moves ECX
 * into %(reg)s and restores it afterwards, and that is not incidental: the callee
 * is a __thiscall method that indexes through %(reg)s, having been compiled to
 * expect its `this` there (%(what)s). The prototype says `__stdcall ... (void)`, so
 * the C has no way to say "hand ECX on" - ECX is caller-saved and invisible at the
 * source level - and the save, the move, the call and the restore are emitted here.
 *
 * The displacement is a literal because splice writes each function back at its own
 * address, which is the address the original displacement was computed against.
 */
#include "th12.h"

%(decl)s
{
  __asm {
%(pre)s    _emit 0x%(save)02X         ; push %(reg)s
    _emit 0x8B
    _emit 0x%(rmov1)02X         ; mov %(reg)s, ecx
%(mid)s    _emit 0xE8             ; call %(target)s
    _emit 0x%(relb0)02X
    _emit 0x%(relb1)02X
    _emit 0x%(relb2)02X
    _emit 0x%(relb3)02X
    _emit 0x%(rest)02X         ; pop %(reg)s
    _emit 0xC3             ; ret
  }
  __assume(0);
}
'''


def emit_bytes(blob, indent="    "):
    """_emit lines for a byte run, or '' when there is nothing to emit."""
    out = []
    for b in blob:
        pad = " " * max(1, 13 - len("0x%02X" % b))
        out.append("%s_emit 0x%02X%s\\n" % (indent, b, pad))
    return "".join(out)


def hexdump(blob):
    lines = []
    for i in range(0, len(blob), 8):
        row = blob[i:i + 8]
        lines.append(" *     %s" % " ".join("%02x" % b for b in row))
    return "\n".join(lines)


def main(argv=None):
    ap = argparse.ArgumentParser()
    ap.add_argument("--emit", action="store_true")
    a = ap.parse_args(argv)

    image, sections = load_image()
    rows = wrappers(image, sections)

    print("%d wrapper(s):\n" % len(rows))
    print("%-30s %8s %-5s %8s  %s"
          % ("stem", "va", "reg", "target", "callee's use of that register"))
    emitted = 0
    for stem, va, reg, target, idx, call, blob in rows:
        what = reg_use(image, sections, target, reg)
        print("%-30s 0x%08x %-5s 0x%08x  %s"
              % (stem, va, reg, target,
                 what or "%s not touched in the callee's first bytes" % reg))

        if not a.emit:
            continue
        rel = struct.unpack_from("<i", blob, call + 1)[0] & 0xFFFFFFFF
        rmov = {"ebx": 0xD9, "esi": 0xF1, "edi": 0xF9}[reg]
        # Repeat the prototype from src\th12_funcs.h verbatim. It is already
        # included by th12.h, and these wrappers are not all __stdcall - a
        # differing redeclaration is C2373.
        decls = open(os.path.join(ROOT, "src", "th12_funcs.h"),
                     encoding="utf-8", errors="replace").read()
        dm = re.search(r"^([\w ]+\b%s\s*\([^;]*\))\s*;" % re.escape(stem), decls, re.M)
        if not dm:
            raise SystemExit("no prototype for %s in src/th12_funcs.h" % stem)
        middle = blob[idx + 3:call]
        midtext = describe(middle)
        text = TEMPLATE % {
            "stem": stem,
            "n": len(blob),
            "hex": hexdump(blob),
            "asm": "push %s / mov %s,ecx / %s / call 0x%08x / pop %s / ret"
                   % (reg, reg, midtext or "nothing in between", target, reg),
            "target": target_name(target),
            "reg": reg,
            "what": what,
            "pre": emit_bytes(blob[:idx]),
            "save": blob[idx],
            "rmov1": rmov,
            "mid": emit_bytes(middle, indent="    "),
            "relb0": rel & 0xFF,
            "relb1": (rel >> 8) & 0xFF,
            "relb2": (rel >> 16) & 0xFF,
            "relb3": (rel >> 24) & 0xFF,
            "rest": blob[call + 5],
            "decl": dm.group(1).strip(),
        }
        # The override file is named <unit>_<va>.c so it wins over src\fixed and
        # decomp_out in compile_game.ps1's source order.
        out = os.path.join(ROOT, "src", "overrides", "%s_%08x.c" % (stem, va))
        open(out, "w", encoding="utf-8").write(text)
        emitted += 1

    if a.emit:
        print("\nwrote %d override(s)" % emitted)
    return 0


def describe(middle):
    """Roughly name the instructions between the register move and the call."""
    if not middle:
        return "nothing in between"
    out = []
    i = 0
    while i < len(middle):
        if middle[i] == 0xBE:
            val = struct.unpack_from("<I", middle, i + 1)[0]
            out.append("mov esi, 0x%08x" % val)
            i += 5
        else:
            out.append(bytes(middle[i:i + 2]).hex())
            i += 2
    return " / ".join(out)


def target_name(target):
    for name in sorted(os.listdir(os.path.join(ROOT, "decomp_out"))):
        m = re.match(r"^(\S+)_([0-9a-f]{8})\.c$", name)
        if m and int(m.group(2), 16) == target:
            return m.group(1)
    return "0x%08x" % target


if __name__ == "__main__":
    sys.exit(main())