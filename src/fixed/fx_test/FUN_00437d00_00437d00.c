/* undefined4 __thiscall FUN_00437d00(void * this, undefined4 param_1, float param_2, float param_3) @ 00437d00  555 bytes */

#include "th12.h"

undefined4 __thiscall FUN_00437d00(void *this,undefined4 param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *in_EAX;
  undefined4 extraout_ECX;
  float10 fVar6;
  float10 fVar7;
  
  iVar5 = DAT_004b4514;
  fVar1 = *(float *)(DAT_004b4514 + 0x97c) - *in_EAX;
  fVar2 = *(float *)(DAT_004b4514 + 0x980) - in_EAX[1];
  fVar6 = (float10)FUN_004938c0(this);
  fVar7 = (float10)FUN_004939f0(extraout_ECX);
  fVar3 = fVar1 * (float)fVar7 - (float)fVar6 * fVar2;
  fVar1 = fVar1 * (float)fVar6 + fVar2 * (float)fVar7;
  fVar2 = fVar3 - *(float *)(iVar5 + 0x9e4) * 16.0;
  fVar4 = *(float *)(iVar5 + 0x9e8) * 16.0 + fVar1;
  if (param_3 < fVar2 == (NAN(param_3) || NAN(fVar2))) {
    if (param_2 * 0.5 < fVar1 - *(float *)(iVar5 + 0x9e8) * 16.0) {
      return 0;
    }
    if (*(float *)(iVar5 + 0x9e4) * 16.0 + fVar3 < 0.0) {
      return 0;
    }
    fVar2 = -param_2 * 0.5;
    if (fVar4 < fVar2 == (NAN(fVar4) || NAN(fVar2))) {
      fVar4 = *(float *)(iVar5 + 0x9e8) + fVar1;
      if (param_3 < fVar3 - *(float *)(iVar5 + 0x9e4)) {
        return 2;
      }
      if (((fVar1 - *(float *)(iVar5 + 0x9e8) <= param_2 * 0.5) &&
          (0.0 <= *(float *)(iVar5 + 0x9e4) + fVar3)) &&
         (fVar4 < fVar2 == (NAN(fVar4) || NAN(fVar2)))) {
        return 1;
      }
      return 2;
    }
  }
  return 0;
}


