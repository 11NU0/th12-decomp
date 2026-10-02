"""Emit COFF objects carrying the original binary's data sections.

The delinker reconstructed `.text` only, so its objects reference globals by
name (`DAT_004ad138`, `PTR_LeaveCriticalSection_0049808c`) without anything
defining them. Linking every original object therefore fails with thousands of
unresolved externals - all of them data, none of them imports. The import
libraries are fine.

This writes one object per data section of the original PE:

  * the section's raw bytes are copied verbatim, so any absolute pointer stored
    inside it is already correct provided the section lands at its original
    address;
  * a symbol is defined for every referenced address that falls inside the
    section, at the matching offset.

The addresses are taken from the symbol *names*, which Ghidra derives from the
address (`DAT_004ad138` is 0x004ad138), so no relocation parsing is needed.

No relocations are emitted on purpose. They would be correct only if the
rebuilt `.text` were exactly the original size; keeping the raw bytes means the
data is right by construction and any layout drift shows up as a diff in the
final binary rather than as silent corruption here.

Usage: data_obj.py --link-log LOG [--out-dir DIR] [--report]
"""

import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ORIG = os.path.join(ROOT, "resources", "th12.exe")
OUT = os.path.join(ROOT, "dataobj")

# Ghidra's default data symbol names end in the 8-hex-digit address, e.g.
# `DAT_004ad138` or `PTR_LeaveCriticalSection_0049808c`. Import references are
# spelled `DLL.DLL::Function` and carry no address, so they are skipped here -
# rename_symbols.py re-decorates those instead.
ADDR = re.compile(r"([0-9A-Fa-f]{8})$")
# Ghidra also names the entry point `_0006E81D`, where the digits are the RVA
# without a leading zero - the same address, one digit short.
# Exactly 7 or 8 digits: Ghidra pads the entry RVA to 7. A looser pattern
# would swallow ordinary names, because 'a', 'b', 'd', 'e' are hex digits and
# `_add` would parse as the address 0xadd.
THUNK = re.compile(r"^_([0-9A-Fa-f]{7,8})$")


def addr_of(name, imagebase=None):
    """The address a Ghidra symbol name encodes, or None.

    Most names carry a full VA (`DAT_004ad138`). The entry point is named
    `_0006E81D`, which is an RVA with the leading zero dropped, so it only
    becomes a VA once the image base is added.
    """
    m = THUNK.match(name)
    if m:
        rva = int(m.group(1), 16)
        return rva + imagebase if imagebase else rva
    m = ADDR.search(name)
    if m:
        return int(m.group(1), 16)
    return None


UNDEF = re.compile(r"unresolved external symbol\s+(\S+)")
# `D3DX9_40.DLL::D3DXVec3Add` - the DLL part can contain underscores.
IMPORT = re.compile(r"\.DLL::")

MACHINE_I386 = 0x014C


class Section(object):
    def __init__(self, name, vsize, va, raw, chars, data):
        self.name = name
        self.vsize = vsize
        self.va = va
        self.raw = raw
        self.chars = chars
        self.data = data


def read_sections(path):
    with open(path, "rb") as fh:
        b = fh.read()
    pe = struct.unpack_from("<I", b, 0x3C)[0]
    nsec = struct.unpack_from("<H", b, pe + 6)[0]
    szopt = struct.unpack_from("<H", b, pe + 20)[0]
    imagebase = struct.unpack_from("<I", b, pe + 24 + 28)[0]
    base = pe + 24 + szopt
    out = []
    for i in range(nsec):
        o = base + i * 40
        nm = b[o:o + 8].rstrip(b"\0").decode("latin-1")
        vsize, va, rawsz, raw = struct.unpack_from("<IIII", b, o + 8)
        chars = struct.unpack_from("<I", b, o + 36)[0]
        if rawsz == 0:
            continue
        out.append(Section(nm, vsize, va, rawsz, chars,
                           b[raw:raw + rawsz]))
    return out, imagebase


def read_defined_symbols(objdir):
    """Every external symbol already defined by an object, so we do not redefine.

    The delink objects carry the data symbols for the addresses they were
    extracted from; only references with no defining object are genuinely
    missing. Emitting those again would just trade LNK2001 for LNK2005.
    """
    defined = set()
    for fn in sorted(os.listdir(objdir)):
        if not fn.endswith(".o"):
            continue
        with open(os.path.join(objdir, fn), "rb") as fh:
            b = fh.read()
        if len(b) < 20:
            continue
        nsym = struct.unpack_from("<I", b, 12)[0]
        ptr = struct.unpack_from("<I", b, 8)[0]
        if not nsym or not ptr or ptr + nsym * 18 > len(b):
            continue
        strtab = ptr + nsym * 18
        strsz = struct.unpack_from("<I", b, strtab)[0] if strtab + 4 <= len(b) else 4
        for i in range(nsym):
            o = ptr + i * 18
            nm = b[o:o + 8]
            val, snum, typ, sc, aux = struct.unpack_from("<IhHBB", b, o + 8)
            if aux or sc != 2 or snum == 0:      # EXTERNAL, actually defined
                continue
            if nm[:4] == b"\0\0\0\0":
                off = struct.unpack_from("<I", nm, 0)[0]
                end = b.find(b"\0", strtab + off)
                defined.add(b[strtab + off:end].decode("latin-1"))
            else:
                defined.add(nm.rstrip(b"\0").decode("latin-1"))
    return defined


def section_for(sections, rva):
    for s in sections:
        if s.va <= rva < s.va + max(s.vsize, s.raw):
            return s
    return None


