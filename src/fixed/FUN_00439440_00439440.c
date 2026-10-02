/* undefined4 __stdcall FUN_00439440(int param_1) @ 00439440  35 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00439440(int param_1)

{
  DAT_004b0c48 = DAT_004b0c48 - param_1;
  if (DAT_004b0c48 < DAT_004b0cd4) {
    DAT_004b0c48 = DAT_004b0cd4;
  }
  return 0;
}


