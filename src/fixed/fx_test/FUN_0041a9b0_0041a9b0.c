/* float10 __stdcall FUN_0041a9b0(undefined4 param_1, float param_2) @ 0041a9b0  57 bytes */

#include "th12.h"

float10 __stdcall FUN_0041a9b0(undefined4 param_1,float param_2)

{
  int in_EAX;
  uint uVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_2;
  uVar1 = (uint)*(ushort *)(*(int *)(*(int *)(*(int *)(in_EAX + 0x174c) + 4) + 4) + 8);
  if ((1 << ((byte)param_1 & 0x1f) & uVar1) != 0) {
    fVar2 = FUN_00468fe0(param_1,uVar1,param_2);
  }
  return (float10)(float)fVar2;
}


