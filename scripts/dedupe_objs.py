"""Find delink objects that only repeat code another object already defines.

The delinker emitted one object per COMDAT group, and a COMDAT that the
original linker folded is still present once per translation unit that
referenced it - `_memcpy_0047a330.o` and `_memmove_0047a6a0.o` both carry
their own copy of `__VEC_memcpy`, and the `FID_conflict_*` objects carry many
more. Linking them all is a guaranteed LNK2005.

Dropping a whole object is only safe when every symbol it defines is already
defined somewhere else, so that is exactly what this checks before it writes
anything. The copy with the lowest base address is kept, matching the address
the linker would have chosen for the original fold.

Usage: dedupe_objs.py [--obj-dir DIR] [--apply] [--out FILE]
"""

import collections
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXTERNAL = 2


def read_obj(path):
    b = open(path, "rb").read()
    mach, nsec, _ts, symptr, nsym, optsz, _ch = struct.unpack_from("<HHIIIHH", b, 0)
    strtab = symptr + nsym * 18
    strsz = struct.unpack_from("<I", b, strtab)[0] if strtab + 4 <= len(b) else 0
    strs = b[strtab + 4:strtab + strsz]
    secs = []
    for i in range(nsec):
        o = 20 + i * 40
        nm = b[o:o + 8].rstrip(b"\0").decode("latin-1")
        sz, _ptr, _rel, _ln, _nr, _nl, ch = struct.unpack_from("<IIIIIIH", b, o + 8)
        secs.append((nm, sz, ch))
    return b, ptr_or(symptr), nsym, strs, secs


def ptr_or(symptr):
    return symptr


def name_of(raw8, strs):
    if raw8[:4] == b"\0\0\0\0":
        off = struct.unpack_from("<I", raw8, 4)[0]
        if off < 4 or off >= len(strs):
            return None
        end = strs.find(b"\0", off)
        return strs[off:end].decode("latin-1") if end > 0 else None
    return raw8.rstrip(b"\0").decode("latin-1")


def defined(path):
    b, ptr, nsym, strs, secs = read_obj(path)
    out = []
    i = ptr
    for _ in range(nsym):
        if i + 18 > ptr + nsym * 18:
            break
        nm = name_of(b[i:i + 8], strs)
        _val, snum, _sc, cls, _naux = struct.unpack_from("<IhHBB", b, i + 8)
        aux = b[i + 17]
        if nm and snum and snum > 0 and cls == EXTERNAL:
            out.append(nm)
        i += 18 * (1 + aux)
    return out, secs


def main(argv):
    objdir = os.path.join(ROOT, "delink_out")
    if "--obj-dir" in argv:
        objdir = argv[argv.index("--obj-dir") + 1]
    apply = "--apply" in argv
    outfile = os.path.join(ROOT, "artifacts", "dedupe_exclude.txt")
    if "--out" in argv:
        outfile = argv[argv.index("--out") + 1]

    objs = {}
    for fn in sorted(os.listdir(objdir)):
        if not fn.endswith(".o"):
            continue
        path = os.path.join(objdir, fn)
        try:
            names, secs = defined(path)
        except Exception as e:
            print("skip %s (%s)" % (fn, e))
            continue
        size = next((s for n, s, _c in secs if n == ".text"), 0)
        objs[fn] = (names, size)

    owner = collections.defaultdict(list)
    for fn, (names, _s) in objs.items():
        for nm in names:
            owner[nm].append(fn)

    dup = {k: v for k, v in owner.items() if len(v) > 1}
    print("=== duplicate symbol analysis ===")
    print("  objects                : %d" % len(objs))
    print("  defined symbols        : %d" % len(owner))
    print("  duplicated symbols     : %d" % len(dup))
    print("  duplicate references   : %d" % (sum(len(v) for v in dup.values()) - len(dup)))

    # Pick one owner per duplicated symbol - the first by name, so the choice
    # is deterministic - and keep it. Without an explicit keeper, a two-way
    # duplicate looks redundant from both sides and both copies get dropped,
    # which turns LNK2005 into LNK2001.
    keeper = {}
    for nm, fns in dup.items():
        keeper[nm] = sorted(fns)[0]

    # An object is only droppable when every symbol it defines is a duplicate
    # AND it is not that symbol's keeper. A symbol that nothing else defines
    # has no entry in `dup`, and dropping that object would turn the duplicate
    # into a fresh unresolved external.
    drop = []
    for fn, (names, _s) in sorted(objs.items()):
        if names and all(nm in dup and keeper[nm] != fn for nm in names):
            drop.append(fn)

    kept_syms = len(owner) - len(drop)
    print("  fully redundant objects: %d" % len(drop))
    print("  symbols still defined  : %d" % kept_syms)
    multi = sum(1 for fn in drop if len(objs[fn][0]) > 1)
    print("    of which multi-symbol: %d" % multi)

    for fn in drop[:25]:
        print("    drop %-46s %d syms" % (fn, len(objs[fn][0])))
    if len(drop) > 25:
        print("    ... and %d more" % (len(drop) - 25))

    if apply:
        os.makedirs(os.path.dirname(outfile), exist_ok=True)
        with open(outfile, "w") as fh:
            fh.write("\n".join(drop) + "\n")
        print("  wrote %s" % outfile)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
