/* undefined __stdcall FUN_00406ed0(void) @ 00406ed0  45 bytes */

#include "th12.h"

void __stdcall FUN_00406ed0(void)

{
  int iVar1;
  
  if (*(int *)((int)DAT_004b43c4 + 0x3c) != 0) {
    iVar1 = DAT_004b0c94 + DAT_004b0c90 * 2;
    if ((iVar1 != 0) && (iVar1 == 1)) {
      FUN_00408580(DAT_004b43c4,DAT_004b0c90,(int)DAT_004b43c4);
    }
  }
  return;
}


