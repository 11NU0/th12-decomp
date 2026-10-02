# Codegen and measurement findings
Everything here was established by experiment against the original objects in
`delink_out`, not assumed. Several earlier conclusions were wrong because the
measurement tool was misread; those corrections are recorded too.
## 1. objdiff pairs functions BY NAME - strip MSVC decoration first
This was the real reason the project reported nothing, and it cost the most
time to find.
objdiff's CLI has exactly two commands, `diff` and `report` (version 3.8.1).
`report generate` *does* run the matcher, but it pairs base and target
functions by **symbol name**:
- rebuilt (MSVC, `__fastcall`): `@FUN_004014b0@4` - the `@` prefix replaces
  the usual `_`, and `@4` is the stdcall/fastcall argument-byte count
- original (Ghidra): `FUN_004014b0` - the demangler reports the undecorated name
Those never pair, so `report generate` omits the match measures entirely. It
is not that the matcher is GUI-only; the control project proves it runs in the
CLI. The names simply have to agree.
`scripts\rename_symbols.py` fixes this by rewriting the COFF symbol table to
undo exactly one level of C decoration (one leading `_` or `@`, plus a trailing
`@<decimal>`), for external function definitions and undefined function
references in code sections. Stripping exactly *one* prefix is what keeps CRT
symbols right: Ghidra's `___iswcsym` comes from the object symbol
`____iswcsym`, so one strip restores it, whereas a blanket strip would
over-trim.
Relocations address symbols by index rather than by name, so renaming is safe,
and the rewritten objects still link (verified end to end against a delinked
callee: `LINK_EXIT=0`). Two implementation notes:
- The original string table must be copied verbatim and new names *appended*.
  Replacing it drops the names that were not renamed, and objdiff then fails
  with `Invalid COFF symbol name offset`.
