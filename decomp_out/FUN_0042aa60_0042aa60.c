/* undefined4 __thiscall FUN_0042aa60(void * this, float * param_1, float param_2) @ 0042aa60  278 bytes */
#include "th12.h"

undefined4 __thiscall FUN_0042aa60(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 extraout_ECX;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = *param_1 - *(float *)((int)this + 0x50);
  fVar2 = param_1[1] - *(float *)((int)this + 0x54);
  fVar5 = (float10)FUN_004938c0(this);
  fVar6 = (float10)FUN_004939f0(extraout_ECX);
  fVar3 = fVar1 * (float)fVar6 - fVar2 * (float)fVar5;
  fVar1 = (float)fVar6 * fVar2 + (float)fVar5 * fVar1;
  fVar4 = fVar3 - param_2;
  fVar2 = param_2 + fVar1;
  if ((((*(float *)((int)this + 0x6c) < fVar4 == (NAN(*(float *)((int)this + 0x6c)) || NAN(fVar4)))
       && (fVar1 - param_2 <= *(float *)((int)this + 0x70) * 0.5)) && (0.0 <= param_2 + fVar3)) &&
     (fVar1 = -*(float *)((int)this + 0x70) * 0.5, fVar2 < fVar1 == (NAN(fVar2) || NAN(fVar1)))) {
    return 2;
  }
  return 0;
}


