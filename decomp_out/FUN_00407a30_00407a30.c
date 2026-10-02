/* undefined4 __fastcall FUN_00407a30(int param_1) @ 00407a30  167 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00407a30(int param_1)

{
  float local_c;
  float local_8;
  
  local_8 = 0.0;
  if (0x1d < *(int *)(param_1 + 0x18)) {
    if (*(int *)(param_1 + 0x18) < 0x5a) {
      local_8 = 448.0 - ((*(float *)(param_1 + 0x1c) - 30.0) * 448.0) / 60.0;
    }
    local_c = 384.0;
    local_8 = 448.0 - local_8;
    FUN_0040cd00(&local_c,~*(uint *)(DAT_004b43cc + 0x7c) & 1);
    FUN_004285f0(~*(uint *)(DAT_004b43cc + 0x7c) & 1);
    return 0;
  }
  return 0;
}


