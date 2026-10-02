#!/usr/bin/env python3
"""Account for the byte-exact functions by where the bytes actually came from.

A byte-exact verdict means the emitted function matched the original image. It does
not say *how* the bytes were produced, and the two ways are very different things:

  literal  the unit is a byte-for-byte copy of the original, written out as `_emit`
           opcodes in an __asm block. Nothing was decompiled or recompiled; the
           comparison only confirms the copy landed at the right address.
  hand     the unit is real C in src/overrides, written by hand.
  native   the unit came from src\fixed or decomp_out, so `cl` compiled it.

The merged figure is therefore not a measure of the decompilation. This splits it.

usage: python scripts/exactness_ledger.py [splice-log]
"""
import os
import re
import sys
from collections import Counter

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# splice prints one line per function it judged, then a summary.
VERDICT = re.compile(r"^(\S+)\s+va 0x([0-9a-f]+)\s+(\d+)/\s*(\d+) bytes\s+(.*)$")
LITERAL = re.compile(r"^\s*_emit\b", re.M)


def classify(unit):
    """(kind, path) for the file that produced this unit."""
    for d in ("overrides", "fixed"):
        path = os.path.join(ROOT, "src", d, "%s.c" % unit)
        if os.path.isfile(path):
            text = open(path, encoding="utf-8", errors="replace").read()
            if d == "overrides":
                return ("literal" if LITERAL.search(text) else "hand"), path
            return "native", path
    path = os.path.join(ROOT, "decomp_out", "%s.c" % unit)
    if os.path.isfile(path):
        return "native", path
    return "unknown", None


def read_text(path):
    """Read a log written by either PowerShell 5.1 or a redirect.

    Tee-Object and Out-File write UTF-16 with a BOM under 5.1 while python's own
    redirection writes UTF-8, so the encoding has to come from the file rather than
    from an assumption - reading UTF-16 as UTF-8 yields one line with NULs in it and
    silently matches nothing.
    """
    raw = open(path, "rb").read(4)
    for enc in ("utf-8-sig", "utf-16"):
        try:
            text = open(path, encoding=enc, errors="strict").read()
        except (UnicodeDecodeError, UnicodeError):
            continue
        if raw[:2] in (b"\xff\xfe", b"\xfe\xff") and enc != "utf-16":
            continue
        if raw[:3] == b"\xef\xbb\xbf" and enc != "utf-8-sig":
            continue
        return text
    return open(path, encoding="utf-8", errors="replace").read()


def main():
    log = sys.argv[1] if len(sys.argv) > 1 else os.path.join(
        os.environ.get("TEMP", "."), "opencode", "build19.log")
    if not os.path.isfile(log):
        print("no such log: %s" % log)
        return 1

    counts = Counter()
    exact, notexact, missing = [], [], []
    for line in read_text(log).splitlines():
        m = VERDICT.match(line.strip())
        if not m:
            continue
        unit, _, got, size, verdict = m.groups()
        if "verified exact" in verdict:
            exact.append((unit, int(got), int(size)))
        elif "skipped" in verdict:
            continue
        else:
            notexact.append((unit, int(got), int(size), verdict))
        kind, path = classify(unit)
        if kind == "unknown":
            missing.append(unit)
        counts[kind] += 1

    total = sum(counts.values())
    print("byte-exact functions: %d" % total)
    for kind in ("native", "hand", "literal", "unknown"):
        if counts[kind]:
            print("  %-8s %4d  (%5.1f%%)" % (kind, counts[kind],
                                            100.0 * counts[kind] / max(total, 1)))
    recompiled = total - counts["literal"] - counts["unknown"]
    print()
    print("produced by the compiler at all: %d of %d (%.1f%%)"
          % (recompiled, total, 100.0 * recompiled / max(total, 1)))
    print("copied from the original image:    %d of %d (%.1f%%)"
          % (counts["literal"], total, 100.0 * counts["literal"] / max(total, 1)))

    if counts["hand"]:
        print("\nhand-written C overrides:")
        for unit, _, _ in exact:
            kind, _ = classify(unit)
            if kind == "hand":
                print("  %s" % unit)
    if notexact:
        print("\nnot byte-exact: %d" % len(notexact))
        for unit, got, size, verdict in notexact:
            print("  %-40s %d/%d  %s" % (unit, got, size, verdict))
    if missing:
        print("\nno source file for: %s" % ", ".join(missing))
    return 0


if __name__ == "__main__":
    sys.exit(main())