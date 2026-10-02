/* undefined __thiscall FUN_00436270(void * this, int param_1) @ 00436270  415 bytes */
#include "th12.h"

void __fastcall FUN_00436270(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = ((void *)0x004970b9);
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_004ce89c;
  local_4 = 1;
  pvVar1 = *(void **)((int)param_1 + 8);
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
  pvVar1 = *(void **)((int)param_1 + 0xc);
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
  DAT_004b4514 = 0;
  if (((byte)DAT_004b0ce0 & 1) == 0) {
    puVar3 = (undefined4 *)(&DAT_004b50dc + DAT_004ce8cc);
    if (*(int *)(&DAT_004b50dc + DAT_004ce8cc) != 0) {
      FUN_004604e0(this);
      FUN_0046ca4f((void *)*puVar3);
      *puVar3 = 0;
    }
    if (*(void **)((int)param_1 + 0xa2c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0xa2c));
      *(undefined4 *)((int)param_1 + 0xa2c) = 0;
    }
    DAT_004ce8a8 = 0;
  }
  else {
    FUN_00461be0(this,*(int *)((int)param_1 + 0x10));
    DAT_004ce8a8 = *(undefined4 *)((int)param_1 + 0xa2c);
  }
  if (*(void **)((int)param_1 + 0x940) != (void *)0x0) {
    _free(*(void **)((int)param_1 + 0x940));
  }
  *(undefined4 *)((int)param_1 + 0x940) = 0;
  if (*(void **)((int)param_1 + 0x48c) == (void *)0x0) {
    *(undefined4 *)((int)param_1 + 0x48c) = 0;
  }
  else {
    _free(*(void **)((int)param_1 + 0x48c));
    *(undefined4 *)((int)param_1 + 0x48c) = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}


