"""Make Ghidra's generated prototype header compile under VC9.

Ghidra emits a flat type name for every function parameter, which causes three
distinct classes of failure:

  1. A name the SDK never defines at all (DName, HeapManager).
  2. A name the SDK defines as a *bare tag* rather than a typedef
     (excpt.h has `enum _EXCEPTION_DISPOSITION`, so plain
     `_EXCEPTION_DISPOSITION *p;` does not parse).
  3. A name the SDK already typedefs (DWORD), which must not be redeclared.

Classes 2 and 3 cannot be told apart by asking the compiler, because
`enum X *p;` and `struct X *p;` are valid for *any* identifier - a tag can
always be forward declared. So the SDK headers are the ground truth: parse
every declaration, record what kind each name is, and then

  * rewrite prototypes to use `enum X` / `struct X` where the SDK has a bare tag,
  * leave plain names alone where the SDK has a typedef,
  * forward declare only the names nothing in the SDK mentions.

This script is idempotent and runs on the raw Ghidra output.
"""

import os
import re
import sys

PRIMITIVES = {
    "void", "char", "short", "int", "long", "float", "double", "signed",
    "unsigned", "_Bool", "size_t", "wchar_t", "va_list",
    "int8", "int16", "int32", "int64",
    "uint8", "uint16", "uint32", "uint64",
}

# Ghidra's own base type names, declared with the right width in
# th12_ghidra.h. Kept in one list so fix_header and gen_types agree on who owns
# them; if these two drift apart the corpus fails with C2371.
GHIDRA_BASE_TYPES = {
    "undefined", "undefined1", "undefined2", "undefined3", "undefined4",
    "undefined5", "undefined6", "undefined7", "undefined8", "byte", "uchar",
    "sbyte", "word", "sword", "dword", "sdword", "qword", "sqword", "uint",
    "sint", "ulong", "ushort", "ulonglong", "ulonglonglong", "short",
    "ushortlong", "int64", "uint64", "int128", "longlong", "float10", "bool",
    "rsize_t", "code",
}

CALLING_CONVS = {"__cdecl", "__fastcall", "__stdcall", "__thiscall", "extern",
                 "const", "volatile", "static", "inline", "near", "far",
                 "pascal", "struct", "union", "enum", "unsigned", "signed",
                 "return", "__int64", "__int32", "__forceinline", "void"}

BLOCK_COMMENT = re.compile(r"/\*.*?\*/", re.S)
LINE_COMMENT = re.compile(r"//[^\n]*")
IDENT = re.compile(r"[A-Za-z_][A-Za-z0-9_]*")
DECL_LINE = re.compile(
    r"^\s*(?:[A-Za-z_][A-Za-z0-9_]*\s+|\*\s*)+([A-Za-z_][A-Za-z0-9_]*)\s*\(")

# `typedef ... ;` statements, found with brace tracking so that
# `typedef enum { A } NAME;` is not cut short at the ';' inside the body.
TYPEDEF_START = re.compile(r"\btypedef\b")
# A bare tag definition: struct/union/enum NAME { ... }  or  struct NAME ;
TAG_DEF = re.compile(
    r"\b(struct|union|enum)\s+([A-Za-z_][A-Za-z0-9_]*)\s*(?=[;{])")
# Object-like or function-like macros. ctype.h defines _tolower as a macro, so
# emitting a prototype for it would be macro-expanded into garbage.
DEFINE = re.compile(r"^\s*#\s*define\s+([A-Za-z_][A-Za-z0-9_]*)", re.M)
# A function *declaration* line, e.g.
#   WIN_API IDirect3D9 * Direct3DCreate9(UINT SDKVersion);
# d3d9.h and dinput.h declare these, so a prototype of our own collides.
SDK_FUNC_DECL = re.compile(
    r"^\s*(?:[A-Za-z_][A-Za-z0-9_]*\s+|&\s*|\*\s*)+"
    r"([A-Za-z_][A-Za-z0-9_]*)\s*\(")
# Declarator names in a typedef tail: NAME, *NAME, NAME[4]
DECLARATOR = re.compile(
    r"([A-Za-z_][A-Za-z0-9_]*)\s*(?:\[[^\]]*\])?\s*(?=\s*[,;])")
# Function-pointer typedef: `typedef int (__cdecl * _onexit_t)(void);` declares
# the name inside the parens, which DECLARATOR cannot see because the name is
# followed by ')' rather than ',' or ';'. The calling convention may appear on
# either side of the '*'.
_CONV = r"(?:__cdecl|__stdcall|__fastcall|__thiscall|APIENTRY|CALLBACK|_CRT_JIT_INTRINSIC)"
FUNCPTR_TYPEDEF = re.compile(
    r"\(\s*(?:" + _CONV + r"\s*)?\*\s*(?:" + _CONV + r"\s*)?"
    r"([A-Za-z_][A-Za-z0-9_]*)\s*\)")


