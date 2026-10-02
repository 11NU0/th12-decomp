/* undefined __fastcall FUN_00459530(undefined4 * param_1, undefined4 * param_2, undefined4 param_3, byte param_4) @ 00459530  138 bytes */
#include "th12.h"

void __fastcall
FUN_00459530(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,byte param_4)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0x21c) = param_3;
  *(uint *)(in_EAX + 0x220) = (uint)param_4;
  *(undefined4 *)(in_EAX + 0x1e8) = *param_2;
  *(undefined4 *)(in_EAX + 0x1ec) = param_2[1];
  *(undefined4 *)(in_EAX + 0x1f0) = *param_1;
  *(undefined4 *)(in_EAX + 500) = param_1[1];
  if ((*(uint *)(in_EAX + 0x218) & 1) == 0) {
    *(undefined4 *)(in_EAX + 0x210) = 0;
    *(undefined4 *)(in_EAX + 0x20c) = 0;
    *(undefined4 *)(in_EAX + 0x208) = 0xfff0bdc1;
    *(undefined4 **)(in_EAX + 0x214) = &DAT_004b2ed0;
    *(uint *)(in_EAX + 0x218) = *(uint *)(in_EAX + 0x218) | 1;
  }
  *(undefined4 *)(in_EAX + 0x210) = 0;
  *(undefined4 *)(in_EAX + 0x20c) = 0;
  *(undefined4 *)(in_EAX + 0x208) = 0xffffffff;
  return;
}


