"""Splice recompiled C functions into the finished image.

`build_fallback.ps1` produces a byte-exact th12.exe whose `.text` is still the
original's, copied straight out of the original image. That is the right starting
point and the right reference, but it means no function yet comes from source.

This tool replaces one function's bytes with the bytes cl actually produced for
its C, applying the COFF relocations itself. Splicing is the only way to do this
that keeps the image at its original size: the linker cannot be asked to place
one function at RVA 0x9149E, and a differently sized function would otherwise
shift every address after it.

Relocations are resolved against a VA, not through a link, so the interesting
case is the ordinary one - a `call` with a zero displacement waiting to be
filled in:

    e8 00 00 00 00        rel 0x14 at 0x12, symbol FUN_0044d310

Three things have to be right, and a wrong answer to any of them is silent:

  * the symbol's VA. Ghidra names a label after its VA, so `FUN_0044d310` *is*
    0x0044D310; anything else falls back to the merged blob's symbol table.
  * the field's address P, which is the function's VA plus the offset inside it,
    not the file offset.
  * the REL32 addend. The stored value is relative to the *end* of the
    instruction, so it is S - (P + 4), not S - P.

The last one is the dangerous one: being four bytes out still produces bytes
that look like code, and `objdiff` is comparing against the right target, so the
error only shows up as a mismatch. Splicing the known-exact functions and
checking they come out byte-identical to the original is the test that pins all
three down at once.

Usage:
    splice.py --image th12_final.exe --out th12_spliced.exe \\
              --obj build/FUN_0049149e_0049149e.obj [...]
    splice.py --image th12_final.exe --out ... --dir build --all
"""

import argparse
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import data_obj as DO
import text_blob as TB

IMAGEBASE = 0x400000

R_ABSOLUTE = 0x0000
R_DIR32 = 0x0006
R_SECTION = 0x000A
R_REL32 = 0x0014
R_DIR32NB = 0x0007


def addr_from_name(name):
    """Ghidra's convention: FUN_0044d310 and _0006E81D are their own VAs.

    The same convention prefixes the address for everything else it names after
    a location - `DAT_004b4318`, `_DAT_004ce8cc`, `_FUN_0046eba8`,
    `PTR_DAT_004b4318_004b4318`. Matching only a bare 8-digit name left every
    one of those unresolved, which is most of why a recompiled function was
    reported as skipped rather than compared: 764 of the unresolved
    relocations were names of exactly this shape.

    The address is taken from the last run of hex digits. A trailing `@<bytes>`
    is MSVC's stack-cleanup decoration and is stripped first, so the
    stdcall/fastcall forms the decompiler emits as `@FUN_00461920@12` and
    `_FUN_0045a3c0@0` resolve as well.
    """
    if not name:
        return None
    name = re.sub(r"@\d+$", "", name)
    m = re.search(r"([0-9A-Fa-f]{8})$", name)
    if not m:
        return None
    va = int(m.group(1), 16)
    return va if IMAGEBASE <= va < IMAGEBASE + 0x100000 else None


def load_sections(buf):
    lfanew = struct.unpack_from("<I", buf, 0x3C)[0]
    nsec = struct.unpack_from("<H", buf, lfanew + 6)[0]
    optsz = struct.unpack_from("<H", buf, lfanew + 20)[0]
    st = lfanew + 24 + optsz
    out = []
    for i in range(nsec):
        b = st + i * 40
        name = buf[b:b + 8].rstrip(b"\0").decode("latin-1")
        vsize, vaddr, rawsz, rawptr = struct.unpack_from("<IIII", buf, b + 8)
        out.append((name, vaddr, rawsz, rawptr))
    return out


def file_va(sections, offset):
    """The VA a file offset falls in, or None if it is not in a section."""
    for _name, vaddr, rawsz, rawptr in sections:
        if rawptr <= offset < rawptr + rawsz:
            return IMAGEBASE + vaddr + (offset - rawptr)
    return None


def target_objects(args):
    """Every object splice.py was asked to consider."""
    out = list(args.obj)
    if args.dir and os.path.isdir(args.dir):
        for fn in sorted(os.listdir(args.dir)):
            if fn.endswith(".obj"):
                out.append(os.path.join(args.dir, fn))
    return out


def object_reloc_names(path):
    """Names of every symbol an object's .text relocations refer to."""
    names = set()
    try:
        _body, rels, o = object_text(path)
    except Exception:
        return names
    for _off, symidx, _typ in (rels or ()):
        if 0 <= symidx < len(o["syms"]):
            nm = o["syms"][symidx][0]
            if nm:
                names.add(nm)
    return names


