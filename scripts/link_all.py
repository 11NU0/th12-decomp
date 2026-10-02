"""Drive the full link to convergence, resolving duplicate definitions.

The delinker emitted one object per symbol, including symbols that the real
CRT also defines. Linking the delink objects together with `libcmt.lib`
therefore collides: the library member is pulled in because something
references a symbol only it has, and it drags in every other symbol it
defines, most of which the delink objects already have.

MSVC names both sides of the clash, which is enough to decide automatically:

    libcmt.lib(undname.obj) : error LNK2005: "?getMemory@..." already
                                        defined in getMemory_0047dc29.o

The first name is what is being pulled in now, the second is what already won.
When the first is a library member the delink object is the keeper, so that
object is dropped and the library supplies the code. Repeating that converges,
because dropping an object can only ever remove a definition, never add a new
conflict.

Usage: link_all.py [--rsp CMD] [--max-iters N]
"""

import collections
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DUP = re.compile(r"^(\S+)\s*:\s*error LNK2005:.*?already defined in (\S+\.o)\s*$")
LNK = re.compile(r"\b(LNK\d{4})\b")


def parse(path):
    counts = collections.Counter()
    drop = []
    with open(path, encoding="latin-1", errors="replace") as fh:
        for line in fh:
            counts.update(LNK.findall(line))
            m = DUP.match(line.strip())
            if not m:
                continue
            now, already = m.group(1), m.group(2)
            # a library member being pulled in duplicates an object we already
            # linked, so let the library win and drop the object
            if ".lib(" in now and not already.lower().endswith(".lib"):
                drop.append(already)
    return counts, sorted(set(drop))


def main(argv):
    cmd = os.path.join(os.environ["TEMP"], "th12_full", "go3.cmd")
    log = os.path.join(os.environ["TEMP"], "th12_full", "link3.log")
    listfile = os.path.join(os.environ["TEMP"], "th12_full", "mklist.txt")
    if "--rsp" in argv:
        cmd = argv[argv.index("--rsp") + 1]
    if "--log" in argv:
        log = argv[argv.index("--log") + 1]
    if "--list" in argv:
        listfile = argv[argv.index("--list") + 1]
    maxit = int(argv[argv.index("--max-iters") + 1]) if "--max-iters" in argv else 12

    objdir = os.path.join(ROOT, "delink_out")
    if "--obj-dir" in argv:
        objdir = argv[argv.index("--obj-dir") + 1]
    # Enumerate the directory rather than trusting mklist.txt, which a previous
    # run may have truncated.
    base = [os.path.join(objdir, fn) for fn in sorted(os.listdir(objdir))
            if fn.endswith(".o")]
    excl_file = os.path.join(ROOT, "artifacts", "dedupe_exclude.txt")
    excluded = set()
    if os.path.isfile(excl_file):
        with open(excl_file, encoding="ascii") as fh:
            excluded = {l.strip() for l in fh if l.strip()}
    pool = [l for l in base if os.path.basename(l) not in excluded]
    print("objects %d, pre-excluded %d" % (len(base), len(excluded)))

    for it in range(1, maxit + 1):
        with open(listfile, "w", encoding="ascii") as fh:
            fh.write("\n".join(pool) + "\n")
        subprocess.run(["cmd", "/c", cmd], capture_output=True)
        counts, drop = parse(log)
        summary = "  ".join("%s x%d" % (k, v) for k, v in sorted(counts.items()))
        print("iter %2d  objects=%4d  %s" % (it, len(pool), summary or "clean"))
        if not drop:
            break
        fresh = [d for d in drop if d not in excluded]
        if not fresh:
            print("  no progress - remaining duplicates need a decision by hand")
            break
        for d in fresh:
            excluded.add(d)
        pool = [l for l in pool if os.path.basename(l) not in excluded]
        print("  dropped %d object(s) that libcmt also defines" % len(fresh))

    exe = os.path.join(os.path.dirname(log), "th12.exe")
    if os.path.isfile(exe):
        print("LINKED: %s (%d bytes)" % (exe, os.path.getsize(exe)))
    else:
        print("no output produced")

    # Persist what was learned, otherwise every run re-derives the same drops
    # from scratch and the search restarts at 1912 objects each time.
    with open(excl_file, "w", encoding="ascii") as fh:
        fh.write("\n".join(sorted(excluded)) + "\n")
    print("exclusion list: %d objects -> %s" % (len(excluded), excl_file))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
