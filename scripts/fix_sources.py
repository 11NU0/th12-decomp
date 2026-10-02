"""Repair the decompiled C in place of a staging tree, then compile that.

Two defects dominate what is left, and both come from Ghidra emitting less in
the definition than it recorded in the comment above it.

**The calling convention is dropped.** The first-line comment is Ghidra's own
record of the signature - `/* undefined __stdcall FUN_00401000(void) ... */` -
and it is what gen_prototypes.py built the header prototype from. The emitted
definition then reads `void FUN_00401000(void)`, with the convention gone. A
prototype and a definition that disagree only in calling convention are
C2373, and 879 of the units have this shape.

    C2373  'FUN_00401000' : redefinition; different type modifiers

This is not only a compile error. `__stdcall` makes the callee pop its
arguments, `__thiscall` passes `this` in ECX; dropping either produces
different code than the original, so the byte comparison would fail even after
the conflict was papered over. Restoring the convention from the comment is
what makes the emitted bytes right.

**C++ scope survives into C.** Ghidra demangles class members, so a definition
reads `void __thiscall DName::append(DName *this, DNameNode *param_1)`, and
some carry an access specifier and a full signature comment:

    private: __thiscall DNameStatusNode::DNameStatusNode(enum DNameStatus)

`::` and a leading `public:` are C++, so these are C2059 and C2143. The class
is not information we need - `this` is already an explicit parameter - so the
scope is flattened to a single C identifier and the specifier dropped.

Output goes to a staging tree rather than over decomp_out/, which stays exactly
as Ghidra wrote it and remains the input every generator reads.

Usage: fix_sources.py [--in DIR] [--out DIR] [--check]
"""

import argparse
import os
import re
import shutil
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "scripts"))

CONVENTIONS = ("__stdcall", "__thiscall", "__fastcall", "__cdecl")

# Ghidra's header comment, which carries the authoritative signature.
HEAD_COMMENT = re.compile(r"^\s*/\*\s*(.*?)\s*\*/")
# A convention token inside that comment.
CONV_IN_COMMENT = re.compile(r"\b(__stdcall|__thiscall|__fastcall|__cdecl)\b")

# The function name is the identifier immediately before the '(' that opens the
# parameter list. Scanning for that rather than the last word handles return
# types that are themselves punctuated, e.g. `undefined4 * __cdecl (*f)(void)`.
DEF_LINE = re.compile(r"^(?P<indent>\s*)(?P<head>.*?)(?P<name>[A-Za-z_]\w*)\s*"
                      r"\((?P<args>.*)\)\s*$")
# The first line of a signature that wraps: like DEF_LINE, but the parameter
# list is still open at end of line (`void FUN_00452a60(int a,`). Used to place
# the calling convention on that line when the definition dropped it.
SIG_START = re.compile(r"^(?P<indent>\s*)(?P<head>.*?)(?P<name>[A-Za-z_]\w*)\s*\(")

# `public:` / `private:` / `protected:` emitted from the demangled signature.
ACCESS = re.compile(r"^\s*(?:public|private|protected)\s*:\s*")

# A call cast to a result type: `(float10)FUN_004938c0(args)`. When the callee
# is one whose decompiled body returns nothing (its result lives in the x87
# stack or eax), the cast is `of void` and fails to compile. Rewriting it as a
# typed indirect call keeps the exact same call and result-ABI while giving
# the expression a real type.
CAST_CALL = re.compile(r"\(\s*(?P<T>[A-Za-z_][A-Za-z0-9_ \t\*]*?)\s*\)"
                       r"\s*(?P<F>[A-Za-z_][A-Za-z0-9_]*)\s*\(")

# The first comment line of each decompiled unit, e.g.
# `/* undefined __fastcall FUN_004938c0(void * piVar6) @ 004938c0  ... */`.
UNIT_SIG = re.compile(r"\A(?P<ret>\S+(?:\s+\S+)*?)\s+"
                      r"(?:(?P<conv>__fastcall|__cdecl|__stdcall|__thiscall)\s+)?"
                      r"(?P<name>[A-Za-z_]\w*)\s*\(")

_CALLEES = None


def callee_map():
    """name -> (conv, returns_nothing) for every decompiled FUN_ unit.

    The signature comment is the source of truth for the calling convention;
    a bare `undefined` or `void` return means the decompiled body leaves its
    result in a register and never spells it out.
    """
    global _CALLEES
    if _CALLEES is not None:
        return _CALLEES
    _CALLEES = {}
    src = os.path.join(ROOT, "decomp_out")
    if os.path.isdir(src):
        for fn in sorted(os.listdir(src)):
            if not fn.endswith(".c"):
                continue
            try:
                with open(os.path.join(src, fn), encoding="latin-1") as fh:
                    first = fh.readline()
            except OSError:
                continue
            m = HEAD_COMMENT.match(first)
            if not m:
                continue
            s = UNIT_SIG.match(m.group(1))
            if not s or not s.group("name").startswith("FUN_"):
                continue
            conv = s.group("conv") or "__cdecl"
            ret = s.group("ret")
            _CALLEES[s.group("name")] = (conv, ret in ("undefined", "void"))
    return _CALLEES


def retype_void_calls(lines, callees):
    """Rewrite `(T)FUN(args)` -> `((T (CONV *)())FUN)(args)` for void-returning
    decompiled callees, so the result of the calls becomes castable C."""
    hit = 0
    for i, line in enumerate(lines):
        for m in CAST_CALL.finditer(line):
            if m.group("T").strip() == "void":
                continue
            info = callees.get(m.group("F"))
            if not info:
                continue
            conv, nothing = info
            if not nothing or conv == "__thiscall":
                continue
            lines[i] = (line[:m.start()]
                        + "(( " + m.group("T").strip() + " (" + conv
                        + " *)())" + m.group("F") + ")(" + line[m.end():])
            hit += 1
            break
    return hit

