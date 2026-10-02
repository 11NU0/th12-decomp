/* undefined4 __fastcall FUN_0043ab60(undefined4 param_1, int param_2) @ 0043ab60  141 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0043ab60(undefined4 param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  
  if (*(int *)(param_2 + 0x48) != 2) {
    if (*(int *)(DAT_004b43c4 + 0x3c) == 0) {
      fVar1 = 0.38;
    }
    else {
      fVar1 = 0.6;
    }
    *(float *)(param_2 + 0x24) = *(float *)(param_2 + 0x24) - fVar1;
    *(float *)(param_2 + 0x20) = *(float *)(param_2 + 0x70) + *(float *)(param_2 + 0x20);
    fVar2 = (float10)FUN_004937aa(param_1);
    fVar2 = FUN_004646e0((float)fVar2);
    fVar2 = FUN_004646e0((float)fVar2);
    *(float *)(param_2 + 0x30) = (float)fVar2;
    fVar2 = (float10)FUN_004937c0();
    *(float *)(param_2 + 0x2c) = (float)fVar2;
  }
  return 0;
}


