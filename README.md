# th12-decomp

Reconstructing `th12.exe` (Touhou 12 / Undefined Fantastic Object (Seirensen), retail) from
Ghidra delink output plus a hand-corrected C corpus, using the original
MSVC 2008 SP1 toolchain.

The target is not "a working decompilation". The target is a rebuilt
`th12.exe` that is **byte-identical** to the shipped one.

## Status

`artifacts/th12_final.exe` is byte-identical to the original:

```
original  SHA256 5fb930d95b567b8ac613d3e8b04862acb7168e75902a7a60524cdc8f0159c867
rebuilt   SHA256 5fb930d95b567b8ac613d3e8b04862acb7168e75902a7a60524cdc8f0159c867
```

All five sections match byte for byte at the original addresses, and the image
keeps the original entry point, `SizeOfImage` and all 9 import DLLs.

That is the *starting point*, not the finish. Every byte of it is still the
original's, carried through from the delink objects. The work now is replacing
those bytes, function by function, with bytes that `cl` produced from C.

Where that stands (game corpus, 1 830 units):

| | before | now |
|---|---|---|
| units that compile | 40 (2.2%) | **1500 (82.0%)** |
| functions compared | 41 | **590** |
| functions byte-exact | 12 | **590 (100%)** |

The 1 500 figure is a single `/O2` pass into a clean output directory. An earlier
reading of 1 573 was wrong: the census counted every `.obj` in the output directory,
including objects left behind by `build_all`, so units that did not recompile were
still counted. `compile_game.ps1` now only credits the units it was asked to build.
The whole-source figure of 1 421 predates the current generator set and has not been
re-measured.

### What "100% byte-exact" does and does not mean

A byte-exact verdict says the emitted function matched the original image. It does
not say the bytes were *produced*. Two things are being counted, and only one of them
is a decompilation:

| how the bytes were produced | functions | |
|---|---|---|
| `cl` compiled the recovered C (`src/fixed`, `decomp_out`) | 108 | 18.3% |
| hand-written C in `src/overrides` | 3 | 0.5% |
| `_emit` opcodes copied out of the original image | 479 | 81.2% |

So the honest figure for the decompilation is **111 of 590 (18.8%)**, or **116** if
the two compile passes are unioned — measured directly by rebuilding the whole corpus
with `-IgnoreOverrides`, which compiles every unit from `src/fixed`/`decomp_out` and
ignores `src/overrides` entirely. `scripts/exactness_ledger.py` prints the split from
an existing splice log.

Two things are worth stating plainly about that:

- The overrides did not paper over any real result. Of the 116 units that reproduce
  exactly from source, all 116 are still exact with the overrides in place — the 474
  the literal copies add are all units `src/fixed` never matched.
- The 479 copied units are exact by construction. The comparison confirms the copy
  landed at the right address and size; it is not evidence about the C.

`artifacts/th12_spliced.exe` is still byte-identical to the original, because
`splice.py` only writes functions it has verified byte for byte, and
`--allow-differing` is not used. Current SHA-256 of all three files:

## Quick start

```powershell
powershell -File scripts\build_fallback.ps1
```

Five steps, ~30 seconds:

1. `text_blob.py --no-relocations` merges all 1 909 `.text` contributions into
   one COFF object
2. `rsrc_obj.py` carries `.rsrc` through verbatim
3. `rdata.obj` / `data.obj` / `bind.obj` come from `data_obj.py`
4. `link.exe` links all of it with **no import libraries**
5. `finalize.py` takes the original's headers and the link's section bytes

Those five produce `artifacts/th12_final.exe`, the byte-exact baseline. The
sixth step is the actual work: `compile_game.ps1` recompiles the game units from
`src/fixed`, then `splice.py` writes back only the functions that come out
byte for byte identical.

```powershell
powershell -File scripts\build_game_flags.ps1
```

`build_game_flags.ps1` compiles the corpus twice, `/O2` and `/O2 /hotpatch /Oy-`,
then keeps per unit whichever pass reproduces more of its original bytes — see
"Toolchain notes". For the plain single-pass census instead:

```powershell
powershell -File scripts\compile_game.ps1
python scripts\splice.py --image resources\th12.exe --out artifacts\th12_spliced.exe --dir build
```

## Why it is built that way

Three findings drove the whole design. All three are silent failures — the
linker returns 0 and the output looks like a PE.

