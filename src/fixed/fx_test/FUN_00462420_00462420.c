/* undefined4 __stdcall FUN_00462420(void) @ 00462420  147 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00462420(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBX;
  undefined4 uVar5;
  int *unaff_ESI;
  
  iVar4 = DAT_004ce89c;
  uVar5 = 0;
  if ((code *)unaff_ESI[3] != (code *)0x0) {
    uVar5 = (*(code *)unaff_ESI[3])();
    unaff_ESI[3] = 0;
  }
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
    DAT_004cf218 = DAT_004cf218 + '\x01';
  }
  *unaff_ESI = unaff_EBX;
  iVar2 = *(int *)(iVar4 + 0x3c);
  puVar3 = (undefined4 *)(iVar4 + 0x38);
  while ((iVar2 != 0 && (puVar1 = (undefined4 *)puVar3[1], *(int *)*puVar1 < unaff_EBX))) {
    iVar2 = puVar1[1];
    puVar3 = puVar1;
  }
  if (puVar3[1] != 0) {
    unaff_ESI[6] = puVar3[1];
    *(int **)(puVar3[1] + 8) = unaff_ESI + 5;
  }
  puVar3[1] = unaff_ESI + 5;
  unaff_ESI[7] = (int)puVar3;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
    DAT_004cf218 = DAT_004cf218 + -1;
  }
  return uVar5;
}


