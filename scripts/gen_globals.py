"""Generate `extern` declarations for the globals the decompilation references.

Ghidra names an unknown datum after its address - `DAT_004b43cc` is the value
at 0x004b43cc - and emits no declaration for it. Nothing in the translation
unit defines those names, so every unit that touches one is rejected:

    C2065  'DAT_004ce8f0' : undeclared identifier

That is 524 of the 934 remaining diagnostics, and it is not a per-function
mistake: one declaration per name fixes all of them at once.

The width of each name has to be inferred, and not from the file. Every
address here sits past the end of .data's raw bytes, so the on-disk image holds
whatever follows in the file rather than the runtime value - the bytes are
meaningless and reading them would give the wrong answer. The only real
evidence is how the decompiled code uses the name, and that is unambiguous in
practice:

    DAT_x = DAT_x + '\\x01'            a one-byte counter
    DAT_x ^ (uint)&stack              __security_cookie: a 4-byte uint
    (*(code **)(*DAT_x + 0xbc))(...)  DAT_x is a pointer, not a struct
    p = DAT_x;   (p is a pointer)     DAT_x is a pointer
    DAT_x = 0x1234                    assigned a 32-bit constant

Anything that does not match a rule is declared `undefined4`, which is the safe
default: on x86 a 4-byte access is what most of these turn out to be, and a
wrong width is caught by the byte comparison in the splice step rather than
silently accepted.

Usage: gen_globals.py [--out FILE] [--check]
"""

import argparse
import collections
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import data_obj as DO

DECOMP = os.path.join(DO.ROOT, "decomp_out")
EXE = os.path.join(DO.ROOT, "resources", "th12.exe")
IMAGE_BASE = 0x400000

# A Ghidra global. `_DAT_` means Ghidra inferred a pointer at the address; it
# is the same storage, so both spellings map to one declaration. `PTR_*` covers
# every pointer Ghidra resolved to a target (`PTR_DAT_x`, `PTR_FUN_x`,
# `PTR_LAB_x`, plus the string/unicode/import-pointer spellings `PTR_s_..`,
# `PTR_u_..`, `PTR_PTR_..`); leaving them out fails C2065 in every unit that
# touches one. `UNK_`, `IMAGE_*_` and `*Ram<va>` are the remaining address-named
# data symbols. All end in an 8-hex VA, which the writer below relies on.
GLOBAL = re.compile(
    r"\b(?:_?PTR_[A-Za-z0-9_]*_[0-9A-Fa-f]{8}"
    r"|_?DAT_[0-9A-Fa-f]{8}"
    r"|UNK_[0-9A-Fa-f]{8}"
    r"|IMAGE_[A-Za-z0-9_]*_[0-9A-Fa-f]{8}"
    r"|[a-z]+Ram[0-9A-Fa-f]{8})\b")
VA_IN_NAME = re.compile(r"([0-9A-Fa-f]{8})$")

