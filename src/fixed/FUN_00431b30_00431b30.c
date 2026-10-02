/* undefined __stdcall FUN_00431b30(void) @ 00431b30  33 bytes */
#include "th12.h"

void __stdcall FUN_00431b30(void)

{
  int iVar1;
  
  iVar1 = DAT_004b0c44;
  *(int *)((int)DAT_004b43e4 + 0x6cdc) = DAT_004b0c44;
  if (DAT_004b0c40 < iVar1) {
    DAT_004b0c40 = iVar1;
  }
  return;
}


