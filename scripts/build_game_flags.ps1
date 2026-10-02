<#
.SYNOPSIS
  Build the game-code units under both candidate flag sets and keep whichever
  reproduces more of each unit's original bytes.

.DESCRIPTION
  The original image was not built with one uniform flag set. 46 of the units that
  still fail the byte-exact test start with the five-byte `mov edi,edi` hotpatch
  slot and a real stack frame in places where the decompiled C needs neither:

      original  8b ff 55 8b ec 8b 45 08 83 e0 7f 5d c3
      /O2       8b 44 24 04 83 e0 7f c3              - leaf, no frame
      /Oy-      55 8b ec 8b 45 08 83 e0 7f 5d c3      - frame, no hotpatch slot
      /hotpatch /Oy-
                 8b ff 55 8b ec 8b 45 08 83 e0 7f 5d c3  - exact

  /Oy- is what stops VC9 collapsing a frame-using function into an esp-relative
  leaf; /hotpatch adds the slot. Guessing per unit from the source is unreliable,
  so both passes are compiled and scripts\merge_flags.py compares them per unit.

  Costs two full compiles. A plain compile_game.ps1 run is enough when you only
  want the census, not the best per-unit build.

.EXAMPLE
  powershell -File scripts\build_game_flags.ps1
#>
[CmdletBinding()]
param(
    [string]$Opt = "/O2",
    [string]$Extra = "/hotpatch /Oy-",
    [switch]$SkipCompile
)

$ErrorActionPreference = "Continue"
$root = Split-Path -Parent $PSScriptRoot
$py = "python"
$tmp = Join-Path $env:TEMP "opencode"
New-Item -ItemType Directory -Force -Path $tmp | Out-Null

$hotList = Join-Path $root "artifacts\hotpatch_units.txt"
$forced = @()
if (Test-Path $hotList) {
    $forced = @(Get-Content $hotList | ForEach-Object { $_.Trim() } | Where-Object { $_ })
}

if (-not $SkipCompile) {
    Write-Host "=== pass 1/2: plain $Opt ==="
    & powershell -File (Join-Path $PSScriptRoot "compile_game.ps1") -OutDir build_plain | Out-Null
    Write-Host "=== pass 2/2: $Opt $Extra ==="
    & powershell -File (Join-Path $PSScriptRoot "compile_game.ps1") -OutDir build_hot -ExtraFlags $Extra | Out-Null
}

# The units known to have been built /hotpatch get a second chance even when the
# comparison ties, because the plain pass would otherwise undo a known result.
foreach ($stem in $forced) {
    $c = Join-Path $root "src\overrides\$stem.c"
    if (-not (Test-Path $c)) { $c = Join-Path $root "src\fixed\$stem.c" }
    if (-not (Test-Path $c)) { $c = Join-Path $root "decomp_out\$stem.c" }
    if (-not (Test-Path $c)) { continue }
    $tools = Join-Path $root "tools"
    $env:INCLUDE = "$tools\vc9tree\include;$tools\sdktree\include;$tools\dxsdk\DXSDK\Include"
    $env:PATH = "$tools\vc9tree\bin;$env:PATH"
    $env:DIRECTINPUT_VERSION = "0x0800"
    $rsp = Join-Path $tmp "hp_rsp.txt"
    Set-Content -Path $rsp -Encoding ASCII -Value @(
        "/nologo", "/c", "/MT", "/EHsc", "/GS-", $Opt, "/hotpatch", "/Oy-",
        "/I$root\src", "/Fo$root\build_hot\", $c)
    & "$tools\vc9tree\bin\cl.exe" "@$rsp" 2>$null | Out-Null
}

Write-Host "=== comparing passes ==="
$plainLog = Join-Path $tmp "plain.log"
$hotLog = Join-Path $tmp "hot.log"
& $py (Join-Path $PSScriptRoot "splice.py") --image (Join-Path $root "resources\th12.exe") `
    --out (Join-Path $tmp "plain.exe") --dir (Join-Path $root "build_plain") *>&1 |
    Out-File -FilePath $plainLog -Encoding utf8
& $py (Join-Path $PSScriptRoot "splice.py") --image (Join-Path $root "resources\th12.exe") `
    --out (Join-Path $tmp "hot.exe") --dir (Join-Path $root "build_hot") *>&1 |
    Out-File -FilePath $hotLog -Encoding utf8

& $py (Join-Path $PSScriptRoot "merge_flags.py") $plainLog $hotLog `
    (Join-Path $root "build_plain") (Join-Path $root "build_hot") (Join-Path $root "build")

Write-Host "=== final gate ==="
& $py (Join-Path $PSScriptRoot "splice.py") --image (Join-Path $root "resources\th12.exe") `
    --out (Join-Path $root "artifacts\th12_spliced.exe") --dir (Join-Path $root "build")