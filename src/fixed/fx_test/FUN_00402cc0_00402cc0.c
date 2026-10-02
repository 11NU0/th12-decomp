/* undefined __stdcall FUN_00402cc0(int param_1) @ 00402cc0  603 bytes */

#include "th12.h"

void __stdcall FUN_00402cc0(int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004972f6;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_004ce89c;
  local_4 = 1;
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
  pvVar1 = *(void **)(param_1 + 0x3600);
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
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(void **)(param_1 + 0x3604) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x3604));
    *(undefined4 *)(param_1 + 0x3604) = 0;
  }
  *(undefined4 *)(param_1 + 0x3604) = 0;
  if (*(void **)(param_1 + 0x1c8) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x1c8));
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x35dc);
  if (pvVar1 != (void *)0x0) {
    FUN_00402870();
    FUN_0046ca4f(pvVar1);
    *(undefined4 *)(param_1 + 0x35dc) = 0;
  }
  if (((((byte)DAT_004b0ce0 & 1) == 0) &&
      (uVar3 = (*(uint *)(param_1 + 0x35d4) & 1) + 3, uVar3 < 0x20)) &&
     (iVar2 = uVar3 * 4 + DAT_004ce8cc, *(int *)(&DAT_004b50c0 + uVar3 * 4 + DAT_004ce8cc) != 0)) {
    FUN_004604e0(DAT_004ce8cc);
    FUN_0046ca4f(*(void **)(&DAT_004b50c0 + iVar2));
    *(undefined4 *)(&DAT_004b50c0 + iVar2) = 0;
  }
  if (DAT_004b43c0 == param_1) {
    DAT_004b43c0 = 0;
  }
  if (DAT_004b43bc == param_1) {
    DAT_004b43bc = 0;
  }
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x2794),0x4b4,3,FUN_004026e0);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x1cc),0x4b4,8,FUN_004026e0);
  *unaff_FS_OFFSET = local_c;
  return;
}


