/* undefined4 __fastcall FUN_0040be50(int param_1) @ 0040be50  61 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0040be50(int param_1)

{
  if (*(float *)(param_1 + 0x4c0) < 0.0) {
    if ((*(byte *)(param_1 + 0x800) & 0x10) == 0) {
      *(float *)(param_1 + 0x4d8) = -*(float *)(param_1 + 0x4d8);
      *(float *)(param_1 + 0x4c0) = -*(float *)(param_1 + 0x4c0);
    }
    return 1;
  }
  return 0;
}


