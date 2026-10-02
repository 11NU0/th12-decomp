"""Emit a one-section COFF object holding the original `.rsrc` bytes.

`.rsrc` is not code, so there is nothing to delink: the resource tree is copied
through verbatim and the original import/resource data directories are restored
by finalize.py. The section name must be padded to exactly 8 bytes - a 7-byte
`.rsrc\\0\\0` shifts every following field of the section header and the linker
rejects the object outright (LNK1107: invalid or corrupt file).

Usage: rsrc_obj.py [--out-dir DIR]
"""

import argparse
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import data_obj as DO

MACHINE_I386 = 0x14C
SECTION = ".rsrc"


def build_object(sec, path):
    """Write a one-section COFF object for `sec`, with no symbols."""
    hdrlen = 20 + 40                                  # COFF header + section header
    body = bytearray(sec.data)
    name = sec.name.encode("ascii")[:8].ljust(8, b"\0")   # exactly 8 bytes

    fh = bytearray()
    ptr_syms = hdrlen + len(body)
    # one section symbol plus its aux record
    fh += struct.pack("<HHIIIHH", MACHINE_I386, 1, 0, ptr_syms, 2, 0, 0)
    fh += name
    # VirtualSize and SizeOfRawData are both the initialised byte count; the
    # section has no zero fill and no symbols to reach into.
    fh += struct.pack("<IIII", len(body), sec.va, len(body), hdrlen)
    fh += struct.pack("<IIHHI", 0, 0, 0, 0, sec.chars)
    fh += body
    # auxiliary symbol, SectionNumber 1, with the standard aux record
    fh += b"\0" * 18
    fh += name + struct.pack("<IhHBB", sec.vsize, 1, 0, 3, 1)
    fh += struct.pack("<I", 0)                        # the string table size
    with open(path, "wb") as fh2:
        fh2.write(bytes(fh))
    return len(fh)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out-dir", default=DO.OUT)
    args = ap.parse_args()

    sections, _imagebase = DO.read_sections(DO.ORIG)
    sec = [s for s in sections if s.name == SECTION]
    if not sec:
        sys.stderr.write("rsrc_obj: %s has no %s section\n" % (DO.ORIG, SECTION))
        return 1
    sec = sec[0]

    os.makedirs(args.out_dir, exist_ok=True)
    path = os.path.join(args.out_dir, SECTION.strip(".") + ".obj")
    n = build_object(sec, path)
    print("wrote %s (%d bytes) va=0x%x vsize=0x%x raw=0x%x chars=0x%08x"
          % (path, n, sec.va, sec.vsize, sec.raw, sec.chars))
    return 0


if __name__ == "__main__":
    sys.exit(main())