- Rename in place *after* compiling, before any comparison.
With names aligned, a control project (identical object on both sides) reports
`matched_code_percent: 100.0`, `matched_functions: 1`, and
`fuzzy_match_percent: 100.0`.
### Working project format
The v3 `units`/`baseObj` schema silently skips every unit. The working schema
is the newer one, as used by the th06 reference project
(`tools/th06-master/objdiff.json`):
```json
{
  "target_dir": "delink_out",
  "base_dir": "build",
  "build_target": false,
  "build_base": false,
  "objects": [
    { "name": "FUN_004014b0",
      "target_path": "delink_out/FUN_004014b0_004014b0.o",
      "base_path": "build/FUN_004014b0_004014b0.obj",
      "reverse_fn_order": false }
  ]
}
```
Note the direction, which is the opposite of the intuitive one:
**`base` is the reimplementation, `target` is the original.** Paths resolve
relative to the directory containing `objdiff.json`, so the config lives at the
repository root. `scripts\objdiff_report.py` regenerates this config from the
paired files and summarises the report.
## 2. The real baseline (121 units, /O2)
From `objdiff report generate`, via `scripts\objdiff_report.py`:
| measure | value |
| --- | --- |
| total_units | 121 |
| total_functions | 121 |
| matched_functions | 4 |
| total_code | 3813 bytes |
| matched_code | 85 bytes |
| matched_code_percent | 2.23% |
| fuzzy_match_percent | 37.95% |
| complete_data_percent | 100.0% |
Per-unit `fuzzy_match_percent`:
| band | units |
| --- | --- |
| 100% (exact) | 4 |
| 80-94% | 2 |
| 50-79% | 36 |
| 20-49% | 46 |
| 0-19% | 9 |
97 of 121 units score; the other 24 have no code match at all. Mean 46.0%.
The two metrics mean different things: `matched_code_percent` (2.23%) is bytes
that are *byte-for-byte* identical, while `fuzzy_match_percent` (37.95%) is
instruction-level similarity. The 4 exact units are `__cexit`,
`FUN_0046ce35`, `FUN_0044d310` and `FUN_0044d340`.
`FUN_004014b0` scores exactly 80.0% - 6 of 7 instructions - which independently
confirms the manual analysis in section 6.
Code size delta (rebuilt minus original) stays useful for spotting shape
errors: 20 units match the original's size exactly, 78 are within 8 bytes, 21
within 9-32, and 2 within 33-128. Size agreement is not evidence of a match
though - several 0-delta units score under 20% similarity.
The instruction-level similarity used by `scripts\compare.py` is computed
independently of objdiff (it flattens both sides' instruction lists from
`diff --format json` and uses `difflib.SequenceMatcher`), because objdiff's
per-pair `match_percent` field reads 0.0 without the matcher. objdiff's own
CLI exit code is always 0, even for a deliberately corrupted object, so it is
never a signal.
## 3. Most of the corpus is statically linked library code - do NOT recompile it
This is the single biggest structural finding, and it invalidates the approach
taken so far for about two thirds of the measured corpus.
Of the 121 units currently paired there are 108 distinct unit names, and **72
come from real static libraries** (CRT, D3DX, DInput) while only **36 are
genuinely game or third-party code**. `scripts\lib_probe.py` establishes this by
using the linker as an oracle: it emits one probe translation unit that
references every paired function, using the calling convention and parameter
count Ghidra recorded in `build\classes.tsv`, then performs a single link. One
link reports *every* unresolved symbol (LNK2001/LNK2019), so one invocation
classifies all 121. Results are saved in `artifacts\`.
Details that make the probe correct, each of which produced a wrong answer
first:
- The unit name is the *demangled* name, so exactly **one** leading `_` must be
  stripped to get the C identifier. `__cexit` -> C `_cexit` -> symbol
  `__cexit`. Stripping more, or using `lstrip("_")` which eats all of them,
  changes the answer.
- Calling-convention keywords go **between the return type and the name**
  (`extern int __fastcall f(void);`) and are accepted natively by VC9's C
  compiler - no `crtdefs.h` needed. Putting them before the return type is a
  syntax error.
- stdcall/fastcall decorations encode the **byte count of the arguments**, so a
  probe must declare `4 * nparams` worth of `int` parameters. Declaring
  `f(void)` emits `@f@0`, which never matches a real `f(int)`.
- MSVC decorates `__fastcall` with an **at-sign, not an underscore**
  (`@f@4`, versus `_f@4` for `__stdcall` and `_f` for `__cdecl`). Predicting the
  wrong one shifts the classification.
- A unit name can occur at several addresses and the copies need not agree on
  convention or argument count, so they mangle to *different* symbols. A unit
  counts as available if **any** variant resolved; judging by a single address
  wrongly marks `_write_string` as needing recompilation.
- `FID_conflict:__atodbl` is not a symbol name but a **linker conflict label**
  the CRT archive emits for a duplicate internal definition, and `:` is illegal
  in a C identifier, so no probe can ever reference it. Such units are library
  code by construction and are counted as available without probing.
### Verification that linking the real library is exact
`scripts\verify_lib.py` links the available functions for real, then compares the
resulting image against the original, byte by byte, masking only the COFF
relocation targets and the displacements of `call`/`jmp` (the two things that
legitimately move when a function is placed at a different address). Masking
only the relocations reports a false difference on nearly every function,
because `delink_out` has already resolved internal calls to absolute values and
leaves no relocation entry behind.
**Result: 67 exact, 2 differ.** The two outliers are `__global_unwind2` (3 real
bytes differ, presumably a different CRT member variant) and
`__crtInitCritSecAndSpinCount`. This is the justification for the strategy, and
it is direct: linking the library reproduces the original code.
### Why recompiling these is futile
The original linked the genuine static CRT, and that code was built with
`/hotpatch`, which emits the two-byte `mov edi,edi` prologue. 37.2% of all 1909
target objects start with `8b ff`, and the CRT functions among them are
hotpatch + frame style.
Proof, by linking `_iswcntrl` out of the real `libcmt.lib` and comparing the
resulting image against the original binary:
```
real libcmt link : 8b ff 55 8b ec 6a 20 ff 75 08 e8 b8 11 00 00 00 59 59 5d c3
original th12.exe: 8b ff 55 8b ec 6a 20 ff 75 08 e8 d8 0d 01 00 00 59 59 5d c3
```
17 of 19 bytes are identical; the only difference is the `call` displacement,
which is a relocation and differs only because the two images lay code out at
different addresses.
Compare that with what recompiling Ghidra's decompilation produces at `/O2`:
```
rebuilt C : mov eax,[esp+4] ; push 0x20 ; push eax ; call _iswctype ; add esp,8 ; ret
original  : mov edi,edi ; push ebp ; mov ebp,esp ; push 0x20 ; push [ebp+8] ; call _iswctype ; pop ecx ; pop ecx ; pop ebp ; ret
```
The `/hotpatch` prologue and the frame style are simply not reachable from a
hand-written C function, so no amount of flag tuning will match these. They
should be **linked from the real library**, which makes them exact by
construction.
`/hotpatch` must therefore *not* be applied globally: it reproduces the
library style exactly (verified on `FUN_0046ca4f`, whose first bytes match
byte-for-byte) but it *breaks* the game functions, which have no hotpatch
prologue at all - `FUN_004014b0` starts directly with `push esi`.
## 4. The original is compiled with optimisation on
At `/Od`, VC9 emits a standard frame (`push ebp / mov ebp,esp / push ecx /
mov [ebp-4],ecx`). The original instead uses `push esi / mov esi,ecx`.
VC9 only emits that for a `__thiscall` **or `__fastcall`** function at
`/O1`../`/Ox`; `/Ot` reproduces the `/Od` frame. A `/Od` build scored 0 with no
usable discrimination, so `/O2` is used.
## 5. Two systematic codegen fixes worth more than any flag tuning
### 5a. `/hotpatch` is per unit, and the build can detect which units
A target beginning with `mov edi,edi` was compiled with `/hotpatch`. Adding
`/hotpatch /Oy-` to just those units reproduces the prologue exactly. This covers
two shapes:
- the incremental-linking thunk
  `mov edi,edi ; push ebp ; mov ebp,esp ; pop ebp ; jmp f` - byte-exact;
- real functions with a frame, where the rebuild was missing only the two
  prologue bytes.
`scripts\triage.py --emit-hotpatch` derives the list from the previous run's
instruction listings, so the build is self-correcting: a unit drops out of the
list once it matches. Applied to 14 units this took the identical count from 3
to 10 and emptied both the `decompiler-loss` and `hotpatch-prologue` buckets.
It must stay per unit. Applied globally it would add a prologue to the game
functions that have none.
### 5b. VC9 sibling calls defeat a faithful C statement
`FUN_0049149e` decompiles to a plain call:
```c
void __cdecl FUN_0049149e(void *p1, rsize_t p2, void *p3, rsize_t p4)
{ FUN_0044d310(p1,p2,p3,p4); }
```
VC9 at `/O2` rewrites this into a **sibling call** - a bare
`jmp FUN_0044d310`, with no argument setup at all - because the four incoming
arguments already sit exactly where the four outgoing ones belong. An `__asm {}`
barrier does not prevent it, and it is not controllable from the command line.
The target instead pushes the arguments and cleans up `0x10` itself, so the
pushes are written explicitly in `src\overrides\`:
```c
__asm { push dword ptr p4  push dword ptr p3  push dword ptr p2  push dword ptr p1
        call FUN_0044d310  add esp, 0x10 }
