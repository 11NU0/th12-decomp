"""Recover symbol names clobbered by a buggy string-table edit.

An earlier version of inject_labels.py walked the string table adding `shift`
to the first four bytes of every entry. The string table holds null-terminated
names, not offsets - only the symbol records hold offsets - so that pass
overwrote the first four characters of every long name in the four objects it
touched. The damage is bounded and fully recoverable: only the first four bytes
of each name were destroyed, and the tail is intact.

So a damaged name is repaired by looking for the known name with the same tail.
"known" means it appears in a list we trust:

  * artifacts/full_unresolved.txt  - what the first full link could not resolve
  * the data and gap objects       - generated from the original binary
  * object filename stems          - one per delinked function

A tail match must be unique, otherwise the name is left alone and reported.

Usage: repair_names.py [--obj-dir DIR] [--apply]
"""

import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import data_obj as DO
import inject_labels as IL

EXTERNAL = 2


def safe(s):
    return "".join(c if 32 <= ord(c) < 127 else "." for c in s)


def trusted_names(exclude=()):
    known = set()
    lst = os.path.join(DO.ROOT, "artifacts", "full_unresolved.txt")
    if os.path.isfile(lst):
        known |= DO.read_wanted(lst)
    for sub in ("dataobj", "gapobj"):
        d = os.path.join(DO.ROOT, sub)
        if not os.path.isdir(d):
            continue
        for fn in sorted(os.listdir(d)):
            if not fn.endswith(".obj"):
                continue
            try:
                b, ptr, nsym, strtab, secs = IL.read_obj(os.path.join(d, fn))
            except Exception:
                continue
            for _i, nm, _v, _s, _c, _a in IL.iter_symbols(b, ptr, nsym, strtab):
                if nm:
                    known.add(nm)
    d = os.path.join(DO.ROOT, "delink_out")
    for fn in sorted(os.listdir(d)):
        if not fn.endswith(".o") or fn[:-2] in exclude:
            continue
        known.add(fn[:-2])
        # Names held by the untouched objects are the best oracle available:
        # a damaged object still holds its own broken copies, so harvesting it
        # would teach the repair the very names it is meant to fix.
        try:
            b, ptr, nsym, strtab, secs = IL.read_obj(os.path.join(d, fn))
        except Exception:
            continue
        for _i, nm, _v, _s, _c, _a in IL.iter_symbols(b, ptr, nsym, strtab):
            if nm and len(nm) > 4 and all(32 <= ord(c) < 127 for c in nm):
                known.add(nm)
    # GAP_* names are this project's own invention, not original symbols; if
    # they stayed in the set, a healthy LAB_00410268 would look damaged because
    # it shares a tail with the GAP_00410268 we synthesised.
    known = {k for k in known if not k.startswith("GAP_")}
    return known


def by_tail(known):
    """tail (everything after the first 4 bytes) -> set of known names."""
    idx = {}
    for k in known:
        if len(k) > 4:
            idx.setdefault(k[4:], set()).add(k)
    return idx


def rename(path, changes):
    """changes: [(index, old, new)] - append the new name and repoint."""
    b = bytearray(open(path, "rb").read())
    ptr = struct.unpack_from("<I", b, 8)[0]
    nsym = struct.unpack_from("<I", b, 12)[0]
    strtab = ptr + nsym * 18
    strsz = struct.unpack_from("<I", b, strtab)[0]
    tail = bytearray(b[strtab:strtab + strsz])
    for idx, (_old, new) in changes:
        off = len(tail)
        tail.extend(new.encode("latin-1") + b"\0")
        o = ptr + idx * 18
        struct.pack_into("<I", b, o, 0)
        struct.pack_into("<I", b, o + 4, off)
    tail[0:4] = struct.pack("<I", len(tail))
    out = bytearray(b[:strtab]) + tail + b[strtab + strsz:]
    with open(path, "wb") as fh:
        fh.write(bytes(out))
    return len(changes)


def main(argv):
    objdir = os.path.join(DO.ROOT, "delink_out")
    if "--obj-dir" in argv:
        objdir = argv[argv.index("--obj-dir") + 1]
    apply = "--apply" in argv
    exclude = set()
    if "--exclude" in argv:
        exclude = {s for s in argv[argv.index("--exclude") + 1].split(",") if s}

    known = trusted_names(exclude)
    idx = by_tail(known)
    print("=== name recovery ===")
    print("  trusted names          : %d" % len(known))
    print("  distinct tails indexed : %d" % len(idx))

    plan = {}
    ambiguous = []
    scanned = 0
    for fn in sorted(os.listdir(objdir)):
        if not fn.endswith(".o"):
            continue
        p = os.path.join(objdir, fn)
        try:
            b, ptr, nsym, strtab, secs = IL.read_obj(p)
        except Exception:
            continue
        scanned += 1
        for i, nm, _v, _s, _c, aux in IL.iter_symbols(b, ptr, nsym, strtab):
            if not nm or aux or len(nm) <= 4:
                continue
            if nm in known:
                continue                      # healthy
            cands = {c for c in idx.get(nm[4:], ()) if c != nm}
            if len(cands) == 1:
                seen = plan.setdefault(p, {})
                seen[i] = (nm, cands.pop())
            elif len(cands) > 1:
                ambiguous.append((fn, nm, sorted(cands)))

    plan = {p: sorted(v.items()) for p, v in plan.items()}

    print("  objects scanned        : %d" % scanned)
    print("  repairable names       : %d in %d objects"
          % (sum(len(v) for v in plan.values()), len(plan)))
    for p, items in sorted(plan.items()):
        for _i, (old, new) in items:
            print("    %-34s %-32s -> %s"
                  % (os.path.basename(p), safe(old), safe(new)))
    if ambiguous:
        print("  ambiguous (left alone) : %d" % len(ambiguous))
        for fn, nm, c in ambiguous[:8]:
            print("    %-32s %s" % (safe(nm), [safe(x) for x in c]))
    if not apply:
        print("  (dry run - pass --apply to write)")
        return 0
    total = sum(rename(p, items) for p, items in plan.items())
    print("  names repaired         : %d" % total)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
