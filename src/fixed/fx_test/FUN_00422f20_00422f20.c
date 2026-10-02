/* undefined __stdcall FUN_00422f20(void) @ 00422f20  59 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00422f20(void)

{
  _DAT_004b0ca0 = _DAT_004b0ca0 - 1;
  if ((int)_DAT_004b0ca0 < 0) {
    _DAT_004b0ca0 = 0;
  }
  else if (8 < (int)_DAT_004b0ca0) {
    _DAT_004b0ca0 = 8;
  }
  if (DAT_004b43e4 != 0) {
    FUN_0041cf40(DAT_004b43e4,_DAT_004b0ca0,(short)_DAT_004b0ca4);
  }
  return;
}


