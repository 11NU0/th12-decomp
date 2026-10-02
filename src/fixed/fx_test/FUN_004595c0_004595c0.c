/* undefined __fastcall FUN_004595c0(undefined4 param_1, uint param_2, byte param_3, byte param_4) @ 004595c0  118 bytes */

#include "th12.h"

void __fastcall FUN_004595c0(undefined4 param_1,uint param_2,byte param_3,byte param_4)

{
  int in_EAX;
  
  *(uint *)(in_EAX + 0x298) = param_2 & 0xff;
  *(undefined4 *)(in_EAX + 0x294) = param_1;
  *(uint *)(in_EAX + 0x274) = (uint)param_4;
  *(uint *)(in_EAX + 0x270) = (uint)param_3;
  if ((*(uint *)(in_EAX + 0x290) & 1) == 0) {
    *(undefined4 *)(in_EAX + 0x288) = 0;
    *(undefined4 *)(in_EAX + 0x284) = 0;
    *(undefined4 *)(in_EAX + 0x280) = 0xfff0bdc1;
    *(undefined4 **)(in_EAX + 0x28c) = &DAT_004b2ed0;
    *(uint *)(in_EAX + 0x290) = *(uint *)(in_EAX + 0x290) | 1;
  }
  *(undefined4 *)(in_EAX + 0x288) = 0;
  *(undefined4 *)(in_EAX + 0x284) = 0;
  *(undefined4 *)(in_EAX + 0x280) = 0xffffffff;
  return;
}


