/* undefined4 __stdcall FUN_00412780(void) @ 00412780  25 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00412780(void)

{
  if (((*(uint *)(DAT_004b43cc + 0x7c) & 1) != 0) && ((*(uint *)(DAT_004b43cc + 0x7c) & 0x20) != 0))
  {
    return 1;
  }
  return 0;
}


