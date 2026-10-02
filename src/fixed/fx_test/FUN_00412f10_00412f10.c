/* undefined __stdcall FUN_00412f10(void) @ 00412f10  362 bytes */

#include "th12.h"

void __stdcall FUN_00412f10(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  int in_EAX;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iStack_4;
  
  FUN_0040e940(in_EAX);
  iVar5 = DAT_004ce89c;
  pvVar1 = *(void **)(in_EAX + 8);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar5);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
    }
  }
  iVar5 = DAT_004ce89c;
  pvVar1 = *(void **)(in_EAX + 0xc);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar5);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
    }
  }
  iVar5 = 0xc;
  do {
    pvVar1 = *(void **)(iVar5 + *(int *)(in_EAX + 100));
    if (pvVar1 != (void *)0x0) {
      _free(pvVar1);
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x8c);
  puVar2 = *(undefined4 **)(in_EAX + 100);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_FUN_0049fc28;
    if ((void *)puVar2[0x23] != (void *)0x0) {
      _free((void *)puVar2[0x23]);
      puVar2[0x23] = 0;
    }
    FUN_0046ca4f(puVar2);
  }
  *(undefined4 *)(in_EAX + 100) = 0;
  uVar4 = 8;
  iStack_4 = 4;
  puVar3 = &DAT_004b50e0;
  do {
    if ((-1 < (int)uVar4) && (uVar4 < 0x20)) {
      puVar2 = (undefined4 *)(puVar3 + DAT_004ce8cc);
      if (*(int *)(puVar3 + DAT_004ce8cc) != 0) {
        FUN_004604e0(DAT_004ce8cc);
        FUN_0046ca4f((void *)*puVar2);
        *puVar2 = 0;
      }
    }
    puVar3 = puVar3 + 4;
    uVar4 = uVar4 + 1;
    iStack_4 = iStack_4 + -1;
  } while (iStack_4 != 0);
  DAT_004b43dc = 0;
  return;
}


