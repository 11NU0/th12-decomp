/* undefined4 __thiscall FUN_00437f30(void * this, undefined4 param_1, float param_2, float param_3) @ 00437f30  674 bytes */
#include "th12.h"

undefined4 __thiscall FUN_00437f30(void *this,undefined4 param_1,float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_EAX;
  undefined4 extraout_ECX;
  float10 fVar8;
  float10 fVar9;
  
  fVar2 = *(float *)((int)this + 0x97c) - *in_EAX;
  fVar3 = *(float *)((int)this + 0x980) - in_EAX[1];
  fVar8 = (float10)FUN_004938c0(this);
  fVar9 = (float10)FUN_004939f0(extraout_ECX);
  fVar4 = fVar2 * (float)fVar9 - (float)fVar8 * fVar3;
  fVar2 = fVar2 * (float)fVar8 + fVar3 * (float)fVar9;
  fVar3 = *(float *)((int)this + 0x9e4) * 16.0 + fVar4;
  fVar5 = *(float *)((int)this + 0x9e8) * 16.0 + fVar2;
  if (param_3 * 0.5 < fVar4 - *(float *)((int)this + 0x9e4) * 16.0) {
    return 0;
  }
  if (param_2 * 0.5 < fVar2 - *(float *)((int)this + 0x9e8) * 16.0) {
    return 0;
  }
  fVar7 = -param_3 * 0.5;
  if (fVar3 < fVar7 != (NAN(fVar3) || NAN(fVar7))) {
    return 0;
  }
  fVar3 = -param_2 * 0.5;
  if (fVar5 < fVar3 == (NAN(fVar5) || NAN(fVar3))) {
    fVar5 = *(float *)((int)this + 0x9e4) + fVar4;
    fVar6 = *(float *)((int)this + 0x9e8) + fVar2;
    if (param_3 * 0.5 < fVar4 - *(float *)((int)this + 0x9e4)) {
      return 2;
    }
    if (((param_2 * 0.5 < fVar2 - *(float *)((int)this + 0x9e8)) ||
        (fVar5 < fVar7 != (NAN(fVar5) || NAN(fVar7)))) ||
       (fVar6 < fVar3 != (NAN(fVar6) || NAN(fVar3)))) {
      return 2;
    }
    if (((((DAT_004b43e4 == 0) || (*(int *)(DAT_004b43e4 + 0x6d30) == 0)) &&
         ((iVar1 = *(int *)((int)this + 0xa28), iVar1 != 2 && ((iVar1 != 4 && (iVar1 != 3)))))) &&
        ((*(byte *)((int)this + 0xc414) & 2) == 0)) && (*(int *)((int)this + 0xc404) < 1)) {
      FUN_00438370();
      return 1;
    }
  }
  return 0;
}


