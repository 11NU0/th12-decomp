/* undefined __stdcall FUN_00454960(undefined4 param_1, undefined4 param_2) @ 00454960  151 bytes */
#include "th12.h"

void FUN_00454960(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *unaff_EDI;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf200);
    DAT_004cf223 = DAT_004cf223 + '\x01';
  }
  iVar2 = 0;
  piVar3 = (int *)(in_EAX + 0x1fec);
  while (*piVar3 != 0) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x43;
    if (0x1e < iVar2) goto LAB_004549d6;
  }
  iVar2 = iVar2 * 0x10c + in_EAX;
  *(undefined4 *)(iVar2 + 0x1fec) = param_1;
  *(undefined4 *)(iVar2 + 0x1ff0) = param_2;
  iVar4 = (iVar2 + 0x1ff8) - (int)unaff_EDI;
  do {
    cVar1 = *unaff_EDI;
    unaff_EDI[iVar4] = cVar1;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(iVar2 + 0x1ff4) = 0;
LAB_004549d6:
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf200);
    DAT_004cf223 = DAT_004cf223 + -1;
  }
  return;
}


