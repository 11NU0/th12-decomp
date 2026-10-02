/* undefined __stdcall FUN_00451d20(void) @ 00451d20  79 bytes */
#include "th12.h"

void __stdcall FUN_00451d20(void)

{
  uint uVar1;
  
  DAT_004cee78 = DAT_004cee78 & 0xfffff3ff;
  FUN_00451a60();
  uVar1 = DAT_004cee78 ^ ((uint)(DAT_004ce908 != 0) << 10 ^ DAT_004cee78) & 0x400;
  DAT_004cee78 = uVar1 ^ ((uint)(DAT_004ce90c != 0) << 0xb ^ uVar1) & 0x800;
  return;
}


