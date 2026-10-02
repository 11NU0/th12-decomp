"""Rename a rebuilt COFF object's symbols to match the original, for objdiff.

Why this is needed
------------------
objdiff's matcher pairs base and target functions *by symbol name*. Ghidra
names the originals `FUN_004014b0`, but MSVC decorates the rebuilt object as
`@FUN_004014b0@4`, so nothing pairs and `report generate` omits the match
measures entirely.

Two kinds of divergence have to be undone:

1. **MSVC decoration.** Ghidra's demangler reports the undecorated name, so one
   leading `_` (cdecl/stdcall) or `@` (fastcall) plus a trailing `@<decimal>`
   argument-byte count is removed. Exactly *one* prefix is stripped, which keeps
   CRT symbols right: Ghidra's `___iswcsym` comes from `____iswcsym`.

2. **Characters C cannot express.** A handful of CRT symbols are named by DIA
   as `FID_conflict:__atodbl`. C has no `:`, so the generated prototype is
   `FID_conflict___atodbl`, and that no longer equals the target's name.
   These are resolved against the *target object* rather than guessed.

When the target object is available it is authoritative: defined functions are
matched to the target's defined functions and given the target's exact names.
Undefined function references are resolved through a canonical-form lookup.

Relocations address symbols by index, not by name, so renaming is safe and the
rewritten objects still link. Aux records are copied verbatim. Names longer
than 8 bytes are re-emitted into a fresh string table, which is a verbatim copy
of the original with new entries appended - replacing it would invalidate the
offsets of names that were not renamed.

Usage:
    rename_symbols.py --target-dir delink_out build\\*.obj   (preferred)
    rename_symbols.py obj.obj ...                            (decoration only)
    rename_symbols.py --check obj.obj                        (report only)
"""

import os
import re
import struct
import sys

FILE_HEADER = 20
SECTION_HEADER = 40
SYMBOL_SIZE = 18

STORAGE_EXTERNAL = 2
IMAGE_SYM_UNDEFINED = 0
DTYPE_FUNCTION = 0x20  # (derived type 2 << 4) | base type 0

SUFFIX = re.compile(r"@\d+$")
VALID = re.compile(r"^[A-Za-z_?@][\w?@$:]*$")


def undecorate(name):
    """Remove exactly one C decoration level. Returns (new_name, changed)."""
    original = name
    if SUFFIX.search(name):
        name = SUFFIX.sub("", name)
    if name[:1] in ("_", "@"):
        name = name[1:]
    if not name:
        name = original
    return name, name != original


def canon(name):
    """Canonical comparison form: undecorate, and fold ':' to '_'."""
    return undecorate(name)[0].replace(":", "_")


class Coff:
    """Just enough COFF to read and rewrite the symbol table."""

    def __init__(self, path):
        self.path = path
        with open(path, "rb") as fh:
            self.blob = bytearray(fh.read())
        machine, self.num_sections, _stamp, self.symtab, self.num_syms = \
            struct.unpack_from("<HHIII", self.blob, 0)
        if machine != 0x014C:
            raise SystemExit("%s: not an x86 COFF object" % path)
        self.strtab = self.symtab + self.num_syms * SYMBOL_SIZE
        self.strtab_size = struct.unpack_from("<I", self.blob, self.strtab)[0] \
            if self.num_syms else 0
        self.code_secs = self._code_sections()

    def _code_sections(self):
        out = set()
        for s in range(self.num_sections):
            off = FILE_HEADER + s * SECTION_HEADER
            name = self.blob[off:off + 8].rstrip(b"\0").decode("latin-1")
            flags = struct.unpack_from("<I", self.blob, off + 36)[0]
            if flags & 0x20 or name in (".text", "CODE"):
                out.add(s + 1)
        return out

    def symbol(self, i):
        """Return (name, value, section, type, storage, aux) for symbol i."""
        off = self.symtab + i * SYMBOL_SIZE
        raw = self.blob[off:off + 8]
        if raw[:4] == b"\0\0\0\0":
            so = struct.unpack_from("<I", raw, 4)[0]
            end = self.blob.index(b"\0", self.strtab + so)
            name = self.blob[self.strtab + so:end].decode("latin-1")
        else:
            name = raw.rstrip(b"\0").decode("latin-1")
        value, sect, typ, storage, aux = struct.unpack_from(
            "<IhHBB", self.blob, off + 8)
        return name, value, sect, typ, storage, aux

    def is_func(self, sect, typ, typed=True):
        if typed and typ != DTYPE_FUNCTION and (typ & 0xF000) != DTYPE_FUNCTION:
            return False
        return sect == IMAGE_SYM_UNDEFINED or sect in self.code_secs

    def defined_funcs(self, typed=True):
        """Indices of external function definitions, in symbol order.

        `typed=False` is used for the delinked targets: their writer leaves the
        type field at 0x0000 for C++ symbols, so requiring DTYPE_FUNCTION would
        drop exactly the symbols that most need renaming. Dumpbin still shows
        "()" for these, but that comes from the demangled comment rather than
        the type field.
        """
        out = []
        for i in range(self.num_syms):
            _n, _v, sect, typ, storage, _a = self.symbol(i)
            if storage == STORAGE_EXTERNAL and sect not in (
                    IMAGE_SYM_UNDEFINED, 0) and self.is_func(sect, typ, typed):
                out.append(i)
        return out

    def undefined_funcs(self, typed=True):
        out = []
        for i in range(self.num_syms):
            _n, _v, sect, typ, storage, _a = self.symbol(i)
            if storage == STORAGE_EXTERNAL and sect == IMAGE_SYM_UNDEFINED \
                    and self.is_func(sect, typ, typed):
                out.append(i)
        return out

    def apply(self, renames, label):
        """renames: {index: new_name}. Rewrites the symbol table in place."""
        if not renames:
            return 0
        if self.num_syms == 0:
            print("  no symbol table, skipped")
            return 0

        new_strtab = bytearray(self.blob[self.strtab:
                                        self.strtab + self.strtab_size])
        for i, text in renames.items():
            off = self.symtab + i * SYMBOL_SIZE
            enc = text.encode("latin-1")
            if len(enc) <= 8:
                self.blob[off:off + 8] = enc.ljust(8, b"\0")
            else:
                pos = len(new_strtab)
                new_strtab.extend(enc + b"\0")
                self.blob[off:off + 8] = b"\0\0\0\0" + struct.pack("<I", pos)
        struct.pack_into("<I", new_strtab, 0, len(new_strtab))
        self.blob[self.strtab:] = new_strtab

        with open(self.path, "wb") as fh:
            fh.write(self.blob)
        print("  rewrote %s (%d symbols)" % (label, len(renames)))
        return len(renames)


