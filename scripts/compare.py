"""Compare rebuilt objects against the delinked originals with objdiff.

objdiff's CLI exit code is always 0, even when nothing matches, so the exit code
carries no information. The real result is in the JSON: the per-function
`match_percent` reported for the target symbol.

Usage:
    python compare.py <project_root> [obj_dir]
"""

import difflib
import json
import os
import re
import subprocess
import sys


def base_symbol(name):
    """Normalise objdiff's symbol naming.

    The rebuilt object reports "@FUN_004014b0@4" (an "@N" ordinal suffix, and
    a leading '@' for the stdcall-decorated form) while the original reports
    "FUN_004014b0".
    """
    n = re.sub(r"@\d+$", "", name or "")
    return n.lstrip("@_")


def instructions(data, side):
    """Flatten a side's code symbols into a list of instruction strings."""
    out = []
    for sym in data.get(side, {}).get("symbols", []):
        if sym.get("kind") != "SYMBOL_FUNCTION":
            continue
        for ins in sym.get("instructions", []):
            body = ins.get("instruction")
            if isinstance(body, dict):
                txt = body.get("formatted")
                if txt:
                    out.append(" ".join(str(txt).split()))
    return out


def similarity(a, b):
    """Instruction-level similarity via longest-common-subsequence ratio."""
    if not a or not b:
        return 0.0
    return 100.0 * difflib.SequenceMatcher(None, a, b).ratio()


def compare(objdiff, rebuilt, original, symbol):
    try:
        out = subprocess.run(
            [objdiff, "diff", "-1", rebuilt, "-2", original, "-o", "-",
             "--format", "json", symbol],
            capture_output=True, text=True, timeout=120,
        ).stdout
        data = json.loads(out)
    except (subprocess.TimeoutExpired, json.JSONDecodeError) as exc:
        return None, "error: %s" % exc

    left = instructions(data, "left")
    right = instructions(data, "right")

    pct = None
    for side in ("left", "right"):
        for sym in data.get(side, {}).get("symbols", []):
            if base_symbol(sym.get("name", "")) == base_symbol(symbol):
                if sym.get("match_percent") is not None:
                    pct = sym["match_percent"]
    # objdiff reports match_percent on the .text section, not on the symbol,
    # when the two sides differ. Use whichever is present.
    sizes = {}
    for side in ("left", "right"):
        for sec in data.get(side, {}).get("sections", []):
            if sec.get("kind") == "SECTION_CODE":
                sizes[side] = sec.get("size")
                if pct is None and sec.get("match_percent") is not None:
                    pct = sec["match_percent"]
    delta = None
    if "left" in sizes and "right" in sizes:
        try:
            delta = int(sizes["left"]) - int(sizes["right"])
        except (TypeError, ValueError):
            delta = None
    return similarity(left, right), delta


def main():
    root = sys.argv[1]
    obj_dir = sys.argv[2] if len(sys.argv) > 2 else os.path.join(root, "build")
    objdiff = os.path.join(root, "tools",
                           "objdiff-cli-windows-x86_64.exe")

    rows = []
    for fn in sorted(os.listdir(obj_dir)):
        if not fn.endswith(".obj"):
            continue
        rebuilt = os.path.join(obj_dir, fn)
        original = os.path.join(root, "delink_out", fn[:-4] + ".o")
        if not os.path.exists(original):
            continue
        symbol = re.sub(r"_[0-9a-f]{8}$", "", fn[:-4])
        pct, delta = compare(objdiff, rebuilt, original, symbol)
        rows.append((symbol, fn, pct, delta))

    total = len(rows)
    exact = [r for r in rows if r[2] is not None and r[2] >= 99.95]
    scored = [r for r in rows if r[2] is not None]
    print("compared: %d, scored: %d" % (total, len(scored)))
    if scored:
        print("instruction-identical: %d" % len(exact))
        buckets = {}
        for r in scored:
            b = int(r[2] // 25) * 25
            buckets[b] = buckets.get(b, 0) + 1
        for b in sorted(buckets, reverse=True):
            print("  %3d-%3d%%: %d" % (b, b + 24, buckets[b]))
    print("--- instruction-identical ---")
    for r in exact[:40]:
        print("  " + r[0])
    if len(exact) > 40:
        print("  ... and %d more" % (len(exact) - 40))

    # How far off is the code size? A tiny delta means only a local idiom
    # differs; a large delta means the signature or convention is wrong.
    sized = [r for r in rows if r[3] is not None]
    print("--- code size delta (rebuilt - original) ---")
    print("with sizes: %d" % len(sized))
    if sized:
        dbuckets = {}
        for r in sized:
            d = r[3]
            key = "exact" if d == 0 else (
                "<=8" if abs(d) <= 8 else
                "9-32" if abs(d) <= 32 else
                "33-128" if abs(d) <= 128 else ">128")
            dbuckets[key] = dbuckets.get(key, 0) + 1
        for k in ("exact", "<=8", "9-32", "33-128", ">128"):
            if k in dbuckets:
                print("  %-8s %d" % (k, dbuckets[k]))
        print("--- closest by size delta ---")
        for r in sorted(sized, key=lambda x: abs(x[3]))[:15]:
            print("  %-40s delta=%+d  match=%s%%" % (r[0], r[3], r[2]))

    with open(os.path.join(root, "objdiff_results.csv"), "w",
              encoding="ascii", errors="replace") as fh:
        fh.write("symbol,object,match_percent,size_delta\n")
        for s, f, pct, delta in rows:
            fh.write("%s,%s,%s,%s\n" % (s, f, "" if pct is None else pct,
                                        "" if delta is None else delta))


if __name__ == "__main__":
    main()




