/* undefined __thiscall FUN_00401220(void * this, undefined4 * param_1) @ 00401220  475 bytes */

#include "th12.h"

void __thiscall FUN_00401220(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00496f49;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *param_1 = &PTR_LAB_0049f4b8;
  iVar2 = DAT_004ce89c;
  local_4 = 1;
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar2);
    this = extraout_ECX;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      this = extraout_ECX_00;
    }
  }
  iVar2 = DAT_004ce89c;
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar2);
    this = extraout_ECX_01;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      this = extraout_ECX_02;
    }
  }
  iVar2 = DAT_004ce89c;
  pvVar1 = (void *)param_1[0x63f0];
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar2);
    this = extraout_ECX_03;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      this = extraout_ECX_04;
    }
  }
  puVar3 = (undefined4 *)(&DAT_004b50c8 + DAT_004ce8cc);
  if (*(int *)(&DAT_004b50c8 + DAT_004ce8cc) != 0) {
    FUN_004604e0(this);
    FUN_0046ca4f((void *)*puVar3);
    *puVar3 = 0;
    this = extraout_ECX_05;
  }
  puVar3 = (undefined4 *)(&DAT_004b50c0 + DAT_004ce8cc);
  if (*(int *)(&DAT_004b50c0 + DAT_004ce8cc) != 0) {
    FUN_004604e0(this);
    FUN_0046ca4f((void *)*puVar3);
    *puVar3 = 0;
  }
  DAT_004b43b8 = 0;
  if ((void *)param_1[0x250] != (void *)0x0) {
    _free((void *)param_1[0x250]);
  }
  param_1[0x250] = 0;
  if ((void *)param_1[0x123] == (void *)0x0) {
    param_1[0x123] = 0;
  }
  else {
    _free((void *)param_1[0x123]);
    param_1[0x123] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}


