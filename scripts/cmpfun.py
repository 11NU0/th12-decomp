"""Side-by-side byte dump of one function: original image vs rebuilt object.

splice.py already decides *whether* a function matches; this answers *how* it
differs, which is the only useful input when trying to turn a near-miss into a
byte-exact one.

Relocations are *not* applied - they are printed under the byte they sit in,
so you can see both the encoded target and what the linker will put there.

    python scripts/cmpfun.py FUN_00403ec0_00403ec0
    python scripts/cmpfun.py FUN_00403ec0_00403ec0 --disasm
"""
import argparse
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import splice  # noqa: E402
import text_blob as TB  # noqa: E402


def find_object(d, stem):
    for ext in (".obj", ".o"):
        p = os.path.join(d, stem + ext)
        if os.path.isfile(p):
            return p
    return None


def load(d, stem):
    """(bytes, {offset: (symbol, value)}) for one object's .text."""
    path = find_object(d, stem)
    if path is None:
        return None, {}
    o = TB.read_coff(path)
    for s in o["secs"]:
        if s["name"] != ".text" or not s["rawsz"]:
            continue
        body = bytes(o["b"][s["rawptr"]:s["rawptr"] + s["rawsz"]])
        rels = {}
        if s["relptr"] and s["nrel"]:
            for k in range(s["nrel"]):
                va, sym, typ = splice.struct.unpack_from("<IIH", o["b"],
                                                        s["relptr"] + k * 10)
                if typ == splice.R_ABSOLUTE:
                    continue
                nm = o["syms"][sym][0] if sym < len(o["syms"]) else "?"
                rels[va] = (nm, o["syms"][sym][1])
        return body, rels
    return None, {}


def main(argv=None):
    ap = argparse.ArgumentParser()
    ap.add_argument("stem")
    ap.add_argument("--image", default="resources/th12.exe")
    ap.add_argument("--objdir", default="build")
    ap.add_argument("--delink-dir", default="delink_out")
    ap.add_argument("--disasm", action="store_true")
    a = ap.parse_args(argv)

    va = splice.addr_from_name(a.stem)
    if va is None:
        print("%s: no VA in the name" % a.stem)
        return 1

    image = open(a.image, "rb").read()
    sections = splice.load_sections(image)

    want, _wrels = load(a.delink_dir, a.stem)
    got, grels = load(a.objdir, a.stem)
    if want is None and got is None:
        print("%s: not found in %s or %s" % (a.stem, a.objdir, a.delink_dir))
        return 1

    foff = splice.file_offset(sections, va - splice.IMAGEBASE)
    if foff is None:
        print("VA 0x%08x is in no section" % va)
        return 1
    span = max(len(want or b""), len(got or b""))
    orig = image[foff:foff + span]

    print("%s  va 0x%08x  original %d bytes, rebuilt %d bytes"
          % (a.stem, va, len(orig), len(got or b"")))
    n = max(len(orig), len(got or b""))
    for i in range(0, n, 16):
        o_ = orig[i:i + 16]
        g_ = (got or b"")[i:i + 16]
        flag = "".join("  " if j >= len(g_) else
                       ("~ " if j >= len(o_) or o_[j] != g_[j] else "..")
                       for j in range(i, min(i + 16, n)))
        print("  %04x  orig %-23s  new %-23s  %s"
              % (i, " ".join("%02x" % c for c in o_),
                 " ".join("%02x" % c for c in g_), flag))
    print("  legend: .. same, ~  differs or missing, XX differs")

    if grels:
        print("relocations in the rebuilt object:")
        for off in sorted(grels):
            nm, val = grels[off]
            print("  +0x%04x  %-28s sym=%s value=0x%x" % (off, nm, nm, val))
    else:
        print("relocations in the rebuilt object: none")

    if a.disasm:
        for label, blob in (("original", orig), ("rebuilt", got or b"")):
            print("--- %s ---" % label)
            try:
                import subprocess
                out = subprocess.run(["ndisasm", "-b", "32", "-o", "0x%08x" % va],
                                     input=bytes(blob),
                                     stdout=subprocess.PIPE).stdout.decode("latin-1")
                sys.stdout.write(out)
            except OSError:
                print("(ndisasm not available)")
    return 0


if __name__ == "__main__":
    sys.exit(main())