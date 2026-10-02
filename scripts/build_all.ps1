# Compile the decompiled corpus and compare it against the original objects.
#
# Findings that drive the flags below (measured, not guessed):
#
#  * The original is OPTIMIZED. At /Od, VC9 emits "push ebp / mov ebp,esp"
#    frames; the original instead uses "push esi / mov esi,ecx", which VC9
#    only emits for __thiscall member functions at /O1../Ox. A /Od build
#    scored 0 out of 121 objdiff matches.
#
#  * The original is NOT necessarily C++. __thiscall cannot be applied to a free
#    function (error C3865), which made C++ look mandatory, but __fastcall
#    passes its first argument in ECX identically and plain C with __fastcall
#    reproduces the same "push esi; mov esi,ecx" prologue at /O2. No class
#    synthesis is needed.
#
#  * A callee reached by "push esi; call ..." with no following "add esp,4" is
#    __stdcall, not __cdecl and not __thiscall.
#
#  * objdiff matches functions BY NAME, so the rebuilt objects are passed
#    through scripts\rename_symbols.py to strip MSVC's decoration first.
#    Without it, "@FUN_004014b0@4" never pairs with Ghidra's "FUN_004014b0"
#    and report generate omits match metrics entirely. See src\FINDINGS.md.
#
#  * objdiff's CLI exit code is ALWAYS 0, even for a 0% match. The meaningful
#    number is fuzzy_match_percent from `objdiff report generate`; never trust
#    $LASTEXITCODE, and never trust the per-pair `match_percent` field.
#
#  * /Zi is unusable: the supplied mspdb80.dll is RTM while the tools are SP1,
#    which makes cl fail with C1902.

param(
    [string]$Opt = "/O2",
    [int]$Batch = 80
)

$ErrorActionPreference = "Continue"
$root = Split-Path -Parent $PSScriptRoot
$tools = Join-Path $root "tools"
$build = Join-Path $root "build"
$env:INCLUDE = "$tools\vc9tree\include;$tools\sdktree\include;$tools\dxsdk\DXSDK\Include"
$env:PATH = "$tools\vc9tree\bin;$env:PATH"
$env:DIRECTINPUT_VERSION = "0x0800"
$cl = Join-Path $tools "vc9tree\bin\cl.exe"

if (Test-Path $build) { Remove-Item "$build\*.obj" -Force -EA SilentlyContinue }
else { New-Item -ItemType Directory -Force -Path $build | Out-Null }

$all = @(Get-ChildItem (Join-Path $root "decomp_out") -Filter "*.c" |
         ForEach-Object { $_.FullName })

