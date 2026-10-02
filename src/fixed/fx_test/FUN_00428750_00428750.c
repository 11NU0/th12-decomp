/* undefined4 __stdcall FUN_00428750(void) @ 00428750  47 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00428750(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(DAT_004b44f4 + 0x18);
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if (piVar2[3] != 1) {
      (**(code **)(*piVar2 + 0x14))();
    }
  }
  return 1;
}