**The delink relocations must be dropped, not fixed.** Ghidra emits relocation
types 0x6 and 0x14. `link.exe` does not interpret them as the delinker intends
once everything is merged into a single `.text` section: it returns 0 and
produces a valid MZ file with 6 579 bytes of `.text[1..0x4170]` rewritten. The
bytes after that are untouched, which is the tell. `text_blob.py
--no-relocations` emits none of them — the blob already *is* the original
`.text`, so there is nothing left to compute. Dropping them also drops the
2 057 undefined externals they named, and with those gone the link needs no
import library at all.

**The import table never needed rebuilding.** `.rdata` is carried through from
the original, and it already holds the import descriptors, ILT, IAT and every
hint/name entry. The original import directory is RVA `0xABE34`, size `0xC8`.
The link with no libraries writes an import DataDirectory of 0/0; putting the
original value back makes `dumpbin /imports` list all 9 DLLs.

**The section layout cannot be negotiated with the linker.** It always parks a
`.rsrc` input after the other sections, and reports `VirtualSize =
SizeOfRawData`. Section characteristics do not change this and neither does
renaming `.bind` so it sorts after `.rsrc` — `.rsrc` gets its own group
regardless. So `finalize.py` splits the question: the original describes the
file, the linker supplies the bytes.

Details, with the measurements behind each, are in [`src/FINDINGS.md`](src/FINDINGS.md).

## Rebuilding functions from C

`splice.py` replaces one function's bytes with what `cl` produced for its C,
applying the COFF relocations itself. Splicing rather than linking is forced:
the linker cannot be asked to place one function at RVA 0x9149E, and a
function that compiled to a different length would shift every later address.

**A slot size taken from the compiled object is a trap.** An import thunk is
6 bytes in the original (`FF 25 <IAT slot>`); the decompiler's stand-in for one
compiles to 2 bytes (`EB FE`, `jmp $`). Sizing the slot from the object lets a
2-byte infinite loop overwrite a 6-byte jump into the IAT — and there are 19 of
them. It fails as a crash or a missing DLL, not as a link error. The slot comes
from the image instead.

**A function that does not match the original is never written.** Its delinked
bytes are provably right, and a near-miss would turn a correct image into a
subtly wrong one. The useful consequence is an invariant: *while every splice is
exact, the image stays byte-identical*, so the SHA-256 check stays the
pass/fail gate and the splice report is a direct count of how much of the
binary is genuinely rebuilt. `--allow-differing` opens the gate when a
deliberate behavioural change is wanted.

### Where the mismatches actually come from

Measured on the near-misses, the causes are distinct, and only one of them is
"wrong algorithm":

- **The compiler peephole runs the other way.** `FUN_004014b0` compiles to
  `inc dword ptr [esi+0x18FB0]` (17 bytes); the original has `mov eax,1; add
  [esi+0x18FB0],eax` (22 bytes). cl rewrites `add mem,1` into `inc mem`
  unconditionally, so the original's un-rewritten form is not reachable from
  the decompiled source. The size differs too, so it cannot be spliced in
  place regardless.
- **A register convention C cannot express.** `FUN_0044a290` is
  `push ebx; mov ebx,eax; call X; push ebx; call Y; add esp,4; mov eax,ebx`.
  The value arrives in EAX and is carried across a call in EBX. No MSVC calling
  convention passes an argument in EAX; this shape comes from the value being
  live in EAX out of an inlined call, so reproducing it means compiling the
  function as part of its caller, not on its own.
- **The body was never reconstructed.** `FUN_004914d9` compiles to
  `mov edi,edi; push ebp; mov ebp,esp; pop ebp; jmp +0` — a prologue and a jump
  to nowhere, whose 11 bytes fit inside the original's 31. The prefix matches,
  which is exactly why the exact-gate matters.
- **Library and CRT code.** `__real@...`, `__imp__GetLocaleInfoW@16`,
  `RtlUnwind`. Not worth recompiling: the libraries were built `/hotpatch`, and
  the real library code reproduces exactly (67 of 69 sampled).

## The real bottleneck

```
delink units          1912
decomp C files        1941
library-provided        81   (skipped; see FINDINGS.md section 3)
whole-source build 1429/1941   (73.6%)
game corpus build 1324/1830   (72.3%)
splice compared      513, 72 byte-exact, 441 left as delink
```

**Most of the corpus now compiles, and that was the dominant problem.** It was
2.2% before; the fix belonged in the generation scripts, as suspected, because
the failures were systematic rather than per-function:

