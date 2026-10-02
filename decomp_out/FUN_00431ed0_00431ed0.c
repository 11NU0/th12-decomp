/* undefined __stdcall FUN_00431ed0(void) @ 00431ed0  216 bytes */
#include "th12.h"

void FUN_00431ed0(void)

{
  void *pvVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = DAT_004ce89c;
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
  puVar3 = (undefined4 *)(in_EAX + 0x204);
  iVar2 = 0x19;
  do {
    pvVar1 = (void *)*puVar3;
    if (pvVar1 != (void *)0x0) {
      FUN_0043b450((int)pvVar1);
      FUN_0046ca4f(pvVar1);
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  DAT_004b4510 = iVar2;
  return;
}


