"""Merge every `.text` contribution into one section, in original address order.

Linking the delink objects as they are produces a working PE but a wrong one:
each object carries its own `.text` section, so the linker concatenates them in
command-line order rather than by address. The result is a 1.09 MB image
against the original's 0.86 MB, with a different entry point - and, worse, every
absolute pointer in `.rdata`/`.data` still holds the *original* address of a
function that has moved somewhere else entirely.

The fix is to stop treating `.text` as many sections. Every object contributes
bytes at a known VA, so all of them - plus the gaps the delinker never emitted,
plus the labels gap_obj.py synthesised - can be laid out back to back in
address order and emitted as a single section. Three properties then fall out:

* the section starts at RVA 0x1000 on its own, because that is where the first
  section lands after a 0x400 header, so `.rdata` and `.data` follow at the
  original offsets;
* a relocation's `VirtualAddress` has to become `RVA + offset`: each source object
  has `.text` at VirtualAddress 0, so its records hold bare section offsets, and
  the linker reads the field as an RVA. Left unadjusted they point into the
  header page and the linker writes the fixups straight over the DOS/PE headers -
  the link exits 0 and produces a file that is not a PE. The table must also be
  sorted by address;
* a symbol's value is just `VA - section_va`, so the section ends up
  byte-identical to the original `.text`.

The bytes come straight out of the original PE rather than being spliced from
the objects, so the 1 161 gaps the delinker never extracted - 25% of the
section - are filled in correctly instead of left as holes. That in turn makes
gap_obj.py and inject_labels.py unnecessary: their labels are defined here, and
their objects must *not* be linked or the code would be duplicated.

Two symbol namespaces have to be kept apart. External symbols are unique by
name across the whole image, so one entry per name suffices - but when the
delinker emitted the same name at two addresses (the COMDAT copies) the one
whose value matches the address in the name is the copy the original actually
contained. Static symbols are a different matter: `.LC0` and friends repeat in
every object, so they are keyed by (object, record) and merged under names that
cannot collide.

Usage: text_blob.py [--out FILE]
"""

import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import data_obj as DO

EXTERNAL = 2
STATIC = 3
ABSOLUTE_REL = 0x0000
IMAGE_SYM_ABSOLUTE = -1          # SectionNumber is a signed short


def read_coff(path):
    """(header fields, section dicts, symbol records) for one object."""
    b = open(path, "rb").read()
    mach, nsec, _ts, symptr, nsym, optsz, _ch = struct.unpack_from("<HHIIIHH", b, 0)
    strtab = symptr + nsym * 18
    strsz = struct.unpack_from("<I", b, strtab)[0] if strtab + 4 <= len(b) else 0
    # Offsets stored in symbol records are measured from the start of the
    # string table, i.e. from the size field itself, so the slice has to keep
    # those first 4 bytes. Dropping them shifts every long name 4 bytes late
    # and yields fragments like ",%.3d,%.3d,%.3d_0049f4a0".
    strs = b[strtab:strtab + strsz]

    secs = []
    for i in range(nsec):
        o = 20 + i * 40
        nm = b[o:o + 8].rstrip(b"\0").decode("latin-1")
        # NumberOfRelocations/NumberOfLinenumbers are USHORTs, so the header is
        # 8+24+4+4 = 40 bytes; reading them as DWORDs shifts every later field.
        vsize, vaddr, rawsz, rawptr, relptr, lnptr, nrel, nln, ch = \
            struct.unpack_from("<IIIIIIHHI", b, o + 8)
        secs.append(dict(name=nm, vsize=vsize, vaddr=vaddr, rawsz=rawsz,
                         rawptr=rawptr, relptr=relptr, nrel=nrel, chars=ch))

    # Relocation SymbolTableIndex counts every 18-byte *record*, aux records
    # included. Skipping the aux entries when building this list shifted every
    # index after the first one, so a third of the relocations pointed at
    # symbols that do not exist.
    syms = []
    i = symptr
    limit = symptr + nsym * 18
    while i + 18 <= limit:
        raw8 = b[i:i + 8]
        if raw8[:4] == b"\0\0\0\0":
            off = struct.unpack_from("<I", raw8, 4)[0]
            end = strs.find(b"\0", off) if 4 <= off < len(strs) else -1
            nm = strs[off:end].decode("latin-1") if end > 0 else None
        else:
            nm = raw8.rstrip(b"\0").decode("latin-1")
        val, snum, _sc, cls, naux = struct.unpack_from("<IhHBB", b, i + 8)
        syms.append((nm, val, snum, cls, naux))
        for _ in range(naux):
            syms.append((None, 0, 0, 0, 0))     # keep record indices aligned
        i += 18 * (1 + naux)
    return dict(b=b, secs=secs, syms=syms, symptr=symptr)


