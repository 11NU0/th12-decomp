<#
.SYNOPSIS
  Rebuild th12.exe from the delink objects and the original PE's data sections.

.DESCRIPTION
  Five steps, each one already proven on its own:

    1. text_blob.py --no-relocations  merge all 1 909 .text contributions into
                                      one COFF object, already holding the
                                      original bytes
    2. rsrc_obj.py                    carry .rsrc through verbatim
    3. (rdata/data/bind objects)      produced earlier by data_obj.py from the
                                      original image
    4. link.exe                       one link, no import libraries: the
                                      original import table is already in
                                      .rdata and is restored by step 5
    5. finalize.py                    original headers + linked section bytes
    6. splice.py                      recompiled C functions, over the top

  Steps 4 and 5 are split on purpose. link.exe always parks a `.rsrc` input
  after the other sections and takes VirtualSize from SizeOfRawData, so a link
  that reproduces every section byte still lands the sections and the headers
  differently from the original. Let the linker own the bytes and the original
  own the layout.

  While the .text blob is still pure delink, the result is byte-identical to
  th12.exe and the SHA-256 comparison at the end is the pass/fail check. As
  recompiled C replaces delink bytes in .text, the run shrinks to just those
  functions; the SHA check then reports how far the rebuild has got.

.EXAMPLE
  powershell -File scripts\build_fallback.ps1
  powershell -File scripts\build_fallback.ps1 -KeepLink
#>
[CmdletBinding()]
param(
    [switch]$KeepLink,
    [switch]$NoSplice
)

$ErrorActionPreference = 'Stop'

$root = Split-Path -Parent $PSScriptRoot
$link = Join-Path $root 'tools\vc9tree\bin\link.exe'
$artifacts = Join-Path $root 'artifacts'
$dataobj = Join-Path $root 'dataobj'
$work = Join-Path $env:TEMP 'th12_build'
$orig = Join-Path $root 'resources\th12.exe'

New-Item -ItemType Directory -Force -Path $work, $artifacts | Out-Null

$blob = Join-Path $work 'text_blob.obj'
$exe = Join-Path $work 'th12_linked.exe'
$final = Join-Path $artifacts 'th12_final.exe'

function Step($n, $text) { Write-Host "`n[$n] $text" -ForegroundColor Cyan }

Step 1 'Merging the delink .text into one object'
& python (Join-Path $root 'scripts\text_blob.py') --no-relocations --out $blob
if ($LASTEXITCODE -ne 0) { throw "text_blob.py failed" }

Step 2 'Carrying .rsrc through verbatim'
& python (Join-Path $root 'scripts\rsrc_obj.py') --out-dir $dataobj
if ($LASTEXITCODE -ne 0) { throw "rsrc_obj.py failed" }

Step 3 'Checking the data section objects'
$objs = @()
foreach ($n in 'rdata.obj', 'data.obj', 'bind.obj', 'rsrc.obj') {
    $p = Join-Path $dataobj $n
    if (-not (Test-Path -LiteralPath $p)) {
        throw "missing $n - run data_obj.py against a linker log first"
    }
    $objs += $p
}

Step 4 'Linking (no import libraries)'
Remove-Item -LiteralPath $exe -ErrorAction SilentlyContinue
$args = @(
    '/NOLOGO', "/OUT:$exe", '/ENTRY:0006E81D', '/SUBSYSTEM:WINDOWS',
    '/BASE:0x400000', '/FILEALIGN:0x200', '/NODEFAULTLIB',
    $blob
) + $objs
& $link @args
if ($LASTEXITCODE -ne 0) { throw "link.exe failed" }
Write-Host ("  linked {0} bytes" -f (Get-Item -LiteralPath $exe).Length)

Step 5 'Finalizing against the original layout'
& python (Join-Path $root 'scripts\finalize.py') --linked $exe --out $final --report
if ($LASTEXITCODE -ne 0) { throw "finalize.py failed" }

$h1 = (Get-FileHash -LiteralPath $orig -Algorithm SHA256).Hash.ToLower()
$h2 = (Get-FileHash -LiteralPath $final -Algorithm SHA256).Hash.ToLower()
Write-Host ""
Write-Host "  original  SHA256 $h1"
Write-Host "  rebuilt   SHA256 $h2"
if ($h1 -eq $h2) {
    Write-Host "  RESULT: byte-identical to th12.exe" -ForegroundColor Green
} else {
    Write-Host "  RESULT: differs from th12.exe (expected once C overrides land)" -ForegroundColor Yellow
}

# Step 6: put the recompiled C on top. The gate is closed by default - a
# function whose bytes do not match the original is left as delink, because the
# delinked bytes are provably right and a near-miss would only make the image
# subtly wrong. While every splice is exact the image stays byte-identical, so
# the SHA check above remains the pass/fail gate.
$buildDir = Join-Path $root 'build'
if ($NoSplice -or -not (Test-Path -LiteralPath $buildDir)) {
    if (-not $NoSplice) { Write-Host "`n[6] no build\ directory - nothing to splice" }
} else {
    Step 6 'Splicing recompiled functions over the top'
    & python (Join-Path $root 'scripts\splice.py') --image $final --out "$final.spliced" --blob $blob --dir $buildDir
    if ($LASTEXITCODE -ne 0) { throw "splice.py failed" }
    $h3 = (Get-FileHash -LiteralPath "$final.spliced" -Algorithm SHA256).Hash.ToLower()
    if ($h3 -eq $h1) {
        Move-Item -Force -LiteralPath "$final.spliced" -Destination $final
        Write-Host "  every splice was byte-exact; image unchanged"
    } else {
        Write-Host "  spliced image differs from the original - kept at $final.spliced" -ForegroundColor Yellow
    }
}

if (-not $KeepLink) {
    Remove-Item -LiteralPath $blob -ErrorAction SilentlyContinue
    Write-Host "`n  intermediates in $work"
} else {
    Write-Host "`n  intermediates kept in $work"
}