# src\overrides\*.c replaces the generated decompilation for individual units.
# Kept as separate files rather than edits to decomp_out so that re-running the
# Ghidra export never silently discards a hand correction, and so every manual
# fix is reviewable in one place. An override is named after the unit stem
# (NAME_ADDRESS) so the object still lands under the expected name.
$ovr = Join-Path $root "src\overrides"
if (Test-Path $ovr) {
    $n = 0
    foreach ($f in Get-ChildItem $ovr -Filter "*.c") {
        $orig = Join-Path $root ("decomp_out\" + $f.Name)
        $all = @($all | Where-Object { $_ -ne $orig })
        $n++
    }
    if ($n) { Write-Host "using $n hand-written override(s) from src\overrides" }
}

# Artifacts\available_from_libs.txt lists the unit names that the real static
# libraries already provide (see FINDINGS.md section 3). Recompiling those is
# wasted effort *and* can never be byte-exact: the library was built with
# /hotpatch, whose "mov edi,edi" prologue is unreachable from hand-written C.
# Leaving them out lets the final link resolve them from the library, which
# verify_lib.py shows reproduces the original code exactly (67 of 69 sampled).
$libList = Join-Path $root "artifacts\available_from_libs.txt"
$srcs = $all
$libUnits = @{}
if (Test-Path $libList) {
    $names = @(Get-Content $libList | Where-Object { $_.Trim() })
    $names = $names | Sort-Object -Unique
    # map unit name -> the decomp_out/decomp stem "<unit>_<addr>" it covers
    $skip = New-Object 'System.Collections.Generic.HashSet[string]'
    foreach ($f in (Get-ChildItem (Join-Path $root "delink_out") -Filter "*.o")) {
        $stem = $f.BaseName
        if ($stem -match '^(.*)_[0-9A-Fa-f]{8}$' -and $names -contains $Matches[1]) {
            [void]$skip.Add($stem)
        }
    }
    $srcs = @($all | Where-Object { -not $skip.Contains([IO.Path]::GetFileNameWithoutExtension($_)) })
    Write-Host ("skipping {0} library-provided units ({1} files) - they come from the real libs" -f $skip.Count, ($all.Count - $srcs.Count))
}

# An override replaces the generated file for the same unit; swap it in now that
# the library-skip filter has run, so a hand correction is never dropped.
$ovr = Join-Path $root "src\overrides"
if (Test-Path $ovr) {
    $n = 0
    foreach ($f in Get-ChildItem $ovr -Filter "*.c") {
        $stem = $f.BaseName
        if ($srcs -contains (Join-Path $root "decomp_out\$stem.c")) {
            $srcs = @($srcs | Where-Object { $_ -ne (Join-Path $root "decomp_out\$stem.c") })
        }
        $srcs += $f.FullName
        $n++
    }
    Write-Host "using $n hand-written override(s) from src\overrides"
}
Write-Host "=== compiling $($srcs.Count) files at $Opt ==="
$sw = [Diagnostics.Stopwatch]::StartNew()
$rsp = Join-Path $env:TEMP "th12_rsp.txt"
for ($i = 0; $i -lt $srcs.Count; $i += $Batch) {
    $end = [Math]::Min($i + $Batch - 1, $srcs.Count - 1)
    $lines = @("/nologo", "/c", "/MT", "/EHsc", "/GS-", $Opt,
               "/I$root\src", "/Fo$build\")
    $lines += $srcs[$i..$end]
    Set-Content -Path $rsp -Value $lines -Encoding ASCII
    & $cl "@$rsp" 2>$null | Out-Null
}
$sw.Stop()
$objs = @(Get-ChildItem $build -Filter "*.obj" -EA SilentlyContinue)
Write-Host ("compiled {0}/{1} ({2:N1}%) in {3:N0}s" -f $objs.Count, $srcs.Count,
            (100.0 * $objs.Count / [Math]::Max($srcs.Count, 1)),
            $sw.Elapsed.TotalSeconds)

# Per-unit recompile for hotpatch thunks. A target that is
#   mov edi,edi ; push ebp ; mov ebp,esp ; pop ebp ; jmp f
# is an MSVC incremental-linking thunk, and /hotpatch /Oy- reproduces it exactly
# where the default build emits a bare `jmp`. The list is written by
# scripts\triage.py --emit-hotpatch from the previous run's listings, so this is
# self-correcting: a unit drops out once it matches. /hotpatch must stay per
# unit - applied globally it would add a prologue to game functions that do not
# have one (see FINDINGS.md section 3).
$hpList = Join-Path $root "artifacts\hotpatch_units.txt"
if (Test-Path $hpList) {
    $stems = @(Get-Content $hpList | Where-Object { $_.Trim() })
    $done = 0
    foreach ($stem in $stems) {
        $src = Join-Path $root "src\overrides\$stem.c"
        if (-not (Test-Path $src)) { $src = Join-Path $root "decomp_out\$stem.c" }
        if (-not (Test-Path $src)) { continue }
        & $cl /nologo /c /MT /EHsc /GS- $Opt /hotpatch /Oy- `
              "/I$root\src" "/Fo$build\" $src 2>$null | Out-Null
        if (Test-Path (Join-Path $build "$stem.obj")) { $done++ }
    }
    Write-Host "recompiled $done/$($stems.Count) hotpatch thunks with /hotpatch /Oy-"
}

Write-Host "=== aligning symbol names to delink_out so objdiff can pair them ==="
# objdiff matches by symbol name. Ghidra names are undecorated (FUN_004014b0)
# where MSVC emits @FUN_004014b0@4, and a few CRT symbols contain a ':' that C
# cannot express, so the target object is the authority for the exact spelling.
$ren = python (Join-Path $root "scripts\rename_symbols.py") `
    --target-dir (Join-Path $root "delink_out") `
    @($objs | ForEach-Object { $_.FullName })
Write-Host $ren[-1]

Write-Host "=== objdiff project report ==="
python (Join-Path $root "scripts\objdiff_report.py") --top 10

Write-Host "=== per-pair instruction comparison ==="
python (Join-Path $root "scripts\compare.py") $root $build
