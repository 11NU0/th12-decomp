"""Build the objdiff project from build/ + delink_out and summarise the report.

objdiff's CLI has only `diff` and `report`, and its exit code is always 0, so
the only trustworthy number is the JSON `report generate` emits - specifically
`fuzzy_match_percent`. Critically, objdiff pairs functions *by symbol name*,
which is why the rebuilt objects are decorated-stripped by rename_symbols.py
before this runs.

Usage: objdiff_report.py [--top N] [--json OUT.json]
"""

import json
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OBJDIFF = os.path.join(ROOT, "tools", "objdiff-cli-windows-x86_64.exe")
DELINK = os.path.join(ROOT, "delink_out")
BUILD = os.path.join(ROOT, "build")
CONFIG = os.path.join(ROOT, "objdiff.json")


def pair():
    """Yield (name, target_rel, base_rel) for every object present on both sides."""
    for fn in sorted(os.listdir(DELINK)):
        if not fn.endswith(".o"):
            continue
        stem = fn[:-2]                       # NAME_ADDRESS
        if "_" not in stem:
            continue
        name = stem.rsplit("_", 1)[0]        # NAME
        base = os.path.join(BUILD, stem + ".obj")
        if not os.path.isfile(base):
            continue
        yield name, "delink_out/" + fn, "build/" + stem + ".obj"


def write_config(units):
    cfg = {
        "target_dir": "delink_out",
        "base_dir": "build",
        "build_target": False,
        "build_base": False,
        "objects": [
            {"name": n, "target_path": t, "base_path": b,
             "reverse_fn_order": False}
            for n, t, b in units
        ],
    }
    with open(CONFIG, "w", encoding="ascii") as fh:
        json.dump(cfg, fh, indent=2)
    return len(units)


def run_report():
    proc = subprocess.run(
        [OBJDIFF, "report", "generate", "-p", ROOT],
        capture_output=True, text=True,
    )
    # The report is the last JSON object printed on stdout.
    blob = proc.stdout
    start = blob.rfind("\n{")
    for cand in (blob[start:], blob[blob.find("{"):]):
        try:
            return json.loads(cand), None
        except json.JSONDecodeError:
            continue
    return None, (proc.stdout[-800:] + proc.stderr[-800:])


def main(argv):
    top = 25
    out_json = None
    if "--top" in argv:
        top = int(argv[argv.index("--top") + 1])
    if "--json" in argv:
        out_json = argv[argv.index("--json") + 1]

    units = list(pair())
    if not units:
        print("no paired objects; build first")
        return 1
    count = write_config(units)
    print("=== %d paired objects -> %s ===" % (count, CONFIG))

    data, err = run_report()
    if data is None:
        print("report failed:\n" + (err or ""))
        return 1
    if out_json:
        with open(out_json, "w", encoding="ascii") as fh:
            json.dump(data, fh, indent=2)
        print("wrote %s" % out_json)

    m = data.get("measures", {})
    print("--- project measures ---")
    for key in ("total_units", "total_functions", "matched_functions",
                "total_code", "matched_code", "matched_code_percent",
                "fuzzy_match_percent", "complete_code_percent",
                "complete_data_percent"):
        if key in m:
            print("  %-24s %s" % (key, m[key]))

    rows = []
    for u in data.get("units", []):
        um = u.get("measures", {})
        pct = um.get("fuzzy_match_percent")
        if pct is None:
            continue
        rows.append((pct, u.get("name", "?"), um.get("total_code", "?")))
    rows.sort()

    if not rows:
        print("no per-unit scores")
        return 0

    def bucket(lo, hi):
        sel = [r for r in rows if lo <= r[0] < hi]
        if sel:
            label = "%d" % lo if hi - 1 == lo else "%d-%d" % (lo, hi - 1)
            print("  %-9s %4d" % (label, len(sel)))

    # Split by provenance. Units the real static libraries provide are not scored
    # on the recompiled C at all: build_all.ps1 no longer compiles them, because
    # the library reproduces them exactly (see FINDINGS.md section 3). Mixing
    # them into one average understates the work that is actually ours.
    libfile = os.path.join(ROOT, "artifacts", "available_from_libs.txt")
    libunits = set()
    if os.path.isfile(libfile):
        with open(libfile, encoding="utf-8") as fh:
            libunits = {ln.strip() for ln in fh if ln.strip()}

    def split(sel):
        game = [r for r in sel if r[1] not in libunits]
        lib = [r for r in sel if r[1] in libunits]
        return game, lib

    def summarise(label, sel):
        if not sel:
            return
        mean = sum(r[0] for r in sel) / len(sel)
        print("  %-22s units=%-4d 100%%=%-3d >=80%%=%-3d mean=%.1f%%"
              % (label, len(sel),
                 sum(1 for r in sel if r[0] >= 100.0),
                 sum(1 for r in sel if r[0] >= 80.0), mean))

    print("--- fuzzy_match_percent distribution (per unit) ---")
    for lo, hi in ((100, 101), (95, 100), (80, 95), (50, 80), (20, 50), (0, 20)):
        bucket(lo, hi)

    game, lib = split(rows)
    print("--- summary ---")
    summarise("all scored", rows)
    if libunits:
        summarise("game code (ours)", game)
        summarise("library-provided", lib)
    print("  note: library-provided units are excluded from the build on purpose;")
    print("        their real-library code matches the original (verify_lib.py).")

    print("--- %d lowest scoring ---" % top)
    for pct, name, code in rows[:top]:
        print("  %6.1f%%  %-46s code=%s" % (pct, name[:46], code))
    print("--- %d highest scoring ---" % top)
    for pct, name, code in rows[-top:][::-1]:
        print("  %6.1f%%  %-46s code=%s" % (pct, name[:46], code))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
