/* undefined4 __stdcall FUN_00408c30(void) @ 00408c30  117 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00408c30(void)

{
  float local_c [3];
  
  local_c[0] = 384.0;
  local_c[1] = 448.0;
  FUN_0040cd00(local_c,~*(uint *)(DAT_004b43cc + 0x7c) & 1);
  FUN_004285f0(~*(uint *)(DAT_004b43cc + 0x7c) & 1);
  return 0;
}


