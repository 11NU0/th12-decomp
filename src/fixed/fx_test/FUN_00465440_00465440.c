/* undefined __fastcall FUN_00465440(uint * param_1) @ 00465440  105 bytes */

#include "th12.h"

void __fastcall FUN_00465440(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *param_1;
  uVar3 = 1;
  param_1[2] = 0;
  param_1[0x4b] = 0;
  puVar1 = param_1 + 5;
  iVar4 = 0x20;
  do {
    if ((uVar2 & 1) == 0) {
      *puVar1 = 0;
    }
    else {
      *puVar1 = *puVar1 + 1;
      if (7 < *puVar1) {
        param_1[0x4b] = param_1[0x4b] | uVar3;
      }
      if (0x19 < *puVar1) {
        param_1[2] = param_1[2] | uVar3;
        *puVar1 = *puVar1 - 8;
      }
    }
    puVar1 = puVar1 + 1;
    uVar2 = uVar2 >> 1;
    uVar3 = uVar3 * 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = *param_1;
  param_1[3] = (param_1[1] ^ uVar2) & uVar2;
  param_1[4] = ~uVar2 & (param_1[1] ^ uVar2);
  return;
}


