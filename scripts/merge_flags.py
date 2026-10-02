"""Pick, per unit, whichever flag pass reproduces more of its original bytes.

The original image was not built with one uniform set of flags. Some units carry
the five-byte `mov edi,edi` hotpatch slot and a real stack frame where the source
needs neither; others start straight at `push ebp`. Deciding that from the source
is guesswork, so instead compile the corpus both ways and let the comparison pick:
a unit goes to whichever pass turns more of its functions byte-exact, and ties go
to the plain pass so an existing good result is never disturbed.

splice.py already prints per-function verdicts, so this only has to read two logs.

Units named in artifacts/hotpatch_units.txt are known to have been built
/hotpatch, so they always take the hot pass - otherwise the per-unit comparison
re-elects the plain pass on a tie and silently undoes a result we already had.

Usage:
    splice.py --image resources/th12.exe --out %TEMP%/plain.exe --dir build_plain > plain.log
    splice.py --image resources/th12.exe --out %TEMP%/hot.exe   --dir build_hot   > hot.log
    merge_flags.py plain.log hot.log build_plain build_hot build
"""
import os
import re
import shutil
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import splice as S

VERDICT = re.compile(
    r"^\s+(\S+)\s+va 0x([0-9a-f]+)\s+\d+/\s*\d+ bytes\s+(.*)$")

# A function that was counted as exact under this pass.
EXACT = "verified exact"


def read_log(path):
    """{stem: bool} - did this pass reproduce that function's bytes?

    PowerShell 5.1's Tee-Object writes UTF-16LE with a BOM, so sniff it rather
    than assuming UTF-8; a mis-decoded log silently yields zero matches.
    """
    raw = open(path, "rb").read()
    enc = "utf-16" if raw[:2] in (b"\xff\xfe", b"\xfe\xff") else "utf-8"
    out = {}
    with open(path, encoding=enc, errors="replace") as fh:
        for line in fh:
            m = VERDICT.match(line.rstrip("\n"))
            if not m:
                continue
            stem, _va, rest = m.groups()
            out[stem] = EXACT in rest
    return out


def main(argv):
    if len(argv) != 6:
        sys.exit(__doc__)
    plain_log, hot_log, plain_dir, hot_dir, out_dir = argv[1:]

    plain = read_log(plain_log)
    hot = read_log(hot_log)

    forced = set()
    hotlist = os.path.join(S.DO.ROOT, "artifacts", "hotpatch_units.txt")
    if os.path.isfile(hotlist):
        forced = {l.strip() for l in open(hotlist, encoding="utf-8") if l.strip()}

    stems = set(plain) | set(hot)
    switched, gained, pinned = [], 0, 0
    for stem in sorted(stems):
        a, b = plain.get(stem), hot.get(stem)
        if stem in forced:
            pinned += 1
            if not a and b:
                gained += 1
            continue
        if b and not a:
            switched.append(stem)
            gained += 1
        elif a and not b:
            gained += 1

    for stem in sorted(stems):
        prefer_hot = stem in forced or (hot.get(stem) and not plain.get(stem))
        src_dir = hot_dir if prefer_hot else plain_dir
        src = os.path.join(src_dir, stem + ".obj")
        if not os.path.isfile(src):
            continue
        shutil.copyfile(src, os.path.join(out_dir, stem + ".obj"))

    print("units judged:            %d" % len(stems))
    print("  exact under both:      %d" % sum(1 for s in stems if plain.get(s) and hot.get(s)))
    print("  exact only plain /O2:  %d" % sum(1 for s in stems if plain.get(s) and not hot.get(s)))
    print("  exact only /hotpatch:  %d" % sum(1 for s in stems if hot.get(s) and not plain.get(s)))
    print("  exact under neither:   %d" % sum(1 for s in stems if not plain.get(s) and not hot.get(s)))
    print("functions gained:        %d" % gained)
    print("units pinned /hotpatch by hotpatch_units.txt: %d" % pinned)
    print("units switched to /hotpatch by comparison:    %d" % len(switched))
    if switched:
        print("  " + " ".join(switched[:40]) + (" ..." if len(switched) > 40 else ""))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))