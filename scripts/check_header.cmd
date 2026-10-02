@echo off
REM Syntax-check th12_funcs.h by compiling a translation unit that includes it.
REM Usage:  scripts\check_header.cmd
setlocal
set "P=%~dp0.."
set "T=%P%\tools"
set "TMP=%TEMP%\th12_hdr_check"
if not exist "%TMP%" mkdir "%TMP%"

>"%TMP%\check.c" echo #include "th12.h"
>>"%TMP%\check.c" echo int probe_ok;
call "%P%\tools\vc9env.cmd" >nul 2>&1
cl /nologo /c "%TMP%\check.c" /I"%P%\src" /Fo"%TMP%\check.obj" 2>"%TMP%\err.txt"
if errorlevel 1 (
  echo --- header does not compile yet; first errors: ---
  findstr /C:"error" "%TMP%\err.txt"
  exit /b 1
)
echo header compiles clean
exit /b 0
