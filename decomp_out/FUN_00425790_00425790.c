/* undefined __fastcall FUN_00425790(undefined4 * param_1, undefined4 * param_2, undefined4 param_3, byte param_4) @ 00425790  138 bytes */
#include "th12.h"

void __fastcall
FUN_00425790(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,byte param_4)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0x1e0) = param_3;
  *(uint *)(in_EAX + 0x1e4) = (uint)param_4;
  *(undefined4 *)(in_EAX + 0x1ac) = *param_2;
  *(undefined4 *)(in_EAX + 0x1b0) = param_2[1];
  *(undefined4 *)(in_EAX + 0x1b4) = *param_1;
  *(undefined4 *)(in_EAX + 0x1b8) = param_1[1];
  if ((*(uint *)(in_EAX + 0x1dc) & 1) == 0) {
    *(undefined4 *)(in_EAX + 0x1d4) = 0;
    *(undefined4 *)(in_EAX + 0x1d0) = 0;
    *(undefined4 *)(in_EAX + 0x1cc) = 0xfff0bdc1;
    *(undefined4 **)(in_EAX + 0x1d8) = &DAT_004b2ed0;
    *(uint *)(in_EAX + 0x1dc) = *(uint *)(in_EAX + 0x1dc) | 1;
  }
  *(undefined4 *)(in_EAX + 0x1d4) = 0;
  *(undefined4 *)(in_EAX + 0x1d0) = 0;
  *(undefined4 *)(in_EAX + 0x1cc) = 0xffffffff;
  return;
}