# C++ trailing return type and constructor bodies, e.g.
# `foo::foo::foo(int) thiscall` appears as `foo(...) thiscall`.
THISCALL_SUFFIX = re.compile(r"\s+(?:thiscall|__thiscall)\s*$", re.I)

# Ghidra emits demangled C++, and the class members reach the body as ordinary
# expressions: `DName::operator+((DName *)&local_28, local_60, '{')`. Flattening
# only the definition left every call site as C2275 "illegal use of this type as
# an expression", C2061, and - because `operator+` is not an identifier at all -
# C2045 "label redefined".
#
# The operator symbol has to become a name as well as the scope, because
# `DName_operator+` is still not a C identifier.
OPERATOR_NAMES = {
    "++": "increment", "--": "decrement", "->*": "member_pointer",
    "==": "equal", "!=": "not_equal", "<=": "le", ">=": "ge",
    "+=": "add_assign", "-=": "sub_assign", "*=": "mul_assign",
    "/=": "div_assign", "%=": "mod_assign", "&=": "and_assign",
    "|=": "or_assign", "^=": "xor_assign", "<<=": "shl_assign",
    ">>=": "shr_assign", "->": "arrow", "&&": "and_and", "||": "or_or",
    "<<": "shl", ">>": "shr", ".*": "dot_star",
    "+": "add", "-": "sub", "*": "mul", "/": "div", "%": "mod",
    "=": "assign", "<": "lt", ">": "gt", "&": "and", "|": "or",
    "^": "xor", "~": "bit_not", "!": "not", ",": "comma",
    "()": "call", "[]": "index", "new": "new", "delete": "delete",
    "new[]": "new_array", "delete[]": "delete_array",
}

# `Class::operator+` or a bare `operator+`, longest symbol first so `++` is
# preferred over `+`.
OPERATOR_USE = re.compile(
    r"(?:(?P<qual>[A-Za-z_]\w*)::)?\boperator\s*"
    r"(?P<sym>\[\]|\(\)|<<=|>>=|->\*|[-+*/%^&|<>=!~]=|<<|>>|&&|\|\||"
    r"\+\+|--|->|[-+*/%^&|<>=!~])")

# Any qualified-or-operator name Ghidra wrote.
QUALIFIED = re.compile(
    r"(?:[A-Za-z_]\w*::)*[A-Za-z_]\w*"
    r"(?:\s*operator\s*(?:\[\]|\(\)|[-+*/%^&|<>=!~]=|<<=?|>>=?|\+\+|--|->|[-+*/%^&|<>=!~]))?")


def operator_forms(text):
    """Every C++ operator use in `text`, as (qualifier, symbol) pairs.

    Ghidra is inconsistent about the same function: the definition of
    `DName::operator+` is emitted bare, as `operator+(...)`, while its body
    calls `DName::operator+(...)`. Both have to become one name or the unit
    will not link with itself, so the caller needs to see both spellings.
    """
    return [(m.group("qual"), m.group("sym"))
            for m in OPERATOR_USE.finditer(text)]


def mangled_name(qual, sym):
    """`('DName', '+')` -> `DName_operator_add`; a bare use gets no prefix."""
    word = OPERATOR_NAMES.get(sym)
    if word is None:
        word = "op_%s" % re.sub(r"\W", "", sym)
    return ("%s_operator_%s" % (qual, word)) if qual else ("operator_%s" % word)


def strip_cpp(body, names):
    """Rewrite C++ that Ghidra's demangler left behind.

    `names` maps each (qualifier, symbol) pair in this file to the single name
    it should become, so a bare definition and its qualified call sites agree.
    Only the scope operator and operator names are touched. Template argument
    lists are left alone: `<` is also a comparison, and guessing wrong there
    would corrupt real code.
    """
    def repl(m):
        key = (m.group("qual"), m.group("sym"))
        if key in names:
            return names[key]
        return mangled_name(*key)
    body = OPERATOR_USE.sub(repl, body)

    # Plain `Class::method` needs no symbol, just the scope collapsed.
    return re.sub(r"([A-Za-z_]\w*)::([A-Za-z_]\w*)", r"\1_\2", body)


# Ghidra writes one stack slot as both a whole value and a set of fields:
#
#     undefined4 local_4;
#     local_4 = 0;
#     local_4._0_1_ = 1;
#     local_4 = CONCAT31(local_4._1_3_,2);
#
# The `_A_B_` members are Ghidra's overlapping-field view of the same four
# bytes, where the name gives the first and last byte offset. Declared as a
# plain `undefined4` the `.` is C2224, "left of '.x' must have struct/union
# type", which is 598 errors over 77 files - the largest class left once the
# undeclared names are gone. Turning the slot into a struct carrying both the
# whole value and its byte fields expresses what Ghidra meant, and both
# spellings then compile.
#
# `named fields` are the Ghidra names that are not `_A_B_`; those come from a
# real struct type the decompilation knew about, so they are kept as an opaque
# member of their own and are not reinterpreted.
SLOT_FIELD = re.compile(r"\b(?P<name>(?:local_[0-9a-fA-F]+|DAT_[0-9a-fA-F]+|"
                        r"_DAT_[0-9a-fA-F]+|param_\d+|in_\w+|uStack_\w+|"
                        r"[a-zA-Z]+Stack_\w+))(\.(?P<field>[A-Za-z_]\w*))")