def file_offset(sections, rva):
    for _name, vaddr, rawsz, rawptr in sections:
        if vaddr <= rva < vaddr + rawsz:
            return rawptr + (rva - vaddr)
    return None


def blob_symbols(path):
    """name -> VA for every symbol the merged text blob defines."""
    if not os.path.isfile(path):
        return {}
    o = TB.read_coff(path)
    out = {}
    for i, s in enumerate(o["secs"]):
        if s["name"] != ".text" or not s["rawsz"]:
            continue
        for nm, val, snum, cls, _naux in o["syms"]:
            if nm and snum == i + 1 and cls == 2:
                out[nm] = IMAGEBASE + s["vaddr"] + val
            elif nm and snum == -1 and cls == 2:
                out[nm] = val
    return out


def object_text(path):
    """(bytes, [relocations], object) for one object's .text."""
    o = TB.read_coff(path)
    for i, s in enumerate(o["secs"]):
        if s["name"] != ".text" or not s["rawsz"]:
            continue
        body = bytearray(o["b"][s["rawptr"]:s["rawptr"] + s["rawsz"]])
        rels = []
        if s["relptr"] and s["nrel"]:
            for k in range(s["nrel"]):
                va, sym, typ = struct.unpack_from("<IIH", o["b"], s["relptr"] + k * 10)
                rels.append((va, sym, typ))
        return body, rels, o
    return None, None, o


def apply_relocs(body, rels, o, base_va, resolve):
    """Fill in every relocation in `body`, which sits at VA `base_va`."""
    unresolved = []
    for off, symidx, typ in rels:
        if typ == R_ABSOLUTE:
            continue
        if off + 4 > len(body):
            unresolved.append((off, "offset %d outside the function" % off))
            continue
        if symidx >= len(o["syms"]):
            unresolved.append((off, "symbol index %d out of range" % symidx))
            continue
        name, val, snum, _cls, _na = o["syms"][symidx]
        target = resolve(name, val, snum)
        if target is None:
            unresolved.append((off, "cannot resolve %r" % name))
            continue
        field_va = base_va + off
        cur = struct.unpack_from("<I", body, off)[0]
        if typ in (R_DIR32, R_DIR32NB):
            new = cur + target
        elif typ == R_REL32:
            # the instruction reads the displacement as an offset from the end
            # of itself, so the stored value is S - (P + 4)
            new = cur + target - (field_va + 4)
        else:
            unresolved.append((off, "unhandled relocation type 0x%x" % typ))
            continue
        struct.pack_into("<I", body, off, new & 0xFFFFFFFF)
    return body, unresolved


def function_starts(delink_dir, blob_syms):
    """Every VA a function is known to start at, sorted.

    Used to bound a slot. The compiled length is *not* a usable bound: an import
    thunk is `FF 25 <IAT slot>` - 6 bytes - and the decompiler's stand-in for it
    compiles to `EB FE` (`jmp $`, 2 bytes), so sizing the slot from the object
    would let a 2-byte stub overwrite a 6-byte jump and silently break the
    import table.
    """
    starts = set()
    if os.path.isdir(delink_dir):
        for fn in os.listdir(delink_dir):
            m = re.search(r"([0-9A-Fa-f]{8})", fn)
            if m:
                starts.add(int(m.group(1), 16))
    for va in blob_syms.values():
        if IMAGEBASE <= va < IMAGEBASE + 0x100000:
            starts.add(va)
    return sorted(starts)


def string_literal(name):
    """The bytes of an MSVC-mangled string literal, or None.

    `??_C@_07GPDNMNG@CONOUT$?$AA@` is a C string constant. The frame after `@_`
    is `<len><hash>`, then an `@`, then the characters, terminated by a further
    `@`; a literal `?` in the data is escaped as `??`, and `?$` stands for a `$`
    that cannot be written directly. Decoding gives back the exact text, which
    can then be located in the image's read-only data to recover the address the
    original linker assigned.
    """
    m = re.match(r"^\?\?_C@_(\d+)[0-9A-Za-z]+@([^@]*)@", name or "")
    if not m:
        return None
    n = int(m.group(1))
    body = m.group(2)
    out = bytearray()
    i = 0
    while i < len(body):
        if body[i] == "?" and i + 1 < len(body):
            nxt = body[i + 1]
            if nxt == "?":
                out.append(ord("?"))       # an escaped literal '?'
            else:
                out.append(ord(nxt))        # ?$ is '$', ?5 is '%', ...
            i += 2
        else:
            out.append(ord(body[i]))
            i += 1
    # The declared length counts the characters, terminator included.
    if n and len(out) < n:
        out.extend(b"\x00" * (n - len(out)))
    return bytes(out[:n]) if n else bytes(out)


