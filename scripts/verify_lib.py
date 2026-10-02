"""Validate the "link the real library" strategy, function by function.

For each function that lib_probe.py found resolvable from the static libs:

  1. generate one probe TU referencing all of them, link it once, and parse the
     linker's .map for each symbol's RVA;
  2. read that many bytes out of the linked image;
  3. read the corresponding bytes from the matching delink_out object, masking
     the 4 bytes covered by each COFF relocation entry;
  4. compare.

Masking the relocation targets is what makes the comparison meaningful: the
only legitimate difference between the real library code and the original
binary is the displacement of relocated calls/jumps, because the two images lay
functions out at different addresses. Anything else is a real mismatch.

A function that is "exact modulo relocations" is reproduced perfectly by simply
linking the library, and recompiling its decompilation is wasted effort.

Usage: verify_lib.py <link_probe_dir> [--limit N] [--only name ...]
"""

import json
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import rename_symbols as R  # noqa: E402
import lib_probe as L  # noqa: E402

ROOT = R.__dict__.get("ROOT") or os.path.dirname(
    os.path.dirname(os.path.abspath(__file__)))
DELINK = os.path.join(ROOT, "delink_out")
BUILD = os.path.join(ROOT, "build")


def read_pe(path, rva, n):
    with open(path, "rb") as fh:
        b = fh.read()
    pe = struct.unpack_from("<I", b, 0x3C)[0]
    nsec = struct.unpack_from("<H", b, pe + 6)[0]
    optsz = struct.unpack_from("<H", b, pe + 20)[0]
    sec = pe + 24 + optsz
    for i in range(nsec):
        o = sec + i * 40
        vsz, va, rawsz, raw = struct.unpack_from("<IIII", b, o + 8)
        if va <= rva < va + max(vsz, rawsz):
            off = raw + (rva - va)
            return b[off:off + n]
    return None


def parse_map(path):
    """symbol -> RVA, from a linker's .map file.

    The map's first address column is *segment-relative* (`0001:000010f2` is an
    offset inside segment 1, not an RVA), so reading it as an RVA silently lands
    in the wrong place - in practice inside linker padding, which is 0xCC. The
    third column, "Rva+Base", is the real address, so the load address from the
    map header is subtracted from it.
    """
    imagebase = None
    out = {}
    pat = re.compile(
        r"^\s*([0-9A-Fa-f]{4}):([0-9A-Fa-f]{8})\s+(\S+)\s+([0-9A-Fa-f]{8})")
    with open(path, encoding="latin-1") as fh:
        for line in fh:
            if imagebase is None:
                m = re.search(r"Preferred load address is\s+([0-9A-Fa-f]+)", line)
                if m:
                    imagebase = int(m.group(1), 16)
                continue
            m = pat.match(line)
            if m:
                out.setdefault(m.group(3), int(m.group(4), 16) - imagebase)
    return out



def object_code(path, want):
    """(code bytes, {reloc offsets}) for a function defined in a COFF object."""
    c = R.Coff(path)
    for i in c.defined_funcs(typed=False):
        nm, v, sect, typ, st, aux = c.symbol(i)
        if nm != want or sect <= 0:
            continue
        off = R.FILE_HEADER + (sect - 1) * R.SECTION_HEADER
        raw = struct.unpack_from("<I", c.blob, off + 20)[0]
        size = struct.unpack_from("<I", c.blob, off + 16)[0]
        nrel = struct.unpack_from("<H", c.blob, off + 32)[0]
        reloff = struct.unpack_from("<I", c.blob, off + 24)[0]
        data = bytearray(c.blob[raw:raw + size])
        rels = set()
        for r in range(nrel):
            r_off = struct.unpack_from("<I", c.blob, reloff + r * 10)[0]
            rels.add(r_off)          # 4-byte field at this offset
        return bytes(data[v:]), rels
    return None, None


