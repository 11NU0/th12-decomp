/* uint * __stdcall FUN_0040fb00(void) @ 0040fb00  95 bytes */

#include "th12.h"

uint * __stdcall FUN_0040fb00(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 extraout_ECX;
  
  puVar1 = (uint *)operator_new(0x24);
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
    *puVar1 = *puVar1 | 2;
    DAT_004b43d4 = puVar1;
  }
  iVar2 = FUN_0040f940((int)puVar1);
  if (iVar2 != 0) {
    if (puVar1 != (uint *)0x0) {
      FUN_0040fa30(extraout_ECX);
      FUN_0046ca4f(puVar1);
    }
    return (uint *)0x0;
  }
  return puVar1;
}


