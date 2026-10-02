/* undefined __stdcall FUN_00451e60(void) @ 00451e60  99 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451e60(void)

{
  if (DAT_004ce8cc != 0) {
    FUN_0045a3c0();
  }
  _DAT_004ce9d4 = 0;
  _DAT_004ce9c4 = 0;
  _DAT_004ce9c8 = 0;
  _DAT_004ce9d8 = 0x3f800000;
  _DAT_004ce9cc = 0x280;
  _DAT_004ce9d0 = 0x1e0;
  (**(code **)(*DAT_004ce8f0 + 0xbc))(DAT_004ce8f0,&DAT_004ce9c4);
  FUN_00451dc0();
  return;
}


