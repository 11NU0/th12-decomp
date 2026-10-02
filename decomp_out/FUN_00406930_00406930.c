/* undefined __stdcall FUN_00406930(int param_1) @ 00406930  482 bytes */
#include "th12.h"

void FUN_00406930(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *this;
  void *this_00;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004975db;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if ((*(int *)(param_1 + 0x3c) != 0) && (DAT_004b0c94 + (int)DAT_004b0c90 * 2 == 5)) {
    FUN_00461a70(DAT_004b0c90,*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_00422d70();
  }
  FUN_00461a70(*(void **)(param_1 + 0x40),(int)*(void **)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_00461a70(this,*(int *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_00461a70(this_00,*(int *)(param_1 + 0x48));
  iVar2 = DAT_004ce89c;
  *(undefined4 *)(param_1 + 0x48) = 0;
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar2);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
    }
  }
  iVar2 = DAT_004ce89c;
  pvVar1 = *(void **)(param_1 + 0xc);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar2);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
    }
  }
  iVar2 = DAT_004ce89c;
  pvVar1 = *(void **)(param_1 + 0x520);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar2);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
    }
  }
  pvVar1 = *(void **)(param_1 + 0x504);
  DAT_004b43c4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00402870();
    FUN_0046ca4f(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x504) = 0;
  if (*(void **)(param_1 + 0x500) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x500));
    *(undefined4 *)(param_1 + 0x500) = 0;
  }
  if (*(void **)(param_1 + 0x4c4) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x4c4));
  }
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}


