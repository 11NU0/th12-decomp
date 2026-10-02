/* undefined __stdcall FUN_0043e520(int param_1) @ 0043e520  439 bytes */
#include "th12.h"

void __stdcall FUN_0043e520(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *piVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = ((void *)0x00496f0b);
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_0043e380();
  iVar2 = DAT_004ce89c;
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
  if (*(void **)((int)param_1 + 0x2e0) != (void *)0x0) {
    _free(*(void **)((int)param_1 + 0x2e0));
    *(undefined4 *)((int)param_1 + 0x2e0) = 0;
  }
  puVar4 = *(undefined4 **)((int)param_1 + 0x2d8);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &PTR_FUN_0049fc28;
    if ((void *)puVar4[0x23] != (void *)0x0) {
      _free((void *)puVar4[0x23]);
      puVar4[0x23] = 0;
    }
    FUN_0046ca4f(puVar4);
    *(undefined4 *)((int)param_1 + 0x2d8) = 0;
  }
  piVar3 = *(int **)((int)param_1 + 0x2dc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x14))(1);
    *(undefined4 *)((int)param_1 + 0x2dc) = 0;
    piVar3 = extraout_ECX;
  }
  puVar4 = (undefined4 *)(&DAT_004b50d8 + DAT_004ce8cc);
  if (*(int *)(&DAT_004b50d8 + DAT_004ce8cc) != 0) {
    FUN_004604e0(piVar3);
    FUN_0046ca4f((void *)*puVar4);
    *puVar4 = 0;
    piVar3 = extraout_ECX_00;
  }
  puVar4 = (undefined4 *)(&DAT_004b50d4 + DAT_004ce8cc);
  if (*(int *)(&DAT_004b50d4 + DAT_004ce8cc) != 0) {
    FUN_004604e0(piVar3);
    FUN_0046ca4f((void *)*puVar4);
    *puVar4 = 0;
  }
  DAT_004b4528 = 0;
  *(undefined ***)((int)param_1 + 0x10) = &PTR_FUN_004a3738;
  FUN_00464c40();
  *unaff_FS_OFFSET = local_c;
  return;
}


