/* undefined4 __stdcall FUN_00437980(float param_1) @ 00437980  244 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00437980(float param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float *in_EAX;
  float local_c;
  
  fVar1 = *(float *)((int)DAT_004b4514 + 0x980) - in_EAX[1];
  fVar3 = *(float *)((int)DAT_004b4514 + 0x97c) - *in_EAX;
  fVar3 = fVar3 * fVar3 + fVar1 * fVar1;
  fVar1 = *(float *)(*(int *)((int)DAT_004b4514 + 0xa2c) + 4);
  fVar1 = fVar1 * fVar1 + param_1 * param_1;
  if (fVar1 < fVar3 == (fVar1 == fVar3)) {
    if ((((DAT_004b43e4 == 0) || (*(int *)((int)DAT_004b43e4 + 0x6d30) == 0)) &&
        (iVar2 = *(int *)((int)DAT_004b4514 + 0xa28), iVar2 != 2)) &&
       (((iVar2 != 4 && (iVar2 != 3)) && ((*(byte *)((int)DAT_004b4514 + 0xc414) & 2) == 0)))) {
      if (*(int *)((int)DAT_004b4514 + 0xc404) < 1) {
        FUN_00438370();
      }
      return 1;
    }
  }
  else {
    local_c = param_1 / 2.5;
    if (local_c < 40.0) {
      local_c = 40.0;
    }
    local_c = *(float *)(*(int *)((int)DAT_004b4514 + 0xa2c) + 4) + local_c;
    fVar1 = local_c * local_c + param_1 * param_1;
    if (fVar1 < fVar3 == (fVar1 == fVar3)) {
      return 2;
    }
  }
  return 0;
}