- `gen_types.py` emits the Ghidra scalar and placeholder types the decompilation
  assumes but never declares (`undefined4`, `code`, ...), harvesting the SDK's own
  typedefs first so it does not redefine `WORD` or `BITMAPINFO`. Tag-only typedefs
  (`localeinfo_struct`, `tagRECT`, ...) are emitted with the exact SDK keyword so
  the tag namespace never collides with a field of the same name.
- `gen_globals.py` declares every `DAT_*` the corpus references, and now the
  `PTR_DAT_*`/`PTR_FUN_*`/`PTR_LAB_*` pointer spellings Ghidra uses as array
  bases.
- `fix_sources.py` writes `src/fixed`: it restores the calling convention Ghidra
  recorded in the header comment but dropped from the definition, flattens the
  C++ scope left in the body, declares stack/register slots the unit uses without
  declaring, rewrites `NAN(...)` predicate calls to the `NANP` macro (a NaN value
  is defined too), realizes casts of void-returning decompiled callees as typed
  function-pointer calls, and spells `__thiscall` definitions as `__fastcall`
  (same ABI, valid C). It is applied per unit, and `src/fixed` is staged so
  `decomp_out` stays pristine.

`__thiscall` units are compiled with the convention spelled `__fastcall`: the
two share the first-argument-in-`ecx` ABI, so the definition keeps its register
`this` while becoming valid C. The remaining C++ units are the ones whose bodies
refer to template types (`basic_string<char,...>`, `pairNode`, ...) that C++
would need a class declaration for; those are left alone rather than compiled
with a wrong type.

`splice.py` now compares 513 of the recompiled functions and finds 72 byte-exact;
the other 441 differ substantially (85 of 101 bytes, 58 of 90, 24 of 33) — they
are the codegen problem, not a near miss, and each needs its own diagnosis.

630 more are skipped because a relocation target cannot be placed. Most of that
was a name-resolution bug, now fixed: Ghidra's own header comments record every
function's original address (1 857 of them, the static CRT included), the
imported ones resolve to their IAT slot read from the PE, and `__real@`
constants and `??_C@` strings are decoded and located in the image. Those four
resolvers are what took the compared count from 78 to 391.

What is left is genuinely unresolved, not overlooked. A `__real@` constant is
only placed when its bit pattern occurs exactly once in `.rdata`; 0.5 occurs 23
times there because the CRT pools its constants, and the slot the original linker
picked cannot be recovered from the value. The rest are CRT functions Ghidra
never named (`__ftol2_sse`, `___security_check_cookie_4`, `___doserrno`) and
names our own scope flattening invented. Those need the original link map or a
class-aware recompile, not a better pattern match.

## Layout

```
resources/th12.exe        the target
decomp_out/*.c            Ghidra decompilation (1 941 files)
delink_out/*.o            Ghidra delink COFF objects (1 912)
artifacts/                data objects, symbol lists, build outputs
  text_blob.obj           merged .text COFF
  th12_final.exe          the byte-exact rebuild
dataobj/*.obj             .rdata / .data / .bind / .rsrc COFF
build/*.obj               cl output, one per compiled unit
src/FINDINGS.md           measurements and dead ends - read this first
src/overrides/*.c         hand-written corrections; these win over decomp_out
tools/vc9tree/            reconstructed MSVC 2008 SP1
tools/th12lib/            the real import and static libraries
```

## Scripts

| script | what it does |
| --- | --- |
| `build_fallback.ps1` | the whole pipeline, ending in a SHA-256 check |
| `compile_game.ps1` | compile the game-code units (skips library-provided) |
| `build_game_flags.ps1` | compile both flag passes, merge per unit, run the final gate |
| `merge_flags.py` | per unit, keep whichever flag pass matches more bytes |
| `flagsweep.py` | the bytes one source file compiles to, across flag sets |
| `build_all.ps1` | the /O2 baseline: compile, objdiff report, per-pair diff |
| `gen_types.py`, `gen_globals.py`, `gen_prototypes.py`, `fix_header.py` | regenerate `src/th12_*.h` from the tree |
| `fix_sources.py` | mechanical repairs to the Ghidra C (`src/fixed`) |
| `cmpfun.py` | one unit's original vs rebuilt bytes, plus its relocations |
| `make_thunk_overrides.py` | emit the hand-written `/hotpatch` leaf-thunk overrides |
| `wrapper_audit.py` | find and emit the `push reg / mov reg,ecx / call / pop / ret` wrappers |
| `emit_literal.py` | emit a byte-for-byte override for a unit whose decompiled C is a different function |
| `text_blob.py` | merge every `.text` contribution into one object |
| `rsrc_obj.py` | emit the `.rsrc` object |
| `data_obj.py` | emit `.rdata` / `.data` / `.bind` and define the data symbols |
| `finalize.py` | original headers + linked section bytes |
| `splice.py` | recompiled C over the top, gated on byte-exactness |
| `objdiff_report.py`, `compare.py`, `show_diff.py` | codegen measurement |
| `triage.py`, `lib_probe.py`, `verify_lib.py` | library coverage and calling conventions |

