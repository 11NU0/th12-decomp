"""Inject the Ghidra labels the delinker referenced but never defined.

After data_obj.py supplies the missing data symbols, the only unresolved names
left are labels that point *into* .text: `LAB_...`, `switchdataD_...`,
`PTR_LAB_...` and a few `FUN_...`. The delinker emitted one object per function,
so these labels either fell between two functions or live in a different
function's object than the one referring to them. Nothing in the link defines
them.

They cannot be supplied by a separate object, because a .text object would
duplicate the code. The definition has to go into the object that already
contains those bytes, which is what this does: find the owning object by
address range, then append a symbol to its COFF symbol table.

Appending to a COFF symbol table means inserting records *before* the string
table, so every existing long-name offset inside the string table shifts by the
inserted size and has to be fixed up. That is the fiddly part.

Usage: inject_labels.py --link-log LOG [--obj-dir DIR] [--dry-run]
"""

import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
UNDEF = re.compile(r"unresolved external symbol\s+(\S+)")
ADDR = re.compile(r"([0-9A-Fa-f]{8})$")
IMAGESIZE = 0x400000          # image base of th12.exe
EXTERNAL = 2


def read_obj(path):
    with open(path, "rb") as fh:
        b = fh.read()
    nsym = struct.unpack_from("<I", b, 12)[0]
    ptr = struct.unpack_from("<I", b, 8)[0]
    strtab = ptr + nsym * 18
    nsec = struct.unpack_from("<H", b, 2)[0]
    secs = []
    for i in range(nsec):
        o = 20 + i * 40
        nm = b[o:o + 8].rstrip(b"\0").decode("latin-1")
        vsz, va, rawsz, rawptr = struct.unpack_from("<IIII", b, o + 8)
        secs.append((nm, va, rawsz, rawptr))
    return b, ptr, nsym, strtab, secs


def sym_name(b, ptr, strtab, i):
    o = ptr + i * 18
    nm = b[o:o + 8]
    if nm[:4] == b"\0\0\0\0":
        off = struct.unpack_from("<I", nm, 4)[0]
        end = b.find(b"\0", strtab + off)
        return b[strtab + off:end].decode("latin-1")
    return nm.rstrip(b"\0").decode("latin-1")


def iter_symbols(b, ptr, nsym, strtab):
    """Yield (index, name, value, secnum, class, aux). Aux records are skipped -
    reading them as symbols yields garbage section numbers."""
    i = 0
    while i < nsym:
        o = ptr + i * 18
        val, snum, _typ, sc, aux = struct.unpack_from("<IhHBB", b, o + 8)
        yield i, sym_name(b, ptr, strtab, i), val, snum, sc, aux
        i += 1 + aux


def object_base(path, b, ptr, nsym, strtab, secs):
    """Infer the image address this object's text starts at.

    The delinker names each object after the function it holds, but that
    function's symbol value is its *offset* inside .text, not zero. So the
    section base is filename address minus symbol value.
    """
    stem = os.path.basename(path)[:-2]
    m = re.match(r"^(.*)_([0-9A-Fa-f]{8})$", stem)
    if not m:
        return None, None
    want = m.group(1)
    va = int(m.group(2), 16)
    for _i, nm, val, snum, _sc, _aux in iter_symbols(b, ptr, nsym, strtab):
        if nm != want or not snum:
            continue
        if snum > nsec(secs):
            continue
        return va - val, snum
    return None, None


def nsec(secs):
    return len(secs)


def collect_owners(objdir):
    """[(path, base_va, section_number, size)] for every delink object."""
    out = []
    for fn in sorted(os.listdir(objdir)):
        if not fn.endswith(".o"):
            continue
        path = os.path.join(objdir, fn)
        try:
            b, ptr, nsym, strtab, secs = read_obj(path)
        except Exception:
            continue
        base, secnum = object_base(path, b, ptr, nsym, strtab, secs)
        if base is None or secnum is None:
            continue
        for nm, sva, rawsz, rawptr in secs:
            if nm == ".text":
                out.append((path, base, secnum, rawsz))
                break
    return out


