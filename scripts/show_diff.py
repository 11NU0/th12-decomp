"""Show the side-by-side instruction listing for one unit, base vs target.

Usage: show_diff.py <name-or-stem> [...]
  e.g. show_diff.py FUN_004014b0 _iswcntrl
"""

import json
import os
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OBJDIFF = os.path.join(ROOT, "tools", "objdiff-cli-windows-x86_64.exe")
DELINK = os.path.join(ROOT, "delink_out")
BUILD = os.path.join(ROOT, "build")


def find(query):
    """Resolve a name or stem to (target .o, base .obj), or (None, None)."""
    for fn in sorted(os.listdir(DELINK)):
        if not fn.endswith(".o"):
            continue
        stem = fn[:-2]
        name = stem.rsplit("_", 1)[0]
        if stem == query or name == query:
            base = os.path.join(BUILD, stem + ".obj")
            if os.path.isfile(base):
                return os.path.join(DELINK, fn), base
    return None, None


def listing(obj, symbol="*"):
    out = subprocess.run(
        [OBJDIFF, "diff", "-1", obj, "-2", obj, "-o", "-", "--format",
         "json", symbol],
        capture_output=True, text=True).stdout
    return out


def insns(obj, target, symbol):
    out = subprocess.run(
        [OBJDIFF, "diff", "-1", obj, "-2", target, "-o", "-", "--format",
         "json", symbol],
        capture_output=True, text=True).stdout
    try:
        data = json.loads(out)
    except json.JSONDecodeError:
        return None, None, out[:400]
    res = []
    for side in ("left", "right"):
        acc = []
        for sym in data.get(side, {}).get("symbols", []):
            if sym.get("kind") != "SYMBOL_FUNCTION":
                continue
            for ins in sym.get("instructions", []):
                b = ins.get("instruction")
                if isinstance(b, dict) and b.get("formatted"):
                    acc.append(" ".join(str(b["formatted"]).split()))
        res.append(acc)
    return res[0], res[1], None


def main(argv):
    if len(argv) < 2:
        raise SystemExit(__doc__)
    for query in argv[1:]:
        t, b = find(query)
        if not t:
            print("=== %s: no paired object ===" % query)
            continue
        name = os.path.basename(t)[:-2].rsplit("_", 1)[0]
        left, right, err = insns(b, t, name)
        print("=== %s  (%s) ===" % (name, os.path.basename(t)[:-2]))
        if err:
            print("  parse error:", err)
            continue
        print("  base   (%2d): %s" % (len(left), " ; ".join(left) or "-"))
        print("  target (%2d): %s" % (len(right), " ; ".join(right) or "-"))
        only_b = [i for i in left if i not in right]
        only_t = [i for i in right if i not in left]
        if only_b:
            print("  only in base  : %s" % " ; ".join(only_b))
        if only_t:
            print("  only in target: %s" % " ; ".join(only_t))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