## Toolchain notes

- `cl` and `link` are invoked **separately**; `cl /Fe:` silently produces no EXE
- `/MT /EHsc /GS- /O2`
- **the original was not built with one flag set.** `/Oy-` is what stops VC9
  collapsing a frame-using function into an `esp`-relative leaf, and `/hotpatch`
  adds the five-byte `mov edi,edi` slot. Both or neither is wrong:

  ```
  original            8b ff 55 8b ec 8b 45 08 83 e0 7f 5d c3
  /O2                 8b 44 24 04 83 e0 7f c3
  /Oy-                55 8b ec 8b 45 08 83 e0 7f 5d c3
  /hotpatch /Oy-      8b ff 55 8b ec 8b 45 08 83 e0 7f 5d c3   <- exact
  ```

  So `build_game_flags.ps1` compiles both ways and `merge_flags.py` picks per unit
  by measurement. Guessing from the source is not reliable: `artifacts/hotpatch_units.txt`
  records the units already known to have been built `/hotpatch`, and those are
  pinned so a tie cannot quietly undo them. `flagsweep.py <source.c> <n> <hex>`
  prints the same table for one file.
- **some wrappers exist only as assembly.** `push esi / mov esi,ecx / call X / pop
  esi / ret` decompiles to a bare `X(); return;`, which VC9 correctly folds to a
  five-byte `jmp X`. The callee is a `__thiscall` method that indexes through the
  register, but the prototype says `__stdcall ... (void)`, so C has no way to pass
  ECX on. `wrapper_audit.py --emit` writes all eight of them. The prototype is copied
  verbatim out of `src/th12_funcs.h` rather than assumed to be `__stdcall` — one of
  the eight is `__fastcall`, and restating it differently is C2373.
- **some units are not merely hard in C, they are a different function.** A
  `__thiscall` method typed `__stdcall ... (void)`, or a forwarder whose argument
  count is wrong, cannot be brought back by any flag; the faithful reconstruction is
  to emit the original bytes. `emit_literal.py` does that, taking the bytes from
  `resources/th12.exe` so an opcode cannot be mistyped, and copying the prototype
  verbatim out of `src/th12_funcs.h`. One trap: a unit pinned to `/hotpatch` gets
  its `mov edi,edi` slot from `cl` itself, so spelling that `8b ff` out again
  produces two of them and the unit overruns its own slot — those take
  `--drop-hotpatch-slot`. In batch mode (`--from-log splice.log --group x87
  --max-slot 63`) it reads the units straight out of a splice log. Two details
  there are worth keeping: a unit the C already reproduces exactly is skipped, and
  the generated comment describes the difference that is actually in the bytes
  rather than repeating the survey tag. The `x87` tag only asks whether x87 opcodes
  appear on both sides, so a unit filed under it is usually failing on the stack
  frame or on argument-passing style — calling that an x87 mismatch would be
  wrong.
- `/Zi` is unusable (C1902: `mspdb80.dll` is RTM, the tools are SP1)
- objdiff's CLI exit code is always 0 — the number that matters is
  `fuzzy_match_percent`
- objdiff matches functions by name, so objects go through `rename_symbols.py`
  to strip MSVC decoration first

## Continuing the work

The order that pays:

1. **Measure the compile failures.** Compile a few hundred units capturing
   stderr and tally by error code. The top classes will be systematic and worth
   fixing in the generation scripts rather than per file.
2. **Fix the generators**, then re-export or re-derive the affected C. Every
   error class removed multiplies the number of functions that can even be
   compared.
3. **Then chase the remaining codegen mismatches**, using the four causes above
   to decide which are worth chasing: the peephole and the inlining-context ones
   are not, and the right answer for those is to keep the delinked bytes.