def decomp_symbols(decomp_dir):
    """name -> VA, harvested from Ghidra's own header comments.

    Every decompilation begins with the decompiler's own idea of the signature,
    and it names the function as the *linker* saw it:

        /* void * __cdecl _memset(void * _Dst, int _Val, size_t _Size) @ 00477420 */

    That is the whole reason the static CRT resolves. Ghidra decompiled the
    whole image, CRT included, so `__memset` is not a mystery: it is the function
    at 0x00477420, sitting in decomp_out under that name. The addresses here are
    the original binary's own, read out of the original's own decompilation,
    which is a far better oracle than a fresh link would be.

    The regex only takes a name immediately before `@ <8 hex digits>`, so a
    parameter of the same name cannot be mistaken for the function's.
    """
    out = {}
    if not os.path.isdir(decomp_dir):
        return out
    hdr = re.compile(
        r"^\s*/\*.*?\b([A-Za-z_$@][\w$@?]*)\s*\([^()]*\)\s*@\s*"
        r"([0-9A-Fa-f]{8})\b")
    for fn in os.listdir(decomp_dir):
        if not fn.endswith(".c"):
            continue
        try:
            with open(os.path.join(decomp_dir, fn), "r",
                      encoding="latin-1") as fh:
                first = fh.readline(4096)
        except OSError:
            continue
        m = hdr.match(first)
        if m:
            out.setdefault(m.group(1), int(m.group(2), 16))
    return out


def import_thunks(image, sections):
    """name -> VA of the IAT slot, for every function the image imports.

    A reference to an imported function goes through the Import Address Table,
    so the value a relocation needs is the *slot's* address, not the function's.
    Ghidra names these `_EnterCriticalSection@4` (the function) and
    `__imp__EnterCriticalSection@4` (the slot), and a call compiled by MSVC
    references the latter, so both spellings map to the same VA.

    This is read out of the original PE rather than guessed, which is what makes
    it trustworthy: the slot addresses are the ones the original loader will use.
    """
    import struct as _s
    b = bytes(image)
    pe = _s.unpack_from("<I", b, 0x3C)[0]
    opt = pe + 24
    nsec = _s.unpack_from("<H", b, pe + 6)[0]
    base = _s.unpack_from("<I", b, opt + 28)[0]
    imp_rva = _s.unpack_from("<I", b, opt + 104)[0]
    so = pe + 24 + _s.unpack_from("<H", b, pe + 20)[0]
    secs = []
    for i in range(nsec):
        vs, va, _rs, ro = _s.unpack_from("<IIII", b, so + 40 * i + 8)
        secs.append((va, vs, ro))

    def r2o(rva):
        for va, vs, ro in secs:
            if va <= rva < va + max(vs, 1):
                return ro + (rva - va)
        return None

    out = {}
    o = r2o(imp_rva)
    if o is None:
        return out
    for _ in range(256):                      # descriptor count is bounded
        oft, _ts, _fc, nm, ft = _s.unpack_from("<IIIII", b, o)
        if not (oft or nm or ft):
            break
        t = r2o(oft or ft)
        slot = ft
        while t is not None:
            v = _s.unpack_from("<I", b, t)[0]
            if not v:
                break
            if not v & 0x80000000:            # by name, not by ordinal
                no = r2o(v)
                if no is not None:
                    fn = b[no + 2:no + 66].split(b"\x00")[0].decode("latin-1")
                    # The import table stores the bare name (`CloseHandle`).
                    # A compiled reference carries MSVC's stdcall decoration
                    # (`_CloseHandle@20`), and the `@<bytes>` count depends on
                    # the declaration rather than the name, so the exact
                    # spelling is recovered at lookup time in resolve() by
                    # stripping a trailing `@<digits>`. Here, index the bare and
                    # underscore-prefixed forms.
                    out.setdefault(fn, base + slot)
                    out.setdefault("_" + fn, base + slot)
                    out.setdefault("__imp__" + fn, base + slot)
            slot += 4
            t += 4
        o += 20
    return out


def real_constant(name):
    """The address a `__real@<bits>` CRT constant reference needs.

    MSVC's floating point support library exposes its double constants as
    `__real@<16 hex digits of the IEEE bit pattern>`; a relocation against one is
    a reference to that literal, not to code. There is no symbol to look up, so
    the only way to place it is to find the constant's bytes in the image's
    read-only data. Returned as the byte pattern for the caller to search.
    """
    m = re.match(r"^__real@([0-9A-Fa-f]{8,16})$", name or "")
    if not m:
        return None
    bits = m.group(1)
    if len(bits) == 16:
        return bytes.fromhex(bits)[::-1]       # little-endian in memory
    return None


