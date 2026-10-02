"""Generate the Ghidra type prelude the decompiled corpus needs.

`th12_prelude.h` includes windows.h/d3d9/dinput and the C runtime, but
Ghidra's decompilation names types that none of those declare. It writes
`undefined4` for a 4-byte integer, `code` for a function pointer, `bool` for
a one-byte flag, and it invents names for structures it recovered
(`DNameNode`, `EHExceptionRecord`, `CatchGuardRN`). None of them exist in the
translation unit, so `cl` rejects most of the corpus before it produces
anything:

    C2065  identifier undefined          520 errors in 200 units
    C2440  cannot convert from 'int' to 'undefined4'   797
    C2036  'CatchGuardRN *' : unknown size             206
    C2079  uses undefined struct 'undefined4'          216

Those four are 1739 of 2288 errors, and they are not per-function mistakes -
they are the same missing declarations 200 times. This script writes the
declarations, generated from the corpus rather than guessed, so a type that
appears in new output gets picked up by re-running it.

Two things matter for how a name is declared:

  * `undefined4` and friends must be *complete*, or `*(undefined4 *)(p + n)`
    is C2036 "unknown size" - pointer arithmetic needs a size. A typedef to
    `unsigned int` gives it one.
  * A recovered struct only has to be complete if the code takes its address
    or does arithmetic on a pointer to it. Ghidra emits no member accesses
    through these names, so one dummy byte member is enough, and it is
    honest: the layout is unknown, and any access would be wrong anyway.

Usage: gen_types.py [--out FILE] [--check]
  --check  report what is missing without writing
"""

import argparse
import os
import re
import sys
import collections

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import data_obj as DO
import fix_header

DECOMP = os.path.join(DO.ROOT, "decomp_out")

# The include directories the real translation unit sees. Anything they already
# declare is left alone: `BITMAPINFO` and `WORD` come from windows.h, and
# redefining them here is both wrong and a hard compile error.
INCLUDE_DIRS = [
    os.path.join(DO.ROOT, "tools", "vc9tree", "include"),
    os.path.join(DO.ROOT, "tools", "sdktree", "include"),
    os.path.join(DO.ROOT, "tools", "dxsdk", "DXSDK", "Include"),
]

