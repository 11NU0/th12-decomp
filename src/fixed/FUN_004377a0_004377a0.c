/* float10 __fastcall FUN_004377a0(float * param_1) @ 004377a0  106 bytes */
#include "th12.h"

float10 __fastcall FUN_004377a0(float *param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = *(float *)((int)DAT_004b4514 + 0x97c) - *param_1;
  fVar2 = *(float *)((int)DAT_004b4514 + 0x980) - param_1[1];
  if ((NANP(fVar2) != (fVar2 == 0.0)) && (NANP(fVar1) != (fVar1 == 0.0))) {
    return (float10)1.5707964;
  }
  fVar3 = (( float10 (__fastcall *)())FUN_004937aa)(param_1);
  return (float10)(float)fVar3;
}


