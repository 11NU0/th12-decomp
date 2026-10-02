/* undefined __stdcall FUN_0041c5e0(int param_1, float param_2) @ 0041c5e0  23 bytes */
#include "th12.h"

void __stdcall FUN_0041c5e0(int param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = FUN_004646e0(param_2);
  *(float *)((int)param_1 + 0x28) = (float)fVar1;
  return;
}


