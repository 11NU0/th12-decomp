@echo off
REM Proof-of-concept build: VC9 + Windows SDK 6.0 + DirectX SDK (Jun2010)
REM producing an exe with the same DLL dependency set as th12.exe.
REM
REM Built in two steps on purpose: cl.exe in this reconstructed tree exits 0
REM without producing an output file when it tries to drive link.exe itself.
REM Calling link.exe directly works fine, so compile and link separately.
setlocal
call "C:\Users\ysx5\Downloads\touhou\th12-decomp\tools\vc9env.cmd" >nul
cd /d "C:\Users\ysx5\Downloads\touhou\th12-decomp\scripts"

del linktest.obj linktest.exe 2>nul

cl /nologo /MT /EHsc /O2 /c linktest.cpp
if errorlevel 1 ( echo COMPILE_FAILED & exit /b 1 )
echo COMPILE_OK

link /nologo linktest.obj /OUT:linktest.exe %TH12LIBS%
if errorlevel 1 ( echo LINK_FAILED & exit /b 1 )
echo LINK_OK

for %%F in (linktest.exe) do echo SIZE=%%~zF
linktest.exe
echo RUN_EXIT=%ERRORLEVEL%