# Ghidra's scalar type names, mapped to the C type that gives them both the
# right size and completeness. undefinedN is N bytes, unsigned - Ghidra emits
# it for an unknown value and it is almost always used unsigned.
SCALARS = [
    # (ghidra name, number of bits or None, C type)
    ("undefined", 16, "unsigned short"),
    ("undefined1", 8, "unsigned char"),
    ("undefined2", 16, "unsigned short"),
    ("undefined3", 24, None),          # no 3-byte C type; becomes a struct
    ("undefined4", 32, "unsigned int"),
    ("undefined5", 40, None),
    ("undefined6", 48, None),
    ("undefined7", 56, None),
    ("undefined8", 64, "unsigned __int64"),
    ("byte", 8, "unsigned char"),
    ("uchar", 8, "unsigned char"),
    ("sbyte", 8, "char"),
    ("word", 16, "unsigned short"),
    ("sword", 16, "short"),
    ("dword", 32, "unsigned int"),
    ("sdword", 32, "int"),
    ("qword", 64, "unsigned __int64"),
    ("sqword", 64, "__int64"),
    ("uint", 32, "unsigned int"),
    ("sint", 32, "int"),
    ("ulong", 32, "unsigned long"),
    ("ushort", 16, "unsigned short"),
    ("ulonglong", 64, "unsigned __int64"),
    ("ulonglonglong", 64, "unsigned __int64"),
    ("short", 16, "short"),
    ("ushortlong", 32, "unsigned long"),
    ("int", 32, "int"),
    ("int64", 64, "__int64"),
    ("uint64", 64, "unsigned __int64"),
    ("int128", 128, None),
    ("longlong", 64, "__int64"),
    ("float", 32, "float"),
    ("double", 64, "double"),
    ("float10", 80, "long double"),  # x87 80-bit; long double is the closest C type
    ("bool", 8, "unsigned char"),
    ("rsize_t", 32, "size_t"),
    # Ghidra's uppercase and internal spellings, which appear in the corpus
    # alongside the lowercase ones (`BYTE aBStack_110[16]`, not `byte`).
    ("BYTE", 8, "unsigned char"),
    ("WORD", 16, "unsigned short"),
    ("DWORD", 32, "unsigned int"),
    ("CHAR", 8, "char"),
    ("LONG", 32, "long"),
    ("SHORT", 16, "short"),
    ("FLOAT", 32, "float"),
    ("DOUBLE", 64, "double"),
    # MSVC's 12-byte long double as Ghidra spells it in CRT internals.
    ("_LDBL12", 96, None),
    # A C++ exception, reached through a void* by the CRT's type_info code.
    # `type_info` itself is deliberately absent: th12_funcs.h already declares
    # it as a struct with the members the decompilation reads, and a second
    # typedef under that name is C2371.
    ("exception", 8, "unsigned char"),
    # strtod's conversion status. The constants are emitted by th12_crt.h; the
    # type itself is a one-byte return code, so it must be a scalar here or the
    # `IVar1 == INTRNCVT_OVERFLOW` comparisons become C2088, illegal for struct.
    ("INTRNCVT_STATUS", 8, "unsigned char"),
    # Ghidra's own names for the CRT's double and float. Both are used as
    # pointers (`_CRT_DOUBLE *_D`) and as locals that are then cast
    # (`_CRT_DOUBLE local_20; ... (__fltin2)((_CRT_DOUBLE)*param_1, ...)`), so
    # they have to be the real arithmetic types: as opaque structs the cast in
    # the `_cfto*_l` units is C2440 "cannot convert from 'double'".
    ("_CRT_DOUBLE", 64, "double"),
    ("_CRT_FLOAT", 32, "float"),
    ("_LocaleUpdate", 8, "unsigned char"),
    # A three-byte value; no C type has that width, so it is a struct.
    ("uint3", 24, None),
    # Ghidra recovered these as enums/classes, but the decompilation only ever
    # treats them as integer values - `this[4] = (DName)0x3`,
    # `(DNameStatus)param_1`, `(char)TVar3` - and reaches them through pointers.
    # An opaque struct turns every such cast into C2440; the underlying integer
    # does not, and `DName *` still reads as `int *`.
    ("DName", 32, "int"),
    ("DNameStatus", 32, "int"),
    ("Tokens", 32, "int"),
    # MSVC's own 64-bit spelling, used in recovered class constructors.
    ("__uint64", 64, "unsigned __int64"),
    # Ghidra's name for the 80-bit value the x87 stack top holds. The code does
    # arithmetic on it - `(float)in_ST0`, `in_ST0 - (float10)uVar1` - so it has
    # to be a real arithmetic type, not the opaque struct the name suggests.
    ("unkbyte10", 80, "long double"),
]

# Lowercase/underscore type names the decompilation uses as function types.
# An opaque struct placeholder would make a call through them C2064, so they
# get a real function(-pointer) typedef. The full `typedef ... ;` is given
# because the name's position differs between a function type and a pointer.
FUNC_TYPE_TYPEDEFS = [
    ("_PHNDLR", "typedef void (__cdecl *_PHNDLR)(int);"),
    ("_func_int_uint", "typedef int (__cdecl _func_int_uint)(unsigned int);"),
    ("_StartAddress", "typedef unsigned (__stdcall _StartAddress)(void *);"),
]

# Names that must never get the generic opaque-struct placeholder: they are
# declared elsewhere (type_info in th12_funcs.h) or handled above.
OPAQUE_EXCLUDE = {"type_info"} | {n for n, _ in FUNC_TYPE_TYPEDEFS}

# Names the corpus uses that are neither types nor declared anywhere, and that
# no header can supply. Each is emitted verbatim, because each one is a fixed
# piece of Ghidra or MSVC vocabulary rather than something recovered per file.
#
# `true`/`false` are the bulk of it: 197 of the C2065s. A .c file compiled by
# VC9 in C mode has no `bool`, because <stdbool.h> is C99 and this compiler
# predates the switch, and Ghidra emits the keywords regardless.
COMPAT = [
    ("true", "1"),
    ("false", "0"),
    # Ghidra names the x87/SSE control word MXCSR when the code reads it; it is
    # the reserved register 0x175, and there is no portable spelling, so the
    # value is a variable the CRT never actually reads at compile time.
    ("MXCSR", "(*(unsigned int *)0)"),
    # Ghidra's marker for the `int 3` padding instruction, used as a value in
    # switch labels and jump tables.
    ("int3", "0xCC"),
]

