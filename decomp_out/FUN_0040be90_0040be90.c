/* undefined4 __fastcall FUN_0040be90(int param_1) @ 0040be90  81 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0040be90(int param_1)

{
  if (448.0 < *(float *)(param_1 + 0x4c0) == (*(float *)(param_1 + 0x4c0) == 448.0)) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x800) & 0x10) == 0) {
    *(float *)(param_1 + 0x4d8) = -*(float *)(param_1 + 0x4d8);
    *(float *)(param_1 + 0x4c0) = (448.0 - *(float *)(param_1 + 0x4c0)) + 448.0;
    return 1;
  }
  return 1;
}


