/* undefined4 __stdcall FUN_0045d380(float param_1, float param_2, float param_3, float param_4, float param_5) @ 0045d380  169 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0045d380(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined4 extraout_ECX;
  uint unaff_EBX;
  float unaff_ESI;
  
  FUN_0045d0a0(unaff_EBX & 0xffffff,
               (float)((uint)unaff_ESI >> 1 & 0x7f000000 | (uint)unaff_ESI & 0xffffff),param_1,
               param_2,param_3 + 1.0,param_4 + 1.0,param_5);
  FUN_0045d0a0(extraout_ECX,unaff_ESI,param_1,param_2,param_3,param_4,param_5);
  return 0;
}


