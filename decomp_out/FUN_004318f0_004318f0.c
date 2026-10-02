/* undefined __stdcall FUN_004318f0(void) @ 004318f0  23 bytes */
#include "th12.h"

void FUN_004318f0(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0xc) = 0;
  }
  return;
}