def slot_limit(starts, base_va):
    """How far the function at `base_va` may extend before it hits the next."""
    import bisect
    i = bisect.bisect_right(starts, base_va)
    return starts[i] - base_va if i < len(starts) else None


def main(argv):
    ap = argparse.ArgumentParser(allow_abbrev=False)
    ap.add_argument("--image", required=True)
    ap.add_argument("--out", required=True)
    ap.add_argument("--obj", action="append", default=[])
    ap.add_argument("--dir")
    ap.add_argument("--blob", default=os.path.join(DO.ROOT, "artifacts", "text_blob.obj"))
    ap.add_argument("--delink-dir", default=os.path.join(DO.ROOT, "delink_out"))
    ap.add_argument("--decomp-dir", default=os.path.join(DO.ROOT, "decomp_out"))
    ap.add_argument("--quiet", action="store_true")
    ap.add_argument("--allow-differing", action="store_true",
                    help="also write functions whose bytes do not match the original")
    args = ap.parse_args(argv)

    image = bytearray(open(args.image, "rb").read())
    original = bytes(image)
    sections = load_sections(image)

    syms = blob_symbols(args.blob)
    if not syms:
        sys.stderr.write("splice: no blob symbols from %s; falling back to "
                         "Ghidra naming only\n" % args.blob)

    imports = import_thunks(image, sections)

    # Ghidra decompiled the whole image, so every function - the static CRT
    # included - is named with its original address in a header comment. This is
    # what resolves `__memset`, `__free`, `___lock` and the rest: not a guess, but
    # the original binary's own record of where its linker put them.
    dsyms = decomp_symbols(args.decomp_dir)
    for name, va in dsyms.items():
        syms.setdefault(name, va)
    if dsyms:
        sys.stderr.write("splice: %d symbols from Ghidra headers in %s\n"
                         % (len(dsyms), args.decomp_dir))

    # A Ghidra header names the function the way the decompiler chose to display
    # it (`_memset`), while the relocation against it uses the symbol the
    # original linker actually emitted (`__memset`). The two differ only in the
    # number of leading underscores, so index each name under every underscore
    # count up to three. This is a naming-convention bridge, not address
    # invention: the address still comes from the original's own header.
    usyms = {}
    for name, va in list(syms.items()):
        core = name.lstrip("_@")
        if not core:
            continue
        for n in range(0, 4):
            usyms.setdefault("_" * n + core, va)
    # MSVC's C++ mangling frames a whole reference in decoration: the SEH
    # helpers come out as `@__NLG_Notify1@4` (a leading `@` from the EH
    # handler name and a trailing `@<bytes>` argument count), which is the same
    # symbol as `__NLG_Notify1`. Index those frames too.
    for name, va in list(syms.items()):
        m = re.match(r"^@?(.+?)@\d+$", name)
        if m:
            core = m.group(1).lstrip("_@")
            for n in range(0, 4):
                usyms.setdefault("_" * n + core, va)
                usyms.setdefault("@" + "_" * n + core + "@0", va)
    for name, va in usyms.items():
        syms.setdefault(name, va)

    # Two classes of relocation name encode their own contents and so can be
    # placed in the image without a symbol table: `__real@<bits>`, an IEEE
    # double literal, and `??_C@_...@`, an MSVC-mangled C string. Decode each and
    # look for the bytes.
    #
    # A pattern that matches more than once is refused, not guessed. The
    # constants pool their values - 2.0 appears a dozen times - and picking the
    # wrong copy would produce a relocation that looks fine and writes garbage.
    # Only a unique match is placed.
    ro_ranges = []
    for n, va, rawsz, rawptr in sections:
        if n in (".rdata", ".data"):
            ro_ranges.append((rawptr, rawptr + rawsz))

    def unique_read_only(pat):
        hits = []
        start = 0
        while len(hits) <= 4:
            i = original.find(pat, start)
            if i < 0:
                break
            if any(lo <= i < hi for lo, hi in ro_ranges):
                hits.append(i)
            start = i + 1
        return hits[0] if len(hits) == 1 else None

    located = {}
    wanted = set()
    for path in target_objects(args):
        wanted |= object_reloc_names(path)
    for name in wanted:
        pat = real_constant(name) or string_literal(name)
        if not pat:
            continue
        off = unique_read_only(pat)
        if off is None:
            continue
        va = file_va(sections, off)
        if va is not None:
            located[name] = va
    if located:
        syms.update(located)
        sys.stderr.write("splice: located %d literal(s) in the image's data\n"
                         % len(located))

    def resolve(name, val, snum):
        if name in syms:
            return syms[name]
        if name in imports:
            return imports[name]
        # `_CloseHandle@20` / `@__NLG_Notify1@4` are decorated spellings of a
        # real symbol. The `@<bytes>` argument count is a calling-convention
        # decoration that the import table and the decomp headers do not carry,
        # so drop it and retry the bare and underscore-prefixed forms against
        # both symbol sources.
        base = re.sub(r"@(\d+)$", "", name or "")
        if base != name:
            core = base.lstrip("_@")
            for key in (base, core, "_" + core, "__" + core):
                if key in imports:
                    return imports[key]
                if key in syms:
                    return syms[key]
        a = addr_from_name(name)
        if a is not None:
            return a
        if snum and snum > 0 and val:
            return IMAGEBASE + val
        return None

    targets = target_objects(args)
    if not targets:
        sys.stderr.write("splice: nothing to splice (--obj or --dir)\n")
        return 1

    starts = function_starts(args.delink_dir, syms)
    spliced = 0
    skipped = 0
    exact = 0
    replaced = 0
    notexact = 0
    print("=== splicing recompiled functions ===")
    for path in targets:
        stem = os.path.splitext(os.path.basename(path))[0]
        m = re.search(r"([0-9A-Fa-f]{8})$", stem)
        if not m:
            print("  %-28s skipped: no address in the name" % stem)
            skipped += 1
            continue
        base_va = int(m.group(1), 16)
        body, rels, o = object_text(path)
        if not body:
            print("  %-28s skipped: no .text" % stem)
            skipped += 1
            continue

        # The slot is the space the original function occupied. Prefer the
        # delink object's size; fall back to the distance to the next function,
        # because the compiled length says nothing about the original.
        slot = None
        dpath = os.path.join(args.delink_dir, stem + ".o")
        if os.path.isfile(dpath):
            dbody, _r, _o = object_text(dpath)
            if dbody:
                slot = len(dbody)
        if slot is None:
            slot = slot_limit(starts, base_va)
        if slot is None:
            print("  %-28s skipped: no bound on how far the function extends" % stem)
            skipped += 1
            continue

        body, unresolved = apply_relocs(body, rels, o, base_va, resolve)
        if unresolved:
            print("  %-28s skipped: %d unresolved relocation(s): %s"
                  % (stem, len(unresolved), unresolved[0][1]))
            skipped += 1
            continue
        if len(body) > slot:
            print("  %-28s skipped: %d bytes into a %d byte slot" % (stem, len(body), slot))
            skipped += 1
            continue

        off = file_offset(sections, base_va - IMAGEBASE)
        if off is None:
            print("  %-28s skipped: RVA 0x%x is in no section" % (stem, base_va - IMAGEBASE))
            skipped += 1
            continue

        was = bytes(image[off:off + len(body)])
        ndiff = sum(1 for i in range(len(body)) if was[i] != body[i])

        # A function that does not match the original is not a rebuild yet. Its
        # delinked bytes are provably right, and overwriting them with a
        # near-miss would turn a correct image into a subtly wrong one - so the
        # gate is closed unless it is opened deliberately.
        if ndiff and not args.allow_differing:
            print("  %-28s va 0x%08x  %3d/%3d bytes  NOT EXACT: %d bytes differ, left as delink"
                  % (stem, base_va, len(body), slot, ndiff))
            notexact += 1
            continue

        image[off:off + len(body)] = body
        exact += 1 if ndiff == 0 else 0
        replaced += 0 if ndiff == 0 else 1
        print("  %-28s va 0x%08x  %3d/%3d bytes  %s"
              % (stem, base_va, len(body), slot,
                 "verified exact" if ndiff == 0 else "replaced (%d bytes differ)" % ndiff))
        spliced += 1

    os.makedirs(os.path.dirname(os.path.abspath(args.out)), exist_ok=True)
    open(args.out, "wb").write(bytes(image))
    total = sum(1 for i in range(len(image)) if image[i] != original[i])
    print("splice: %d functions written (%d verified exact, %d replaced with "
          "differing bytes, %d not exact and left alone), %d skipped"
          % (spliced, exact, replaced, notexact, skipped))
    print("splice: %d/%d compiled functions are byte-exact against the original"
          % (exact, len(targets) - skipped))
    print("splice: wrote %s (%d bytes, %d differ from the input image)"
          % (args.out, len(image), total))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
