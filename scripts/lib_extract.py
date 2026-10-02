"""Extract one member from a COFF import/static library (.lib archive).

`lib /EXTRACT` is unreliable here (error 1131), so the archive is parsed
directly. An archive member header is 60 bytes:

    char     name[16]     date[12]   uid[6]    gid[6]
    char     mode[8]      size[10]   fmag[2]  (always "//")

Members are 2-byte aligned. Long names use the "//" long-name convention where
the name field starts with "//" followed by a decimal offset into the first
member's data.

Usage: lib_extract.py <lib> <member-substring> <out.obj>
"""

import os
import re
import struct
import sys

HDR = 60


def members(path):
    """Yield (name, data) for every archive member."""
    with open(path, "rb") as fh:
        blob = fh.read()
    if blob[:8] != b"!<arch>\n":
        raise SystemExit("%s: not an archive" % path)
    pos = 8
    first = None
    while pos + HDR <= len(blob):
        hdr = blob[pos:pos + HDR]
        if hdr[58:60] != b"//":
            break
        raw = hdr[0:16].decode("latin-1").rstrip()
        try:
            size = int(hdr[48:58].decode("latin-1").strip())
        except ValueError:
            break
        data = blob[pos + HDR:pos + HDR + size]
        if raw.startswith("//"):
            off = int(raw[2:].strip())
            if first is None:
                first = data
            end = first.index(b"/\x00", off) if b"/" in first[off:] else len(first)
            raw = first[off:end].decode("latin-1").rstrip("/").strip()
        yield raw, data
        pos += HDR + size
        if pos % 2:
            pos += 1


def find(path, needle):
    for name, data in members(path):
        if needle in name:
            yield name, data


def main(argv):
    lib, needle, out = argv[1], argv[2], argv[3]
    hits = list(find(lib, needle))
    if not hits:
        print("no member matching %r in %s" % (needle, os.path.basename(lib)))
        return 1
    for name, data in hits:
        print("member: %-60s %d bytes" % (name, len(data)))
    name, data = hits[0]
    with open(out, "wb") as fh:
        fh.write(data)
    print("wrote %s (%d bytes) from %s" % (out, len(data), name.rsplit("/", 1)[-1]))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
