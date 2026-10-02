"""Re-decorate Ghidra's import references so the real import libraries resolve.

Ghidra names an imported function `KERNEL32.DLL::RtlUnwind`. The COFF symbol
inside the delinked object carries that literal name, which no import library
exports - `kernel32.lib` exports `_RtlUnwind`. So the full link cannot resolve
imports until the symbol is renamed to the MSVC-decorated form.

All 22 remaining imports are __cdecl, so the decoration is just a leading
underscore. Renaming appends to the string table, so existing long-name offsets
stay valid and no fixup of the rest of the table is needed.

Usage: fix_imports.py --link-log LOG [--obj-dir DIR] [--dry-run]
"""

import os
import struct
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import data_obj as DO
import inject_labels as IL

MACHINE_I386 = 0x014C
EXTERNAL = 2


def decorate(gidra_name):
    """`KERNEL32.DLL::RtlUnwind` -> `_RtlUnwind` (cdecl)."""
    if "::" not in gidra_name:
        return None
    fn = gidra_name.rsplit("::", 1)[1]
    if not fn:
        return None
    return "_" + fn


def read_file(path):
    with open(path, "rb") as fh:
        return bytearray(fh.read())


def parse(b):
    nsec = struct.unpack_from("<H", b, 2)[0]
    ptr = struct.unpack_from("<I", b, 8)[0]
    nsym = struct.unpack_from("<I", b, 12)[0]
    strtab = ptr + nsym * 18
    strsz = struct.unpack_from("<I", b, strtab)[0]
    return nsec, ptr, nsym, strtab, strsz


def rename_in_object(path, mapping):
    """Rewrite every symbol named in `mapping` (old -> new). Returns count."""
    b = read_file(path)
    nsec, ptr, nsym, strtab, strsz = parse(b)
    tail = bytearray(b[strtab:strtab + strsz])
    changed = 0
    for i, nm, _val, _sn, _sc, aux in IL.iter_symbols(b, ptr, nsym, strtab):
        new = mapping.get(nm)
        if not new:
            continue
        o = ptr + i * 18
        raw = bytes(b[o:o + 8])
        if raw[:4] == b"\0\0\0\0":
            off = len(tail)
            tail.extend(new.encode("latin-1") + b"\0")
            struct.pack_into("<I", b, o + 4, off)
        else:
            enc = new.encode("latin-1")
            if len(enc) > 8:
                off = len(tail)
                tail.extend(enc + b"\0")
                struct.pack_into("<I", b, o + 4, off)
                struct.pack_into("<I", b, o, 0)
            else:
                b[o:o + 8] = enc.ljust(8, b"\0")
        changed += 1
    if not changed:
        return 0
    tail[0:4] = struct.pack("<I", len(tail))
    out = bytearray(b[:strtab])
    out += tail
    out += b[strtab + strsz:]
    with open(path, "wb") as fh:
        fh.write(bytes(out))
    return changed


def lib_exports(libdir, dll):
    """Every name a library exports, read with dumpbin.

    The decoration has to come from the library, not from a guess: these
    imports are stdcall (`_D3DXMatrixMultiply@12`, `_RtlUnwind@16`) while
    cdecl ones get a bare underscore, and assuming either one produces symbols
    the linker still cannot resolve.
    """
    lib = os.path.join(libdir, dll.lower() + ".lib")
    if not os.path.isfile(lib):
        return []
    try:
        out = subprocess.run(["dumpbin", "/exports", lib],
                             capture_output=True, text=True, errors="replace")
    except OSError:
        return []
    names = []
    for line in (out.stdout or "").splitlines():
        s = line.strip()
        if not s:
            continue
        parts = s.split()
        # dumpbin prints two shapes depending on the library:
        #   "  206    _D3DXMatrixMultiply@12"   (ordinal + name)
        #   "                _RtlUnwind@16"    (name only)
        if len(parts) == 1 and parts[0][:1] in "_?@":
            names.append(parts[0])
        elif len(parts) >= 2 and parts[0].isdigit() and parts[1][:1] in "_?@":
            names.append(parts[1])
    return names


def undecorate(name):
    """`_D3DXMatrixMultiply@12` -> `D3DXMatrixMultiply`."""
    n = name.lstrip("_@")
    if "@" in n:
        n = n.rsplit("@", 1)[0]
    return n


def resolve(libdir, dll, fn, cache):
    key = dll.lower()
    if key not in cache:
        cache[key] = lib_exports(libdir, dll)
    for cand in cache[key]:
        if undecorate(cand) == fn:
            return cand
    return None


def main(argv):
    logpath = argv[argv.index("--link-log") + 1] if "--link-log" in argv else None
    objdir = os.path.join(DO.ROOT, "delink_out")
    if "--obj-dir" in argv:
        objdir = argv[argv.index("--obj-dir") + 1]
    dry = "--dry-run" in argv
    if not logpath:
        print("need --link-log")
        return 1

    wanted = DO.read_wanted(logpath)

    libdir = os.path.join(DO.ROOT, "tools", "th12lib")
    if "--lib-dir" in argv:
        libdir = argv[argv.index("--lib-dir") + 1]

    mapping = {}
    cache = {}
    for nm in sorted(wanted):
        if ".DLL::" not in nm:
            continue
        dll, fn = nm.split(".DLL::", 1)
        exact = resolve(libdir, dll, fn, cache)
        if exact:
            mapping[nm] = exact
            # An earlier pass may already have rewritten the object to the
            # cdecl form, so that spelling has to be a key too.
            if decorate(nm) != exact:
                mapping[decorate(nm)] = exact
        else:
            print("    %-46s -> NO EXPORT FOUND in %s.lib" % (nm, dll.lower()))
    print("=== import re-decoration ===")
    print("  imports in the list     : %d"
          % len([n for n in wanted if ".DLL::" in n]))
    print("  resolved against a lib  : %d" % len(mapping))
    for old, new in sorted(mapping.items()):
        print("    %-46s -> %s" % (old, new))
    if dry:
        print("  (dry run)")
        return 0

    total = 0
    touched = 0
    for fn in sorted(os.listdir(objdir)):
        if not fn.endswith(".o"):
            continue
        n = rename_in_object(os.path.join(objdir, fn), mapping)
        if n:
            total += n
            touched += 1
    print("  objects touched      : %d" % touched)
    print("  symbol records fixed : %d" % total)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))

