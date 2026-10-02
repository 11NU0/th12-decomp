/* undefined __fastcall FUN_0040d9c0(void * param_1) @ 0040d9c0  215 bytes */

#include "th12.h"

void __fastcall FUN_0040d9c0(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int in_EAX;
  void *this;
  
  FUN_00461a70(param_1,*(int *)(in_EAX + 0x14));
  *(undefined4 *)(in_EAX + 0x14) = 0;
  FUN_00461a70(*(void **)(in_EAX + 0x18),(int)*(void **)(in_EAX + 0x18));
  *(undefined4 *)(in_EAX + 0x18) = 0;
  FUN_00461a70(this,*(int *)(in_EAX + 0x1c));
  iVar2 = DAT_004ce89c;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  pvVar1 = *(void **)(in_EAX + 8);
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
  pvVar1 = *(void **)(in_EAX + 0xc);
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
  DAT_004b43cc = 0;
  return;
}