def inject(path, secnum, base, entries):
    """Append (name, value) symbols to an object's symbol table, in place."""
    b, ptr, nsym, strtab, secs = read_obj(path)
    if not entries:
        return 0

    strsz = struct.unpack_from("<I", b, strtab)[0]
    tail = bytearray(b[strtab:strtab + strsz])

    # new names are appended, so existing offsets stay valid until the symbol
    # records below the table move
    insert = bytearray()
    for name, val in entries:
        off = len(tail)
        tail.extend(name.encode("latin-1") + b"\0")
        insert.extend(b"\0\0\0\0" + struct.pack("<I", off))
        insert.extend(struct.pack("<IhHBB", val, secnum, 0, EXTERNAL, 0))
    # New names go at the END of the string table, so every offset already
    # stored in a symbol record still points at the same bytes. Adding the
    # inserted size to them (as an earlier version did) moved every existing
    # long name backwards into the middle of its neighbour, and the linker
    # reported mangled names like `itchD_0047a38c::switchdataD_0047a4a4`.
    recs = bytearray(b[ptr:strtab])
    i = 0
    n = 0
    while i < len(recs):
        aux = recs[i + 17]
        i += 18 * (1 + aux)
        n += 1 + aux
    nsym = n

    # Everything up to the START of the symbol table, then the rewritten
    # records, then the new ones, then the string table. Cutting at `strtab`
    # instead of `ptr` would append the symbol table a second time, leaving
    # the linker to read the string-table size out of the middle of a symbol
    # record (it reported "cannot seek to 0x6C696706").
    out = bytearray(b[:ptr])
    out += recs
    out += insert
    tail[0:4] = struct.pack("<I", len(tail))
    out += tail
    out += b[strtab + strsz:]
    # `n` only ever counted the pre-existing records; without adding the
    # injected ones the header would claim fewer symbols than the file holds.
    struct.pack_into("<I", out, 12, n + len(entries))   # NumberOfSymbols
    with open(path, "wb") as fh:
        fh.write(bytes(out))
    return len(entries)


def main(argv):
    logpath = argv[argv.index("--link-log") + 1] if "--link-log" in argv else None
    objdir = os.path.join(ROOT, "delink_out")
    if "--obj-dir" in argv:
        objdir = argv[argv.index("--obj-dir") + 1]
    dry = "--dry-run" in argv
    if not logpath:
        print("need --link-log")
        return 1

    with open(logpath, encoding="latin-1") as fh:
        wanted = set()
        for line in fh:
            # A linker log spells them `unresolved external symbol NAME`; the
            # stable artifacts/full_unresolved.txt holds bare names one per
            # line. Accept both, so the list stays usable when it is the only
            # record of what was ever missing.
            for m in UNDEF.finditer(line):
                wanted.add(m.group(1))
            s = line.strip()
            if s and " " not in s and not s.startswith(":"):
                wanted.add(s)

    # data_obj imports this module, so the import has to be deferred until
    # runtime, by which point data_obj is fully initialised.
    import data_obj as DO

    sections, imagebase = DO.read_sections(DO.ORIG)

    # only labels that resolve to an address inside .text
    targets = []
    for nm in wanted:
        if ".DLL::" in nm:
            continue
        a = DO.addr_of(nm, imagebase)
        if a is None:
            continue
        targets.append((nm, a))

    owners = collect_owners(objdir)

    # A label that some object already defines must never be re-added: the
    # linker would then report "already defined in <the same file>". Collect
    # every name the inputs already define and drop those from the work list.
    have = set()
    for path, _base, _secnum, _size in owners:
        try:
            b, ptr, nsym, strtab, _secs = read_obj(path)
        except Exception:
            continue
        for _i, nm, _v, _s, _c, _a in iter_symbols(b, ptr, nsym, strtab):
            if nm:
                have.add(nm)
    for sub in ("dataobj", "gapobj"):
        d = os.path.join(ROOT, sub)
        if not os.path.isdir(d):
            continue
        for fn in sorted(os.listdir(d)):
            if not fn.endswith(".obj"):
                continue
            try:
                b, ptr, nsym, strtab, _secs = read_obj(os.path.join(d, fn))
            except Exception:
                continue
            for _i, nm, _v, _s, _c, _a in iter_symbols(b, ptr, nsym, strtab):
                if nm:
                    have.add(nm)

    print("=== label injection ===")
    print("  unresolved names          : %d" % len(wanted))
    print("  already defined           : %d"
          % sum(1 for nm, _v in targets if nm in have))
    print("  delink objects scanned    : %d" % len(owners))
    targets = [(nm, a) for nm, a in targets if nm not in have]
    print("  still to define           : %d" % len(targets))

    todo = {}
    misses = 0
    for nm, va in targets:
        hit = None
        for path, base, secnum, size in owners:
            if base <= va < base + size:
                hit = (path, secnum, va - base)
                break
        if hit is None:
            misses += 1
            continue
        todo.setdefault(hit[0], (hit[1], hit[2], []))[2].append((nm, hit[2]))

    print("  matched an owning object  : %d" % (len(targets) - misses))
    print("  no owner found            : %d" % misses)
    print("  objects needing injection : %d" % len(todo))
    if dry:
        print("  (dry run, nothing written)")
        return 0

    total = 0
    for path, (secnum, _b, items) in sorted(todo.items()):
        total += inject(path, secnum, _b, sorted(items, key=lambda t: t[1]))
    print("  symbols injected          : %d" % total)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))