def parse_typedef(stmt):
    """Split one typedef statement into (typedef_names, tag_kinds).

    The distinction matters and is easy to get wrong:

        typedef struct localeinfo_struct { ... } _locale_tstruct, *_locale_t;

    declares the *tag* `localeinfo_struct` and the *typedefs* `_locale_tstruct`
    and `_locale_t`. Treating every identifier in the statement as a typedef
    would claim the tag is a typedef, and then `localeinfo_struct *p;` would be
    emitted even though C requires the `struct` keyword there.
    """
    b = stmt.find("{")
    if b == -1:
        names = set(DECLARATOR.findall(stmt))
        m = FUNCPTR_TYPEDEF.search(stmt)
        if m:
            names.add(m.group(1))
        return names, {}

    depth = 0
    i = b
    while i < len(stmt):
        if stmt[i] == "{":
            depth += 1
        elif stmt[i] == "}":
            depth -= 1
            if depth == 0:
                break
        i += 1
    head = stmt[:b]
    tail = stmt[i + 1:]

    tags = {}
    m = re.search(r"\b(struct|union|enum)\s+([A-Za-z_][A-Za-z0-9_]*)\s*$", head)
    if m:
        tags[m.group(2)] = m.group(1)
    return set(DECLARATOR.findall(tail)), tags


def read_stripped(path):
    try:
        with open(path, "r", errors="ignore") as fh:
            return fh.read()
    except OSError:
        return ""


def scan_text(text):
    """Return (typedef_names, tag_kinds, macro_names, func_names) in one header."""
    typedefs = set()
    tags = {}
    macros = set(DEFINE.findall(text))
    funcs = set()
    for line in text.splitlines():
        s = line.strip()
        # A declaration, not a call site: it must not be a directive and must
        # end in a semicolon.
        if not s.endswith(";") or s.startswith("#"):
            continue
        m = SDK_FUNC_DECL.match(line)
        if m:
            funcs.add(m.group(1))

    for m in TYPEDEF_START.finditer(text):
        i = m.end()
        depth = 0
        n = len(text)
        while i < n:
            ch = text[i]
            if ch == "{":
                depth += 1
            elif ch == "}":
                depth -= 1
            elif ch == ";" and depth <= 0:
                t, k = parse_typedef(text[m.start():i + 1])
                typedefs |= t
                for name, kw in k.items():
                    tags.setdefault(name, kw)
                break
            i += 1

    for kw, name in TAG_DEF.findall(text):
        # A tag defined here is only meaningful if not also typedef'd; the caller
        # resolves that, since a typedef wins.
        tags.setdefault(name, kw)

    return typedefs, tags, macros, funcs


def harvest(include_dirs):
    typedefs = set()
    tags = {}
    macros = set()
    funcs = set()

    def absorb(path):
        raw = read_stripped(path)
        if not raw:
            return
        # Macros must be read from the *uncommented* text but a #define
        # line survives comment stripping only if it was not itself
        # commented out, so read it from the raw text separately.
        macros.update(DEFINE.findall(raw))
        text = LINE_COMMENT.sub(" ", BLOCK_COMMENT.sub(" ", raw))
        t, k, _m, f = scan_text(text)
        typedefs.update(t)
        funcs.update(f)
        for name, kw in k.items():
            tags.setdefault(name, kw)

    # The hand-written header of the VS2008 CRT's private structures
    # (src\th12_crt.h: struct _tiddata, _setloc_struct, threadmbcinfostruct,
    # LC_STRINGS). It is included by th12_prelude.h before the generated
    # headers, so it counts as already-declared exactly like the SDK ones: the
    # generator must not emit a `typedef struct _ptiddata _ptiddata;`
    # placeholder on top of the real definition, which is C2371.
    hand = os.path.join(os.path.dirname(os.path.dirname(
        os.path.abspath(__file__))), "src", "th12_crt.h")
    if os.path.isfile(hand):
        absorb(hand)

    for d in include_dirs:
        if not os.path.isdir(d):
            continue
        for root, _dirs, files in os.walk(d):
            for fn in files:
                if not fn.lower().endswith((".h", ".hpp", ".inl")):
                    continue
                absorb(os.path.join(root, fn))
    return typedefs, tags, macros, funcs


def kind_of(name, typedefs, tags):
    """'plain' | 'enum' | 'struct' | 'union' | 'unknown'."""
    if name in PRIMITIVES:
        return "plain"
    if name in typedefs:
        return "plain"
    return tags.get(name, "unknown")


