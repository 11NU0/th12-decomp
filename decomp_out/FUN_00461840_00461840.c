/* undefined4 * __stdcall FUN_00461840(undefined4 * param_1, undefined4 param_2) @ 00461840  216 bytes */
#include "th12.h"

undefined4 * FUN_00461840(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  void *in_EAX;
  void *pvVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  *(int *)((int)in_EAX + 0x130) = *(int *)((int)in_EAX + 0x130) + 1;
  pvVar3 = FUN_004621c0();
  uVar1 = *(undefined4 *)(unaff_EDI + 0x20);
  *(uint *)((int)pvVar3 + 0x480) = *(uint *)((int)pvVar3 + 0x480) | 1;
  *(undefined4 *)((int)pvVar3 + 0x20) = uVar1;
  *(undefined4 *)((int)pvVar3 + 0x430) = *(undefined4 *)(unaff_EDI + 0x430);
  *(undefined4 *)((int)pvVar3 + 0x434) = *(undefined4 *)(unaff_EDI + 0x434);
  *(undefined4 *)((int)pvVar3 + 0x438) = *(undefined4 *)(unaff_EDI + 0x438);
  FUN_00454d10(in_EAX,pvVar3,param_2);
  *(undefined4 *)((int)pvVar3 + 0x24) = *(undefined4 *)(unaff_EDI + 0x24);
  *(undefined4 *)((int)pvVar3 + 0x28) = *(undefined4 *)(unaff_EDI + 0x28);
  *(undefined4 *)((int)pvVar3 + 0x2c) = *(undefined4 *)(unaff_EDI + 0x2c);
  *(undefined4 *)((int)pvVar3 + 0x43c) = *(undefined4 *)(unaff_EDI + 0x424);
  *(undefined4 *)((int)pvVar3 + 0x440) = *(undefined4 *)(unaff_EDI + 0x428);
  *(undefined4 *)((int)pvVar3 + 0x444) = *(undefined4 *)(unaff_EDI + 0x42c);
  puVar4 = (undefined4 *)FUN_00461250();
  uVar2 = DAT_004cee78 & 0x8000;
  *param_1 = *puVar4;
  if (uVar2 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  return param_1;
}


