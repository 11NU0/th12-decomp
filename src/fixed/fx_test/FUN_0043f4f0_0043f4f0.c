/* undefined __stdcall FUN_0043f4f0(undefined4 * param_1) @ 0043f4f0  440 bytes */

#include "th12.h"

void __stdcall FUN_0043f4f0(undefined4 *param_1)

{
  void *pvVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  void *this;
  undefined4 *puVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004974ae;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *param_1 = &PTR_LAB_004a20cc;
  local_4 = 0;
  FUN_00464c40();
  iVar3 = DAT_004ce89c;
  pvVar1 = (void *)param_1[3];
  this = extraout_ECX;
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar3);
    this = extraout_ECX_00;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      this = extraout_ECX_01;
    }
  }
  iVar3 = DAT_004ce89c;
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar3);
    this = extraout_ECX_02;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      this = extraout_ECX_03;
    }
  }
  puVar2 = (undefined4 *)(&DAT_004b5120 + DAT_004ce8cc);
  if (*(int *)(&DAT_004b5120 + DAT_004ce8cc) != 0) {
    FUN_004604e0(this);
    FUN_0046ca4f((void *)*puVar2);
    *puVar2 = 0;
    this = extraout_ECX_04;
  }
  puVar2 = (undefined4 *)(&DAT_004b5124 + DAT_004ce8cc);
  if (*(int *)(&DAT_004b5124 + DAT_004ce8cc) != 0) {
    FUN_004604e0(this);
    FUN_0046ca4f((void *)*puVar2);
    *puVar2 = 0;
    this = extraout_ECX_05;
  }
  puVar2 = param_1 + 0x16a0;
  iVar3 = 100;
  do {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      FUN_0043b450((int)pvVar1);
      FUN_0046ca4f(pvVar1);
      this = extraout_ECX_06;
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00461970(this,param_1[0x19b]);
  if ((void *)param_1[0x1704] != (void *)0x0) {
    _free((void *)param_1[0x1704]);
    param_1[0x1704] = 0;
  }
  DAT_004b4530 = iVar3;
  param_1[0x1707] = &PTR_FUN_004a3738;
  FUN_00464c40();
  *unaff_FS_OFFSET = local_c;
  return;
}