# Scalar names that are also standard C and must not be redefined.
NEVER_DEFINE = {
    "int", "char", "short", "long", "float", "double", "void", "signed",
    "unsigned", "size_t", "wchar_t", "uintptr_t", "intptr_t", "uintmax_t",
    "intmax_t", "ptrdiff_t", "FILE", "tm", "va_list", "bool_t",
}

# Anything windows.h / d3d9.h / dinput.h / the CRT already declares is left
# alone. The set is not hand-maintained: harvest_sdk() below asks the compiler,
# via fix_header, which names the real translation unit already has. A name only
# lands in this header when cl has said it is missing, so re-running after an
# SDK change cannot produce a duplicate.

AS_PTR = re.compile(r"\(\s*([A-Za-z_]\w*)\s*\*\s*\)")
DECL = re.compile(r"(?<![*\w.])([A-Z]\w{2,})\s+\*?\w+\s*(?:=|;|\)|,)")
RETFN = re.compile(r"(?<![*\w])([A-Z]\w{2,})\s*\*?\s*__\w+\s+\w+\s*\(")
DECL_LOWER = re.compile(r"(?<![*\w.])([a-z_]\w*)\s+\*?\w+\s*(?:=|;)")
STRUCT = re.compile(r"\b(?:struct|union)\s+([A-Za-z_]\w*)")
# `Local_28.foo` and `param_1->foo` need a real type; a name used with `::`
# is C++ scope, which is a different problem entirely.
SCOPED = re.compile(r"\b(\w+)::(\w+)")

# Calling conventions and other keywords that must never be typedef'd.
KEYWORDS = {
    "__cdecl", "__stdcall", "__thiscall", "__fastcall", "__clrcall", "__cl",
    "const", "static", "inline", "extern", "volatile", "register", "struct",
    "union", "enum", "typedef", "return", "sizeof", "if", "else", "while",
    "for", "do", "switch", "case", "default", "break", "continue", "goto",
}


def harvest():
    """(scalars, structs) actually referenced by the corpus."""
    scalars = collections.Counter()
    structs = collections.Counter()
    lowered = collections.Counter()
    if not os.path.isdir(DECOMP):
        return scalars, structs, lowered
    for fn in sorted(os.listdir(DECOMP)):
        if not fn.endswith(".c"):
            continue
        try:
            t = open(os.path.join(DECOMP, fn), encoding="latin-1").read()
        except OSError:
            continue
        for rx in (AS_PTR, DECL, RETFN):
            for m in rx.finditer(t):
                n = m.group(1)
                (lowered if n[0].islower() else scalars)[n] += 1
        for m in STRUCT.finditer(t):
            structs[m.group(1)] += 1
        for m in DECL_LOWER.finditer(t):
            lowered[m.group(1)] += 1
    return scalars, structs, lowered


