/* undefined __stdcall FUN_0040eba0(int param_1) @ 0040eba0  462 bytes */
#include "th12.h"

void __stdcall FUN_0040eba0(int param_1)

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
  void *this;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = ((void *)0x00497779);
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_0040e850();
  iVar2 = DAT_004ce89c;
  pvVar1 = *(void **)((int)param_1 + 8);
  this = extraout_ECX;
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar2);
    this = extraout_ECX_00;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      this = extraout_ECX_01;
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
    this = extraout_ECX_02;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      this = extraout_ECX_03;
    }
  }
  pvVar1 = DAT_004b43e4;
  if (DAT_004b43e4 != (void *)0x0) {
    FUN_0041dc50(this,(int)DAT_004b43e4);
    FUN_0046ca4f(pvVar1);
    this = extraout_ECX_04;
  }
  pvVar1 = DAT_004b4514;
  if (DAT_004b4514 != (void *)0x0) {
    FUN_00436270(this,(int)DAT_004b4514);
    FUN_0046ca4f(pvVar1);
    this = extraout_ECX_05;
  }
  pvVar1 = DAT_004b43c8;
  if (DAT_004b43c8 != (void *)0x0) {
    FUN_004096d0(this,(int)DAT_004b43c8);
    FUN_0046ca4f(pvVar1);
  }
  pvVar1 = DAT_004b43dc;
  if (DAT_004b43dc != (void *)0x0) {
    FUN_00412f10();
    FUN_0046ca4f(pvVar1);
  }
  pvVar1 = DAT_004b43c4;
  if (DAT_004b43c4 != (void *)0x0) {
    FUN_00406930((int)DAT_004b43c4);
    FUN_0046ca4f(pvVar1);
  }
  pvVar1 = DAT_004b44f0;
  if (DAT_004b44f0 != (void *)0x0) {
    FUN_00425a00((int)DAT_004b44f0);
    FUN_0046ca4f(pvVar1);
  }
  pvVar1 = DAT_004b4524;
  if (DAT_004b4524 != (void *)0x0) {
    FUN_0043dc30((int)DAT_004b4524);
    FUN_0046ca4f(pvVar1);
  }
  DAT_004b43d0 = 0;
  if (*(void **)((int)param_1 + 0x740) != (void *)0x0) {
    _free(*(void **)((int)param_1 + 0x740));
  }
  *(undefined4 *)((int)param_1 + 0x740) = 0;
  *(undefined ***)((int)param_1 + 0x10) = &PTR_FUN_004a3738;
  FUN_00464c40();
  *unaff_FS_OFFSET = local_c;
  return;
}


