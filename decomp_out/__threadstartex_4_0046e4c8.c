/* undefined __stdcall __threadstartex@4(DWORD * param_1) @ 0046e4c8  131 bytes */
#include "th12.h"

/* Library Function - Single Match
    __threadstartex@4
   
   Library: Visual Studio 2008 Release */

void __threadstartex_4(DWORD *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  DWORD DVar4;
  BOOL BVar5;
  DWORD *pDVar6;
  
  ___set_flsgetvalue();
  uVar2 = FUN_00475273();
  iVar3 = ___fls_getvalue_4(uVar2);
  if (iVar3 == 0) {
    pDVar6 = param_1;
    uVar2 = FUN_00475273();
    iVar3 = ___fls_setvalue_8(uVar2,pDVar6);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
                    /* WARNING: Subroutine does not return */
      ExitThread(DVar4);
    }
    DVar4 = GetCurrentThreadId();
    *param_1 = DVar4;
  }
  else {
    *(DWORD *)(iVar3 + 0x54) = param_1[0x15];
    *(DWORD *)(iVar3 + 0x58) = param_1[0x16];
    *(DWORD *)(iVar3 + 4) = param_1[1];
    __freefls_4(param_1);
  }
  BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR_FUN_0049d578);
  if (BVar5 != 0) {
    FUN_004759d5();
  }
  __callthreadstartex();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


