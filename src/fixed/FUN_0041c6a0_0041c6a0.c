/* undefined4 * __stdcall FUN_0041c6a0(undefined4 * param_1, int param_2) @ 0041c6a0  181 bytes */
#include "th12.h"

undefined4 * __stdcall FUN_0041c6a0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int in_EAX;
  void *pvVar2;
  undefined4 *puVar3;
  void *unaff_EDI;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  *(int *)((int)unaff_EDI + 0x130) = *(int *)((int)unaff_EDI + 0x130) + 1;
  pvVar2 = FUN_004621c0();
  if (-1 < in_EAX) {
    *(int *)((int)pvVar2 + 0x20) = in_EAX;
  }
  *(uint *)((int)pvVar2 + 0x480) = *(uint *)((int)pvVar2 + 0x480) | 1;
  *(undefined4 *)((int)pvVar2 + 0x430) = 0;
  *(undefined4 *)((int)pvVar2 + 0x434) = 0;
  *(undefined4 *)((int)pvVar2 + 0x438) = 0;
  FUN_00454d10(unaff_EDI,pvVar2,param_2);
  puVar3 = (( undefined4 * (__stdcall *)())FUN_004612d0)();
  uVar1 = DAT_004cee78 & 0x8000;
  *param_1 = *puVar3;
  if (uVar1 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  return param_1;
}


