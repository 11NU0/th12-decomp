/* undefined __fastcall FUN_0045d8c0(int param_1) @ 0045d8c0  115 bytes */
#include "th12.h"

void __fastcall FUN_0045d8c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_EAX;
  
  fVar1 = *(float *)(param_1 + 0x428);
  fVar2 = *(float *)(param_1 + 0x434);
  fVar3 = *(float *)(param_1 + 0x42c);
  fVar4 = *(float *)(param_1 + 0x438);
  fVar5 = *(float *)(param_1 + 0x440);
  fVar6 = *(float *)(param_1 + 0x444);
  *in_EAX = *(float *)(param_1 + 0x424) + *(float *)(param_1 + 0x430) + *(float *)(param_1 + 0x43c);
  in_EAX[1] = fVar5 + fVar1 + fVar2;
  in_EAX[2] = fVar6 + fVar3 + fVar4;
  return;
}


