/* undefined4 __stdcall FUN_0042e8f0(void) @ 0042e8f0  89 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0042e8f0(void)

{
  int iVar1;
  
  iVar1 = FUN_0045fe60(5);
  if (iVar1 == 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_0049f434);
    return 0xffffffff;
  }
  iVar1 = FUN_0045fe60(6);
  if (iVar1 == 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_0049f6a8);
    return 0xffffffff;
  }
  return 0;
}


