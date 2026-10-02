"""Assemble the final image from the linked output and the original PE.

link.exe cannot be made to place every section at the address the original had.
It always parks a `.rsrc` input after the other sections, and it derives
`VirtualSize` from `SizeOfRawData` when nothing says otherwise, so a link that
reproduces every byte of every section still comes out with a different section
table - and a different file layout - from the original.

Rather than fight the linker over attributes, renaming and ordering, the
headers are taken from the original and only the section *contents* come from
the link.  The linked image is the authority for the bytes; the original is the
authority for the layout.  With delink objects and a reloc-free text blob the
two agree, and the result is byte-identical to the original.  Once recompiled C
starts replacing delink bytes in `.text`, the differences that remain are
exactly the functions that were rebuilt.

Usage: finalize.py --linked FILE [--out FILE] [--report]
"""

import argparse
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import data_obj as DO

SIZE_OF_HEADERS = 0x400


def read_table(buf):
    """[(name, vsize, vaddr, rawsize, rawptr, chars), ...] in header order."""
    lfanew = struct.unpack_from("<I", buf, 0x3C)[0]
    nsec = struct.unpack_from("<H", buf, lfanew + 6)[0]
    optsz = struct.unpack_from("<H", buf, lfanew + 20)[0]
    st = lfanew + 24 + optsz
    out = []
    for i in range(nsec):
        b = st + i * 40
        name = buf[b:b + 8].rstrip(b"\0").decode("latin-1")
        vsize, vaddr, rawsize, rawptr = struct.unpack_from("<IIII", buf, b + 8)
        chars = struct.unpack_from("<I", buf, b + 36)[0]
        out.append((name, vsize, vaddr, rawsize, rawptr, chars))
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--linked", required=True)
    ap.add_argument("--out")
    ap.add_argument("--report", action="store_true")
    args = ap.parse_args()

    orig = open(DO.ORIG, "rb").read()
    linked = open(args.linked, "rb").read()

    ot = read_table(orig)
    lt = {s[0]: s for s in read_table(linked)}

    missing = [s[0] for s in ot if s[0] not in lt]
    if missing:
        sys.stderr.write("finalize: linked image is missing section(s): %s\n"
                         % ", ".join(missing))
        return 1

    # The original header block already describes the file we are about to
    # write: same section table, same raw pointers, same DataDirectories, same
    # DOS stub.  Only the section bytes come from the link.
    out = bytearray(orig)
    identical = 0
    for name, vsize, vaddr, rawsize, rawptr, _chars in ot:
        _ln, _lv, _la, lrawsize, lrawptr, _lc = lt[name]
        n = min(rawsize, lrawsize)
        chunk = linked[lrawptr:lrawptr + n]
        out[rawptr:rawptr + n] = chunk
        same = orig[rawptr:rawptr + n] == bytes(out[rawptr:rawptr + n])
        identical += 1 if same else 0
        if args.report or not same:
            ndiff = sum(1 for i in range(n) if orig[rawptr + i] != out[rawptr + i])
            print("  %-8s va 0x%06x  raw 0x%06x  %d bytes  %s"
                  % (name, vaddr, rawsize, n,
                     "identical" if same else "%d differ" % ndiff))

    dst = args.out or os.path.join(DO.ROOT, "artifacts", "th12_final.exe")
    outdir = os.path.dirname(dst)
    if outdir and not os.path.isdir(outdir):
        os.makedirs(outdir)
    open(dst, "wb").write(bytes(out))

    print("finalize: %d/%d sections byte-identical to the original"
          % (identical, len(ot)))
    print("finalize: wrote %s (%d bytes, original is %d)"
          % (dst, len(out), len(orig)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
