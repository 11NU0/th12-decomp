/* undefined4 __stdcall FUN_004358c0(void) @ 004358c0  27 bytes */
#include "th12.h"

undefined4 __stdcall FUN_004358c0(void)

{
  if ((*(int *)((int)DAT_004b44e8 + 8) != 0) && ((*(byte *)(*(int *)((int)DAT_004b44e8 + 8) + 4) & 2) != 0)) {
    return 1;
  }
  return 0;
}


