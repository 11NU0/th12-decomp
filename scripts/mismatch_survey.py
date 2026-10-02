"""Group the functions that still are not byte-exact by *shape* of failure.

splice.py answers whether a function matches; this answers what kind of thing is
wrong with it, so a whole class can be recognised at once instead of opened one
file at a time.

The per-function numbers are read out of a splice.py log - that is the only place
the true slot length lives, because splice takes it from the delink object's own
symbol size and falls back to the distance to the next function. Deriving it here
from the object's .text is wrong for any unit holding more than one function.

Bytes come from the image and the object, and are only used to classify. Bytes
covered by a relocation count as matching: cmpfun shows relocations unapplied, so
a call whose displacement is still 0 in the object is not a codegen failure.

    python scripts/mismatch_survey.py splice.log
    python scripts/mismatch_survey.py splice.log --group call-vs-jmp
    python scripts/mismatch_survey.py splice.log --max 32 --list
"""
import argparse
import collections
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cmpfun
import splice

ROOT = splice.DO.ROOT

LINE = re.compile(
    r"^\s+(\S+)\s+va 0x([0-9a-f]+)\s+(\d+)/\s*(\d+) bytes\s+(.*)$")

# Ordered most specific first: the first test that fires names the failure, so a
# function that merely lacks a prologue is not also counted as a register choice.
GROUPS = [
    ("hotpatch-slot",
     lambda o, g, r: o[:2] == b"\x8b\xff" and not g[:2] == b"\x8b\xff"),
    ("frame-missing",
     lambda o, g, r: o[:5] == b"\x55\x8b\xec" and not g[:5] == b"\x55\x8b\xec"),
    ("ebp-vs-esp",
     lambda o, g, r: b"\x8b\x45" in o and b"\x8b\x44\x24" in g),
    ("esp-vs-ebp",
     lambda o, g, r: b"\x8b\x44\x24" in o and b"\x8b\x45" in g),
    ("call-vs-jmp",
     lambda o, g, r: b"\xe8" in o and b"\xe9" in g and b"\xe8" not in g),
    ("jmp-vs-call",
     lambda o, g, r: b"\xe9" in o and b"\xe8" in g and b"\xe9" not in g),
    ("too-long",
     lambda o, g, r: len(g) > len(o)),
    ("too-short",
     lambda o, g, r: len(g) < len(o) - 2),
    ("ret-imm16",
     lambda o, g, r: o.endswith(b"\xc2") and not g.endswith(b"\xc2")),
    ("x87",
     lambda o, g, r: any(0xd8 <= c <= 0xdf for c in o)
                     and any(0xd8 <= c <= 0xdf for c in g)),
]


def read_log(path):
    """[(stem, va, rebuilt_len, slot, ndiff)] for every function splice judged."""
    enc = "utf-8"
    raw = open(path, "rb").read()
    if raw[:2] in (b"\xff\xfe", b"\xfe\xff"):
        enc = "utf-16"
    rows = []
    with open(path, encoding=enc, errors="replace") as fh:
        for line in fh:
            m = LINE.match(line.rstrip("\n"))
            if not m:
                continue
            stem, va, ngot, slot, rest = m.groups()
            ndiff = 0
            dm = re.search(r"(\d+) bytes differ", rest)
            if dm:
                ndiff = int(dm.group(1))
            rows.append((stem, int(va, 16), int(ngot), int(slot), ndiff))
    return rows


def classify(orig, got, relocs):
    """(primary, [all tags]).

    Tags are overlapping on purpose. A function that lost its hotpatch slot *and*
    contains x87 belongs in both tallies: the slot is what the flags decided, the
    x87 is what still blocks it. Reporting only the first match would file every
    such function under the flags bucket and hide the real work.
    """
    hits = [name for name, test in GROUPS if test(orig, got, relocs)]
    return (hits[0] if hits else "other"), hits


def main(argv=None):
    ap = argparse.ArgumentParser()
    ap.add_argument("log")
    ap.add_argument("--max", type=int, default=1 << 30, help="slot size cap")
    ap.add_argument("--group", default="")
    ap.add_argument("--list", action="store_true", help="print every function")
    a = ap.parse_args(argv)

    image = open(os.path.join(ROOT, "resources", "th12.exe"), "rb").read()
    sections = splice.load_sections(image)
    build = os.path.join(ROOT, "build")

    tally = collections.Counter()
    picked = []
    judged = 0
    for stem, va, ngot, slot, ndiff in read_log(a.log):
        if slot > a.max:
            continue
        # The log carries both verdicts; a zero diff is a function that already
        # matches and has nothing to triage.
        if ndiff == 0:
            continue
        judged += 1
        foff = splice.file_offset(sections, va - splice.IMAGEBASE)
        if foff is None:
            continue
        orig = image[foff:foff + slot]
        got, grels = cmpfun.load(build, stem)
        got = got[:slot] if got else b""
        kind, tags = classify(orig, got, grels)
        tally.update(tags or ["other"])
        if (not a.group or a.group in tags):
            picked.append((stem, va, slot, ngot, ndiff, kind))

    if a.list or a.group:
        print("%-32s %8s %5s %5s %5s  %s"
              % ("stem", "va", "slot", "got", "diff", "shape"))
        for stem, va, slot, ngot, ndiff, kind in sorted(picked, key=lambda r: r[2]):
            print("%-32s 0x%08x %5d %5d %5d  %s" % (stem, va, slot, ngot, ndiff, kind))
        print()

    print("%d failing function(s) with a slot of at most %d bytes; by tag:"
          % (judged, a.max))
    for k, v in tally.most_common():
        print("  %-16s %d" % (k, v))
    return 0


if __name__ == "__main__":
    sys.exit(main())