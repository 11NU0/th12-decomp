/* undefined __stdcall FUN_0042ec00(int param_1) @ 0042ec00  465 bytes */

#include "th12.h"

void __stdcall FUN_0042ec00(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  void *pvVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  undefined4 uVar2;
  
  puStack_8 = &LAB_00497336;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_00464c40();
  iVar1 = DAT_004ce89c;
  pvVar3 = *(void **)(param_1 + 8);
  uVar2 = extraout_ECX;
  if (pvVar3 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar3,iVar1);
    uVar2 = extraout_ECX_00;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      uVar2 = extraout_ECX_01;
    }
  }
  iVar1 = DAT_004ce89c;
  pvVar3 = *(void **)(param_1 + 0xc);
  if (pvVar3 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar3,iVar1);
    uVar2 = extraout_ECX_02;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      uVar2 = extraout_ECX_03;
    }
  }
  FUN_0042e950(uVar2);
  puVar4 = (undefined4 *)(&DAT_004b50c4 + DAT_004ce8cc);
  pvVar3 = extraout_ECX_04;
  if (*(int *)(&DAT_004b50c4 + DAT_004ce8cc) != 0) {
    FUN_004604e0(extraout_ECX_04);
    FUN_0046ca4f((void *)*puVar4);
    *puVar4 = 0;
    pvVar3 = extraout_ECX_05;
  }
  puVar4 = DAT_004b43b8;
  DAT_004b44f8 = 0;
  if (DAT_004b43b8 != (undefined4 *)0x0) {
    FUN_00401220(pvVar3,DAT_004b43b8);
    FUN_0046ca4f(puVar4);
    pvVar3 = extraout_ECX_06;
  }
  puVar4 = (undefined4 *)(&DAT_004b50c0 + DAT_004ce8cc);
  if (*(int *)(&DAT_004b50c0 + DAT_004ce8cc) != 0) {
    FUN_004604e0(pvVar3);
    FUN_0046ca4f((void *)*puVar4);
    *puVar4 = 0;
  }
  FUN_0043d2e0();
  puVar4 = DAT_004b451c;
  if (DAT_004b451c != (undefined4 *)0x0) {
    if ((void *)*DAT_004b451c != (void *)0x0) {
      _free((void *)*DAT_004b451c);
      *puVar4 = 0;
    }
    if ((void *)puVar4[1] != (void *)0x0) {
      _free((void *)puVar4[1]);
      puVar4[1] = 0;
    }
    FUN_0046ca4f(puVar4);
  }
  DAT_004b451c = (undefined4 *)0x0;
  if (*(void **)(param_1 + 0x4a8) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x4a8));
  }
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_004a3738;
  FUN_00464c40();
  *unaff_FS_OFFSET = local_c;
  return;
}


