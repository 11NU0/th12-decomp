@echo off
REM Regenerate the prototype header and make it compile under VC9.
REM Usage:  scripts\gen_header.cmd
REM
REM Prototypes come from the signatures Ghidra already emitted in decomp_out,
REM NOT from ExportHeader.java: the Java exporter loses the return type and
REM emits a conflicting "undefined" for every function, which is what used to
REM break the build.
setlocal
set "P=%~dp0.."
set "T=%P%\tools"

echo === 1. generate prototypes from the decompiled signatures ===
python "%~dp0gen_prototypes.py" "%P%\decomp_out" "%P%\src\th12_funcs.h" ^
  "%T%\vc9tree\include" "%T%\sdktree\include" "%T%\dxsdk\DXSDK\Include" || goto :fail

echo === 2. fix typedefs, tags, macros, duplicate signatures ===
python "%~dp0fix_header.py" "%P%\src\th12_funcs.h" ^
  "%T%\vc9tree\include" "%T%\sdktree\include" "%T%\dxsdk\DXSDK\Include" || goto :fail

echo === 3. syntax-check the header ===
call "%~dp0check_header.cmd" || goto :fail

echo === OK ===
exit /b 0
:fail
echo === FAILED ===
exit /b 1
