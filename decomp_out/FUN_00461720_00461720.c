/* undefined4 * __stdcall FUN_00461720(undefined4 * param_1, undefined4 param_2, int param_3) @ 00461720  282 bytes */
#include "th12.h"

undefined4 * FUN_00461720(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint in_EAX;
  void *pvVar2;
  undefined4 *puVar3;
  void *unaff_EDI;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  *(int *)((int)unaff_EDI + 0x130) = *(int *)((int)unaff_EDI + 0x130) + 1;
  pvVar2 = FUN_004621c0();
  uVar1 = *(undefined4 *)(param_3 + 0x20);
  *(uint *)((int)pvVar2 + 0x480) = *(uint *)((int)pvVar2 + 0x480) | 1;
  *(undefined4 *)((int)pvVar2 + 0x430) = 0;
  *(undefined4 *)((int)pvVar2 + 0x20) = uVar1;
  *(undefined4 *)((int)pvVar2 + 0x434) = 0;
  *(undefined4 *)((int)pvVar2 + 0x438) = 0;
  FUN_00454d10(unaff_EDI,pvVar2,param_2);
  *(int *)((int)pvVar2 + 0x3c) = param_3;
  if (((in_EAX & 4) == 0) || ((in_EAX & 2) == 0)) {
    if ((in_EAX & 4) != 0) {
      puVar3 = (undefined4 *)FUN_00461350();
      *param_1 = *puVar3;
      goto LAB_004617f4;
    }
    if ((in_EAX & 2) != 0) {
      puVar3 = (undefined4 *)FUN_004612d0();
      *param_1 = *puVar3;
      goto LAB_004617f4;
    }
    puVar3 = (undefined4 *)FUN_00461250();
  }
  else {
    puVar3 = (undefined4 *)FUN_004613d0();
  }
  *param_1 = *puVar3;
LAB_004617f4:
  if (*(int *)(param_3 + 0x14) != 0) {
    *(int *)((int)pvVar2 + 0x14) = *(int *)(param_3 + 0x14);
    *(int *)(*(int *)(param_3 + 0x14) + 8) = (int)pvVar2 + 0x10;
  }
  *(int *)(param_3 + 0x14) = (int)pvVar2 + 0x10;
  *(int *)((int)pvVar2 + 0x18) = param_3 + 0x10;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  return param_1;
}


