/* undefined __stdcall FUN_00421bf0(void) @ 00421bf0  68 bytes */
#include "th12.h"

void FUN_00421bf0(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_004b44f4 + 0x18);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    (**(code **)(*piVar2 + 0x10))();
    *(int *)(piVar2[1] + 8) = piVar2[2];
    if (piVar2[2] != 0) {
      *(int *)(piVar2[2] + 4) = piVar2[1];
    }
    FUN_0046ca4f(piVar2);
    piVar2 = piVar1;
  }
  return;
}


