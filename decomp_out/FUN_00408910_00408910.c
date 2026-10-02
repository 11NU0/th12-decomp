/* undefined __stdcall FUN_00408910(int param_1, float param_2) @ 00408910  32 bytes */
#include "th12.h"

void FUN_00408910(int param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = FUN_004646e0(param_2);
  fVar1 = FUN_004646e0((float)fVar1);
  *(float *)(param_1 + 0x1c) = (float)fVar1;
  return;
}


