# Compile a sample of the decompiled corpus and report what fails.
#
# The corpus does not build as a whole, so progress is measured on a fixed
# sample: compile the first N units with the real VC9 toolchain and count the
# diagnostics. That number is the thing to watch, and the per-code breakdown is
# what says why it is stuck.
#
#   .\scripts\census.ps1                 # 200 units, default flags
#   .\scripts\census.ps1 -Count 500      # wider sample
#   .\scripts\census.ps1 -Flags "/c","/MT","/EHsc","/GS-","/O1"
param(
  [int]$Count = 200,
  [string[]]$Flags = @("/c", "/MT", "/EHsc", "/GS-", "/O2"),
  [string]$Work = "$env:TEMP\th12_census",
  [string]$Source = "src\fixed",
  [switch]$All,
  [switch]$Clean
)

$ErrorActionPreference = "Continue"
$root = Split-Path -Parent $PSScriptRoot
$tools = Join-Path $root "tools"

if ($Clean -and (Test-Path $Work)) { Remove-Item $Work -Recurse -Force }
New-Item -ItemType Directory -Force -Path $Work | Out-Null
$objdir = Join-Path $Work "obj"
New-Item -ItemType Directory -Force -Path $objdir | Out-Null
Get-ChildItem $objdir -Filter *.obj -ErrorAction SilentlyContinue | Remove-Item -Force

# The exact include/lib set a unit really sees, so the compiler's own view of
# which names exist matches the one the headers were generated against.
$env:INCLUDE = "$tools\vc9tree\include;$tools\sdktree\include;$tools\dxsdk\DXSDK\Include"
$env:LIB = "$tools\vc9tree\lib;$tools\sdktree\lib;$tools\dxsdk\DXSDK\Lib\x86"
$env:PATH = "$tools\vc9tree\bin;$env:PATH"
$env:DIRECTINPUT_VERSION = "0x0800"
$cl = Join-Path $tools "vc9tree\bin\cl.exe"
if (-not (Test-Path $cl)) { throw "cl.exe not found at $cl" }

$srcdir = Join-Path $root $Source
if (-not (Test-Path $srcdir)) { $srcdir = Join-Path $root "decomp_out" }

# Library units are supplied by the real CRT/DirectX libraries and are not
# worth recompiling, so compile_game.ps1 skips them. Measuring them here would
# report a low number for work that is deliberately not being done, so the same
# skip is applied and reported separately.
$libFile = Join-Path $root "artifacts\available_from_libs.txt"
$libStems = @{}
if (Test-Path $libFile) {
  Get-Content $libFile | ForEach-Object {
    $s = $_.Trim(); if ($s) { $libStems[$s] = $true }
  }
}

# -All must lift the sample cap, so the truncation has to happen after the
# library filter - otherwise `-All` still compiles only the first $Count units.
$all_srcs = @(Get-ChildItem $srcdir -Filter *.c)
$filtered = if ($All) { $all_srcs }
            else { @($all_srcs | Where-Object { -not $libStems.ContainsKey($_.BaseName) }) }
$srcs = if ($All) { $filtered } else { @($filtered | Select-Object -First $Count) }
if ($srcs.Count -eq 0) { throw "no sources found in $srcdir" }
$libHere = $all_srcs.Count - $filtered.Count

$srcPaths = @($srcs | ForEach-Object { $_.FullName })
$rsp = Join-Path $Work "units.rsp"
$log = Join-Path $Work "errors.txt"
$args = $Flags + @("/I$root\src", "/Fo$objdir\") + $srcPaths
Set-Content -Path $rsp -Encoding ASCII -Value $args

$sw = [Diagnostics.Stopwatch]::StartNew()
# cl writes its banner to stderr, which PowerShell would otherwise surface as a
# terminating NativeCommandError, so its output is captured rather than merged.
$raw = & $cl "@$rsp" 2>&1
$sw.Stop()
$raw | Out-File -FilePath $log -Encoding UTF8

$objs = (Get-ChildItem $objdir -Filter *.obj -ErrorAction SilentlyContinue).Count
$errs = @()
if (Test-Path $log) {
  $errs = @(Select-String -Path $log -Pattern ": error (C\d+):" -AllMatches)
}
$distinct = @{}
foreach ($e in $errs) {
  $f = $e.Line -replace '\(\d+\) :.*$', ''
  $distinct[$f] = 1
}

"source   : $Source"
"units    : $($srcs.Count) game units   ($libHere library units skipped)"
"compiled : $objs  ($([math]::Round(100.0*$objs/$srcs.Count,1))%)"
"errors   : $($errs.Count) in $($distinct.Count) files"
"elapsed  : $([math]::Round($sw.Elapsed.TotalSeconds))s"
""
if ($errs.Count) {
  $errs | ForEach-Object { $_.Matches } | ForEach-Object { $_.Groups[1].Value } |
    Group-Object | Sort-Object Count -Descending | Select-Object -First 15 |
    ForEach-Object { "  {0,-8} {1,5}" -f $_.Name, $_.Count }
}
"log: $log"
