/* undefined __fastcall FUN_00410ea0(undefined4 param_1) @ 00410ea0  405 bytes */
#include "th12.h"

void __fastcall FUN_00410ea0(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  int unaff_EBX;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_004ce89c;
  pvVar1 = *(void **)((int)unaff_EBX + 8);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar2);
    param_1 = extraout_ECX;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      param_1 = extraout_ECX_00;
    }
  }
  iVar2 = DAT_004ce89c;
  pvVar1 = *(void **)((int)unaff_EBX + 0xc);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar2);
    param_1 = extraout_ECX_01;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      param_1 = extraout_ECX_02;
    }
  }
  pvVar1 = *(void **)((int)unaff_EBX + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_00410a50();
    FUN_0046ca4f(pvVar1);
    param_1 = extraout_ECX_03;
  }
  piVar3 = (int *)(&DAT_004b5130 + DAT_004ce8cc);
  *(undefined4 *)((int)unaff_EBX + 0x18) = 0;
  if (*piVar3 != 0) {
    FUN_004604e0(param_1);
    FUN_0046ca4f((void *)*piVar3);
    *piVar3 = 0;
    param_1 = extraout_ECX_04;
  }
  puVar4 = (undefined4 *)(&DAT_004b5134 + DAT_004ce8cc);
  if (*(int *)(&DAT_004b5134 + DAT_004ce8cc) != 0) {
    FUN_004604e0(param_1);
    FUN_0046ca4f((void *)*puVar4);
    *puVar4 = 0;
    param_1 = extraout_ECX_05;
  }
  puVar4 = (undefined4 *)(&DAT_004b5138 + DAT_004ce8cc);
  if (*(int *)(&DAT_004b5138 + DAT_004ce8cc) != 0) {
    FUN_004604e0(param_1);
    FUN_0046ca4f((void *)*puVar4);
    *puVar4 = 0;
    param_1 = extraout_ECX_06;
  }
  puVar4 = (undefined4 *)(&DAT_004b513c + DAT_004ce8cc);
  if (*(int *)(&DAT_004b513c + DAT_004ce8cc) != 0) {
    FUN_004604e0(param_1);
    FUN_0046ca4f((void *)*puVar4);
    *puVar4 = 0;
  }
  if (*(void **)((int)unaff_EBX + 0x14) != (void *)0x0) {
    _free(*(void **)((int)unaff_EBX + 0x14));
    *(undefined4 *)((int)unaff_EBX + 0x14) = 0;
  }
  *(undefined4 *)((int)unaff_EBX + 0x14) = 0;
  DAT_004b43d8 = 0;
  DAT_004ce55c = 0;
  return;
}


