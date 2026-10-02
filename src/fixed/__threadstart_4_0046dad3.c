/* undefined __stdcall __threadstart@4(void * param_1) @ 0046dad3  119 bytes */
#include "th12.h"

/* Library Function - Single Match
    __threadstart@4
   
   Library: Visual Studio 2008 Release */

void __stdcall __threadstart_4(void *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  DWORD dwExitCode;
  BOOL BVar4;
  
  ___set_flsgetvalue();
  uVar2 = FUN_00475273();
  iVar3 = ___fls_getvalue_4(uVar2);
  if (iVar3 == 0) {
    uVar2 = FUN_00475273();
    iVar3 = ___fls_setvalue_8(uVar2,param_1);
    if (iVar3 == 0) {
      dwExitCode = GetLastError();
                    /* WARNING: Subroutine does not return */
      ExitThread(dwExitCode);
    }
  }
  else {
    *(undefined4 *)((int)iVar3 + 0x54) = *(undefined4 *)((int)param_1 + 0x54);
    *(undefined4 *)((int)iVar3 + 0x58) = *(undefined4 *)((int)param_1 + 0x58);
    *(undefined4 *)((int)iVar3 + 4) = *(undefined4 *)((int)param_1 + 4);
    __freefls_4(param_1);
  }
  BVar4 = __IsNonwritableInCurrentImage((PBYTE)&PTR_FUN_0049d578);
  if (BVar4 != 0) {
    FUN_004759d5();
  }
  __callthreadstart();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


