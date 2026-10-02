r"""Use the linker as an oracle: which paired units are already in the real libs?

For every object present in both delink_out and build, emit a probe that
references the function's C name with the calling convention Ghidra recorded in
build\classes.tsv, then link once. A single link reports *every* unresolved
symbol (LNK2001/LNK2019), so one invocation classifies all units.

Anything that resolves is a symbol the original also took from a static
library - the real CRT/D3DX/DInput object, not code we need to recompile.
Recompiling the decompilation of those can never be byte-exact, because the
library was built with /hotpatch (the `mov edi,edi` prologue seen in 37% of
the target objects).

Usage: lib_probe.py <outdir> [--only <file>] [--classify]
Writes <outdir>\probe.c, <outdir>\names.txt and prints a summary.
With --classify (or no other options) it also reads <outdir>\link.log and
writes available_from_libs.txt / needs_recompile.txt / symmap.txt.
"""

import csv
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DELINK = os.path.join(ROOT, "delink_out")
BUILD = os.path.join(ROOT, "build")
CLASSES = os.path.join(BUILD, "classes.tsv")

STEM = re.compile(r"^(.*)_([0-9A-Fa-f]{8})$")

ALIAS_PREFIX = "FID_conflict_"


def conventions():
    """address -> (convention, nparams) from Ghidra."""
    conv = {}
    with open(CLASSES, encoding="utf-8") as fh:
        for row in csv.DictReader(fh, delimiter="\t"):
            try:
                n = int(row["nparams"])
            except (TypeError, ValueError):
                n = 0
            conv[row["entry"].lower()] = (row["convention"], n)
    return conv


def params(n):
    """`int` parameters approximating the original stack frame.

    The x86 stdcall/fastcall decoration encodes the *byte* count of the
    arguments, so declaring `f(void)` would emit `@f@0` and never match a real
    `f(int)`. Almost every pointer/int parameter is 4 bytes, so 4*nparams is a
    good approximation; anything else shows up as a miss rather than a false
    positive.
    """
    if n <= 0:
        return "void"
    return ", ".join("int a%d" % i for i in range(n))


def paired():
    """[(c_name, address)] for objects present on both sides."""
    out = []
    for fn in sorted(os.listdir(DELINK)):
        if not fn.endswith(".o"):
            continue
        m = STEM.match(fn[:-2])
        if not m:
            continue
        if not os.path.isfile(os.path.join(BUILD, fn[:-2] + ".obj")):
            continue
        out.append((m.group(1), m.group(2).lower()))
    return out


def c_name(unit_name):
    """The C identifier gen_prototypes would have used for this unit.

    Unit names come from the demangler, i.e. the *undecorated* symbol, so the C
    compiler will re-add one leading underscore. Exactly one must be stripped:
    the CRT's `__cexit` is unit name `__cexit` -> C name `_cexit` -> symbol
    `__cexit`. Stripping more would break `_iswcntrl` (unit) -> `iswcntrl`
    (C) -> `_iswcntrl` (symbol), which is what actually resolves.
    """
    if unit_name[:1] in ("_", "@"):
        return unit_name[1:]
    return unit_name


def emitted_symbol(unit, c, n):
    """The exact decorated symbol name this unit's probe reference produces.

    Needed to map LNK2019 messages back to units reliably. Comparing textually is
    not good enough: the linker prints `@FUN_004014b0@4` (fastcall, 4 argument
    bytes) while the unit name is `FUN_004014b0`, so a naive prefix/suffix strip
    silently misclassifies every stdcall/fastcall unit as available.

    MSVC x86 C name decoration:
        __cdecl    -> _name
        __stdcall  -> _name@N
        __fastcall -> @name@N     (at-sign, *not* an underscore)
    where N is the total byte size of the arguments.
    """
    name = c_name(unit)
    if c == "__thiscall":
        c = "__fastcall"
    argb = 4 * n
    if c == "__fastcall" and argb:
        return "@%s@%d" % (name, argb)
    if c == "__stdcall" and argb:
        return "_%s@%d" % (name, argb)
    return "_" + name


def unprobeable(unit):
    """True if this unit name cannot be referenced from C at all.

    `FID_conflict:__atodbl` is not a real symbol name: it is a *linker conflict
    label* the CRT build put on a duplicate definition, and `:` is not legal in
    a C identifier. Such a unit can therefore never resolve in the probe, and its
    presence among the "unresolved" list says nothing about whether the real
    library provides the underlying function. They are reported separately
    instead of being counted as code we must recompile.
    """
    return any(ch in unit for ch in ":<>[],")