def harvest_sdk():
    """Names the real translation unit already declares.

    fix_header already knows how to do this - it probes the SDK with the
    compiler - so reuse it instead of keeping a second, hand-maintained list
    that drifts. Returns (declared_as_typedef, tag_kind) where tag_kind maps
    a bare tag name to the keyword that introduced it ('struct'/'union'/
    'enum'), because the tag keyword must be reproduced exactly when one of
    these names is re-typedefed and struct/union/enum tags share one
    namespace.
    """
    try:
        typedefs, tags, _macros, _funcs = fix_header.harvest(INCLUDE_DIRS)
    except Exception as exc:                       # pragma: no cover
        sys.stderr.write("gen_types: SDK probe failed (%s); "
                         "falling back to no exclusions\n" % exc)
        return set(), {}
    return typedefs, dict(tags)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default=os.path.join(DO.ROOT, "src", "th12_ghidra.h"))
    ap.add_argument("--check", action="store_true")
    args = ap.parse_args()

    scalars, structs, lowered = harvest()
    declared_typedef, declared_tag = harvest_sdk()
    known_scalars = {n for n, _bits, _c in SCALARS}
    out = []
    add = out.append
    add("/* Generated by scripts\\gen_types.py - do not edit by hand.")
    add(" *")
    add(" * Ghidra's decompilation names types that windows.h, d3d9.h, dinput.h and")
    add(" * the CRT do not declare. Every one of them is an error in the")
    add(" * translation unit, and the same handful accounts for most of the")
    add(" * corpus failing to compile:")
    add(" *")
    add(" *   C2065  identifier undefined                       e.g. undefined4")
    add(" *   C2440  cannot convert from 'int' to 'undefined4'")
    add(" *   C2036  'CatchGuardRN *' : unknown size")
    add(" *   C2079  uses undefined struct 'undefined4'")
    add(" *")
    add(" * None of these is a per-function mistake. Declaring the names once,")
    add(" * here, is what makes the difference. Each is given the size Ghidra")
    add(" * implies, because pointer arithmetic and sizeof need one; and a")
    add(" * recovered structure gets a single placeholder byte, since the")
    add(" * decompilation never accesses a member through these names and the")
    add(" * real layout is not known anyway.")
    add(" */")
    add("")
    add("#ifndef TH12_GHIDRA_H")
    add("#define TH12_GHIDRA_H")
    add("")
    add("#include <stddef.h>")
    add("#include <wchar.h>")
    add("")

    # --- scalars ---------------------------------------------------------
    add("/* Ghidra's scalar names. Every one of these is a complete type: that is")
    add(" * what keeps `*(undefined4 *)(p + n)` from being C2036. */")
    # Ghidra's base names are lowercase or start with 'u'/'f', so they land in
    # the `lowered` tally from harvest(), not `scalars`. Check both, and always
    # emit undefinedN: `undefined4` is the single most common type in the corpus
    # and its absence is what produced the bulk of the C2440s.
    used = set(scalars) | set(lowered)
    typedefs = []
    odd = []
    for name, bits, ctype in SCALARS:
        if name in NEVER_DEFINE:
            continue
        if name in declared_typedef or name in declared_tag:
            continue
        # Every Ghidra scalar is emitted unconditionally. Detection-based
        # emission is fragile: the harvester recognises the lowercase spellings
        # but misses `BYTE`/`DWORD` in array and local declarations, and a type
        # that is used in even one unit and missing from here is a hard C2065
        # for that unit. These names are a fixed, known set, the SDK harvest
        # above already excludes anything windows.h or the CRT declares, and an
        # unused typedef costs nothing.
        if ctype is None:
            odd.append((name, bits))
        else:
            typedefs.append((name, ctype))
    for name, ctype in typedefs:
        if name == "bool":
            # `bool` is a keyword in C++, and a typedef of that name is an
            # error there. Guarding it keeps this header usable from a unit
            # that has to be compiled as C++ to get a calling convention right.
            add("#ifndef __cplusplus")
            add("typedef %-16s %s;" % (ctype, name))
            add("#endif")
        else:
            add("typedef %-16s %s;" % (ctype, name))
    add("")
    if odd:
        add("/* No C type has these widths. A struct gives them a size so the")
        add(" * pointer arithmetic stays legal, and nothing in the decompilation")
        add(" * ever reads a member, so the contents do not matter. */")
        for name, bits in odd:
            nbytes = (bits + 7) // 8
            add("typedef struct %s { unsigned char _[%d]; } %s;" % (name, nbytes, name))
        add("")

    # --- recovered structures -------------------------------------------
    # A name is declared here only when the compiler did not already have it.
    # `BITMAPINFO` and `WORD` come from windows.h, `EHExceptionRecord` from the
    # EH headers: defining any of them again is C2371, not a fix.
    names = set()
    # `lowered` carries the lowercase and underscore-led names (the C++ classes
    # Ghidra recovered: `bad_exception`, `pDNameNode`, the `_s_*` EH records).
    # They are reached only through pointers, so the same one-byte placeholder
    # applies; the SDK/hand-header filter keeps anything already declared out.
    for n in list(scalars) + list(structs) + list(lowered):
        if n in known_scalars or n in KEYWORDS or n in NEVER_DEFINE:
            continue
        if n in declared_typedef or n in declared_tag:
            continue
        if n in OPAQUE_EXCLUDE:
            continue
        if re.match(r"^(u?int\d*|float\d*|long|short|char|byte|bool|code|"
                    r"undefined\d*|pointer|ushort|dword|qword|ulong\d*|"
                    r"destructor|operator)$", n):
            continue
        names.add(n)
    if names:
        add("/* Structures Ghidra recovered a name for but no layout for. The")
        add(" * decompilation takes their address and does arithmetic on pointers to")
        add(" * them; it never reads a member, so one placeholder byte is enough to")
        add(" * make the type complete. `_ptiddata`, `_s_FuncInfo` and `_StartAddress`")
        add(" * are real examples; the leading underscore is why the old code's")
        add(" * `name[0].isupper()` test dropped them. `std` is a namespace, not a")
        add(" * C type, so it stays out. */")
        for n in sorted(names):
            if n == "std":
                continue
            add("typedef struct %-28s { unsigned char _; } %s;" % (n, n))
        add("")

    # --- function-type names ----------------------------------------------
    fn_typedefs = [stmt for name, stmt in FUNC_TYPE_TYPEDEFS
                   if name not in known_scalars
                   and name not in declared_typedef
                   and name not in declared_tag]
    if fn_typedefs:
        add("/* Ghidra names the corpus calls through. An opaque struct here")
        add(" * would make the call C2064, so each is a real function typedef. */")
        for stmt in fn_typedefs:
            add(stmt)
        add("")

    # --- tag-only typedefs ------------------------------------------------
    # The SDK declares these as `struct X { ... }` but never a plain typedef,
    # while Ghidra used the bare name as a type. `localeinfo_struct`,
    # `tagRECT`, `tm` and `_ptiddata` are all real examples. Re-typedefing a
    # name the SDK typedefs would be C2371, so this is restricted to tag-only
    # names exactly. The tag keyword comes from the probe: `_EXCEPTION_*
    # DISPOSITION` is an enum, and re-typedefing it as `struct` is C2011
    # because all tags share one namespace.
    tag_only = []
    for n in sorted(used):
        kw = declared_tag.get(n)
        if kw and n not in declared_typedef:
            if re.match(r"^(u?int\d*|float\d*|byte|word|dword|qword|code|"
                        r"undefined\d*|pointer|bool)$", n):
                continue
            if n in NEVER_DEFINE or n in KEYWORDS:
                continue
            tag_only.append((n, kw))
    if tag_only:
        add("/* The SDK declares each of these as a bare tag but no typedef;")
        add(" * Ghidra used the bare name as a type. A self-typedef is only valid")
        add(" * for a tag, and gives the compiler the name it was asked for. */")
        for n, kw in tag_only:
            add("typedef %s %s %s;" % (kw, n, n))
        add("")

    # --- function pointer ------------------------------------------------
    # `code` is Ghidra's "some function pointer", and it has to be usable both
    # as a call target and as a value that is dereferenced and called. Declared
    # as returning void, every unit that keeps an indirect call's result is
    # C2120, "'void' illegal with all types" - 226 errors over 110 files, the
    # largest class in the corpus that is not an undeclared name.
    #
    # Returning int instead of void costs nothing and generates no different
    # code. On x86 the return value is in EAX whatever the type says, and a
    # caller that discards the result never looks at it, so the one declaration
    # covers both "call this and use the answer" and "call this for effect".
    #
    # The type stays a single function pointer. Making `code` itself a pointer to
    # a function pointer, to match the corpus' `(**(code **)(*obj + 0xe4))(args)`
    # spelling, does NOT work: the inner `code_fn()` still has no prototype, and
    # MSVC9 rejects a C99 `(...)` empty-argument list, so an unprototyped call is
    # read as K&R and every arity mismatches ("does not evaluate to a function
    # taking 302 arguments"). The extra level only trades C2100 for C2064.
    if True:
        add("/* Ghidra's name for a function pointer. */")
        add("typedef int (__cdecl *code)();")
        add("")

    # --- names no header can supply ---------------------------------------
    if COMPAT:
        add("/* Names the decompilation uses that no header declares. `true` and")
        add(" * `false` alone are 197 of the corpus' undeclared-identifier errors:")
        add(" * a .c file built by VC9 in C mode has no `bool`, because")
        add(" * <stdbool.h> is C99 and this compiler predates the switch, yet")
        add(" * Ghidra writes the keywords either way. */")
        for name, value in COMPAT:
            add("#ifndef %s" % name)
            add("#define %s %s" % (name, value))
            add("#endif")
        add("")

    add("#endif /* TH12_GHIDRA_H */")
    text = "\n".join(out) + "\n"

    if args.check:
        print("would write %d lines, %d typedefs, %d struct placeholders"
              % (len(out), len(typedefs), len(names)))
        return 0

    with open(args.out, "w", encoding="ascii", newline="\r\n") as fh:
        fh.write(text)
    print("wrote %s (%d lines, %d typedefs, %d struct placeholders)"
          % (args.out, len(out), len(typedefs), len(names)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