def build_object(sec, syms, path, imagebase):
    """Write a one-section COFF object defining `syms` [(name, value)]."""
    strtab = bytearray(b"\0\0\0\0")          # size patched at the end
    names = {}

    def enc(name):
        if len(name) <= 8:
            return name.encode("ascii").ljust(8, b"\0")
        # COFF long name: the first 4 bytes of Name are zero and the last 4
        # hold the offset into the string table. Putting the offset in the
        # first 4 bytes makes the reader treat the bytes as a short name, and
        # every symbol silently becomes garbage.
        off = len(strtab)
        strtab.extend(name.encode("ascii") + b"\0")
        return b"\0\0\0\0" + struct.pack("<I", off)

    # section 1, image-relative values
    body = bytearray(sec.data)
    entries = bytearray()
    for name, value in syms:
        # `value` is an absolute VA; COFF wants an offset from the section start,
        # i.e. rva - sec.va, not the VA itself.
        entries.extend(enc(name) + struct.pack(
            "<IhHBB", value - imagebase - sec.va, 1, 0, 2, 0))  # EXTERNAL, no aux
    # pad the body to cover every symbol's offset
    need = max((v - imagebase - sec.va for _n, v in syms), default=0)
    if need > len(body):
        body.extend(b"\0" * (need - len(body)))

    fh = bytearray()
    nsec = 1
    hdrlen = 20 + 40 * nsec
    # section data sits immediately after the headers; the symbol table follows
    # the data. PointerToRawData must be the real file offset of the bytes, not
    # the symbol table offset, or the linker seeks to garbage (LNK1106).
    ptr_syms = hdrlen + len(body)
    fh += struct.pack("<HHIIIHH", MACHINE_I386, nsec, 0, ptr_syms,
                      len(entries) // 18, 0, 0)
    # IMAGE_SECTION_HEADER
    fh += sec.name.encode("ascii")[:8].ljust(8, b"\0")
    fh += struct.pack("<IIII", len(body), sec.va, len(body), hdrlen)
    fh += struct.pack("<IIHHI", 0, 0, 0, 0, sec.chars)
    fh += body
    fh += entries
    # The string table's first 4 bytes *are* its total size - patch them in
    # place. Appending a separate size word corrupts the table (LNK4019).
    strtab[0:4] = struct.pack("<I", len(strtab))
    fh += strtab
    with open(path, "wb") as fh2:
        fh2.write(bytes(fh))
    return len(entries) // 18


def read_wanted(path):
    """Symbol names to satisfy, from a linker log or a plain one-per-line list.

    A plain list is the stable input: the linker log changes as each round of
    fixes lands, so regenerating from it would drop the symbols an earlier
    round already handled.
    """
    names = set()
    with open(path, encoding="latin-1") as fh:
        blob = fh.read()
    if UNDEF.search(blob):
        for line in blob.splitlines():
            for m in UNDEF.finditer(line):
                names.add(m.group(1))
    else:
        for line in blob.splitlines():
            s = line.strip()
            if s and not s.startswith("#"):
                names.add(s)
    return names


def main(argv):
    logpath = None
    outdir = OUT
    if "--link-log" in argv:
        logpath = argv[argv.index("--link-log") + 1]
    if "--out-dir" in argv:
        outdir = argv[argv.index("--out-dir") + 1]
    if logpath is None or not os.path.isfile(logpath):
        print("need --link-log with the linker output to read symbols from")
        return 1

    names = read_wanted(logpath)

    imports = sorted(nm for nm in names if IMPORT.search(nm))

    sections, imagebase = read_sections(ORIG)
    os.makedirs(outdir, exist_ok=True)
    # drop objects from earlier runs - a stale section object would be linked in
    for stale in os.listdir(outdir):
        if stale.endswith(".obj"):
            os.remove(os.path.join(outdir, stale))

    objdir = os.path.join(ROOT, "delink_out")
    if "--defined" in argv:
        objdir = argv[argv.index("--defined") + 1]
    already = read_defined_symbols(objdir)
    print("symbols already defined by %s : %d"
          % (os.path.basename(objdir), len(already)))

    # bucket every referenced data symbol by the section its address falls in
    buckets = {}
    unmatched = []
    in_text = []
    already_ok = []
    for nm in sorted(names):
        if IMPORT.search(nm):
            continue
        a = addr_of(nm, imagebase)
        if a is None:
            unmatched.append(nm)
            continue
        rva = a - imagebase
        sec = section_for(sections, rva)
        if sec is None:
            unmatched.append(nm)
            continue
        if sec.name == ".text":
            # code is already defined by the delink objects; a data copy here
            # would only produce LNK2005 duplicate definitions
            in_text.append(nm)
            continue
        if nm in already:
            already_ok.append(nm)
            continue
        buckets.setdefault(sec.name, []).append((nm, imagebase + rva))

    total = 0
    for secname, syms in sorted(buckets.items()):
        sec = next(s for s in sections if s.name == secname)
        out = os.path.join(outdir, sec.name.lstrip(".").replace("$", "_") + ".obj")
        n = build_object(sec, syms, out, imagebase)
        total += n
        print("  %-8s %6d bytes -> %s (%d symbols)"
              % (sec.name, len(sec.data), os.path.basename(out), n))

    print("=== data objects ===")
    print("  distinct unresolved names   : %d" % len(names))
    print("  imports (DLL::name)         : %d" % len(imports))
    print("  already defined elsewhere   : %d" % len(already_ok))
    print("  data symbols emitted        : %d" % total)
    print("  resolved into .text (skipped): %d" % len(in_text))
    print("  data names with no VA       : %d" % len(unmatched))
    for nm in unmatched[:12]:
        print("    %s" % nm)
    for nm in in_text[:6]:
        print("    .text %s" % nm)
    with open(os.path.join(outdir, "imports.txt"), "w") as fh:
        fh.write("\n".join(imports) + "\n")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))

