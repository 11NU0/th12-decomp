/* undefined __stdcall FUN_004280d0(void) @ 004280d0  231 bytes */

#include "th12.h"

void __stdcall FUN_004280d0(void)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBX;
  
  iVar4 = DAT_004ce89c;
  pvVar1 = *(void **)(unaff_EBX + 8);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar4);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
    }
  }
  iVar4 = DAT_004ce89c;
  pvVar1 = *(void **)(unaff_EBX + 0xc);
  if (pvVar1 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar1,iVar4);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
    }
  }
  piVar3 = *(int **)(unaff_EBX + 0x18);
  while (piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[2];
    (**(code **)(*piVar3 + 0x10))();
    *(int *)(piVar3[1] + 8) = piVar3[2];
    if (piVar3[2] != 0) {
      *(int *)(piVar3[2] + 4) = piVar3[1];
    }
    FUN_0046ca4f(piVar3);
    piVar3 = piVar2;
  }
  DAT_004b44f4 = 0;
  return;
}


