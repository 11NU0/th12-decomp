/* undefined __stdcall FUN_0043dc30(int param_1) @ 0043dc30  273 bytes */
#include "th12.h"

void __stdcall FUN_0043dc30(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = ((void *)0x0049700b);
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_004ce89c;
  local_4 = 0;
  pvVar1 = *(void **)((int)param_1 + 8);
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
  pvVar1 = *(void **)((int)param_1 + 0xc);
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
  DAT_004b4524 = 0;
  if (*(void **)((int)param_1 + 0x490) == (void *)0x0) {
    *(undefined4 *)((int)param_1 + 0x490) = 0;
  }
  else {
    _free(*(void **)((int)param_1 + 0x490));
    *(undefined4 *)((int)param_1 + 0x490) = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}


