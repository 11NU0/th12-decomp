/* int __cdecl _rand_s(undefined4 * param_1) @ 00482e18  264 bytes */
#include "th12.h"

/* Library Function - Single Match
    _rand_s
   
   Library: Visual Studio 2008 Release */

int __cdecl _rand_s(undefined4 *param_1)

{
  FARPROC pFVar1;
  int *piVar2;
  HMODULE hModule;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  LONG LVar6;
  
  pFVar1 = (FARPROC)__decode_pointer(DAT_004b437c);
  if (param_1 == (undefined4 *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = 0;
  if (pFVar1 == (FARPROC)0x0) {
    hModule = LoadLibraryA("ADVAPI32.DLL");
    if (hModule == (HMODULE)0x0) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      return 0x16;
    }
    pFVar1 = GetProcAddress(hModule,"SystemFunction036");
    if (pFVar1 == (FARPROC)0x0) {
      piVar2 = __errno();
      DVar3 = GetLastError();
      iVar4 = __get_errno_from_oserr(DVar3);
      *piVar2 = iVar4;
      __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      DVar3 = GetLastError();
      iVar4 = __get_errno_from_oserr(DVar3);
      return iVar4;
    }
    iVar4 = __encode_pointer((int)pFVar1);
    iVar5 = __encoded_null();
    LVar6 = InterlockedExchange(&DAT_004b437c,iVar4);
    if (LVar6 != iVar5) {
      FreeLibrary(hModule);
    }
  }
  iVar4 = (*pFVar1)(param_1,4);
  if (iVar4 == 0) {
    piVar2 = __errno();
    *piVar2 = 0xc;
    piVar2 = __errno();
    iVar4 = *piVar2;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}