# Ordered: the first pattern that matches decides the type. Almost every use in
# the corpus is 4 bytes - a bit test, a compare against 0, a read into a local,
# `&DAT` passed to a function - so `undefined4` is the baseline and the rules
# exist to catch the few that are demonstrably something else. Getting a name
# *into* this header at the right width matters more than a perfect guess: a
# missing name is a hard error, whereas a wrong width shows up as not-exact
# bytes in the splice comparison.
RULES = [
    # DAT_x = DAT_x + '\x01'  /  DAT_x = '\x01'  - a one-byte counter. The
    # char literal is the only reliable evidence of a narrow type here.
    (re.compile(r"(\w+)\s*=\s*(?:\w+\s*[-+]\s*)?'\\x[0-9A-Fa-f]{2}'"), "char"),
    (re.compile(r"(\w+)\s*=\s*'\\x[0-9A-Fa-f]{2}'"), "char"),
    (re.compile(r"(\w+)\s*[-+]=\s*'\\x[0-9A-Fa-f]{2}'"), "char"),
    # DAT_x ^ (uint)&stack - the /GS stack cookie, __security_cookie: 4 bytes.
    (re.compile(r"(\w+)\s*\^\s*\(uint\)&"), "uint"),
    # *DAT_x dereferenced through a field: DAT_x holds a pointer, and `->`
    # already needs a pointer type for the member access to compile.
    (re.compile(r"\*\s*(\w+)\s*->"), "undefined4 *"),
    # A virtual call, `(**(code **)(*DAT_x + 0xe4))(DAT_x, ...)`: `*DAT_x` is the
    # object's vtable pointer and the sum is a byte offset into that table, cast
    # to a function pointer and called. DAT_x therefore holds a pointer, and this
    # is the one form where `*DAT_x + n` really does dereference first. Without
    # it the general `*DAT_x + n` rule below types DAT_x as the integer that
    # produces the address, and `*DAT_x` becomes C2100 "illegal indirection" at
    # every one of the 262 call sites. The `code **` context is what tells the
    # two spellings apart, so this rule has to precede the integer one.
    (re.compile(r"\*\*\s*\(\s*code\s*\*\*\s*\)\s*\(\s*\*\s*(\w+)"), "undefined4 *"),
    # `*(int *)(DAT_x + n)` and `*DAT_x + 0x14` are NOT pointer indexing. Ghidra
    # prints the *address stored in* DAT_x as the base and `n` as a raw byte
    # offset, so the name must stay an integer: declaring it `undefined4 *`
    # makes the compiler scale n by 4 and every such access lands at 4n instead
    # of n. That is invisible in a compile but shows up as a one-byte
    # displacement difference in the splice comparison (FUN_00412960 wanted
    # [eax+0x18] and got [eax+0x60]).
    (re.compile(r"\*\s*(\w+)\s*[-+]\s*0x[0-9A-Fa-f]+"), "undefined4"),
    (re.compile(r"\*\([^)]*\)\s*\(\s*(\w+)\s*[-+]\)"), "undefined4"),
    # A pointer variable assigned from it, or it assigned from a pointer.
    (re.compile(r"\w*[pi][pu]\w*\s*=\s*(\w+)\s*;"), "undefined4 *"),
    (re.compile(r"(\w+)\s*=\s*\w+[pi][pu]\w+\s*;"), "undefined4 *"),
    # explicitly 32-bit / 16-bit declarations
    (re.compile(r"undefined4\s+\*?\s*(\w+)\s*="), "undefined4"),
    (re.compile(r"(\w+)\s*=\s*\(?\s*undefined4\s*\)?\s*0x[0-9A-Fa-f]+"), "undefined4"),
    (re.compile(r"undefined2\s+\*?\s*(\w+)\s*="), "undefined2"),
    # compared against a pointer literal
    (re.compile(r"(\w+)\s*!=\s*\(\s*void\s*\*\s*\)"), "undefined4 *"),
    (re.compile(r"(\w+)\s*==\s*\(\s*void\s*\*\s*\)"), "undefined4 *"),
]

# A datum Ghidra could not type gets `int`, not `undefined4`. Both are 4 bytes,
# so the width is unchanged, but `undefined4` is unsigned and Ghidra's `<` on an
# untyped datum is emitted signed-or-nothing: FUN_004217e0 needed `jge` where
# `undefined4` produced the unsigned `jae`. Measured over the whole build this
# is worth +1 byte-exact function and costs no compiles. The env override is
# kept so the unsigned variant stays one command away.
#
# This is a default, not a claim: a name a rule recognised is still emitted with
# the type that rule found, and a wrong choice here is still caught by the byte
# comparison in scripts\splice.py rather than passing unnoticed.
DEFAULT_TYPE = os.environ.get("TH12_DEFAULT_TYPE", "int")
DEFAULT_WIDTH = 4

