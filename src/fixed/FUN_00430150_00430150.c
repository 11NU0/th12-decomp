/* undefined4 __stdcall FUN_00430150(undefined4 param_1, int param_2) @ 00430150  75 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00430150(undefined4 param_1,int param_2)

{
  if ((DAT_004ceae8 & 0x10) != 0) {
    FUN_00454960(4,0);
  }
  FUN_00454960(2,param_1);
  *(undefined *)(DAT_004b451c + 0x1e9da + param_2) = 1;
  return 0;
}


