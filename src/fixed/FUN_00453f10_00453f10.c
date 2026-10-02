/* undefined __stdcall FUN_00453f10(void) @ 00453f10  133 bytes */
#include "th12.h"

void __stdcall FUN_00453f10(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  
  if (in_EAX < 0) {
    piVar3 = &DAT_004d0e70;
    do {
      piVar1 = (int *)*piVar3;
      piVar3[5] = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x24))(piVar1);
        piVar3[5] = 0;
        (**(code **)(*(int *)*piVar3 + 0x48))((int *)*piVar3);
      }
      piVar3 = piVar3 + 6;
    } while ((int)piVar3 < 0x4d1410);
    return;
  }
  iVar2 = 0;
  piVar3 = &DAT_004cf508;
  while (-1 < *piVar3) {
    if (*piVar3 == in_EAX) goto LAB_00453f87;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + 1;
    if (0x4cf537 < (int)piVar3) {
      return;
    }
  }
  if (0xb < iVar2) {
    return;
  }
  (&DAT_004cf508)[iVar2] = in_EAX;
LAB_00453f87:
  (&DAT_004cf538)[iVar2] = 0xffffffff;
  return;
}


