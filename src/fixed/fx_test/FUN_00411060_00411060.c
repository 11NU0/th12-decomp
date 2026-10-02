/* uint * __stdcall FUN_00411060(void) @ 00411060  96 bytes */

#include "th12.h"

uint * __stdcall FUN_00411060(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  puVar1 = (uint *)operator_new(0x28);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *puVar1 = *puVar1 | 2;
    DAT_004b43d8 = puVar1;
  }
  iVar2 = FUN_00410c60(puVar1);
  if (iVar2 != 0) {
    if (puVar1 != (uint *)0x0) {
      FUN_00410ea0(extraout_ECX);
      FUN_0046ca4f(puVar1);
    }
    return (uint *)0x0;
  }
  return puVar1;
}


