/* undefined4 __thiscall FUN_0045d2e0(void * this, float param_1, float param_2, float param_3, float param_4, float param_5) @ 0045d2e0  148 bytes */

#include "th12.h"

undefined4 __thiscall
__thiscall FUN_0045d2e0(void *this,float param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined4 extraout_ECX;
  float unaff_ESI;
  
  FUN_0045ce60(this,(float)((uint)unaff_ESI >> 1 & 0x7f000000 | (uint)unaff_ESI & 0xffffff),param_1,
               param_2,param_3 + 1.0,param_4 + 1.0,param_5);
  FUN_0045ce60(extraout_ECX,unaff_ESI,param_1,param_2,param_3,param_4,param_5);
  return 0;
}


