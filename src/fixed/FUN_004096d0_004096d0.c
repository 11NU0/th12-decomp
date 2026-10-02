/* undefined __thiscall FUN_004096d0(void * this, int param_1) @ 004096d0  287 bytes */
#include "th12.h"

void __fastcall FUN_004096d0(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = ((void *)0x0049729c);
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
  FUN_00461be0(this,*(int *)(&DAT_004debdc + param_1));
  DAT_004b43c8 = 0;
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)((int)param_1 + 100),0x9f8,0x7d1,FUN_004094f0);
  *unaff_FS_OFFSET = local_c;
  return;
}


