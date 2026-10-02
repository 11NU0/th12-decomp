/* undefined __stdcall FUN_0043b450(int param_1) @ 0043b450  429 bytes */

#include "th12.h"

void __stdcall FUN_0043b450(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00497078;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_0046ca4f(*(void **)(param_1 + 0x18));
  iVar3 = 0;
  do {
    FUN_0043ccd0(param_1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  FUN_0046ca4f(*(void **)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x20);
  iVar3 = 8;
  do {
    FUN_0046ca4f((void *)*puVar4);
    *puVar4 = 0;
    iVar2 = DAT_004ce89c;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
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
  iVar3 = DAT_004ce89c;
  pvVar1 = *(void **)(param_1 + 0x1d4);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar3);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
    }
  }
  iVar3 = DAT_004ce89c;
  pvVar1 = *(void **)(param_1 + 0xc);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar3);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
    }
  }
  if (param_1 == DAT_004b4518) {
    DAT_004b4518 = 0;
  }
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_
            ((void *)(param_1 + 0xa8),0x24,8,(_func_void_void_ptr *)&LAB_0043cd80);
  *unaff_FS_OFFSET = local_c;
  return;
}