```
(`void *` operands are ambiguous in MSVC inline asm, hence `dword ptr`.)
Overrides live in `src\overrides\`, named after the unit stem, and the build
prefers them over `decomp_out\`. Keeping hand fixes out of the generated tree
means re-running the Ghidra export cannot silently discard them, and every
manual correction is reviewable in one place. `FUN_0049149e` and
`FUN_004914b9` are done this way; `FUN_004914d9` and `FUN_004914f8` need the same
treatment plus a 4-byte stack local whose address is passed, which inline asm
cannot take directly and is still open.
## 6. The current baseline, game code only
Library-provided units are excluded from the build, so these numbers describe
only the code we are responsible for:
| measure | value |
| --- | --- |
| paired units | 40 |
| matched_functions | 12 |
| matched_code | 203 / 1406 bytes (14.44%) |
| fuzzy_match_percent | 51.64% |
| mean (scored units) | 62.1% |
Remaining: 11 `frame-style` units where the target passes arguments in registers
in a way the C prototype cannot express (Ghidra emits an `in_EAX` input), and 17
`other`.
## 7. Unmatched functions can simply be linked
Every decomp project that reaches a byte-exact binary stops insisting that
every function match. Those that work simply link the original code for the
functions that have not been matched yet - `open-spyro` calls it `INCLUDE_ASM`,
and `wearrrrr/th06` stubs the remainder via `config/stubbed.csv`.
This project already has byte-exact originals for **every** function: the
`delink_out` objects were synthesised from the binary itself, and they link
cleanly. So a unit that has not been matched in C can be linked from its
`delink_out` object instead of being counted as a failure. That makes the
endgame reachable without waiting for a 100% match rate, and it is the natural
next step after the codegen work above.
## 8. C++ class synthesis is NOT required
An earlier conclusion that the game must be rebuilt as C++ with synthesised
classes was wrong. `__thiscall` cannot be applied to a free function (error
C3865), which is what made C++ look necessary 鈥?but `__fastcall` passes its
first argument in ECX just like `__thiscall`, and at `/O2` **plain C with
`__fastcall` produces the identical `push esi; mov esi,ecx` prologue**. Ghidra's
C output is therefore usable as-is, and no per-function class synthesis is
needed. This is why `scripts/gen_prototypes.py` maps `__thiscall` to
`__fastcall`.
For the record, Ghidra's own view of the binary: 1942 functions, of which 692
`__stdcall`, 678 `__cdecl`, 339 `__fastcall`, 207 `__thiscall`, 26 unknown.
1809 sit in the `Global` namespace; the rest are the statically linked
`UnDecorator` (49), `DName` (26) and `type_info` (10) demangler clusters.
This is exported by `scripts/ghidra/ExportClasses.java` to
`build/classes.tsv`.
## 9. Callees are `__stdcall`
A callee reached by `push esi; call X` with **no** following `add esp,4` is
`__stdcall`. With `__cdecl`, VC9 emits `add esp,4` at the call site. That
instruction is absent in the original, which is how the convention was
identified.
## 10. Near-exact case: FUN_004014b0
Original, 22 bytes, from `delink_out\FUN_004014b0_004014b0.o`:
```
56                 push esi
8b f1              mov  esi,ecx
56                 push esi
e8 00 00 00 00     call        (relocation -> FUN_004022a0)
b8 01 00 00 00     mov  eax,1
01 86 b0 8f 01 00  add  dword ptr [esi+18FB0h],eax
5e                 pop  esi
c3                 ret
```
Rebuilt from Ghidra's C at `/O2`, 17 bytes 鈥?6 of 7 instructions identical:
```
56                 push esi
8b f1              mov  esi,ecx
56                 push esi
e8 00 00 00 00     call        _FUN_004022a0@4
ff 86 b0 8f 01 00  inc  dword ptr [esi+18FB0h]
5e                 pop  esi
c3                 ret
```
The relocation count, symbol table and the raw bytes of the original were read
directly to confirm there is exactly one relocation (the `call`) and that the
addend is a literal `1` with no relocation.
## 11. The increment form is not reproducible from source
The only remaining difference is `inc [mem]` versus `mov eax,1; add [mem],eax`.
No source shape produced the latter:
- `f = f + 1`, `f += 1`, `(f)++`, `1 + this->f` (operand order swapped)
- `static const int`, a `const int` local, a `const int &`
- a helper function returning 1 (inlined to a constant)
- `(int)1`, `(int)true`, a `1 ? 1 : 1` ternary
- `volatile int f`, `unsigned long f`, `__int64` intermediate
- `(char*)this + 0x18fb0` cast arithmetic
- an addend loaded from memory (gives `mov eax,[mem]`, the wrong shape)
- the same body inside a class template
And no flag avoided the fold to `inc`: `/O1 /O2 /Ox /Ob1 /Ob2 /Oi- /Gs /Gw
/Zp8 /GL /favor:blend /DYNAMICBASE:NO /Ot /O1` all produced `inc`.
The peephole that rewrites `add mem, 1` into `inc mem` is applied
unconditionally by this compiler. Since the original still contains the
un-rewritten form, the addend was a value the front end had already placed in
a register, and that decision is not recoverable from the decompilation.
**This is a known, accepted gap for the affected functions.** It is a single
instruction, and closing it would need dataflow over the original machine code
rather than source-level guessing.
## 12. Flags and tools that do not work
- `/Zi` — C1902. The supplied `mspdb80.dll` is RTM while the tools are SP1.
- `cl /Fe:` — silently produces no EXE; compile and link separately.
- `masm.exe` and `mt.exe` — absent from the reconstructed tree.
- `dinput8.h` and `dxguid.h` — absent; DirectX ships `dinput.h` only.
  Define `DIRECTINPUT_VERSION=0x0800` to silence the `dinput.h` warning.
## 13. The delink fallback rebuilds th12.exe byte for byte
`scripts\build_fallback.ps1` links to a SHA-256 identical copy of the original:
```
original  SHA256 5fb930d95b567b8ac613d3e8b04862acb7168e75902a7a60524cdc8f0159c867
rebuilt   SHA256 5fb930d95b567b8ac613d3e8b04862acb7168e75902a7a60524cdc8f0159c867
```
All five sections are byte-identical at the original addresses, and the image
keeps the original entry point, size of image and all 9 import DLLs.
### The three things that had to be right
**1. Relocations are not needed, and applying them corrupts the text.** Ghidra's
delinker emits relocation types 0x6 and 0x14. `link.exe` does not interpret them
the way the delinker intends once all 1 909 objects are merged into a single
`.text` section: the link returns 0 and produces a valid MZ file with 6 579
bytes of `.text[1..0x4170]` rewritten. The trailing 600 719 bytes match the
original exactly, which is the tell — the damage stops where the fixups do.
The fix is to emit none of them (`text_blob.py --no-relocations`). The blob
already *is* the original `.text`, byte for byte, because it is copied out of the
original image; there is nothing left for a relocation to compute. Deleting the
relocations also means dropping the 2 057 undefined externals they named, and
with those gone the link needs **no import library at all**.
An earlier failure to get a valid PE at all had the same family of cause, one
step earlier: a relocation's `VirtualAddress` is an offset inside its own
object's section, and every delink object carries `.text` at `VirtualAddress`
0. Merging them without adding `text.va` and sorting the table by address puts
fixups at addresses below `.text`, where the linker applies them to the DOS and
PE headers. The 1 MB file with a scrambled first page was that.
**2. The import table never needed regenerating.** `.rdata` is carried through
from the original, and it already contains the import descriptors, the ILT, the
IAT and every hint/name entry. The original import directory is RVA `0xABE34`,
size `0xC8`, and it sits inside `.rdata`'s virtual size. A link with no
libraries produces an import DataDirectory of 0/0, but writing the original
value back into the header makes `dumpbin /imports` list all 9 DLLs. Nothing
else about the linked image changes.
**3. The linker cannot be made to lay the sections out like the original.** It
always parks a `.rsrc` input after the other sections, so `.bind` lands at
`0xB4000` where `.rsrc` belongs and `.rsrc` lands at `0xD7000` where `.bind`
belongs. Section characteristics do not change this: `.bind` is `CODE` in the
original, and marking it data or renaming it so it sorts after `.rsrc` makes no
difference, because `.rsrc` is placed in its own group regardless. The linker
also reports `VirtualSize = SizeOfRawData` for every section, where the original
carries smaller values (`.text` `0x96AD5`, `.rdata` `0x14FA2`, `.data` `0x29460`).
So the layout is not negotiated with the linker at all. `finalize.py` takes the
original's header block and the linker's section bytes: the original describes
the file, the link supplies the contents. The result is byte-exact, and the
per-section report is the check that the two agree.
One consequence worth recording: `.data` in the original has
`VirtualSize 0x29460` but `SizeOfRawData` only `0x6A00`, and `data_obj.py` pads
the object body out to the highest symbol offset (`0x2945C`) so a data symbol
in the zero-fill area is still representable. The linked `.data` is therefore
`0x2945C` bytes rather than `0x6A00`. That costs nothing — the finalizer only
takes the original's `0x6A00` bytes, and the rest was padding either way.
## 14. Recompiled functions are spliced in, and gated on being exact
`scripts\splice.py` replaces one function's bytes with what `cl` produced for
its C. Splicing is the only way to do this that keeps the image at its original
size: the linker cannot be asked to place one function at RVA 0x9149E, and a
function that compiled to a different length would shift every address after it.
### Three things that are all silently wrong if you get them wrong
A typical rebuilt function is a wrapper whose only content is a call:
```
e8 00 00 00 00      rel 0x14 (REL32) at offset 0x12, symbol FUN_0044d310
```
- **the symbol's VA.** Ghidra names a label after its address, so `FUN_0044d310`
  *is* 0x0044D310. Anything else falls back to the merged blob's symbol table.
- **the field's address P** — the function's VA plus the offset within it, not
  the file offset.
- **the REL32 addend.** The stored displacement is relative to the *end* of the
  instruction, so it is `S - (P + 4)`, not `S - P`.
None of these fail loudly. `S - P` is off by four, and four bytes that look
like a plausible displacement produce something that still disassembles. The
check that pins all three down at once is that the already-known-exact functions
splice to bytes *identical to the original* — the original is an oracle
independent of objdiff, and a 4-byte error shows up in the displacement.
### A slot size taken from the compiled object is a trap
The import thunks are 6 bytes in the original: `FF 25 <IAT slot>`, a jump
through the import address table. The decompiler's stand-in for one of them
compiles to `EB FE` — `jmp $`, two bytes. Sizing the slot from the object would
therefore let a 2-byte infinite loop overwrite a 6-byte jump into the IAT, and
there are 19 of these. It fails silently as a crash at run time, or as a
missing DLL, rather than as a link error.
The slot has to come from the image: the delink object's size where there is
one, otherwise the distance to the next known function start. The compiled
length says nothing about the original.
### The gate, and what it currently reports
A function whose bytes do not match the original is **not written**. Its
delinked bytes are provably right; overwriting them with a near-miss turns a
correct image into a subtly wrong one, and a subtly wrong image is harder to
work with than an honest delinked one. `--allow-differing` opens the gate when
a deliberate behavioural change is wanted.
The useful consequence is an invariant: **while every splice is exact, the
image stays byte-identical to the original**, so the SHA-256 check in
`build_fallback.ps1` remains the pass/fail gate, and the splice report is a
count of how much of the binary is genuinely rebuilt rather than delinked.
Current state, over the 41 objects that compile at `/O2`:
```
12 verified exact
29 not exact, left as delink
18 skipped
```
That agrees with the independent objdiff count (12 of 40), which is a useful
cross-check that the splice path is measuring the same thing objdiff measures.
The skipped ones fall into three classes, and none of them is game code:
- **unresolved relocations** — `__real@...`, `__imp__GetLocaleInfoW@16`,
  `RtlUnwind`. These are the real static libraries and the CRT. Per section 3
  they are not worth recompiling at all: the libraries were built `/hotpatch`,
  whose `mov edi,edi` prologue is unreachable from hand-written C, and the
  original library code reproduces exactly (67 of 69 sampled).
- **too large for the slot** — `_write_string` at 90 bytes into 77, the
  `__un_inc` family at 28 into 19. Either the decompilation is wrong or the
  function genuinely differs; either way it cannot be dropped in place.
- **library-provided units** that `build_all.ps1` already skips via
  `available_from_libs.txt`.
### What a non-exact function needs
Of the 29, the `FUN_0049xx` family is instructive:
```
compiled: 8b ff 55 8b ec 5d e9 00 00 00 00     (11 bytes)
original: 8b ff 55 8b ec 51 ff 75 fc ...        (31 bytes)
```
The recompile is `mov edi,edi; push ebp; mov ebp,esp; pop ebp; jmp +0` — a
prologue and a jump to nowhere. That is not a near-miss on the algorithm, it is
a function whose body was never reconstructed, and its 11 bytes happen to fit
inside the original's 31. The gate is what stops that from being written: the
prefix matches, and without the exact check the image would have taken a jump
to a zero displacement.
### What this buys
The `.text` blob starts as a byte-exact copy, so `objdiff` has a fixed reference
and every function that is recompiled shows up as a difference against exactly
the right target. As overrides land, the finalize report shrinks from five
identical sections to a `.text` row with N differing bytes, and the SHA check
turns from green into a count of how much of the binary is genuinely rebuilt
rather than delinked.
## 15. Getting the corpus to compile
The 2.2% compile rate was not 1 938 separate problems. Ranked by how many
errors each accounted for, they were four systematic ones, and each had a
generator that could fix all of its instances at once:
| cause | errors | fix |
|---|---|---|
| Ghidra types never declared | ~1 000 | `gen_types.py` |
| `DAT_*` never declared | ~250 | `gen_globals.py` |
| calling convention dropped from the definition | 734 units | `fix_sources.py` |
| C++ scope left in the body | 115 units | `fix_sources.py` |
`th12_funcs.h` was the subtle one. It declared `typedef struct undefined4 {...}`
for its opaque parameters, which then collided with the real `undefined4` once
`th12_ghidra.h` introduced it (`C2371`). Ownership has to be one-way:
`th12_ghidra.h` owns the Ghidra scalars, `th12_funcs.h` owns prototypes and
non-Ghidra opaques. `fix_header.py` now harvests the SDK's own typedefs and
excludes those names, so `WORD` and `BITMAPINFO` are never redefined.
### The calling convention is recoverable, the C++ scope is not always
Ghidra records the convention in the header comment and then omits it from the
definition:
    /* undefined __stdcall FUN_00401000 */
    void FUN_00401000(void) { ...
So the comment is the source of truth, and 734 definitions can be restored from
it. This matters for codegen, not just parsing: `__stdcall` and `__cdecl` differ
in who pops the arguments.
An overloaded operator is the one place a per-file map is needed. The definition
is the bare spelling and the body calls the qualified one:
    line 10:  DName * __cdecl DName_operator_add(DName *param_1, ...)
    line 19:  DName_operator_add(this,pDVar1,param_3);
Mapping the two to the same name — choosing the qualified spelling when the file
has one — keeps the definition and its call sites from disagreeing. The first
attempt mapped them independently and produced objects that referenced a
function nobody defined.
### __thiscall will not yield
207 units are `__thiscall`, and there is no way to compile them correctly:
- C mode: MSVC does not accept `__thiscall` at all (`C2059`, `C2061`).
- C++ mode: `__thiscall` is only legal on a *native member function*
  (`C3865`), so an `extern "C"` stand-in is rejected, and a real class member
  cannot be used because Ghidra's body has already decompiled `this` into an
  explicit pointer.
These are left alone. Stripping the convention would compile them and silently
produce code that passes `this` on the stack instead of in ECX, which is worse
than not compiling them.
## 16. Name resolution was hiding most of the corpus
`splice.py` reported "skipped" for 817 of 895 compiled objects. Almost all of
those skips were one function, `addr_from_name`, which matched only a bare
8-hex-digit name:
    ^(?:FUN)?_?([0-9A-Fa-f]{8})$
That misses every prefixed form Ghidra actually emits — `DAT_004b4318`,
`_DAT_004ce8cc`, `_FUN_0046eba8`, `PTR_DAT_004b4318_004b4318` — and it misses
MSVC's `@<bytes>` stack-cleanup decoration, `@FUN_00461920@12`, which puts the
address in the middle of the string. 764 of the unresolved relocations were of
this shape.
Matching the last run of hex digits, after stripping a trailing `@N`, took the
functions actually compared from 78 to 235 and the byte-exact count from 16 to
47. Worth checking before assuming a compiled object is bad: most of these were
fine, and were never being looked at.
The 660 still skipped are a genuinely different problem — CRT symbols the
original linked statically (`__memset`, `__free`, `___errno`, `___lock`,
`__imp__EnterCriticalSection@4`). Their addresses are only in the original's
link, so they need the real libraries' contributions recovered.
## 17. Most "skipped" functions were a name-resolution bug
`splice.py` reported 817 of 895 compiled objects as skipped. That read like a
codegen problem and was not one: the objects were fine and were never being
looked at. Four separate resolvers were missing, and adding them took the
functions actually compared from 78 to 366 and the byte-exact count from 16 to
64.
**1. Ghidra's headers are an address oracle.** Every decompilation starts with
the decompiler's own signature, and it names the function as the linker saw it:
    /* void * __cdecl _memset(void * _Dst, int _Val, size_t _Size) @ 00477420 */
Ghidra decompiled the *whole* image, so `__memset` is not a mystery - it is the
function at 0x00477420, in `decomp_out` under that name. 1 857 addresses come
out of those headers, which is what resolves the static CRT (`__free`,
`__malloc`, `__decode_pointer`, `___lock`). The address is still the original
binary's own, so this is recovery, not inference.
**2. The name in the header is not the name in the relocation.** Ghidra
displays `__memset` as `_memset`; the relocation emitted by the original
compiler says `__memset`. The two differ only in leading underscores, so each
name is indexed under 0-3 of them. Same idea for MSVC's framed spellings: SEH
helpers appear as `@__NLG_Notify1@4`, which is `__NLG_Notify1` wrapped in an
argument count, so a trailing `@<digits>` is stripped and retried.
**3. Imported functions resolve through the IAT, not the import name.** A
compiled call references `__imp__EnterCriticalSection@4`, whose value is the
address of the *Import Address Table slot*, because that is what an indirect
call dereferences. Those slot addresses are read out of the original PE's import
directory. The `@4` is a stdcall argument count and is not in the table, so it
is stripped for the lookup.
**4. Two kinds of relocation name encode their own contents.**
`__real@<hex>` is an IEEE double literal, and `??_C@_07GPDNMNG@CONOUT$?$AA@` is
an MSVC-mangled string (the `?X` pairs escape characters that cannot appear
literally). Both can be decoded and their bytes located in the image. 52 were
placed this way.
### What is deliberately left unresolved
`__real@` is only placed when the bit pattern occurs **exactly once** in
`.rdata`/`.data`. 0.5 appears 23 times there and 0.0 thousands of times, because
the CRT pools its constants; the specific slot the original linker chose is not
recoverable from the value. Guessing one would emit a relocation that looks
perfectly well-formed and writes the wrong address, so those stay unresolved
rather than being guessed. Same rule for strings.
What remains is 529 skips, and the residue is honest: CRT functions Ghidra never
named (`__ftol2_sse`, `___security_check_cookie_4`, `___doserrno`, `__aullrem`),
ambiguous FP constants, and `DName_`-style names produced by our own scope
flattening that the delink objects do not use. These need either the original
link map or a real class-aware recompile - not a cleverer regex.
## 18. The largest remaining blockers were all declarations, not code
The 1 115 compiled at 51.5% left five error classes that dwarfed everything
else: C2065 2 451, C2224 596, C2059 594, C2143 341, C2146 265. The instinct was
to rewrite the bodies. That was wrong in three of the five cases, and the
mistakes were visible in the errors themselves.
**C2120, 226 errors over 110 files, was one typedef.** `code` is Ghidra's name
for "some function pointer" and it was declared as returning `void`. Every unit
that keeps an indirect call's result was therefore "'void' illegal with all
types". On x86 the return value is in EAX whatever the type says, and a caller
that discards the result never looks at it, so changing the declaration to
return `int` generates no different code and makes the result usable. The class
went to 78 with no body edits at all.
**C2065, 2 451, and C2224, 596, shared one root: the SDK copy, and one heuristic
that was guessing.** Two findings, both of which had to be measured rather than
assumed:
- `sdktree` declares `_WIN32_FIND_DATAA` as a bare struct tag and never adds the
  typedef the public SDK has. The struct is complete and correct; only the
  alias is missing, so Ghidra's unprefixed spelling is an undeclared identifier
  and the member read after it is C2224. `/EP` showed the struct preprocessed
  fine and a redefinition test proved the tag already existed, which is what
  identified it as a missing typedef rather than a missing type.
- `gen_globals.py` had a fallback that read the spelling as the type: any
  `_DAT_x` no rule recognised became `undefined4 *`. The docstring in the file
  argues the spelling is a type hint; it is, but only a hint. `if ((_DAT_004d48c8
  & 0x80001) != 0)` is a bit test on a value, and assuming a pointer there is
  C2296. Scoring the corpus, 241 of the 259 pointer globals are used consistently
  as pointers and 18 are not, so the fallback was switched to the 4-byte default
  and the evidence-based rules kept the other 241.
**C2224's real cause was Ghidra's overlapping-field view, and the fix is a type
per storage slot.** Ghidra writes one stack slot as a whole value and as a set
of byte fields at once:
    undefined4 local_4;
    local_4 = 0;
    local_4._0_1_ = 1;
    local_4 = CONCAT31(local_4._1_3_,2);
The `_A_B_` members are named views of the same four bytes. Declared as a plain
`undefined4` the `.` is C2224. Four spellings were tried against VC9 before one
compiled, and the failures are worth recording because each looks correct:
| attempt | error | why |
|---|---|---|
| `local_4__u` as a struct, uses renamed | C2440, C2106 | C will not assign a scalar to a struct, nor through a cast pointer |
| the same, as a union | C2231, C2106 | same, plus `.` on a union pointer |
| `((T *)&(alias = (T *)&x))->f` | C2102 | `&` of an assignment is not an l-value |
| `local_4__u f[2];` for `_0_1_` | C2106 | an array cannot be assigned to at all |
What works is keeping the slot's original scalar type, declaring a struct of the
byte views beside it, and giving the member uses a named local alias assigned in
its own statement. The member has to be a scalar even though `_0_1_` names a
two-byte range, because the way Ghidra writes it assigns one value. The same
shape occurs on `param_N` and on `DAT_` globals, not just stack slots, and all
three had to be covered: 598 C2224 down to 150.
**Ghidra scalar types were only emitted when detection found them.** `gen_types.py`
emitted a scalar only if the harvester saw it, and the harvester recognises the
lowercase spellings but not `BYTE aBStack_110[16]`. A type used in even one unit
and missing from the header is a hard C2065 for that unit, so the fixed,
known set is now emitted unconditionally, with the SDK harvest still excluding
anything `windows.h` declares. `type_info` had to be dropped from that set: the
`th12_funcs.h` struct with the real members is right and a second typedef is
C2371.
**`true` and `false` are 197 of the undeclared identifiers on their own.** A
`.c` file built by VC9 in C mode has no `bool`, because <stdbool.h> is C99 and
this compiler predates the switch, yet Ghidra writes the keywords regardless.
Net effect on the real game corpus, 1 830 units at `/O2`:
| | before | after |
|---|---|---|
| units that compile | 895 (48.9%) | **1021 (55.8%)** |
| functions compared | 366 | **391** |
| functions byte-exact | 64 | **66** |
and on the whole-source census, 1 941 units: 999 to 1 125, with errors down from
6 306 to 5 296. `artifacts/th12_final.exe` and `artifacts/th12_spliced.exe` are
both still byte-identical to the original, which is the check that matters: every
splice written was verified exact, and a wrong struct width can only cost one
function its exactness, never the image.
## 19. A compile-error class is only as expensive as its root cause
After fixing the C2085-style slot placements (slot declarations were landing
above the opening brace because the overlapping-field typedef insert shifted
it), the corpus went 1211 -> 1276 -> 1357 -> 1429 (73.6%). Each class needed a
different mechanism, all in the generation scripts:
- **C2069 'cast of void' (69 units) is caller-side.** A decompiled callee whose
  body leaves its result in eax/ST0 and never names it is typed undefined/void.
  Casting its call is illegal C. Changing the global undefined->int mapping
  would break the 732 units whose bodies are written oid (C2371). The fix is
  per call site: (float10)FUN(x) -> ((float10 (__fastcall *)())FUN)(x). The
  outer parens are required - without them the postfix call binds first and the
  cast still applies to the void *result*. The calling convention comes from the
  callee's own header comment; __fastcall must survive or the register ABI
  changes.
- **__thiscall is not merely C++-only; in a .c it is a C2061 syntax error.**
  Spelling it __fastcall keeps the identical ecx-ABI and compiles as C, which
  unblocked ~80 units. What it doesn't fix is the next layer of the C++ STL
  units: bodies reference template types (asic_string<char,...>, pairNode)
  no header declares, which falls out as the current C2065/C2223 remainder.
- **NAN is a value and NAN(x) a predicate; neither is C.** NAN as
  0.0f/0.0f is rejected at constant fold time (C2124 'divide by zero'); the
  bit-pattern via union static const compiles. The predicate spells as
  NANP(x) ((x)!=(x)), which MSVC turns straight back into the original
  com/compp, and rewriting NAN( -> NANP( is idempotent.
- **PTR_DAT_/PTR_FUN_/PTR_LAB_ are missing globals.** gen_globals matched only
  _?DAT_, so the 73 PTR_* pointer spellings Ghidra emits as array bases were
  undeclared (C2065) in every unit touching one.
One operator error is recorded as a warning, because the gate exists to contain
exactly it: python scripts\splice.py ... --all was silently read by argparse
as --allow-differing (prefix abbreviation), and it wrote 441 near-miss
functions into th12_spliced.exe. Re-run without the flag restored byte
identity (all three files SHA-256 5fb930d9...). splice.py now disables
llow_abbrev so a future --all is an error, not a silent gate-open.
Remaining first-error buckets (512 files): C2065 144 (mostly cascade locals,
plus 	his_00/asic_string template types), C2440 69, C2143 55, C2100 38,
C2039 33 (real _tiddata layout missing: _curexception/_curcontext),
C2120 30, C2110 26 (pointer+pointer where a DAT_ offset datum is typed
pointer), C2223 19 (localeinfo_struct/__locale_tstruct need the real VC9
field layout). All are declarations, not codegen.
