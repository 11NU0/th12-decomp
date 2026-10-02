"""Generate the prototype header from the decompiled sources themselves.

Ghidra's signature database reports `undefined` for the return type of many
functions, which then conflicts with the actual definition when the .c file is
compiled ("redefinition; different basic types"). The first line of every
decompiled file already carries the real signature the decompiler emitted, so
derive the prototypes from those and the header agrees with the definitions by
construction.

Emits a *raw* header; run fix_header.py afterwards to reconcile it with the
SDK (drop SDK-declared and macro names, qualify bare tags, forward declare the
rest).
"""

import os
import re
import sys

SIGNATURE = re.compile(r"^/\*\s*(.*?)\s*(?:@\s*[0-9a-fA-F]+.*)?\*/\s*$")
# The decompiler names parameters param_1, local_8, iVar1, uStack_4, ...
PARAM = re.compile(r"\b(?:this|param|local|iVar|uVar|uStack|iStack|puVar|in_|extra)"
                   r"[-_]?[A-Za-z0-9]*\b")
PAREN = re.compile(r"^(?P<head>.*?)\((?P<args>.*)\)$", re.S)
CALLING = ("__cdecl", "__fastcall", "__stdcall", "__thiscall", "_vectorcall")


def normalise(sig):
    """Turn a decompiler signature into a K&R-friendly C prototype."""
    m = PAREN.match(sig.strip())
    if not m:
        return None
    head = m.group("head").strip()
    args = m.group("args").strip()

    # Drop a trailing calling convention; re-apply it in the standard position.
    conv = None
    for c in CALLING:
        if re.search(r"\b%s\b" % c, head):
            conv = c
            head = re.sub(r"\b%s\b" % c, "", head)
            break
    head = head.strip()
    # `noreturn` is a Ghidra flow attribute, not a return type.
    head = re.sub(r"\bnoreturn\b", "", head)
    head = re.sub(r"\s+", " ", head).strip()
    if not head:
        return None
    # __thiscall and _vectorcall are C++-only keywords and will not parse in a
    # .c file. On x86 __thiscall passes `this` in ECX and the first argument in
    # EDX, which is exactly __fastcall's register usage.
    if conv in ("__thiscall", "_vectorcall"):
        conv = "__fastcall"

    # The decompiler sometimes prints `ret conv name` or `ret name`; ensure the
    # name is last.
    parts = head.split()
    name = parts[-1]
    ret = " ".join(parts[:-1]).strip() or "void"
    # `undefined` means the decompiler could not type the return value.
    if ret == "undefined":
        ret = "void"

    if not args or args == "void":
        types = ["void"]
    else:
        types = []
        for a in args.split(","):
            a = PARAM.sub("", a).strip()
            a = re.sub(r"\s+", " ", a)
            a = re.sub(r"\s*\*\s*", " *", a).strip()
            a = strip_param_name(a)
            if a:
                types.append(a)
        if not types:
            types = ["void"]

    return ret, conv or "__cdecl", name, types


# Ghidra sometimes carries the real name from the SDK prototype
# (`PVOID TargetFrame`, `PBYTE pImageBase`), which is not a valid declarator
# for us. Distinguishing `PBYTE pImageBase` (type + name) from `unsigned long`
# (one two-word type) is not possible by shape alone, so consult the set of
# names the SDK actually typedefs.
TRAILING_NAME = re.compile(r"\s+([A-Za-z_][A-Za-z0-9_]*)\s*$")
_SDK = {"known": set()}

# Ghidra's own base type names. These are not SDK typedefs, so they have to be
# listed separately or `ulong _ExceptionNum` cannot be split. C keywords that
# merely modify another type (unsigned, signed, const, struct, ...) are
# deliberately excluded so that `unsigned long` is not truncated to `unsigned`.
GHIDRA_TYPES = {
    "int", "uint", "ulong", "long", "short", "ushort", "char", "uchar",
    "bool", "float", "double", "void", "byte", "word", "dword", "qword",
    "undefined", "undefined2", "undefined4", "undefined8", "code", "string",
    "pointer", "auto", "undefined1", "byte16", "uint32", "uint64", "int32",
    "int64", "int16", "uint16",
}

# Words that only ever appear as part of a larger type, so a preceding unknown
# word is a type and not a variable name.
C_TYPE_KEYWORDS = {
    "long", "int", "char", "double", "void", "short", "unsigned", "signed",
    "float", "_Bool",
}


