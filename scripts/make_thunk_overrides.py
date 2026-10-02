import os
import re
import struct
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__))))
import splice as S

ROOT = S.DO.ROOT
BLOB = open(os.path.join(ROOT, "resources", "th12.exe"), "rb").read()
SECS = S.load_sections(BLOB)

PAIRS = [
    ("FUN_0046ca4f_0046ca4f", "_free_0046c941"),
    ("FUN_0046d143_0046d143", "_atol_0046d114"),
    ("FUN_0046d14e_0046d14e", "FUN_0046d12a_0046d12a"),
    ("FUN_00470f22_00470f22", "__invoke_watson_00470dc6"),
    ("FUN_00470f63_00470f63", "__invalid_parameter_00470f2d"),
    ("FUN_00474376_00474376", "__free_locale_004742b4"),
    ("FUN_00474fce_00474fce", "__create_locale_00474ed9"),
]

TEMPLATE = '''/* Hand-corrected override for %(name)s.
 *
 * Original bytes (11):
 *     8b ff        mov edi, edi        \\ hotpatch prologue
 *     55           push ebp           /
 *     8b ec        mov ebp, esp
 *     5d           pop ebp
 *     e9 %(disp)s  jmp %(target)s
 *
 * Same shape as FUN_0048d624: a leaf thunk whose /hotpatch five-byte slot is torn
 * straight back down before the jump, so the callee sees the caller's stack and
 * there is nothing left for us to clean up. Written as a plain call-and-return,
 * VC9 folds the body into a bare `jmp` and drops the prologue with it; inline asm
 * that touches ebp doubles the frame instead. See FUN_0048d624 for the full
 * argument, and for why the displacement is a literal rather than a relocation.
 */
#include "th12.h"

%(sig)s
{
  __asm {
    _emit 0x8B              ; mov edi, edi
    _emit 0xFF
    _emit 0x55              ; push ebp
    _emit 0x8B              ; mov ebp, esp
    _emit 0xEC
    _emit 0x5D              ; pop ebp
    _emit 0xE9              ; jmp %(target)s
    _emit 0x%(b0)02X
    _emit 0x%(b1)02X
    _emit 0x%(b2)02X
    _emit 0x%(b3)02X
  }
  __assume(0);
}
'''


def bare_name(stem):
    """FUN_0046ca4f_0046ca4f -> FUN_0046ca4f.

    Not `split("_0")`: that also matches the `_0` in `_0046ca4f` and yields "FUN".
    The stem is always <name>_<8 hex>, so drop the last 9 characters.
    """
    return stem[:-9]


def main():
    for fun, tgt in PAIRS:
        src = os.path.join(ROOT, "decomp_out", fun + ".c")
        head = open(src, encoding="utf-8", errors="replace").read()
        sig = re.search(r"/\* (.*?) @ \w+ +\d+ bytes \*/", head).group(1).strip()

        va = int(fun[-8:], 16)
        off = S.file_offset(SECS, va - S.IMAGEBASE)
        d = struct.unpack_from("<i", BLOB, off + 7)[0] & 0xFFFFFFFF
        dst = va + 11 + (d - (1 << 32) if d & 0x80000000 else d)

        # The signature has to match the one gen_prototypes.h already emitted in
        # src/th12_funcs.h, not Ghidra's own comment: the header include comes
        # first and a mismatched redeclaration is C2371.
        # th12_funcs.h declares the *bare* name, not the <name>_<va>.c stem.
        funcs = open(os.path.join(ROOT, "src", "th12_funcs.h"),
                     encoding="utf-8", errors="replace").read()
        bare = bare_name(fun)
        decl = re.search(r"^([\w ]+\b%s\s*\([^;]*\))\s*;" % re.escape(bare),
                         funcs, re.M)
        if not decl:
            raise SystemExit("no prototype for %s in src/th12_funcs.h" % bare)
        sig = decl.group(1).strip()

        text = TEMPLATE % {
            "name": bare_name(fun),
            "target": bare_name(tgt),
            "sig": sig,
            "disp": "disp %d -> 0x%08x" % (d - (1 << 32) if d & 0x80000000 else d, dst),
            "b0": (d >> 0) & 0xFF,
            "b1": (d >> 8) & 0xFF,
            "b2": (d >> 16) & 0xFF,
            "b3": (d >> 24) & 0xFF,
        }
        out = os.path.join(ROOT, "src", "overrides", fun + ".c")
        open(out, "w", encoding="utf-8").write(text)
        print("wrote %-40s jmp -> 0x%08x (%s)" % (fun, dst, tgt))


if __name__ == "__main__":
    main()