def text_of(path):
    """(base_va, [(rva, symindex, type)], object) for an object's .text.

    The base address comes from the file name, not from anything inside the
    object: that is the same convention inject_labels.py uses to map a label to
    its owner, and the delinker left no other record of it.
    """
    o = read_coff(path)
    m = re.search(r"([0-9A-Fa-f]{8})", os.path.basename(path))
    if not m:
        return None
    base = int(m.group(1), 16)
    for i, s in enumerate(o["secs"]):
        if s["name"] != ".text" or s["rawsz"] == 0:
            continue
        rels = []
        if s["relptr"] and s["nrel"]:
            for k in range(s["nrel"]):
                va, sym, typ = struct.unpack_from("<IIH", o["b"], s["relptr"] + k * 10)
                if va >= s["rawsz"]:
                    continue
                rels.append((va, sym, typ))
        return base, rels, o, i + 1
    return None


def longname(name, names, cache):
    """8-byte name field, spilling to the string table when too long."""
    if len(name) <= 8:
        return name.encode("latin-1").ljust(8, b"\0")
    if name in cache:
        return cache[name]
    off = len(names) + 4          # string-table offsets include the size field
    names.extend(name.encode("latin-1") + b"\0")
    cache[name] = b"\0\0\0\0" + struct.pack("<I", off)
    return cache[name]


