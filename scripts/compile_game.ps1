<#
.SYNOPSIS
  Compile every game-code unit, so the splice census covers the whole corpus.

.DESCRIPTION
  build_all.ps1 compiles the 121 units of the /O2 baseline and then runs
  objdiff and the per-pair comparison, which is slow and is not needed to
  answer one question: how many of the game's functions does VC9 reproduce
  byte for byte from isolated C?

  This compiles the rest and stops there, so splice.py can census the result.
  Units the real static libraries provide are skipped - see FINDINGS.md
  section 3, recompiling them can never be byte-exact because the library was
  built /hotpatch.

.PARAMETER Opt
  Optimisation level. /O2 is what the original was built with.

.PARAMETER Only
  Restrict to units whose name contains this substring.

.PARAMETER OutDir
  Where to put the .obj files. Defaults to build\.

.PARAMETER ExtraFlags
  Additional flags for every unit, e.g. "/hotpatch /Oy-". The original image was
  not built uniformly: units carrying the five-byte `mov edi,edi` hotpatch slot
  need /hotpatch, and /Oy- is what stops VC9 collapsing a frame-using function
  into an esp-relative leaf. See scripts\merge_flags.py, which compiles the corpus
  both ways and keeps whichever pass reproduces more of each unit's bytes.

.PARAMETER IgnoreOverrides
  Pretend src\overrides is empty and compile every unit from src\fixed or
  decomp_out. Used to measure what the literal byte copies are standing in for:
  a unit that src\fixed already reproduces exactly does not need an override at
  all, and one that it does not is not a decompilation no matter how the merged
  byte-exact figure reads.

.EXAMPLE
  powershell -File scripts\compile_game.ps1
  powershell -File scripts\compile_game.ps1 -Only FUN_0049
#>
[CmdletBinding()]
param(
    [string]$Opt = "/O2",
    [string]$Only = "",
    [int]$Batch = 100,
    [string]$OutDir = "",
    [string]$ExtraFlags = "",
    [switch]$IgnoreOverrides
)

$ErrorActionPreference = "Continue"
$root = Split-Path -Parent $PSScriptRoot
$tools = Join-Path $root "tools"
# Join-Path appends rather than replaces, so it would turn an absolute -OutDir into
# "<root>\C:\..." - a path cl cannot write to, and it fails silently here because the
# compiler's stderr is discarded. Resolve rooted paths before falling back to root.
$build = if ($OutDir) {
    if ([IO.Path]::IsPathRooted($OutDir)) { $OutDir } else { Join-Path $root $OutDir }
} else { Join-Path $root "build" }
$env:INCLUDE = "$tools\vc9tree\include;$tools\sdktree\include;$tools\dxsdk\DXSDK\Include"
$env:PATH = "$tools\vc9tree\bin;$env:PATH"
$env:DIRECTINPUT_VERSION = "0x0800"
$cl = Join-Path $tools "vc9tree\bin\cl.exe"

New-Item -ItemType Directory -Force -Path $build | Out-Null

# A stem is <unit>_<address>. The library-provided list names the <unit> part,
# and one unit can cover several addresses.
$libUnits = @{}
$libList = Join-Path $root "artifacts\available_from_libs.txt"
if (Test-Path $libList) {
    foreach ($n in (Get-Content $libList | Where-Object { $_.Trim() })) { $libUnits[$n.Trim()] = $true }
}

$skipped = 0
$srcs = New-Object System.Collections.Generic.List[string]
foreach ($f in (Get-ChildItem (Join-Path $root "delink_out") -Filter "*.o" | Sort-Object Name)) {
    $stem = $f.BaseName
    if ($stem -notmatch '^(.*)_[0-9A-Fa-f]{8}$') { continue }
    $bare = $Matches[1]
    # Library-provided units are skipped because build_all supplies their objects
    # from a prebuilt library. An override is an explicit request to recompile
    # that unit from source, so it wins over the skip - otherwise the override
    # sits in src\overrides never being compiled and the unit stays on its
    # library bytes no matter what the file says.
    $hasOverride = (-not $IgnoreOverrides) -and (Test-Path (Join-Path $root "src\overrides\$stem.c"))
    if ($libUnits.ContainsKey($bare) -and -not $hasOverride) { $skipped++; continue }
    if ($Only -and $stem -notlike "*$Only*") { continue }

    # src\overrides\*.c replaces the generated decompilation for that unit and
    # must win, so a hand correction is never compiled over. src\fixed\*.c is
    # decomp_out with the mechanical repairs from scripts\fix_sources.py applied
    # - the calling convention Ghidra recorded but dropped, and the C++ scope it
    # left in the body - which is the difference between a unit that compiles
    # and one that is rejected. decomp_out is the last resort.
    $src = $null
    if (-not $IgnoreOverrides) {
        $src = Join-Path $root "src\overrides\$stem.c"
    }
    if (-not $src) { $src = Join-Path $root "src\fixed\$stem.c" }
    if (-not (Test-Path $src)) { $src = Join-Path $root "decomp_out\$stem.c" }
    if (-not (Test-Path $src)) { continue }
    $srcs.Add($src)
}

Write-Host "=== compiling $($srcs.Count) game-code units at $Opt (skipping $skipped library-provided) ==="
$sw = [Diagnostics.Stopwatch]::StartNew()
$rsp = Join-Path $env:TEMP "th12_game_rsp.txt"
for ($i = 0; $i -lt $srcs.Count; $i += $Batch) {
    $end = [Math]::Min($i + $Batch - 1, $srcs.Count - 1)
    $lines = @("/nologo", "/c", "/MT", "/EHsc", "/GS-", $Opt)
    if ($ExtraFlags) { $lines += $ExtraFlags.Split(" ", [System.StringSplitOptions]::RemoveEmptyEntries) }
    $lines += @("/I$root\src", "/Fo$build\")
    $lines += $srcs[$i..$end]
    Set-Content -Path $rsp -Value $lines -Encoding ASCII
    & $cl "@$rsp" 2>$null | Out-Null
}
$sw.Stop()
# Count only the objects this run was asked to produce. Counting every .obj in the
# output directory silently credits units left over from build_all, which is how this
# figure came to be reported as 1573 when a clean directory only yields 1500.
$want = @{}
foreach ($s in $srcs) { $want[[IO.Path]::GetFileNameWithoutExtension($s)] = $true }
$objs = @(Get-ChildItem $build -Filter "*.obj" -EA SilentlyContinue |
          Where-Object { $want.ContainsKey($_.BaseName) })
Write-Host ("compiled {0}/{1} ({2:N1}%) in {3:N0}s" -f $objs.Count, $srcs.Count,
            (100.0 * $objs.Count / [Math]::Max($srcs.Count, 1)),
            $sw.Elapsed.TotalSeconds)
Write-Host "objects in $build"