def classify(outdir, units, conv):
    """Read a link log and write the disjoint classification lists.

    Writes available_from_libs.txt, needs_recompile.txt, unprobeable.txt and
    symmap.txt (unit -> emitted symbol). Unit names are not unique: a statically
    linked function can appear at several addresses, so the per-symbol lists are
    deduplicated while the counts below refer to units.
    """
    log = os.path.join(outdir, "link.log")
    if not os.path.isfile(log):
        print("(no %s yet - skipping classification)" % log)
        return [], []
    with open(log, encoding="latin-1") as fh:
        text = fh.read()
    missing = set(re.findall(r"unresolved external symbol\s+(\S+)", text))
    avail, need, unpro, symmap = [], [], [], []
    variants = {}
    alias = []
    for unit, addr in units:
        if unit.startswith(ALIAS_PREFIX):
            # The real symbol is `FID_conflict:__atodbl`. A conflict label of
            # that shape is emitted by the CRT's own archive to disambiguate a
            # duplicate internal definition, so the unit is library code by
            # construction and no probe can reference it (':' is not legal in a C
            # identifier, and a C reference would mangle to `___atodbl` anyway).
            if unit not in alias:
                alias.append(unit)
            symmap.append("%s\t%s\t<CRT conflict label>" % (unit, addr))
            continue
        c, n = conv.get(addr, ("__cdecl", 0))
        sym = emitted_symbol(unit, c, n)
        symmap.append("%s\t%s\t%s" % (unit, addr, sym))
        variants.setdefault(unit, []).append(sym)

    # A unit name can appear at several addresses, and those copies need not
    # agree on calling convention or argument count, so they mangle to different
    # symbols. It is available if *any* of its variants resolved - judging it by
    # a single address misclassifies e.g. _write_string, which the real library
    # provides under one decoration but not the other.
    need = sorted(u for u, syms in variants.items()
                  if all(s in missing for s in syms))
    avail = sorted(set(alias) | (set(variants) - set(need)))
    unpro = []



    for name, rows in (("symmap.txt", symmap),
                       ("available_from_libs.txt", avail),
                       ("needs_recompile.txt", need),
                       ("unprobeable.txt", unpro)):
        with open(os.path.join(outdir, name), "w", encoding="ascii") as fh:
            fh.write("\n".join(rows) + "\n")
    print("=== linker verdict ===")
    print("  paired units (delink_out + build)   : %d" % len(units))
    print("  distinct unit names                 : %d" % (len(avail) + len(need)))
    print("  available from the real static libs : %d" % len(avail))
    print("  genuinely game/third-party code      : %d" % len(need))
    return avail, need



def main(argv):
    outdir = argv[1]
    os.makedirs(outdir, exist_ok=True)
    conv = conventions()
    units = paired()
    print("paired units: %d" % len(units))

    # --only <file> restricts the probe to a subset of unit names. This is what
    # makes the link *succeed*, which is required to obtain a .map and an image
    # for verify_lib.py: the full probe intentionally fails to link, and a
    # failed link produces neither.
    if "--only" in argv:
        keep = set()
        with open(argv[argv.index("--only") + 1], encoding="utf-8") as fh:
            for line in fh:
                line = line.strip()
                if line:
                    keep.add(line)
        units = [u for u in units if u[0] in keep]
        print("restricted to: %d units" % len(units))

    # MSVC's C compiler accepts the calling-convention keywords natively, but
    # only between the return type and the function name
    # ("extern int __fastcall f(void);"). No CRT header is included on purpose:
    # <stdlib.h> would clash with probed names such as _exit (C2371
    # redefinition), and wctype.h redefines _iswdigit & friends as macros.
    lines = ["/* generated by lib_probe.py - linker-as-oracle */"]
    for i, (unit, addr) in enumerate(units):
        c, n = conv.get(addr, ("__cdecl", 0))
        if c == "__thiscall":
            c = "__fastcall"  # thiscall is illegal on a free function in C
        name = c_name(unit)
        args = params(n)
        lines.append("extern int %s %s(%s);" % (c, name, args))
        lines.append("int probe_%d(%s){ return %s(%s); }"
                     % (i, args, name, ", ".join("a%d" % k for k in range(n))))
    lines.append("int main(void){ return 0; }")

    # `FID_conflict:__atodbl` cannot be typed in C (the ':' is illegal in an
    # identifier), so the probe above references `_FID_conflict___atodbl`, which
    # no library can ever define. The function itself does exist, under the base
    # CRT name, so reference that too: if it resolves, the unit is available and
    # the conflict label is only a renaming of a real library symbol.
    extra = 0
    for unit, _addr in units:
        if unit.startswith(ALIAS_PREFIX):
            base = unit[len(ALIAS_PREFIX):]
            lines.append("extern int %s %s(void);" % ("__cdecl", base))
            lines.append("int alias_%d(void){ return %s(); }" % (extra, base))
            extra += 1

    with open(os.path.join(outdir, "probe.c"), "w", encoding="ascii") as fh:
        fh.write("\n".join(lines) + "\n")
    with open(os.path.join(outdir, "names.txt"), "w", encoding="ascii") as fh:
        fh.write("\n".join(n for n, _ in units) + "\n")
    if not argv[2:] or "--classify" in argv:
        classify(outdir, paired(), conventions())
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