def set_sdk_types(typedefs):
    _SDK["known"] = set(typedefs) | GHIDRA_TYPES


def strip_param_name(a):
    """Reduce `PBYTE pImageBase` / `void *` to just the type."""
    known = _SDK["known"]
    # Split the pointer stars off first, so that resolving the base type cannot
    # swallow them (`void *` must stay a pointer, not collapse to `void`).
    chunks = a.split("*")
    words, stars = chunks[0].strip(), len(chunks) - 1
    toks = words.split()
    resolved = None
    for k in range(len(toks), 0, -1):
        pref = " ".join(toks[:k])
        if pref in known:
            resolved = pref
            break
    if resolved is None:
        m = TRAILING_NAME.search(words)
        if m:
            name = m.group(1)
            if name[0].isupper() or name.lower().startswith(
                    ("param", "local", "ivar", "uvar", "ustack", "istack",
                     "puvar", "in_", "extra", "this")):
                resolved = words[:m.start()].strip()
    if resolved is None:
        # Strip trailing variable names off the right until the remainder is
        # (a) a plain C keyword like `unsigned int`, (b) a type the SDK knows,
        # or (c) a `struct <tag>` headed type. Ghidra's demangled signatures
        # mix genuine SDK parameter names into the type text (`long _Val a0`),
        # so `long _Val` has to lose `_Val` but `struct tm` has to keep `tm`.
        toks = words.split()
        while len(toks) > 1:
            head, tail = toks[:-1], toks[-1]
            base_join = " ".join(head)
            if toks[0] in ("struct", "union", "enum"):
                break
            if tail in C_TYPE_KEYWORDS:
                break
            if base_join in known:
                break
            toks = head
        resolved = " ".join(toks)
    base = resolved if resolved is not None else words
    return (base + " " + "*" * stars).strip() if stars else base


VALID_NAME = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")
# A C type is made of identifiers, spaces and '*'. Anything else means Ghidra
# emitted something that is not expressible here (an unresolved jump table, a
# C++ template-id, a demangled scope, ...).
VALID_TYPE = re.compile(r"^[A-Za-z_][A-Za-z0-9_ \t\*]*$")
# Tokens that cannot appear in a C type at all.
BAD_TOKENS = (":", "UNRECOVERED", "@", "<", ">", "?", "\\", "...")


def valid_type(t):
    t = t.strip()
    if not t:
        return False
    if any(b in t for b in BAD_TOKENS):
        return False
    return bool(VALID_TYPE.match(t))


def usable(ret, conv, name, types):
    """True if this prototype is expressible as plain C."""
    if not VALID_NAME.match(name):
        return False
    if not valid_type(ret):
        return False
    # `void` is only legal as the sole parameter, and `void` parameters are
    # rendered as the bare list `void`.
    if types != ["void"] and any(t.strip() == "void" for t in types):
        return False
    return all(valid_type(t) for t in types)


def main():
    decomp_dir, out_path = sys.argv[1], sys.argv[2]
    # Remaining arguments are SDK include directories; the names they typedef
    # let us tell a parameter's type from its name.
    if len(sys.argv) > 3:
        import fix_header
        typedefs, _tags, _macros, _fns = fix_header.harvest(sys.argv[3:])
        set_sdk_types(typedefs)
        print("SDK typedef names: %d" % len(typedefs))
    protos = []
    skipped = 0
    for fn in sorted(os.listdir(decomp_dir)):
        if not fn.endswith(".c"):
            continue
        with open(os.path.join(decomp_dir, fn), "r", errors="replace") as fh:
            first = fh.readline()
        m = SIGNATURE.match(first.strip())
        if not m:
            skipped += 1
            continue
        parsed = normalise(m.group(1))
        if parsed and usable(*parsed):
            ret, conv, name, types = parsed
            if types == ["void"]:
                plist = "void"
            else:
                plist = ", ".join("%s a%d" % (t, i)
                                  for i, t in enumerate(types))
            protos.append("%s %s %s(%s)" % (ret, conv, name, plist))
        else:
            skipped += 1

    with open(out_path, "w", encoding="utf-8") as fh:
        fh.write("/* Generated from the decompiled sources. */\n")
        fh.write("#ifndef TH12_PROTOS_H\n#define TH12_PROTOS_H\n")
        for p in protos:
            fh.write(p + ";\n")
        fh.write("#endif\n")
    print("prototypes: %d, skipped: %d" % (len(protos), skipped))


if __name__ == "__main__":
    main()
