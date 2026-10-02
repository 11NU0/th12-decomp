"""Report the .text bytes a source file compiles to, across flag combinations.

Every rebuild question in this project bottoms out in "which flags make VC9 emit
the original bytes", so keep the sweep in one place instead of re-typing cl.exe
invocations in the shell.
"""
import os
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cmpfun

ROOT = cmpfun.splice.DO.ROOT
CL = os.path.join(ROOT, "tools", "vc9tree", "bin", "cl.exe")
INC = os.path.join(ROOT, "tools", "vc9tree", "include") + ";" + \
      os.path.join(ROOT, "tools", "sdktree", "include") + ";" + \
      os.path.join(ROOT, "tools", "dxsdk", "DXSDK", "Include")
TMP = os.path.join(os.environ["TEMP"], "opencode", "flagsweep")
BASE = ["/nologo", "/c", "/MT", "/EHsc", "/GS-", "/O2"]

COMBOS = [
    [],
    ["/Oy-"],
    ["/hotpatch"],
    ["/hotpatch", "/Oy-"],
    ["/hotpatch", "/Oy-", "/O1"],
    ["/hotpatch", "/Oy-", "/O2"],
    ["/hotpatch", "/Oy-", "/GS"],
]


def main():
    src = sys.argv[1]
    nbytes = int(sys.argv[2]) if len(sys.argv) > 2 else 16
    original = sys.argv[3] if len(sys.argv) > 3 else None

    os.makedirs(TMP, exist_ok=True)
    env = dict(os.environ)
    env["INCLUDE"] = INC
    env["PATH"] = os.path.dirname(CL) + os.pathsep + env["PATH"]

    if original:
        print("original : %s  (%d)" % (original, len(original) // 2))
    else:
        print("original : (not supplied)")
    print()

    for extra in COMBOS:
        stem = "t"
        obj = os.path.join(TMP, stem + ".obj")
        if os.path.exists(obj):
            os.remove(obj)
        cmd = [CL] + BASE + extra + ["/Isrc", "/Fo" + obj, src]
        p = subprocess.run(cmd, env=env, capture_output=True, text=True)
        body, rels = cmpfun.load(TMP, stem)
        if p.returncode != 0 or not body:
            err = next((l for l in p.stdout.splitlines() if ": error" in l), p.stdout[:60])
            print("  %-30s FAILED %s" % (" ".join(extra) or "(default)", err.strip()))
            continue
        got = body[:nbytes]
        tag = " ".join(extra) if extra else "(default flags)"
        rel = ("reloc@%x" % min(rels)) if rels else ""
        print("  %-30s %-24s (%d) %s" % (tag, got.hex(), len(got), rel))


if __name__ == "__main__":
    main()