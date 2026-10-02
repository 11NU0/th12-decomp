/* undefined __fastcall FUN_0040fa30(undefined4 param_1) @ 0040fa30  193 bytes */
#include "th12.h"

void __fastcall FUN_0040fa30(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  int in_EAX;
  
  FUN_00461be0(param_1,*(int *)((int)in_EAX + 0x10));
  iVar2 = DAT_004ce89c;
  pvVar1 = *(void **)((int)in_EAX + 8);
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
  pvVar1 = *(void **)((int)in_EAX + 0xc);
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
  DAT_004b43d4 = 0;
  return;
}