def target_map(target_path):
    """Defined function names of one target object, plus a canon->name lookup."""
    t = Coff(target_path)
    defs = [t.symbol(i)[0] for i in t.defined_funcs(typed=False)]
    lookup = {}
    for d in defs:
        lookup.setdefault(canon(d), d)
    return defs, lookup


_GLOBAL = {}


def global_target_map(target_dir):
    """canon->name over every function symbol in every target object.

    Needed because an object references callees that live in *other* objects,
    so a per-object lookup cannot resolve them. Scanned once and cached.
    """
    if target_dir in _GLOBAL:
        return _GLOBAL[target_dir]
    lookup = {}
    try:
        names = os.listdir(target_dir)
    except OSError:
        return {}
    for fn in sorted(names):
        if not fn.endswith(".o"):
            continue
        try:
            t = Coff(os.path.join(target_dir, fn))
        except (SystemExit, IndexError, struct.error, ValueError):
            continue
        for i in list(t.defined_funcs(typed=False)) + list(t.undefined_funcs(typed=False)):
            name = t.symbol(i)[0]
            lookup.setdefault(canon(name), name)
    _GLOBAL[target_dir] = lookup
    return lookup


def process(path, write, target_path=None, target_dir=None):
    base = Coff(path)
    if base.num_syms == 0:
        print("  no symbol table, skipped")
        return 0

    defs_idx = base.defined_funcs()
    tdefs, tlookup = ([], {})
    if target_path and os.path.isfile(target_path):
        tdefs, tlookup = target_map(target_path)
    glookup = global_target_map(target_dir) if target_dir else {}

    renames = {}
    for i in defs_idx:
        name = base.symbol(i)[0]
        new = None
        if tdefs:
            c = canon(name)
            if c in tlookup:
                new = tlookup[c]
            elif len(defs_idx) == len(tdefs):
                new = tdefs[defs_idx.index(i)]
        if new is None:
            new = undecorate(name)[0]
        if new != name and VALID.match(new):
            renames[i] = new

    # Undefined references: prefer the object's own target, then the global
    # table, which is what resolves cross-object FID_conflict-style callees.
    for i in base.undefined_funcs():
        name = base.symbol(i)[0]
        c = canon(name)
        new = (tlookup.get(c) or glookup.get(c) or undecorate(name)[0])
        if new != name and VALID.match(new):
            renames[i] = new

    if write:
        return base.apply(renames, os.path.basename(path))
    for i in sorted(renames):
        print("  %-6d %-34s -> %s" % (i, base.symbol(i)[0], renames[i]))
    if not renames:
        print("  nothing to rename")
    return len(renames)


def find_target(obj_path, target_dir):
    stem = os.path.basename(obj_path)[:-4]  # strip .obj
    cand = os.path.join(target_dir, stem + ".o")
    return cand if os.path.isfile(cand) else None


def main(argv):
    write = "--check" not in argv
    target_dir = None
    if "--target-dir" in argv:
        target_dir = argv[argv.index("--target-dir") + 1]
    files = [a for a in argv[1:] if not a.startswith("--")
             and a not in (target_dir,)]
    if not files:
        raise SystemExit(__doc__)
    total = 0
    for path in files:
        print(path)
        tgt = find_target(path, target_dir) if target_dir else None
        try:
            total += process(path, write, tgt, target_dir)
        except (IndexError, struct.error, ValueError) as exc:
            print("  FAILED: %s" % exc)
    print("total symbols renamed: %d" % total)


if __name__ == "__main__":
    main(sys.argv)