SLOT_BYTES = re.compile(r"^_(\d+)_(\d+)_$")

# Stack and register slots Ghidra occasionally references without declaring a
# local for them (`stack0xfffffffc`), and its own markers for values entering
# through a register (`in_ST0`, `extraout_AL`). A plain declaration at the top
# of the function makes the name legal; the value it holds is still the stack
# slot's, so the codegen either matches the original or fails the exact gate.
SLOT_NAME = re.compile(
    r"\b(stack0x[0-9a-fA-F]+|extraout_[A-Za-z_][A-Za-z0-9_]*|"
    r"in_[A-Za-z_][A-Za-z0-9_]*)\b")
DECL_OF_SLOT = re.compile(
    r"^\s*(?:[A-Za-z_][A-Za-z0-9_]*[\w\s\*]*?)\b"
    r"(stack0x[0-9a-fA-F]+|extraout_[A-Za-z_][A-Za-z0-9_]*|"
    r"in_[A-Za-z_][A-Za-z0-9_]*)\b\s*(?:\[[^\[\]]*\])?\s*;")


def undeclared_slot_decls(lines, idx):
    """['undefined4 NAME;'] for slots referenced but never declared."""
    declared = set()
    used = set()
    in_comment = False
    for i, line in enumerate(lines):
        stripped = line.strip()
        if in_comment:
            if "*/" in stripped:
                in_comment = False
            continue
        if stripped.startswith("/*"):
            if "*/" not in stripped:
                in_comment = True
            continue
        if not stripped or stripped.startswith(("*", "//", "#")):
            continue
        # Anything that appears up to and inside the signature line is a
        # parameter, hence declared.
        for m in SLOT_NAME.finditer(line):
            (declared if i <= idx else used).add(m.group(1))
        if i > idx:
            for m in DECL_OF_SLOT.finditer(line):
                declared.add(m.group(1))
    out = []
    for n in sorted(used - declared):
        # A DATA/global or function name is never a slot; these markers are
        # unique to untyped stack and register positions.
        out.append("undefined4 %s;" % n)
    return out


def slot_fields(lines):
    """{local: [field, ...]} for every stack slot used with a member access."""
    uses = {}
    for line in lines:
        s = line.strip()
        if not s or s.startswith(("/*", "*", "//", "#")):
            continue
        for m in SLOT_FIELD.finditer(s):
            f = m.group("field")
            # `x` is the real `double` member of VC9's `_CRT_DOUBLE`, not a
            # Ghidra-invented offset label, so it must not be shimmed into the
            # `undefined4` slot struct. The double-half accesses on it are
            # rejoined to plain `v.x` before this pass runs.
            if f == "x":
                continue
            uses.setdefault(m.group("name"), [])
            if f not in uses[m.group("name")]:
                uses[m.group("name")].append(f)
    return uses


# Fields whose real types we now have from the recovered VS2008 <crtdefs.h>.
# Ghidra named these members but knew no struct for them, so they used to be
# emitted as `undefined4`; that makes every `->`-chain through them an illegal
# indirection (C2100) even though the offset is right. Typing them properly
# keeps the offset identical and lets the access compile.
SLOT_FIELD_TYPE = {
    "locinfo": "pthreadlocinfo",
    "mbcinfo": "pthreadmbcinfo",
    "ptmbcinfo": "pthreadmbcinfo",
    "ptlocinfo": "pthreadlocinfo",
}


def slot_declaration(name, fields):
    """A struct declaration giving `name` Ghidra's overlapping byte fields.

    C will not assign to a member reached through a cast pointer (C2106, left
    operand must be l-value) and will not assign a scalar to a struct at all
    (C2440), so the slot cannot simply become a union. Instead the slot keeps
    its original scalar type, a struct of the overlapping views is declared
    beside it, and each member use reads through a named l-value of that
    struct type. Naming it, rather than casting, is what makes the assignment
    legal in C89 - and leaving the whole-slot spelling alone is what keeps the
    generated bytes identical to the original.
    """
    parts = []
    for f in fields:
        m = SLOT_BYTES.match(f)
        if m:
            # `_A_B_` names the byte range A..B, but the way Ghidra writes it
            # (`local_4._0_1_ = 1`) assigns one value to the low byte of the
            # range, so the member has to be a scalar. An array here is
            # C2106, "left operand must be l-value", and no union or struct
            # spelling avoids it - the name is a single byte at offset A.
            parts.append("undefined1 %s;" % f)
        else:
            # A real field name from a type we do not have. Its width is a
            # guess either way; the splice comparison is what settles it -
            # unless the name is one of the CRT members recovered above, which
            # has a known type and so is not a guess.
            real = SLOT_FIELD_TYPE.get(f)
            parts.append("%s %s;" % (real, f) if real
                         else "undefined4 %s;" % f)
    return "typedef struct %s__u { undefined4 _; %s } %s__u;" % (
        name, " ".join(parts), name)


SLOT_DECL = re.compile(
    r"^(?P<indent>\s*)(?P<type>[\w ]+?)\s*(?P<name>local_[0-9a-fA-F]+)\s*"
    r"(?P<array>(?:\[\s*\d+\s*\])?)\s*;\s*$")


def split_comment_and_code(text):
    """(first-line comment, everything after it).

    The newline that ends the comment is dropped. Keeping it would make the
    first element of `code.split("\\n")` an empty string, and rejoining with
    `"\\n".join(lines)` would then put a blank line back that was never in the
    input - so every repaired file would gain one, and running the script twice
    would not be a fixed point.
    """
    nl = text.find("\n")
    if nl < 0:
        return text, ""
    return text[:nl], text[nl + 1:]


