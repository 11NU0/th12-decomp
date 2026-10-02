/* undefined __stdcall FUN_00422f60(void) @ 00422f60  37 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422f60(void)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0x60) = 2;
  if (DAT_004b43e4 != 0) {
    FUN_0041cf40(DAT_004b43e4,_DAT_004b0ca0,(short)_DAT_004b0ca4);
  }
  return;
}


