/* undefined4 __stdcall FUN_00449f20(void) @ 00449f20  36 bytes */
#include "th12.h"

undefined4 FUN_00449f20(void)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(DAT_004b43dc + 0x1c);
  do {
    if (*piVar2 != 0) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar1 < 8);
  return 0;
}