def find_definition(code):
    """Line index of the function definition, or None.

    The definition is the first line that ends in ')' and is not part of a
    comment, an #include, or a type declaration. `gen_prototypes.py` reads the
    comment for the same reason: the emitted definition is not reliably
    parseable on its own.

    A signature can wrap across lines - Ghidra emits the parameter list on its
    own line, and a trailing line like `localeinfo_struct *param_6)` carries
    the closing paren with no opening one. So the scan tracks paren depth
    instead of requiring both parens on one line: the definition is the first
    line at which the signature's parentheses balance, at depth zero.
    """
    in_block = False
    depth = 0
    for i, raw in enumerate(code.split("\n")):
        s = raw.strip()
        if in_block:
            if "*/" in s:
                in_block = False
            continue
        if s.startswith("/*"):
            if "*/" not in s:
                in_block = True
            continue
        if s.startswith(("#include", "#define", "#if", "#endif",
                         "#pragma", "//", "*", "}", "{")):
            continue
        if not s:
            continue
        prev_depth = depth
        depth += s.count("(") - s.count(")")
        if depth < 0:
            depth = 0          # a call's closing paren; not a signature
        # A signature is a statement that has never been terminated, so once a
        # `;` closes at depth zero the depth is back to a statement boundary and
        # anything after it is body code, not the definition.
        if s.endswith(";") and depth <= 0:
            depth = 0
            continue
        if s.endswith(")") and depth == 0 and (prev_depth > 0 or "(" in s):
            return i
    return None


def flatten_scope(line, names=None):
    """Flatten a definition's C++ scope.

    Drops an access specifier and a trailing `thiscall` spelling, both of which
    are artifacts of the demangler, and collapses `Class::method`. `names`, when
    given, is the per-file operator map so an overloaded operator keeps the
    same name as its call sites.
    """
    line = ACCESS.sub("", line)
    line = THISCALL_SUFFIX.sub("", line)
    if "::" in line or "operator" in line:
        line = strip_cpp(line, names or {})
    return line


LAB_ADDR = re.compile(r"&LAB_([0-9a-fA-F]+)\b")

# Ghidra prints `*(T *)(base + n)` to mean "the T at byte offset n from the
# address stored in base". It writes that `n` as a raw byte offset, not an
# element index, but only about half the time does it spell the cast itself -
# some lines read `*(int *)((int)DAT_004b44e8 + 0x74)` and others read
# `*(int *)(DAT_004b44f4 + 0x46c)`. Both denote the same access. Translating
# the second form verbatim makes the compiler scale n by the width of `base`,
# so a 4-byte-wide base turns offset 0x18 into 0x60: still a legal dereference,
# still compiles, but the wrong address. Adding the `(int)` cast Ghidra
# omitted is what makes both spellings agree.
BYTE_OFFSET = re.compile(
    r"\(\s*(?P<type>[A-Za-z_]\w*\s*\*+?)\s*\)\s*"
    r"\(\s*(?P<base>[A-Za-z_]\w*)\s*\+\s*(?P<off>0x[0-9A-Fa-f]+|\d+)\s*\)")

# `&DAT_x + i * 0x40` is the same byte-offset arithmetic written with `&`. The
# stride in such a product is already a byte count - Ghidra emits it from the
# size of the record it is stepping over - so the base has to be a byte pointer
# too. Left as `&DAT_x` it inherits whatever width gen_globals guessed for the
# datum and the compiler scales the product again: FUN_004217e0 wanted
# `shl eax,6` for `* 0x40` and emitted `shl eax,8` for `* 0x100`. Casting the
# base to `(char *)` pins the arithmetic to bytes and is safe whichever way the
# original expression was meant, because a product with an explicit stride is
# already scaled.
ARRAY_STRIDE = re.compile(
    r"&\s*(?P<name>_?(?:DAT|PTR|UNK)_[0-9A-Fa-f]{8})\s*\+\s*"
    r"(?P<idx>[A-Za-z_]\w*)\s*\*\s*(?P<stride>0x[0-9A-Fa-f]+|\d+)")


