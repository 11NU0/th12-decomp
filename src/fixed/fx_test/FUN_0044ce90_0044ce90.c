/* int __stdcall FUN_0044ce90(LPCSTR param_1, LPSTR param_2, int param_3) @ 0044ce90  212 bytes */

#include "th12.h"

typedef struct local_54__u { undefined4 _; undefined4 hProcess; } local_54__u;
typedef struct local_44__u { undefined4 _; undefined4 dwX; undefined4 dwY; undefined4 dwXSize; undefined4 dwYSize; undefined4 wShowWindow; undefined4 cbReserved2; undefined4 cb; undefined4 lpReserved; undefined4 lpDesktop; undefined4 lpTitle; undefined4 dwXCountChars; undefined4 dwYCountChars; undefined4 dwFillAttribute; undefined4 dwFlags; undefined4 lpReserved2; undefined4 hStdInput; undefined4 hStdOutput; undefined4 hStdError; } local_44__u;
int __stdcall FUN_0044ce90(LPCSTR param_1,LPSTR param_2,int param_3)

{
  local_54__u *local_54__u_alias;
  local_44__u *local_44__u_alias;
  BOOL BVar1;
  _PROCESS_INFORMATION local_54;
  _STARTUPINFOA local_44;
  
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->dwX = 0x80000000;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->dwY = 0x80000000;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->dwXSize = 0x80000000;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->dwYSize = 0x80000000;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->wShowWindow = 10;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->cbReserved2 = 0;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->cb = 0x44;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->lpReserved = (LPSTR)0x0;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->lpDesktop = (LPSTR)0x0;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->lpTitle = (LPSTR)0x0;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->dwXCountChars = 0x50;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->dwYCountChars = 0x19;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->dwFillAttribute = 0;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->dwFlags = 0;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->lpReserved2 = (LPBYTE)0x0;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->hStdInput = (HANDLE)0x0;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->hStdOutput = (HANDLE)0x0;
  local_44__u_alias = (local_44__u *)&local_44;
  local_44__u_alias->hStdError = (HANDLE)0x0;
  BVar1 = CreateProcessA(param_1,param_2,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0,
                         0x20,(LPVOID)0x0,(LPCSTR)0x0,&local_44,&local_54);
  if (BVar1 == 0) {
    return -1;
  }
  if (param_3 != 0) {
    param_2 = (LPSTR)0x103;
    do {
  local_54__u_alias = (local_54__u *)&local_54;
      GetExitCodeProcess(local_54__u_alias->hProcess,(LPDWORD)&param_2);
    } while (param_2 == (LPSTR)0x103);
    return (int)param_2;
  }
  return 0;
}


