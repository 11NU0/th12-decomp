"""Decide which Ghidra-emitted type names really need a forward declaration.

Static analysis of the SDK headers is not enough: a typedef can exist in a
header but be hidden behind a preprocessor condition, so the name is still
undefined in this translation unit. Instead of guessing, ask the compiler.

Strategy: for a batch of candidate names, emit one `X *p;` line per name and
compile. If the batch compiles, every name is a real type. If it fails, bisect
to isolate the offenders, then forward-declare exactly those.
"""

import os
import subprocess
import sys
import tempfile

P = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(P)
TOOLS = os.path.join(ROOT, "tools")

ENV = dict(os.environ)
ENV["INCLUDE"] = os.pathsep.join([
    os.path.join(TOOLS, "vc9tree", "include"),
    os.path.join(TOOLS, "sdktree", "include"),
    os.path.join(TOOLS, "dxsdk", "DXSDK", "Include"),
])
ENV["PATH"] = os.path.join(TOOLS, "vc9tree", "bin") + os.pathsep + ENV.get("PATH", "")
CL = os.path.join(TOOLS, "vc9tree", "bin", "cl.exe")

INCLUDE_DIR = os.path.join(ROOT, "src")

# Include the project's own prelude so the probe sees exactly the same set of
# headers (and therefore the same visible typedefs) as a real decompilation unit.
PREAMBLE = '#include "th12_prelude.h"\n'


def compiles(names, tmpdir, idx):
    """True if every name in `names` is already a usable type name."""
    src = os.path.join(tmpdir, "probe%d.c" % idx)
    with open(src, "w") as fh:
        fh.write(PREAMBLE)
        for n in names:
            fh.write("%s *p_%s;\n" % (n, n.strip("*").replace(" ", "_")))
    r = subprocess.run(
        [CL, "/nologo", "/c", src, "/I" + INCLUDE_DIR,
         "/Fo" + os.path.join(tmpdir, "p%d.obj" % idx)],
        env=ENV, capture_output=True, text=True,
    )
    return r.returncode == 0


FORMS = {
    "plain": "%s *p;",
    "enum": "enum %s *p;",
    "struct": "struct %s *p;",
    "union": "union %s *p;",
}


def probe_all(names, tmpdir):
    """Return the subset of `names` no C declaration form can name.

    A Ghidra type name may be a typedef, or it may be a bare tag that is only
    usable as `enum X` / `struct X` / `union X`. Testing only the plain form
    reports every enum and struct tag as undefined, so try all four.
    """
    undef = []
    for name in names:
        ok = False
        for form in FORMS.values():
            src = os.path.join(tmpdir, "one.c")
            with open(src, "w") as fh:
                fh.write(PREAMBLE)
                fh.write((form % name) + "\n")
            obj = os.path.join(tmpdir, "one.obj")
            if os.path.exists(obj):
                os.remove(obj)
            subprocess.run(
                [CL, "/nologo", "/c", src, "/I" + INCLUDE_DIR, "/Fo" + obj],
                env=ENV, capture_output=True, text=True,
            )
            if os.path.exists(obj):
                ok = True
                break
        if not ok:
            undef.append(name)
    return undef


def find_undefined(names, tmpdir):
    """Batch-then-bisect using the plain form, then retry failures on all forms."""
    counter = [0]

    def rec(chunk):
        if not chunk:
            return []
        counter[0] += 1
        if compiles(chunk, tmpdir, counter[0]):
            return []
        if len(chunk) == 1:
            return list(chunk)
        mid = len(chunk) // 2
        return rec(chunk[:mid]) + rec(chunk[mid:])

    suspects = rec(list(names))
    if not suspects:
        return []
    # A bare enum/struct/union tag is usable but invisible to the plain form.
    return probe_all(suspects, tmpdir)


def main():
    header = sys.argv[1]
    with open(header, "r", errors="replace") as fh:
        lines = fh.read().splitlines()

    # Collect candidate type names from prototype lines only.
    from fix_header import DECL_LINE, IDENT, harvest, PRIMITIVES, CALLING_CONVS

    typedefs, _funcs = harvest([
        os.path.join(TOOLS, "vc9tree", "include"),
        os.path.join(TOOLS, "sdktree", "include"),
        os.path.join(TOOLS, "dxsdk", "DXSDK", "Include"),
    ])
    typedefs |= PRIMITIVES
    typedefs |= CALLING_CONVS

    candidates = set()
    for line in lines:
        s = line.strip()
        if not (s.endswith(");") and "(" in s):
            continue
        m = DECL_LINE.match(s)
        fname = m.group(1) if m else None
        for ident in IDENT.findall(s):
            # Probe EVERY identifier: a typedef existing in some header does not
            # mean it is visible here, so the harvest-based filter is unreliable.
            if ident in CALLING_CONVS or ident in PRIMITIVES or ident == fname:
                continue
            if ident.startswith("a") and ident[1:].isdigit():
                continue
            candidates.add(ident)

    candidates = sorted(candidates)
    if not candidates:
        print("no candidates")
        return

    with tempfile.TemporaryDirectory() as tmp:
        print("probing %d candidate type name(s)..." % len(candidates))
        bad = find_undefined(candidates, tmp)

    print("undefined (need forward decl): %d" % len(bad))
    for n in bad:
        print("  " + n)

    with open(header + ".opaque", "w") as fh:
        for n in bad:
            fh.write(n + "\n")


if __name__ == "__main__":
    sys.path.insert(0, P)
    main()