def rewrite(path, include_dirs):
    typedefs, tags, macros, sdk_funcs = harvest(include_dirs)
    # Names the generator's own typedef block defined; that block is removed.
    for extra in ("uint32", "uint16", "uint8", "int8", "int16", "int32",
                  "size_t_", "BOOL", "f32", "f64", "ptr"):
        typedefs.add(extra)
    # Ghidra's own base type names are declared as complete types in
    # th12_ghidra.h (generated by scripts\gen_types.py), which gives them the
    # width the decompilation assumes. Forward declaring them here as opaque
    # `typedef struct X X;` on top of that is C2371, and an incomplete type is
    # what produced C2036 "unknown size" in the first place. Treating them as
    # already-declared leaves gen_types.py as the single owner.
    for name in GHIDRA_BASE_TYPES:
        typedefs.add(name)

    # Everything th12_ghidra.h (written by gen_types.py, which runs before this
    # script) already typedefs is declared ahead of this header by
    # th12_prelude.h. Read the file gen_types wrote instead of guessing: a name
    # it owns - a scalar, a recovered placeholder struct, a function typedef -
    # must not be forward-declared here as an opaque struct, or the two collide
    # (C2371/C2373).
    generated = generated_typedefs() | func_type_names()
    typedefs |= generated

    with open(path, "r", errors="replace") as fh:
        lines = fh.read().splitlines()

    # First pass: collect every function name. Ghidra sometimes invents a type
    # and a function with the same name (DName is both), and forward declaring
    # the type would then collide with the function definition.
    fn_names = set()
    type_uses = set()
    for line in lines:
        s = line.strip()
        if not (s.endswith(");") and "(" in s):
            continue
        m = DECL_LINE.match(s)
        fname = m.group(1) if m else None
        if fname:
            fn_names.add(fname)
        for ident in type_idents(s):
            type_uses.add(ident)

    # A name that is both a function and a type cannot be declared in C. These
    # are Ghidra demangler internals (DName, DNameStatusNode, ...), which are
    # not game code, so drop every prototype that mentions one.
    clash = type_uses & fn_names

    out = []
    seen = set()
    dropped_api = 0
    dropped_dupe = 0
    dropped_clash = 0
    skipping_typedefs = False
    opaque = {}

    for line in lines:
        s = line.strip()
        if skipping_typedefs:
            if s.startswith("#"):
                skipping_typedefs = False
            else:
                continue
        if s.startswith("typedef "):
            skipping_typedefs = True
            continue

        if s.endswith(");") and "(" in s:
            m = DECL_LINE.match(s)
            fname = m.group(1) if m else None
            if fname:
                if any(c in s.replace(fname, "", 1) for c in clash):
                    dropped_clash += 1
                    continue
                if fname in macros:
                    # e.g. ctype.h's _tolower: a prototype would be expanded.
                    dropped_api += 1
                    continue
                if fname in typedefs and fname not in seen:
                    # Already declared by an SDK header; do not redeclare.
                    dropped_api += 1
                    continue
                if fname in sdk_funcs and fname not in seen:
                    # Declared as a function by the SDK (Direct3DCreate9, ...).
                    dropped_api += 1
                    continue
                if fname in seen:
                    dropped_dupe += 1
                    continue
                seen.add(fname)
            line = fix_types(s, typedefs, tags, opaque, fname, fn_names)
        out.append(line)

    decls = []
    # Names gen_types.py already typedefs in th12_ghidra.h, which th12_prelude.h
    # includes ahead of this one. Forward declaring them here as opaque structs
    # collides with the real typedef - `INTRNCVT_STATUS` is C2371 "redefinition;
    # different basic types" once it is a `unsigned char` and not a struct - so
    # they are dropped rather than redeclared.
    already_typedefd = set(generated)
    for pat, typ in scalar_typedefs():
        already_typedefd.add(pat)
    for name in sorted(opaque):
        if name in already_typedefd:
            continue
        kw = opaque[name]
        if kw == "unknown":
            decls.append("typedef struct %s %s;" % (name, name))
        else:
            decls.append("/* %s is declared by the SDK as a bare %s tag */"
                         % (name, kw))

    text = "\n".join(out)
    if decls:
        # Insert after the include guard's #define, or after the leading comment.
        anchor = None
        for i, l in enumerate(out):
            if l.startswith("#define "):
                anchor = i + 1
                break
        if anchor is None:
            anchor = 0
            for i, l in enumerate(out):
                if l.strip() and not l.strip().startswith("/*"):
                    anchor = i
                    break
        block = ["/* types the SDK headers do not define at all */"] + decls + [""]
        out[anchor:anchor] = block
        text = "\n".join(out)
    with open(path, "w", encoding="utf-8") as fh:
        fh.write(text + "\n")

    n_opaque = sum(1 for v in opaque.values() if v == "unknown")
    n_tag = sum(1 for v in opaque.values() if v != "unknown")
    print("SDK typedef names: %d, bare tags: %d" % (len(typedefs), len(tags)))
    print("SDK-declared/macro prototypes dropped: %d" % dropped_api)
    print("duplicate-signature prototypes dropped: %d" % dropped_dupe)
    print("name-clash prototypes dropped: %d (clashing names: %d)"
          % (dropped_clash, len(clash)))
    print("bare-tag types qualified: %d" % n_tag)
    print("opaque forward declarations: %d" % n_opaque)