def mask_imm(code, rels):
    """Zero the bytes that legitimately differ between two linked images.

    Two things move when the same function is placed at a different address:

    - COFF relocation targets;
    - the displacement of every call/jmp, which delink_out has already resolved
      to an absolute value and therefore carries no relocation entry to tell us
      about.

    Masking only the relocations therefore reports a false difference on every
    single function that makes a call, which is nearly all of them. This is a
    linear sweep, so a 0xE8/0xE9 byte inside an immediate can mask a few extra
    bytes; that can only ever hide a difference, never invent one, and the
    authoritative number still comes from objdiff's own matcher.
    """
    b = bytearray(code)
    for r in rels:
        if r + 4 <= len(b):
            b[r:r + 4] = b"\0\0\0\0"
    i = 0
    n = len(b)
    while i < n:
        if b[i] == 0xE8 or b[i] == 0xE9:          # call rel32 / jmp rel32
            if i + 5 <= n:
                b[i + 1:i + 5] = b"\0\0\0\0"
            i += 5
        elif b[i] == 0x0F and i + 1 < n and 0x80 <= b[i + 1] <= 0x8F:
            if i + 6 <= n:                        # jcc near rel32
                b[i + 2:i + 6] = b"\0\0\0\0"
            i += 6
        else:
            i += 1
    return bytes(b)


def map_base(sym):
    """Strip one leading decoration char and any @N argument-size suffix.

    `lstrip("_@")` is wrong here: it eats *every* leading underscore, so the CRT
    symbol `__AdjustPointer` reduces to `AdjustPointer` and never matches the
    unit's C name.
    """
    if sym[:1] in ("_", "@"):
        sym = sym[1:]
    return sym.split("@")[0]


def main(argv):
    d = argv[1]
    limit = 12
    only = []
    if "--limit" in argv:
        limit = int(argv[argv.index("--limit") + 1])
    if "--only" in argv:
        only = argv[argv.index("--only") + 1:]

    mappath = os.path.join(d, "m.map")
    exe = os.path.join(d, "a.exe")
    syms = parse_map(mappath)
    units = L.paired()
    conv = L.conventions()

    exact = inexact = skipped = 0
    rows = []
    seen_units = set()
    for unit, addr in units:
        if only and unit not in only:
            continue
        c, n = conv.get(addr, ("__cdecl", 0))
        cname = L.c_name(unit)
        # symbol the linker recorded for this probe reference
        deco = {"__cdecl": "_", "__stdcall": "_", "__fastcall": "@"}.get(c, "_")
        argb = 4 * n
        cand = "%s%s%s" % (deco, cname, ("@%d" % argb) if argb else "")
        if c in ("__stdcall", "__fastcall") and argb == 0:
            cand = deco + cname
        rva = syms.get(cand)
        if rva is None:
            for k, v in syms.items():
                if map_base(k) == cname:
                    rva = v
                    break
        if rva is None:
            skipped += 1
            continue
        tgt = None
        for fn in os.listdir(DELINK):
            if fn.startswith(unit + "_") and fn.endswith(".o"):
                tgt = os.path.join(DELINK, fn)
                break
        if not tgt:
            skipped += 1
            continue
        code, rels = object_code(tgt, unit)
        if code is None:
            skipped += 1
            continue
        mine = read_pe(exe, rva, len(code))
        if mine is None:
            skipped += 1
            continue
        masked = mask_imm(code, rels)
        mm = mask_imm(mine, rels)
        ok = mm == masked
        exact += ok
        inexact += (not ok)
        if unit not in seen_units:
            seen_units.add(unit)
            rows.append((ok, unit, len(code), rva))
        if len(rows) >= limit and not only:
            break

    print("=== verify_lib: real-library code vs original, relocations masked ===")
    for ok, unit, n, rva in rows:
        print("  %-9s %-40s %3d bytes  rva=%06x"
              % ("EXACT" if ok else "DIFFERS", unit[:40], n, rva))
    print("--- summary ---")
    print("  exact modulo relocations : %d" % exact)
    print("  differs                  : %d" % inexact)
    print("  skipped (unmapped)       : %d" % skipped)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
