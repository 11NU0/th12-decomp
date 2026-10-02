@echo off
call "C:\Users\ysx5\Downloads\touhou\th12-decomp\tools\vc9env.cmd" >nul 2>&1
setlocal enabledelayedexpansion
> "C:\Users\ysx5\AppData\Local\Temp\th12_full\all4.rsp" echo /NOLOGO /OUT:C:\Users\ysx5\AppData\Local\Temp\th12_full\th12.exe /ENTRY:0006E81D /SUBSYSTEM:WINDOWS /BASE:0x400000 /FILEALIGN:0x200 /NODEFAULTLIB
for %%L in (kernel32 user32 gdi32 ole32 winmm d3d9 d3dx9_40 dinput8 dsound dxguid libcmt) do >> "C:\Users\ysx5\AppData\Local\Temp\th12_full\all4.rsp" echo %LIB%\%%L.lib
for /f "usebackq delims=" %%F in ("C:\Users\ysx5\AppData\Local\Temp\th12_full\mklist.txt") do >> "C:\Users\ysx5\AppData\Local\Temp\th12_full\all4.rsp" echo %%F
for %%F in ("C:\Users\ysx5\Downloads\touhou\th12-decomp\dataobj\*.obj") do >> "C:\Users\ysx5\AppData\Local\Temp\th12_full\all4.rsp" echo %%F
for %%F in ("C:\Users\ysx5\Downloads\touhou\th12-decomp\gapobj\*.obj") do >> "C:\Users\ysx5\AppData\Local\Temp\th12_full\all4.rsp" echo %%F
link /nologo "@C:\Users\ysx5\AppData\Local\Temp\th12_full\all4.rsp" > "C:\Users\ysx5\AppData\Local\Temp\th12_full\link4.log" 2>&1
echo LINK_EXIT=!ERRORLEVEL!



