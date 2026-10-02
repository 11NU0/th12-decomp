/* float10 __fastcall FUN_00437730(int param_1) @ 00437730  101 bytes */

#include "th12.h"

float10 __fastcall FUN_00437730(int param_1)

{
  float fVar1;
  float fVar2;
  float *in_EAX;
  float10 fVar3;
  
  fVar1 = *in_EAX - *(float *)(param_1 + 0x97c);
  fVar2 = in_EAX[1] - *(float *)(param_1 + 0x980);
  if ((NAN(fVar2) != (fVar2 == 0.0)) && (NAN(fVar1) != (fVar1 == 0.0))) {
    return (float10)1.5707964;
  }
  fVar3 = (float10)FUN_004937aa(param_1);
  return (float10)(float)fVar3;
}