# Words that must never be treated as the lvalue of a rule.
NOT_A_GLOBAL = re.compile(r"^(?:uVar|iVar|uStack|iStack|local|param|in|extra|"
                          r"puVar|uVar|stack|this|Var|bVar|dVar|fVar|"
                          r"in_[a-z]|extraOut|Two|Three|Four)")


def classify(line, name):
    """Best-guess C type for one global, from one line of use.

    Returns None when no rule recognises the line, which leaves the name at
    the 4-byte default. That is deliberate: most of these are a bit test, a
    compare, or a read, and all of those are 4 bytes on x86.
    """
    for rx, ctype in RULES:
        m = rx.search(line)
        if not m:
            continue
        got = m.group(1)
        # A rule fires only when the global is the operand the pattern matched,
        # not merely present somewhere in the same line.
        if got in (name, name.lstrip("_")):
            return ctype
    return None


def width_of(ctype):
    return {
        "char": 1, "undefined1": 1, "byte": 1,
        "undefined2": 2, "ushort": 2, "short": 2,
        "float": 4, "uint": 4, "int": 4, "undefined4": 4, "undefined4 *": 4,
        "undefined8": 8, "double": 8, "undefined4 **": 4,
    }.get(ctype, DEFAULT_WIDTH)


def harvest():
    """(votes, seen) for every global spelling the corpus uses.

    The leading underscore is significant and is kept: Ghidra writes `DAT_x`
    for a datum and `_DAT_x` when it decided the address holds a pointer, and
    the decompiled source uses whichever it chose. Declaring only the bare
    name leaves every `_DAT_` reference an undeclared identifier.
    """
    votes = collections.defaultdict(collections.Counter)
    seen = collections.Counter()
    if not os.path.isdir(DECOMP):
        return votes, seen
    for fn in sorted(os.listdir(DECOMP)):
        if not fn.endswith(".c"):
            continue
        try:
            fh = open(os.path.join(DECOMP, fn), encoding="latin-1")
        except OSError:
            continue
        with fh:
            for line in fh:
                found = GLOBAL.findall(line)
                if not found:
                    continue
                for raw in found:
                    if NOT_A_GLOBAL.match(raw.lstrip("_")):
                        continue
                    seen[raw] += 1
                    # Match the rules against the spelled name, but also let a
                    # rule that matched the bare form apply to the underscored
                    # one; Ghidra's choice of spelling is a type hint, not a
                    # different object.
                    t = classify(line, raw) or classify(line, raw.lstrip("_"))
                    if t is None and raw.startswith("_"):
                        # Ghidra writes `_DAT_x` when it typed the datum as a
                        # pointer, so the spelling is a hint. It is only a hint:
                        # a bit test on the value, `_DAT_x & 0x80001`, has to be
                        # a 4-byte datum, and assuming a pointer there is C2296
                        # "'&' illegal, left operand has type 'undefined4 *'".
                        # Where no rule fires, take the scalar default and let
                        # the splice comparison be the judge of the width - a
                        # wrong width costs one function's exactness, while a
                        # wrong pointer-ness costs the whole unit its compile.
                        t = DEFAULT_TYPE
                    if t:
                        votes[raw][t] += 1
    return votes, seen