IDENT_SCAN = re.compile(r"\b([A-Za-z_][A-Za-z0-9_]*)\b")
# Same as IDENT_SCAN, but never matches an identifier already preceded by a tag
# keyword, which keeps the rewrite idempotent.
QUALIFY = re.compile(
    r"(?<!\bstruct )(?<!\benum )(?<!\bunion )\b([A-Za-z_][A-Za-z0-9_]*)\b")


def type_idents(s):
    """Identifiers in a prototype that are in *type* position.

    An identifier immediately followed by '(' is the function being declared,
    not a type, so it is excluded. Excluding by name instead would be wrong:
    a prototype can legitimately use its own name as a parameter type, as in
    `UnDecorator(UnDecorator *a0, ...)`.
    """
    out = set()
    for m in IDENT_SCAN.finditer(s):
        word = m.group(1)
        if word in CALLING_CONVS:
            continue
        if s[m.end():].lstrip().startswith("("):
            continue
        if word.startswith("a") and word[1:].isdigit():
            continue
        out.add(word)
    return out


def scalar_typedefs():
    """The (name, ctype) pairs gen_types.py emits into th12_ghidra.h.

    Read from that generator's own list rather than restated here, so adding a
    scalar there cannot leave this script declaring a conflicting struct tag for
    the same name.
    """
    try:
        sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
        import gen_types
        return [(n, c) for n, _bits, c in gen_types.SCALARS if c]
    except Exception:
        return []


def func_type_names():
    """Names gen_types.py emits as function(-pointer) typedefs."""
    try:
        sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
        import gen_types
        return {n for n, _decl in gen_types.FUNC_TYPE_TYPEDEFS}
    except Exception:
        return set()


def generated_typedefs():
    """Every type name already typedef'd in the generated th12_ghidra.h.

    th12_prelude.h includes that header ahead of the prototypes this script
    writes, so a forward declaration for one of its names is a redefinition.
    Parse what gen_types.py actually wrote so the two files cannot drift.
    """
    path = os.path.join(os.path.dirname(os.path.dirname(
        os.path.abspath(__file__))), "src", "th12_ghidra.h")
    names = set()
    try:
        with open(path, "r", errors="replace") as fh:
            raw = fh.read()
    except OSError:
        return names
    text = LINE_COMMENT.sub(" ", BLOCK_COMMENT.sub(" ", raw))
    t, _k, _m, _f = scan_text(text)
    names |= t
    return names


def fix_types(s, typedefs, tags, opaque, fname, fn_names):
    """Qualify bare SDK tag names so plain references parse; record unknowns.

    A tag the SDK defines as `enum X` cannot be written as plain `X` in C, so
    the identifier is rewritten to the tagged form. Names nothing declares are
    recorded in `opaque` for the caller to forward declare, except when the
    header also uses that name for a function, where a forward declaration
    would collide.
    """
    for ident in type_idents(s):
        if ident == fname or ident in fn_names:
            continue
        k = kind_of(ident, typedefs, tags)
        if k != "plain":
            opaque.setdefault(ident, k)

    def repl(m):
        word = m.group(1)
        # Do not re-qualify an identifier that is already tagged, so the script
        # stays idempotent when re-run on its own output.
        prefix = s[:m.start()].rstrip()
        if prefix.endswith("struct") or prefix.endswith("enum") \
                or prefix.endswith("union"):
            return word
        if word in CALLING_CONVS or word == fname or word in fn_names:
            return word
        if word.startswith("a") and word[1:].isdigit():
            return word
        k = kind_of(word, typedefs, tags)
        if k in ("enum", "struct", "union"):
            return k + " " + word
        return word

    return QUALIFY.sub(repl, s)


if __name__ == "__main__":
    rewrite(sys.argv[1], sys.argv[2:])