def main(argv):
    out = os.path.join(DO.ROOT, "artifacts", "text_blob.obj")
    if "--out" in argv:
        out = argv[argv.index("--out") + 1]
    # See the block that builds the relocation table below for what this drops.
    no_reloc = "--no-relocations" in argv

    sections, imagebase = DO.read_sections(DO.ORIG)
    text = next(s for s in sections if s.name == ".text")
    blob = text.data
    text_va = imagebase + text.va        # Section.va is an RVA

    objdir = os.path.join(DO.ROOT, "delink_out")
    contribs = []
    for fn in sorted(os.listdir(objdir)):
        if not fn.endswith(".o"):
            continue
        got = text_of(os.path.join(objdir, fn))
        if got:
            contribs.append((got[0], fn, got))
    contribs.sort(key=lambda c: c[0])

    ext = {}          # name -> (va, secnum, object)
    stat = {}         # "object#record" -> (va, secnum, name)
    for base, fn, (_b, rels, o, secnum) in contribs:
        wanted = set()
        for _va, sidx, _typ in rels:
            if 0 < sidx < len(o["syms"]):
                wanted.add(sidx)
        for i, (nm, val, snum, cls, _naux) in enumerate(o["syms"]):
            # snum == 0 is an undefined symbol; merging one in produces
            # LNK1314 "undefined static or label symbol".
            if not nm or not snum:
                continue
            cand = base + val
            if cls == EXTERNAL:
                addr_in_name = DO.addr_of(nm, imagebase)
                if nm not in ext:
                    ext[nm] = (cand, secnum, fn)
                elif addr_in_name is not None and cand == addr_in_name:
                    # the COMDAT copies share a name but not an address; keep
                    # the one the name actually points at
                    ext[nm] = (cand, secnum, fn)
            elif cls == STATIC and i in wanted:
                stat["%s#%d" % (fn, i)] = (cand, secnum, nm)

    # Anything the linker still wanted that falls inside .text but was never
    # defined: the 1 161 gap labels, the injected entry point, mid-function
    # jump-table entries.
    wanted = DO.read_wanted(os.path.join(DO.ROOT, "artifacts", "full_unresolved.txt"))
    added = 0
    for nm in wanted:
        if nm in ext:
            continue
        a = DO.addr_of(nm, imagebase)
        if a is not None and text_va <= a < text_va + text.vsize:
            ext[nm] = (a, 1, "wanted")
            added += 1

    # References that point outside every section - Ghidra's
    # IMAGE_DOS_HEADER_00400000, for instance - become absolute symbols, so the
    # linker resolves them to the address itself. Only genuinely sectionless
    # addresses qualify: a .rdata or .data label is already defined by
    # data_obj.py, and defining it again here is an immediate LNK2005.
    absolute = []
    for nm in sorted(wanted):
        if nm in ext:
            continue
        a = DO.addr_of(nm, imagebase)
        if a is not None and DO.section_for(sections, a - imagebase) is None:
            absolute.append((nm, a))

    print("=== text blob ===")
    print("  .text                 : va 0x%x  vsize 0x%x  raw %d" % (
        text.va, text.vsize, text.raw))
    print("  objects with .text    : %d" % len(contribs))
    print("  external symbols      : %d" % len(ext))
    print("  static symbols        : %d" % len(stat))
    print("  in-.text labels added : %d" % added)
    print("  absolute symbols      : %d" % len(absolute))

    names = bytearray()
    cache = {}

    # The merged table is sorted by address so it reads like the image, with
    # the externals and the statics interleaved by value.
    # A relocation has to name a symbol that exists in this object, even when
    # the symbol is defined elsewhere - the import thunks are the big group.
    # Adding them as undefined externals (value 0, section 0) is what lets the
    # linker resolve them from the import libraries.
    undef = set()
    for base, fn, (_b, rels, o, secnum) in contribs:
        for _va, sidx, _typ in rels:
            if sidx == 0 or sidx >= len(o["syms"]):
                continue
            nm, _val, _sn, cls, _na = o["syms"][sidx]
            if nm and cls == EXTERNAL and nm not in ext and nm not in undef:
                undef.add(nm)
    print("  undefined externals    : %d" % len(undef))

    rows = []
    for nm, (va, secnum, _src) in ext.items():
        rows.append((va, nm, secnum, EXTERNAL, nm, nm, va - text_va))
    for key, (va, secnum, nm) in stat.items():
        # A private name per object record: two objects both having `.LC0` must
        # not collapse into one entry, or relocations would target each other.
        rows.append((va, key, secnum, STATIC, key + "$" + nm, key, va - text_va))
    for nm in sorted(undef):
        # With --no-relocations nothing can ever reference these, and leaving
        # them in makes the linker demand a library for every one of them. They
        # are the only symbols in the object that no section defines.
        if no_reloc:
            continue
        rows.append((0, nm, 0, EXTERNAL, nm, nm, 0))
    rows.sort(key=lambda r: (r[0], r[1]))
    # Two maps, because the key a relocation looks up is not always the name
    # the merged symbol is stored under.
    extindex = {r[5]: i + 3 for i, r in enumerate(rows) if r[3] == EXTERNAL}
    statindex = {r[5]: i + 3 for i, r in enumerate(rows) if r[3] == STATIC}

    # Every delink object carries .text at VirtualAddress 0, so its relocation
    # VirtualAddress values are offsets inside its own .text. The merged section
    # sits at RVA text.va, and the linker reads a relocation's VirtualAddress as
    # an RVA - offsets left below text.va land in the header page, where they get
    # applied to the DOS/PE headers. The link still returns 0, and the output is a
    # 1 MB file with a scrambled first page instead of a valid image.
    # (text.va is the RVA; text_va is the same value plus the image base, which is
    # what a relocation must not carry.)
    # The records also have to be emitted in ascending address order: the linker
    # walks the table sequentially, and an unsorted table desynchronises it.
    kept = []
    dropped = 0
    for base, fn, (_b, rels, o, secnum) in contribs:
        for va, sidx, typ in rels:
            if typ == ABSOLUTE_REL:
                continue
            if no_reloc:
                # Every relocation is dropped, so the symbols they named would
                # never be resolved and the text is already final: the blob
                # *is* the original .text, byte for byte. Re-applying a fixup on
                # top of that only risks corrupting bytes that are already
                # right, and it does: the Ghidra types 0x6 and 0x14 are not
                # interpreted the way link.exe interprets them in a single
                # section, and they rewrite 6 579 bytes of .text[1..0x4170].
                # What the linker would have written there is already there.
                dropped += 1
                continue
            if sidx == 0:
                kept.append((va + text.va, 0, typ))
                continue
            if sidx >= len(o["syms"]):
                dropped += 1
                continue
            nm, _val, _sn, cls, _na = o["syms"][sidx]
            if cls == EXTERNAL:
                idx = extindex.get(nm)
            else:
                idx = statindex.get("%s#%d" % (fn, sidx))
            if idx is None:
                dropped += 1
                continue
            kept.append((va + text.va, idx, typ))
    kept.sort()
    rels_out = bytearray()
    nrel = 0
    for rva, idx, typ in kept:
        rels_out += struct.pack("<IIH", rva, idx, typ)
        nrel += 1
    print("  relocations kept      : %d" % nrel)
    if dropped:
        print("  relocations dropped   : %d%s" % (
            dropped, " (--no-relocations)" if no_reloc else " (no merged symbol)"))

    recs = bytearray()
    recs += b"\0" * 18                                     # null symbol
    # The section symbol carries the section's size as its value and its own
    # 1-based index as SectionNumber. Leaving that 0 makes it look undefined,
    # and the linker rejects the whole table with LNK1314.
    recs += b".text\0\0\0" + struct.pack("<IhHBB", text.vsize, 1, 0, STATIC, 1)
    recs += struct.pack("<BBHII", 0, 18, 1, nrel, 0).ljust(18, b"\0")
    for _va, _key, secnum, cls, mname, _lk, value in rows:
        recs += longname(mname, names, cache)
        recs += struct.pack("<IhHBB", value, secnum, 0, cls, 0)
    for nm, va in absolute:
        recs += longname(nm, names, cache)
        # IMAGE_SYM_ABSOLUTE: the value IS the address, no section needed.
        # SectionNumber is a signed short in the struct format, so 0xFFFF has
        # to be written as -1.
        recs += struct.pack("<IhHBB", va, IMAGE_SYM_ABSOLUTE, 0, EXTERNAL, 0)

    names = struct.pack("<I", len(names) + 4) + bytes(names)

    # NumberOfSymbols counts every 18-byte record, and the section's aux record
    # is one of them: null + section + aux + rows + absolute. Omitting the aux
    # made the linker stop on the first symbol and report a corrupt table.
    nsyms = len(rows) + len(absolute) + 3
    relptr = 20 + 40
    symptr = relptr + len(rels_out)
    # PointerToSymbolTable has to be the real offset; hardcoding 20 pointed the
    # linker at the section headers and it read symbols from there.
    hdr = struct.pack("<HHIIIHH", 0x14C, 1, 0, symptr, nsyms, 0, 0)
    # The section data lives after the string table; a COFF object carries its
    # own bytes, so PointerToRawData has to point at them. Leaving it at 0 made
    # the linker read the file header as code ("cannot seek to 0xDDE02").
    tail = symptr + len(recs) + len(names)
    data_off = tail + (-tail % 4)
    secthdr = struct.pack("<8sIIIIIIHHI", b".text\0\0\0", text.vsize,
                          text.va, len(blob), data_off,
                          relptr, 0, nrel, 0, 0x60000020)

    out_bytes = (hdr + secthdr + bytes(rels_out) + bytes(recs) + bytes(names)
                 + b"\0" * (data_off - tail) + bytes(blob))
    os.makedirs(os.path.dirname(out), exist_ok=True)
    with open(out, "wb") as fh:
        fh.write(out_bytes)
    print("  symbols in file       : %d" % nsyms)
    print("  wrote                 : %s (%d bytes)" % (out, len(out_bytes)))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
