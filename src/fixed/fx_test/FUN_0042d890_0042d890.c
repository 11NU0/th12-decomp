/* ulonglong __fastcall FUN_0042d890(int param_1, undefined4 param_2) @ 0042d890  231 bytes */

#include "th12.h"

ulonglong __fastcall FUN_0042d890(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0xbc) < *(int *)(param_1 + 0xe0)) {
    *(float *)(param_1 + 0x74) =
         *(float *)(param_1 + 0xcc) * DAT_004b2ed0 + *(float *)(param_1 + 0x74);
    fVar1 = *(float *)(param_1 + 0xd8) * DAT_004b2ed0;
    fVar2 = DAT_004b2ed0 * *(float *)(param_1 + 0xdc);
    *(float *)(param_1 + 0x5c) =
         *(float *)(param_1 + 0x5c) + DAT_004b2ed0 * *(float *)(param_1 + 0xd4);
    *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) + fVar1;
    *(float *)(param_1 + 100) = fVar2 + *(float *)(param_1 + 100);
    if ((0.0001 < ABS(*(float *)(param_1 + 0x5c)) != NAN(ABS(*(float *)(param_1 + 0x5c)))) ||
       (0.0001 < ABS(*(float *)(param_1 + 0x60)))) {
      fVar3 = (float10)FUN_004937aa(param_1);
      *(float *)(param_1 + 0x68) = (float)fVar3;
    }
    uVar4 = FUN_00464a80();
    return uVar4 & 0xffffffff00000000;
  }
  *(uint *)(param_1 + 0x430) = *(uint *)(param_1 + 0x430) & 0xfffffffb;
  return CONCAT44(param_2,1);
}