def image_bounds():
    """(lowest, highest) VA the file actually maps, for a sanity check."""
    try:
        d = open(EXE, "rb").read()
    except OSError:
        return None
    pe = struct.unpack_from("<I", d, 0x3C)[0]
    nsec = struct.unpack_from("<H", d, pe + 6)[0]
    oh = struct.unpack_from("<H", d, pe + 20)[0]
    lo, hi = None, None
    for i in range(nsec):
        o = pe + 24 + oh + 40 * i
        va, vs, _rs, _ro = struct.unpack_from("<IIII", d, o + 12)
        vs = max(vs, 0x1000)
        s, e = IMAGE_BASE + va, IMAGE_BASE + va + vs
        lo = s if lo is None else min(lo, s)
        hi = e if hi is None else max(hi, e)
    return (lo, hi) if lo else None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out",
                    default=os.path.join(DO.ROOT, "src", "th12_globals.h"))
    ap.add_argument("--check", action="store_true")
    args = ap.parse_args()

    votes, seen = harvest()
    bounds = image_bounds()

    out = []
    add = out.append
    add("/* Generated by scripts\\gen_globals.py - do not edit by hand.")
    add(" *")
    add(" * Ghidra names a datum it could not type after its address - DAT_004b43cc")
    add(" * is the value at 0x004b43cc - and declares nothing for it. That leaves")
    add(" * C2065 'undeclared identifier' in every unit that touches one, which was")
    add(" * 524 of the 934 remaining errors and the largest single cause of the")
    add(" * corpus failing to build.")
    add(" *")
    add(" * Each type here is inferred from how the decompilation uses the name,")
    add(" * not from the file. Every address falls past .data's raw size, so the")
    add(" * on-disk bytes are the ones belonging to whatever section follows and")
    add(" * say nothing about the value. The usage is the evidence: a `+ '\\x01'`")
    add(" * counter is a char, an xor against a stack address is the 4-byte")
    add(" * __security_cookie, and a name used as the base of `*(T *)(x + n)`")
    add(" * holds an address - the `n` there is a raw byte offset, so the name")
    add(" * itself stays an integer rather than a pointer type.")
    add(" *")
    add(" * A name no rule matched gets `undefined4`. That is the right default on")
    add(" * x86, and it is not a silent guess: a wrong width changes the emitted")
    add(" * code, which the byte comparison in scripts\\splice.py reports as")
    add(" * not-exact rather than passing unnoticed.")
    add(" */")
    add("")
    add("#ifndef TH12_GLOBALS_H")
    add("#define TH12_GLOBALS_H")
    add("")

    resolved = []
    for name, uses in seen.items():
        tally = dict(votes.get(name, {}))
        if tally:
            # Most-voted type wins; ties break toward the wider one, since a
            # 4-byte access is the more common case and truncating loses data.
            best = max(tally, key=lambda t: (tally[t], width_of(t)))
        else:
            best = DEFAULT_TYPE
        resolved.append((name, best, uses, len(tally)))
    resolved.sort(key=lambda r: r[0])

    ambiguous = 0
    untyped = 0
    by_type = collections.Counter()
    for name, ctype, uses, kinds in resolved:
        by_type[ctype] += 1
        if kinds > 1:
            ambiguous += 1
        if kinds == 0:
            untyped += 1
        m = VA_IN_NAME.search(name)
        addr = int(m.group(1), 16) if m else 0
        add("extern %-14s %-16s; /* %08x */" % (ctype, name, addr))
    add("")
    add("#endif /* TH12_GLOBALS_H */")
    text = "\n".join(out) + "\n"

    lo, hi = bounds if bounds else (0, 0)
    if bounds:
        oob = [n for n, _t, _u, _k in resolved
               if (not VA_IN_NAME.search(n)
                   or not (lo <= int(VA_IN_NAME.search(n).group(1), 16) < hi))]
        if oob:
            sys.stderr.write("gen_globals: %d names outside the image, e.g. %s\n"
                             % (len(oob), ", ".join(oob[:5])))

    if args.check:
        print("%d globals; types: %s; %d conflicting; %d defaulted"
              % (len(resolved), dict(by_type), ambiguous, untyped))
        return 0

    with open(args.out, "w", encoding="ascii", newline="\r\n") as fh:
        fh.write(text)
    print("wrote %s (%d globals; types: %s; %d conflicting; %d defaulted)"
          % (args.out, len(resolved), dict(by_type), ambiguous, untyped))
    return 0


if __name__ == "__main__":
    sys.exit(main())
