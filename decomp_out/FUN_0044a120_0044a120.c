/* undefined __fastcall FUN_0044a120(void * param_1) @ 0044a120  267 bytes */
#include "th12.h"

void __fastcall FUN_0044a120(void *param_1)

{
  void *pvVar1;
  int iVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  int unaff_EBX;
  
  iVar2 = DAT_004ce89c;
  pvVar1 = *(void **)(unaff_EBX + 8);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar2);
    param_1 = extraout_ECX;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      param_1 = extraout_ECX_00;
    }
  }
  iVar2 = DAT_004ce89c;
  pvVar1 = *(void **)(unaff_EBX + 0xc);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar2);
    param_1 = extraout_ECX_01;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      param_1 = extraout_ECX_02;
    }
  }
  iVar2 = DAT_004ce89c;
  pvVar1 = *(void **)(unaff_EBX + 0x24);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar2);
    param_1 = extraout_ECX_03;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
      param_1 = extraout_ECX_04;
    }
  }
  DAT_004b4534 = 0;
  FUN_00461a70(param_1,*(int *)(unaff_EBX + 0x3c));
  *(undefined4 *)(unaff_EBX + 0x3c) = 0;
  return;
}


