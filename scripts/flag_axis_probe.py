"""Probe whether a candidate compiler flag changes any bytes at all.

merge_flags.py settled the /hotpatch /Oy- axis by measurement. Before spending a
full compile (~5 minutes) on another axis, sample a set of units and see whether
the flag perturbs the object code: if every object comes out identical, the flag
cannot be what is holding a function back.

Reports, per axis: how many of the sampled units produced different .text, and
how many of those now match the original better. The second number is the one
that matters - a flag that changes bytes without improving a match is noise.

    python scripts/flag_axis_probe.py --sample 60
    python scripts/flag_axis_probe.py --only FUN_0047
"""
import argparse
import os
import random
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cmpfun
import splice

ROOT = splice.DO.ROOT
CL = os.path.join(ROOT, "tools", "vc9tree", "bin", "cl.exe")
TOOLS = os.path.join(ROOT, "tools")
BASE = ["/nologo", "/c", "/MT", "/EHsc", "/GS-", "/O2"]

AXES = [
    ["/Zp4"],
    ["/Zp8"],
    ["/Zp16"],
    ["/Gs999999"],
    ["/Gs2048"],
    ["/Zc:wchar_t"],
    ["/Zc:wchar_t-"],
    ["/favor:AMD64"],
    ["/Oi-"],
    ["/arch:SSE2"],
]


def source_for(stem):
    for d in ("overrides", "fixed"):
        p = os.path.join(ROOT, "src", d, stem + ".c")
        if os.path.isfile(p):
            return p
    return os.path.join(ROOT, "decomp_out", stem + ".c")


def env():
    e = dict(os.environ)
    e["INCLUDE"] = ";".join([
        os.path.join(TOOLS, "vc9tree", "include"),
        os.path.join(TOOLS, "sdktree", "include"),
        os.path.join(TOOLS, "dxsdk", "DXSDK", "Include")])
    e["PATH"] = os.path.dirname(CL) + os.pathsep + e["PATH"]
    e["DIRECTINPUT_VERSION"] = "0x0800"
    return e


def compile_batch(srcs, outdir, extra):
    os.makedirs(outdir, exist_ok=True)
    rsp = os.path.join(outdir, "rsp.txt")
    with open(rsp, "w", encoding="ascii") as fh:
        fh.write("\n".join(BASE + extra + ["/Isrc", "/Fo" + outdir + "\\"] + srcs))
    subprocess.run([CL, "@" + rsp], env=env(), capture_output=True, text=True)


def exact_score(stem, dirpath, image, sections):
    """(matched, compared) for one object against its original slot."""
    got, grels = cmpfun.load(dirpath, stem)
    if not got:
        return None
    want, _ = cmpfun.load(os.path.join(ROOT, "delink_out"), stem)
    va = splice.addr_from_name(stem)
    foff = splice.file_offset(sections, va - splice.IMAGEBASE)
    if foff is None:
        return None
    orig = image[foff:foff + len(want or got)]
    if len(got) > len(orig):
        return (0, 1)
    bad = sum(1 for i in range(len(got)) if orig[i] != got[i] and i not in grels)
    return (0 if bad else 1, 1)


def main(argv=None):
    ap = argparse.ArgumentParser()
    ap.add_argument("--sample", type=int, default=60)
    ap.add_argument("--only", default="")
    a = ap.parse_args(argv)

    build = os.path.join(ROOT, "build_plain")
    stems = [s[:-4] for s in sorted(os.listdir(build)) if s.endswith(".obj")]
    if a.only:
        stems = [s for s in stems if a.only in s]
    random.seed(1234)                      # reproducible sample
    stems = random.sample(stems, min(a.sample, len(stems)))

    image = open(os.path.join(ROOT, "resources", "th12.exe"), "rb").read()
    sections = splice.load_sections(image)
    tmp = os.path.join(os.environ["TEMP"], "opencode", "axis")

    srcs = [source_for(s) for s in stems]
    print("sampling %d units\n" % len(stems))

    base = {}
    for s in stems:
        r = exact_score(s, build, image, sections)
        if r:
            base[s] = r

    for axis in AXES:
        out = os.path.join(tmp, axis[0].lstrip("/").replace(":", "_").replace("-", "_"))
        if os.path.isdir(out):
            for f in os.listdir(out):
                os.remove(os.path.join(out, f))
        compile_batch(srcs, out, axis)

        changed = better = worse = 0
        for s in stems:
            r = exact_score(s, out, image, sections)
            if r is None or s not in base:
                continue
            got_new, _ = cmpfun.load(out, s)
            got_old, _ = cmpfun.load(build, s)
            if got_new != got_old:
                changed += 1
            if r[0] > base[s][0]:
                better += 1
            elif r[0] < base[s][0]:
                worse += 1

        print("  %-18s bytes changed %3d/%d   exact +%d  -%d"
              % (" ".join(axis), changed, len(stems), better, worse))

    return 0


if __name__ == "__main__":
    sys.exit(main())