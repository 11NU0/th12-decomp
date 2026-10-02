"""Emit COFF objects for the .text ranges the delinker never produced.

delink_out covers only ~75% of the original .text; the rest fell into 1161 gaps.
Those bytes are not "missing code to be recompiled" - they are code that was
never extracted, which is why ~250 Ghidra labels pointing into them stay
unresolved and the full link cannot complete.

The gaps are contiguous byte ranges in the original binary, so an object can be
synthesised for each one straight from the file, defining whichever labels live
inside it. That is enough to make the link complete; placing the result at the
original addresses is a later, separate problem (see FINDINGS.md).

Usage: gap_obj.py --link-log LOG [--out-dir DIR] [--min-size N]
"""

import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import data_obj as DO
import inject_labels as IL

MACHINE_I386 = 0x014C
CODE_CHARS = 0x60000020          # CNT_CODE | MEM_EXECUTE | MEM_READ
STATIC = 3
EXTERNAL = 2


def build_text_object(name, chars, blob, symbols, path):
    """One-section COFF object: `symbols` is [(name, offset), ...]."""
    strtab = bytearray(b"\0\0\0\0")

    def enc(n):
        if len(n) <= 8:
            return n.encode("latin-1").ljust(8, b"\0")
        off = len(strtab)
        strtab.extend(n.encode("latin-1") + b"\0")
        return b"\0\0\0\0" + struct.pack("<I", off)

    ents = bytearray()
    # section symbol first, with its aux record - many sections in one link
    # need it to stay well-formed
    ents += b"\0" * 8 + struct.pack("<IhHBB", 0, 1, 0, STATIC, 1)
    aux = struct.pack("<IHHIHBB", len(blob), 0, 0, 0, 0, 0, 0)
    ents += aux + b"\0" * 2
    for sym, off in sorted(symbols, key=lambda t: t[1]):
        ents += enc(sym) + struct.pack("<IhHBB", off, 1, 0, EXTERNAL, 0)

    nsec = 1
    hdrlen = 20 + 40 * nsec
    ptr_syms = hdrlen + len(blob)
    out = bytearray()
    out += struct.pack("<HHIIIHH", MACHINE_I386, nsec, 0, ptr_syms,
                       len(ents) // 18, 0, 0)
    out += b".text".ljust(8, b"\0")
    out += struct.pack("<IIII", len(blob), 0, len(blob), hdrlen)
    out += struct.pack("<IIHHI", 0, 0, 0, 0, chars)
    out += blob
    out += ents
    strtab[0:4] = struct.pack("<I", len(strtab))
    out += strtab
    with open(path, "wb") as fh:
        fh.write(bytes(out))
    return len(symbols)


def gaps_for(sections, imagebase, owners):
    text = [s for s in sections if s.name == ".text"][0]
    lo, hi = imagebase + text.va, imagebase + text.va + text.vsize
    rows = [r for r in owners if lo <= r[1] < hi and r[3] > 0]
    merged = []
    for a, b in sorted((max(r[1], lo), min(r[1] + r[3], hi)) for r in rows):
        if merged and a <= merged[-1][1]:
            merged[-1][1] = max(merged[-1][1], b)
        else:
            merged.append([a, b])
    gaps = []
    prev = lo
    for a, b in merged:
        if a > prev:
            gaps.append((prev, a))
        prev = max(prev, b)
    if prev < hi:
        gaps.append((prev, hi))
    return text, lo, gaps


def main(argv):
    logpath = argv[argv.index("--link-log") + 1] if "--link-log" in argv else None
    outdir = os.path.join(DO.ROOT, "gapobj")
    if "--out-dir" in argv:
        outdir = argv[argv.index("--out-dir") + 1]
    minsize = 1
    if "--min-size" in argv:
        minsize = int(argv[argv.index("--min-size") + 1])
    if not logpath:
        print("need --link-log")
        return 1

    wanted = DO.read_wanted(logpath)

    sections, imagebase = DO.read_sections(DO.ORIG)
    label_vas = []
    for nm in wanted:
        a = DO.addr_of(nm, imagebase)
        if a is not None:
            label_vas.append((nm, a))

    owners = IL.collect_owners(os.path.join(DO.ROOT, "delink_out"))
    text, lo, gaps = gaps_for(sections, imagebase, owners)

    os.makedirs(outdir, exist_ok=True)
    for stale in os.listdir(outdir):
        if stale.endswith(".obj"):
            os.remove(os.path.join(outdir, stale))

    # merge gaps separated by less than 16 bytes; a 4-byte hole between two
    # objects costs more in a new section than it saves
    merged = []
    for a, b in gaps:
        if merged and a - merged[-1][1] < 16:
            merged[-1][1] = b
        else:
            merged.append([a, b])

    total_bytes = total_syms = 0
    for i, (a, b) in enumerate(merged):
        if b - a < minsize:
            continue
        rva = a - imagebase
        off = rva - text.va
        blob = text.data[off: off + (b - a)]
        syms = [("GAP_%08X" % a, 0)]
        for nm, va in label_vas:
            if a <= va < b:
                syms.append((nm, va - a))
        path = os.path.join(outdir, "gap_%05X.obj" % rva)
        n = build_text_object("gap_%05X" % rva, CODE_CHARS, blob, syms, path)
        total_bytes += len(blob)
        total_syms += n

    print("=== gap objects ===")
    print("  .text range            : 0x%08x - 0x%08x" % (lo, lo + text.vsize))
    print("  raw gaps               : %d" % len(gaps))
    print("  after 16-byte merging  : %d" % len(merged))
    print("  bytes recovered        : %d" % total_bytes)
    print("  labels defined         : %d" % (total_syms - len(merged)))

    # A label can point at the image base itself (Ghidra names the PE headers
    # IMAGE_DOS_HEADER_00400000), which belongs to no section and so lands in
    # no gap. Give it a section of its own; the address will not be the
    # original, but the reference resolves.
    # Only a label that lands outside every section needs a home here.
    # .rdata/.data labels are already defined by data_obj.py, and defining them
    # a second time is exactly the LNK2005 we are trying to avoid.
    orphan = [(nm, a - imagebase) for nm, a in label_vas
              if DO.section_for(sections, a - imagebase) is None
              and not (lo <= a < lo + text.vsize)]
    if orphan:
        for nm, off in orphan:
            print("    orphan %-40s off=0x%x" % (nm, off))
        path = os.path.join(outdir, "stray.obj")
        n = build_text_object("stray", 0x40000040, b"\0" * 16, orphan, path)
        print("  orphan labels (no section): %d -> %s"
              % (n, os.path.basename(path)))
    print("  objects written to     : %s" % outdir)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))