def repair(text):
    """Return (repaired text, notes)."""
    notes = []
    comment, code = split_comment_and_code(text)

    # Ghidra spells the address of a code label as `&LAB_0042e9b0`. A C label
    # is not an object, so taking its address is not valid C; the hex suffix is
    # the address, so the reference becomes a pointer constant. Bare `LAB_x`
    # is left alone: those are `goto` targets and label definitions, which share
    # no namespace with identifiers.
    code, n_lab = LAB_ADDR.subn(r"((void *)0x\1)", code)
    if n_lab:
        notes.append("resolved %d code-label address(es)" % n_lab)

    code, n_off = BYTE_OFFSET.subn(
        lambda m: "(%s)((int)%s + %s)" % (m.group("type").rstrip(),
                                          m.group("base"), m.group("off")),
        code)
    if n_off:
        notes.append("pinned %d byte-offset access(es) to a byte offset" % n_off)

    code, n_str = ARRAY_STRIDE.subn(
        lambda m: "((char *)&%s + %s * %s)"
                  % (m.group("name"), m.group("idx"), m.group("stride")),
        code)
    if n_str:
        notes.append("byte-scaled %d array stride(s)" % n_str)

    # Ghidra spells a thiscall method's first member `*this`, but every such
    # method reaches us with `this` typed `void *` (the __thiscall -> __fastcall
    # rewrite keeps the parameter, not the class). Dereferencing `void *` is C2100
    # "illegal indirection", and it is the single largest error class left: 216
    # sites, all of the form `*this + param * 0.5`, `param + *this`, or
    # `*(int *)((int)this + 4) != *this`.
    #
    # The `void *this` parameter in the signature is left alone by the lookbehind,
    # and an already-cast `*(T *)this` does not match, so this only ever rewrites
    # a dereference that currently fails to compile - it cannot cost a unit that
    # builds today. MEMBER is the width to read the first member at; the corpus's
    # dominant use is float coordinate math, and the byte comparison decides it.
    MEMBER = "float"
    code, n_this = re.subn(r"(?<!void )\*this\b", "*(%s *)this" % MEMBER, code)
    if n_this:
        notes.append("typed %d bare *this member read(s) as %s" % (n_this, MEMBER))
    m = HEAD_COMMENT.match(comment)
    want = None
    if m:
        c = CONV_IN_COMMENT.search(m.group(1))
        if c:
            want = c.group(1)

    lines = code.split("\n")
    idx = find_definition(code)
    if idx is None:
        return text, ["no definition found"]

    # Ghidra has no 4-byte name for the halves of a `double`, so it splits the
    # `double x` member of `_CRT_DOUBLE` into `v.x._0_4_` (low dword) and
    # `v.x._4_4_` (high dword). Those halves are just `v.x`, so the pair of
    # half-writes is `v.x = 0;` and the pair of half-stores into a `double`
    # destination is one whole `double` store - the same 8 bytes in the same
    # order, which is what `fstpl`/`movsd` emit. This runs before the slot-alias
    # pass so the fabricated `x` sub-field is never modelled.
    #   v.x._0_4_ = 0;  v.x._4_4_ = 0;                    ->  v.x = 0;
    #   *(u4 *)&D = v.x._0_4_;  *(u4 *)(D+4) = v.x._4_4_;  ->  D = v.x;
    ZERO_RX = re.compile(
        r"^(\s*)([A-Za-z_]\w*)\.x\._0_4_\s*=\s*0;\s*$")
    ZERO_HI_RX = re.compile(
        r"^(\s*)([A-Za-z_]\w*)\.x\._4_4_\s*=\s*0;\s*$")
    STORE_LO_RX = re.compile(
        r"^(\s*)\*\(undefined4 \*\)\s*&\s*"
        r"([A-Za-z_]\w*(?:\s*->\s*[A-Za-z_]\w*)?)\s*=\s*"
        r"([A-Za-z_]\w*)\.x\._0_4_\s*;\s*$")
    STORE_HI_RX = re.compile(
        r"^(\s*)\*\(undefined4 \*\)\s*\(\s*\(int\)\s*&\s*"
        r"([A-Za-z_]\w*(?:\s*->\s*[A-Za-z_]\w*)?)\s*\+\s*4\s*\)\s*=\s*"
        r"([A-Za-z_]\w*)\.x\._4_4_\s*;\s*$")
    n_double = 0
    i = 0
    while i < len(lines) - 1:
        mz, mzh = ZERO_RX.match(lines[i]), ZERO_HI_RX.match(lines[i + 1])
        if mz and mzh and mz.group(2) == mzh.group(2):
            lines[i:i + 2] = ["%s%s.x = 0;" % (mz.group(1), mz.group(2))]
            n_double += 1
            i += 1
            continue
        ml, mh = STORE_LO_RX.match(lines[i]), STORE_HI_RX.match(lines[i + 1])
        if ml and mh and ml.group(2) == mh.group(2) and ml.group(3) == mh.group(3):
            lines[i:i + 2] = ["%s%s = %s.x;" % (ml.group(1), ml.group(2),
                                                ml.group(3))]
            n_double += 1
            i += 1
            continue
        i += 1
    if n_double:
        notes.append("rejoined %d split double write(s)" % n_double)

    # Ghidra writes `(_CRT_DOUBLE)expr` where `expr` is already the 8-byte
    # `double` that VC9's `struct _CRT_DOUBLE { double x; }` wraps. A cast
    # between the struct and its sole `double` member does not exist, so spell
    # it as the dereference of a `_CRT_DOUBLE *`, which passes the same 8 bytes
    # by value.
    CAST_RX = re.compile(r"\(_CRT_DOUBLE\)\s*\*\s*([A-Za-z_]\w*)")
    n_cast = 0
    for i, line in enumerate(lines[idx:], start=idx):
        if "(_CRT_DOUBLE)" not in line:
            continue
        new = CAST_RX.sub(lambda mm: "*(_CRT_DOUBLE *)%s" % mm.group(1), line)
        if new != line:
            lines[i] = new
            n_cast += 1
    if n_cast:
        notes.append("fixed %d _CRT_DOUBLE value cast(s)" % n_cast)

    # The same C++ appears in the body, as calls into the class this unit is a
    # member of. One name per operator, chosen from the qualified spelling when
    # the file has one, so the definition and its call sites cannot disagree.
    # This has to be built before the definition is rewritten, because the
    # definition is usually the *bare* spelling of an operator its body calls
    # by its qualified one.
    forms = operator_forms(text)
    names = {}
    for qual, sym in forms:
        if qual and (qual, sym) not in names:
            names[(qual, sym)] = mangled_name(qual, sym)
            names.setdefault((None, sym), mangled_name(qual, sym))
    for qual, sym in forms:
        names.setdefault((qual, sym), mangled_name(qual, sym))

    before = lines[idx]
    fixed = flatten_scope(before, names)
    if fixed != before:
        notes.append("flattened C++ scope")
        before = fixed
        lines[idx] = before

    # Ghidra splits a long signature: the return type and calling convention go
    # on one line and the parameter list starts the next. `find_definition`
    # returns the parameter list, so the convention already spelled on the
    # return-type line has to be seen as present - inserting it again here
    # yields `void __cdecl` followed by `__cdecl name(...)`, and the whole
    # signature is C2440 rather than a definition.
    if want and want not in before:
        # The signature can wrap over several lines, and the convention may be
        # spelled on any of them: Ghidra puts it with the return type
        # (`int __cdecl` / `_expandtime(...`), or drops it entirely
        # (`void FUN_00452a60(int a,` / `...args)`). Walk back from the
        # closing-paren line - stopping at a blank line or the body - to get the
        # whole signature, then only insert if no line already carries it.
        start = idx
        j = idx - 1
        while j >= 0:
            t = lines[j].strip()
            if not t or t.startswith(("{", "/*", "#", "}")):
                break
            start = j
            j -= 1
        sig = lines[start:idx + 1]
        if any(re.search(r"\b%s\b" % re.escape(want), ln) for ln in sig):
            notes.append("kept %s from the wrapped signature" % want)
        else:
            placed = False
            # The function name is the last signature line that opens a
            # parameter list, so search from the end.
            for k in range(len(sig) - 1, -1, -1):
                m3 = SIG_START.match(sig[k])
                if m3:
                    sig[k] = (m3.group("indent") + m3.group("head")
                              + want + " " + m3.group("name") + "("
                              + sig[k][m3.end():])
                    notes.append("restored %s" % want)
                    placed = True
                    break
            if not placed:
                notes.append("could not place %s" % want)
        lines[start:idx + 1] = sig

    # `__thiscall` is C++-only; compiled as C it is a C2061 syntax error. Its
    # ABI is the first argument in ecx, which is exactly `__fastcall`'s, so the
    # definition keeps its register-based `this` while gaining a C grammar.
    defline = lines[idx]
    if "__thiscall" in defline:
        defline = re.sub(r"\b__thiscall\b", "__fastcall", defline)
        if defline != lines[idx]:
            lines[idx] = defline
            notes.append("C++-mode __thiscall -> __fastcall")

    touched = False
    for i, line in enumerate(lines):
        if "::" in line or "operator" in line:
            new = strip_cpp(line, names)
            if new != line:
                lines[i] = new
                touched = True

    # Casting the result of a decompiled unit that never returns a value
    # (`undefined`/`void` return) is a cast of `void`: C2069. Give such calls a
    # typed function-pointer prototype so the casts are legitimate C.
    n_vc = retype_void_calls(lines, callee_map())
    if n_vc:
        touched = True
        notes.append("retyped %d void-%s call(s)" % (n_vc, "return"))

    # Ghidra's NaN predicate call spellings become the macro we added, which
    # keeps the `fcom` sequence the original used.
    n_nan = 0
    for i, line in enumerate(lines):
        if not re.search(r"(?<!\w)NAN\(", line):
            continue
        lines[i] = re.sub(r"(?<!\w)NAN\(", "NANP(", line)
        n_nan += 1
    if n_nan:
        touched = True
        notes.append("turned %d NAN() call(s) into the NANP predicate" % n_nan)

    # Ghidra's recovered model of the msvcr90 `threadlocaleinfostruct` reached
    # the right offsets under its own names, which the real VS2008 <crtdefs.h>
    # struct does not have. Each spelling below is the dword at a known offset
    # of the real struct, so naming the real member reproduces the identical
    # byte offset and the generated code is unchanged:
    #
    #   ->locale_name[3]                0xAC  mb_cur_max
    #   ->locale_name[4]                0xB0  lconv_intl_refcount
    #   ->locale_name[5]                0xB4  lconv_num_refcount
    #   X[1].lc_category[0].locale       0xC8  pctype
    #   X[1].lc_category[0].wlocale      0xCC  (pctype as unsigned short *)
    #
    # The `[1]` array index is Ghidra's way of reaching the block past the
    # (truncated) category array it modelled; on the real struct it is simply
    # the pctype table. Only the `pctype` spelling is rewritten, because that
    # is the one the corpus reads (`_SPACE`-style classification tables).
    LOCALE_REWRITES = [
        (re.compile(r"(->|\.)locale_name\[3\]"), r"\1mb_cur_max"),
        (re.compile(r"(->|\.)locale_name\[4\]"), r"\1lconv_intl_refcount"),
        (re.compile(r"(->|\.)locale_name\[5\]"), r"\1lconv_num_refcount"),
    ]
    n_locale = 0
    for rx, sub in LOCALE_REWRITES:
        for i, line in enumerate(lines):
            new = rx.sub(sub, line)
            if new != line:
                lines[i] = new
                n_locale += 1
    # `ptVar[1].lc_category[0].locale` -> `ptVar->pctype`
    PCTYPE_RX = re.compile(
        r"\b([A-Za-z_]\w*)\[1\]\.lc_category\[0\]\.locale\b")
    n_pctype = 0
    for i, line in enumerate(lines):
        new = PCTYPE_RX.sub(lambda m: "%s->pctype" % m.group(1), line)
        if new != line:
            lines[i] = new
            n_pctype += 1
    if n_locale or n_pctype:
        touched = True
        if n_locale:
            notes.append("renamed %d locale_name[] slot(s) to real members"
                         % n_locale)
        if n_pctype:
            notes.append("renamed %d lc_category[0].locale to pctype"
                         % n_pctype)

    # `pctype` is a `const unsigned short *`, which is the same type as
    # `lc_category[0].wlocale`, so Ghidra spells reads of that same table as
    # `X[1].lc_category[0].wlocale`. It is the identical dword as the `.locale`
    # form above, so it maps to the same member.
    WLOCALE_RX = re.compile(
        r"\b([A-Za-z_]\w*)\[1\]\.lc_category\[0\]\.wlocale\b")
    n_wlocale = 0
    for i, line in enumerate(lines):
        new = WLOCALE_RX.sub(lambda m: "%s->pctype" % m.group(1), line)
        if new != line:
            lines[i] = new
            n_wlocale += 1
    if n_wlocale:
        touched = True
        notes.append("renamed %d lc_category[0].wlocale to pctype" % n_wlocale)

    # `__init_ctype` reaches the ctype table pointer and its reference count as
    # `_LocInfo[1].lc_time_cp` / `_LocInfo[1].lc_collate_cp`. `lc_time_cp` is
    # not a real member at all, and `[1]` is a spurious index - the disassembly
    # stores the pair at `[esi+0xC4]`/`[esi+0xC0]`, i.e. `->ctype1` and
    # `->ctype1_refcount` on the parameter itself, matching the recovered
    # `__init_ctype` source. Rewriting both clears the C2039 and lands the
    # accesses on the offsets the original used.
    CYPE_TABLE_RX = re.compile(
        r"\b([A-Za-z_]\w*)\[1\]\.lc_time_cp\b")
    CYPE_REF_RX = re.compile(
        r"\b([A-Za-z_]\w*)\[1\]\.lc_collate_cp\b")
    n_ctype = 0
    for i, line in enumerate(lines):
        if "lc_time_cp" not in line and "lc_collate_cp" not in line:
            continue
        new = CYPE_TABLE_RX.sub(lambda m: "%s->ctype1" % m.group(1), line)
        new = CYPE_REF_RX.sub(lambda m: "%s->ctype1_refcount" % m.group(1), new)
        if new != line:
            lines[i] = new
            n_ctype += 1
    if n_ctype:
        touched = True
        notes.append("mapped %d [1].lc_*_cp to ctype1/ctype1_refcount" % n_ctype)

    # Ghidra's own name for `_setloc_struct::iLcidState` is `iLocState`. Both
    # spell the single dword that holds the locale id state, so the rename is
    # offset-preserving and makes the member resolve against the recovered
    # `_setloc_struct` instead of failing as an unknown member (C2039).
    n_locstate = 0
    for i, line in enumerate(lines):
        if "iLocState" not in line:
            continue
        new = line.replace("iLocState", "iLcidState")
        if new != line:
            lines[i] = new
            n_locstate += 1
    if n_locstate:
        touched = True
        notes.append("renamed %d iLocState to iLcidState" % n_locstate)

    # Ghidra spells the float scratch flag member `flags` on `FLT` (__fltin2)
    # and `flag` on `STRFLT` (__fltout2), but it is the same dword in both,
    # at +0x00 in `FLT` and +0x08 in `STRFLT`. The recovered definitions use
    # `flags` for both, so the one-off spelling is unified onto it; this only
    # changes a member name, never the offset.
    n_flag = 0
    for i, line in enumerate(lines):
        if "->flag" not in line:
            continue
        new = re.sub(r"->flag\b(?!s)", "->flags", line)
        if new != line:
            lines[i] = new
            n_flag += 1
    if n_flag:
        touched = True
        notes.append("unified %d ->flag to ->flags" % n_flag)

    # Ghidra models a 16-bit slot it can also write one byte at a time as
    # `NAME._0_1_`, where `_0_1_` names the byte range 0..1 - i.e. the whole
    # scalar. For a name that already has a struct (the `__u` slots above)
    # that spelling is meaningful; for a plain scalar, such as a register
    # parameter that Ghidra calls `_C`, there is no struct to take a member
    # of (C2224) and the byte range covers the entire value, so the whole-slot
    # spelling is the same assignment. This runs after `uses` is known, so that
    # a slot which does carry a generated `__u` struct keeps its field spelling.
    # A stack slot used both whole and by field gets a struct carrying Ghidra's
    # overlapping byte views. The typedef has to sit above the function, since
    # C will not take a declaration between statements, and the alias the member
    # uses go through has to be a local, since C89 will not assign through a
    # cast. If the opening brace cannot be found there is nowhere legal to put
    # either, and rewriting the uses anyway would leave the type undeclared, so
    # the whole file is left alone.
    uses = slot_fields(lines)

    # Names that already carry a generated `__u` struct keep their field
    # spelling; only a plain scalar gets the whole-slot rewrite.
    struct_slots = set(uses)
    struct_slots |= set(SLOT_NAME.findall("\n".join(lines)))
    SUBBYTE_RX = re.compile(r"\b([A-Za-z_]\w*)\.(_([0-9]+)_([0-9]+)_)\b")
    n_sub = 0
    for i, line in enumerate(lines):
        new = line
        for m in list(SUBBYTE_RX.finditer(line)):
            base, lo, hi = m.group(1), int(m.group(3)), int(m.group(4))
            if lo == 0 and hi + 1 in (1, 2, 3, 4) \
                    and base not in struct_slots \
                    and base + "__u" not in struct_slots:
                new = new.replace(m.group(0), base)
        if new != line:
            lines[i] = new
            n_sub += 1
    if n_sub:
        touched = True
        notes.append("collapsed %d full-width _A_B_ slot field(s)" % n_sub)
    brace = idx
    while brace < len(lines) and lines[brace].strip() != "{":
        brace += 1
    slot_decls = []
    if brace >= len(lines):
        uses = {}
        notes.append("no opening brace for the stack slot fields")
    else:
        slot_decls = undeclared_slot_decls(lines, idx)
    if uses:
        typedefs = []
        decls = []
        for name, fields in sorted(uses.items()):
            typedefs.append(slot_declaration(name, fields))
            # A *read* of one of the slot's members is just a pointer offset, so
            # it can be spelled inline as `((u *)&slot)->field`. Only an
            # *assignment* needs a real l-value, because C89 will not assign
            # through a cast (C2106); those get a named alias declared in the
            # prologue and assigned by its own statement above the use. Doing
            # it this way keeps the common read-only case from inserting a
            # statement, which used to land in the middle of a multi-line call
            # and split it into two unparseable lines (C2143/C2198).
            rx = re.compile(r"\b%s(\.[A-Za-z_]\w*)" % re.escape(name))
            utype, uvar = name + "__u", name + "__u_alias"
            needs_alias = False
            for i, line in enumerate(lines):
                if name not in line:
                    continue
                if rx.search(line) is None:
                    continue
                m = rx.search(line)
                # Assignment target? The member access has to be the whole
                # left-hand operand for this to be a write.
                lhs = line[:m.start()].rstrip()
                write = lhs.endswith("=") and not lhs.endswith("==") \
                    and not lhs.endswith("!=") and not lhs.endswith("<=") \
                    and not lhs.endswith(">=")
                if write:
                    needs_alias = True
                    new = rx.sub(lambda mm: "%s->%s" % (uvar, mm.group(1)[1:]),
                                 line)
                    lines[i] = new
                    lines.insert(i, "  %s = (%s *)&%s;" % (uvar, utype, name))
                    touched = True
                else:
                    new = rx.sub(
                        lambda mm: "((%s *)&%s)->%s" % (utype, name,
                                                          mm.group(1)[1:]),
                        line)
                    if new != line:
                        lines[i] = new
                        touched = True
            if needs_alias:
                decls.append("%s *%s;" % (utype, uvar))
        # Typedefs go above the function; inserting them shifts the opening
        # brace down by one each, so recompute `brace` before anything else
        # is placed next to it. `idx` is the line carrying the parameter list,
        # which for a split signature is only its second half - Ghidra puts
        # the return type and calling convention on their own line - so walk up
        # over those to reach the first line of the declaration. Inserting at
        # `idx` would land the typedef between `__cdecl` and the function name
        # and make the whole signature a syntax error (C2059 '<class-head>').
        decl_start = idx
        # Walk up while the accumulated text still has unbalanced parentheses,
        # so a signature that wrapped across several lines is taken in as a
        # whole and the typedef lands above the return type rather than between
        # two halves of the parameter list.
        bal = 0
        j = idx
        while j >= 0:
            bal += lines[j].count(")") - lines[j].count("(")
            if bal > 0:
                decl_start = j
                j -= 1
            else:
                break
        while decl_start > 0:
            prev = lines[decl_start - 1].strip()
            if (not prev or prev.endswith(";") or prev.endswith("{")
                    or prev.startswith(("typedef", "static", "extern"))):
                break
            decl_start -= 1
        for off, td in enumerate(reversed(typedefs)):
            lines.insert(decl_start + off, td)
        brace += len(typedefs)
        for off, d in enumerate(reversed(decls)):
            lines.insert(brace + 1 + len(slot_decls) + off, "  " + d)
        touched = True
        notes.append("gave %d stack slot(s) their overlapping fields"
                     % len(uses))

    # Undeclared stack/register slots go just after the opening brace; the
    # overlapping-field aliases, when present, have been inserted above them.
    if slot_decls:
        for off, d in enumerate(reversed(slot_decls)):
            lines.insert(brace + 1 + off, "  " + d)
        touched = True
        notes.append("declared %d stack/register slot(s)"
                     % len(slot_decls))

    out = comment + "\n" + "\n".join(lines)
    if out == text:
        return text, notes
    if touched and not any(n.startswith("gave") for n in notes):
        notes.append("stripped C++ scope")
    return out, notes


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--in", dest="src",
                    default=os.path.join(ROOT, "decomp_out"))
    ap.add_argument("--out", dest="dst",
                    default=os.path.join(ROOT, "src", "fixed"))
    ap.add_argument("--check", action="store_true")
    args = ap.parse_args()

    if not os.path.isdir(args.src):
        sys.stderr.write("fix_sources: no such directory: %s\n" % args.src)
        return 1

    files = sorted(f for f in os.listdir(args.src) if f.endswith(".c"))
    conv = scoped = other = unchanged = 0
    if not args.check:
        os.makedirs(args.dst, exist_ok=True)

    for fn in files:
        path = os.path.join(args.src, fn)
        with open(path, encoding="latin-1") as fh:
            text = fh.read()
        out, notes = repair(text)
        for n in notes:
            if n.startswith("restored"):
                conv += 1
            elif n.startswith("flattened"):
                scoped += 1
            else:
                other += 1
        if out == text:
            unchanged += 1
        if not args.check:
            with open(os.path.join(args.dst, fn), "w",
                      encoding="latin-1", newline="") as fh:
                fh.write(out)

    print("units          : %d" % len(files))
    print("convention fixed: %d" % conv)
    print("C++ scope fixed: %d" % scoped)
    print("unhandled      : %d" % other)
    print("unchanged      : %d" % unchanged)
    if args.check:
        print("(check mode: nothing written)")
    else:
        print("wrote %s" % args.dst)
    return 0


if __name__ == "__main__":
    sys.exit(main())
