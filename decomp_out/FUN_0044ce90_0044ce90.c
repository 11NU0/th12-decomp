/* int __stdcall FUN_0044ce90(LPCSTR param_1, LPSTR param_2, int param_3) @ 0044ce90  212 bytes */
#include "th12.h"

int FUN_0044ce90(LPCSTR param_1,LPSTR param_2,int param_3)

{
  BOOL BVar1;
  _PROCESS_INFORMATION local_54;
  _STARTUPINFOA local_44;
  
  local_44.dwX = 0x80000000;
  local_44.dwY = 0x80000000;
  local_44.dwXSize = 0x80000000;
  local_44.dwYSize = 0x80000000;
  local_44.wShowWindow = 10;
  local_44.cbReserved2 = 0;
  local_44.cb = 0x44;
  local_44.lpReserved = (LPSTR)0x0;
  local_44.lpDesktop = (LPSTR)0x0;
  local_44.lpTitle = (LPSTR)0x0;
  local_44.dwXCountChars = 0x50;
  local_44.dwYCountChars = 0x19;
  local_44.dwFillAttribute = 0;
  local_44.dwFlags = 0;
  local_44.lpReserved2 = (LPBYTE)0x0;
  local_44.hStdInput = (HANDLE)0x0;
  local_44.hStdOutput = (HANDLE)0x0;
  local_44.hStdError = (HANDLE)0x0;
  BVar1 = CreateProcessA(param_1,param_2,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0,
                         0x20,(LPVOID)0x0,(LPCSTR)0x0,&local_44,&local_54);
  if (BVar1 == 0) {
    return -1;
  }
  if (param_3 != 0) {
    param_2 = (LPSTR)0x103;
    do {
      GetExitCodeProcess(local_54.hProcess,(LPDWORD)&param_2);
    } while (param_2 == (LPSTR)0x103);
    return (int)param_2;
  }
  return 0;
}


