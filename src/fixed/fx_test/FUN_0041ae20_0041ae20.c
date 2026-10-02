/* undefined4 __stdcall FUN_0041ae20(int param_1) @ 0041ae20  452 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0041ae20(int param_1)

{
  float fVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  byte *pbVar2;
  int iVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x23c) == 1) {
    local_18 = *(float *)(DAT_004b4514 + 0x97c);
    local_14 = *(float *)(DAT_004b4514 + 0x980);
    local_10 = *(float *)(DAT_004b4514 + 0x984);
    local_24 = *(float *)(param_1 + 0x34) - local_18;
    local_20 = *(float *)(param_1 + 0x38) - local_14;
    local_4 = *(float *)(param_1 + 0x3c) - local_10;
    local_1c = 0.0;
    fVar1 = *(float *)(param_1 + 600);
    local_c = local_24;
    local_8 = local_20;
    D3DXVec3Normalize(&local_24,&local_24);
    local_24 = fVar1 * local_24;
    local_20 = local_20 * fVar1;
    local_1c = fVar1 * local_1c;
    local_18 = local_24 + local_18;
    local_14 = local_20 + local_14;
    local_10 = local_10 + local_1c;
    FUN_00412570(extraout_ECX,extraout_EDX);
  }
  pbVar2 = (byte *)(DAT_004b43c8 + 100);
  iVar3 = 2000;
  do {
    if ((((*pbVar2 & 1) != 0) && (*(short *)(pbVar2 + 0x532) == 1)) &&
       (*(int *)(&DAT_004af280 + *(short *)(pbVar2 + 0x9f4) * 0xd0) == 0x26)) {
      fVar1 = *(float *)(param_1 + 600);
      *(float *)(pbVar2 + 0x4d4) = -fVar1;
      FUN_0041c580(pbVar2 + 0x4c8,*(float *)(pbVar2 + 0x4d8),-fVar1);
      local_c = *(float *)(param_1 + 0x34) - *(float *)(pbVar2 + 0x4bc);
      local_8 = *(float *)(param_1 + 0x38) - *(float *)(pbVar2 + 0x4c0);
      if (local_c * local_c + local_8 * local_8 <
          *(float *)(param_1 + 0x24c) * *(float *)(param_1 + 0x24c) * 0.25) {
        FUN_0040c8b0();
      }
    }
    pbVar2 = pbVar2 + 0x9f8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}


