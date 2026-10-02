"""Classify *why* each rebuilt unit fails to match, so effort goes to the right place.

objdiff tells us a unit scores 3%, but not whether that is a compiler-flag
problem we can fix with /O2, a decompiler failure that no flag will fix, or a
missing declaration. This assigns each paired unit a failure mode from the
instruction listings, and prints a work queue ordered by how much code is
recoverable.

The modes matter because they imply completely different actions:

  decompiler-loss  the target has a real body (stack frame, locals) but the
                   rebuild is a bare `jmp`/`ret` thunk. Ghidra turned a wrapper
                   into a tail call, so the information is simply not in the C.
                   Only hand-writing from the disassembly recovers it, and no
                   flag tuning will ever help.
  hotpatch-prologue the target starts with `mov edi,edi` (the /hotpatch marker
                   seen in 37% of all target objects) and the rebuild does not.
                   Library code; excluded from the build already.
  frame-style      prologues differ in frame-pointer/naked style, but the body
                   is otherwise comparable - a codegen question.
  near-match       >= 80% already; worth a look but nearly done.
  size-mismatch    the rebuild is a different length, usually missing calls.
  other            nothing above matched; needs individual investigation.

Usage: triage.py [--top N] [--all]
"""

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import show_diff as S  # noqa: E402

HOTPATCH = "mov edi, edi"


def thunk(insns):
    """True if the listing is a bare tail-call or return stub."""
    if not insns or len(insns) > 2:
        return False
    return all(i.split()[0] in ("jmp", "ret", "retn") for i in insns)


def classify(base, target):
    if thunk(base) and not thunk(target) and len(target) > 2:
        return "decompiler-loss", len(target)
    if target and target[0] == HOTPATCH and (not base or base[0] != HOTPATCH):
        return "hotpatch-prologue", len(target)
    if base and target and len(base) > 2 and len(target) > 2:
        if base[0] != target[0]:
            return "frame-style", len(target)
    return "other", len(target or [])


def hotpatch_needed(base, target):
    """True when the target has a /hotpatch prologue the rebuild lacks.

    The marker is `mov edi,edi` at offset 0, present in 37% of all target objects
    because the CRT and the game's own static libraries were built with
    /hotpatch. Two shapes matter:

      * a bare thunk - `mov edi,edi ; push ebp ; mov ebp,esp ; pop ebp ; jmp f`,
        which is an MSVC incremental-linking thunk and is reproduced exactly by
        recompiling the same C with /hotpatch /Oy-;
      * a real function with a frame - the same prologue followed by ordinary
        code, where the rebuild is missing just the two prologue bytes and
        /hotpatch /Oy- supplies them along with the frame pointers the target
        uses.

    Either way the fix is the same pair of flags, applied per unit. /hotpatch
    must not be applied globally: it would add a prologue to the game functions
    that have none (FUN_004014b0 starts straight at `push esi`).
    """
    if not target or target[0] != HOTPATCH:
        return False
    return not base or base[0] != HOTPATCH


def collect():
    """[(stem, name, base_insns, target_insns)] for every paired unit."""
    out = []
    for fn in sorted(os.listdir(S.DELINK)):
        if not fn.endswith(".o"):
            continue
        stem = fn[:-2]
        name = stem.rsplit("_", 1)[0]
        base = os.path.join(S.BUILD, stem + ".obj")
        if not os.path.isfile(base):
            continue
        left, right, err = S.insns(base, os.path.join(S.DELINK, fn), name)
        if err or left is None or right is None:
            continue
        out.append((stem, name, left, right))
    return out


def main(argv):
    top = 20
    show_all = "--all" in argv
    if "--top" in argv:
        top = int(argv[argv.index("--top") + 1])

    if "--emit-hotpatch" in argv:
        dest = argv[argv.index("--emit-hotpatch") + 1]
        stems = [stem for stem, _n, left, right in collect()
                 if hotpatch_needed(left, right)]
        with open(dest, "w", encoding="ascii") as fh:
            fh.write("\n".join(stems) + "\n")
        print("wrote %d hotpatch-thunk units to %s" % (len(stems), dest))
        return 0

    rows = []
    for stem, name, left, right in collect():
        mode, size = classify(left, right)
        ident = left == right
        if ident:
            mode, size = "IDENTICAL", len(right)
        rows.append((mode, name, len(right), len(left), size, ident))

    order = {"IDENTICAL": 0, "near-match": 1, "frame-style": 2,
             "size-mismatch": 3, "decompiler-loss": 4, "hotpatch-prologue": 5,
             "other": 6}
    counts = {}
    for r in rows:
        counts[r[0]] = counts.get(r[0], 0) + 1

    print("=== failure-mode triage over %d paired units ===" % len(rows))
    for k in sorted(counts, key=lambda x: order.get(x, 9)):
        print("  %-18s %d" % (k, counts[k]))

    print("--- decompiler-loss units (target body missing from the C) ---")
    for mode, name, nt, nb, _, _ in rows:
        if mode == "decompiler-loss":
            print("  %-30s target=%d insn  rebuild=%d insn (thunk)"
                  % (name[:30], nt, nb))

    if show_all:
        sel = rows
    else:
        sel = sorted(rows, key=lambda r: order.get(r[0], 9))[:top]
    print("--- work queue (%d) ---" % len(sel))
    for mode, name, nt, nb, _, _ in sel:
        print("  %-18s %-30s target=%-4d rebuild=%d"
              % (mode, name[:30], nt, nb))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
