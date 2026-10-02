/* undefined __fastcall FUN_00427b90(undefined4 * param_1, undefined4 * param_2, undefined4 param_3, byte param_4) @ 00427b90  228 bytes */

#include "th12.h"

void __fastcall
__fastcall FUN_00427b90(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,byte param_4)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0xe0) = param_3;
  *(undefined4 *)(in_EAX + 0xb4) = DAT_004ce8d0;
  *(undefined4 *)(in_EAX + 0xb8) = DAT_004ce8d4;
  *(undefined4 *)(in_EAX + 0xbc) = DAT_004ce8d8;
  *(undefined4 *)(in_EAX + 0xc0) = DAT_004ce8d0;
  *(undefined4 *)(in_EAX + 0xc4) = DAT_004ce8d4;
  *(undefined4 *)(in_EAX + 200) = DAT_004ce8d8;
  *(uint *)(in_EAX + 0xe4) = (uint)param_4;
  *(undefined4 *)(in_EAX + 0x9c) = *param_2;
  *(undefined4 *)(in_EAX + 0xa0) = param_2[1];
  *(undefined4 *)(in_EAX + 0xa4) = param_2[2];
  *(undefined4 *)(in_EAX + 0xa8) = *param_1;
  *(undefined4 *)(in_EAX + 0xac) = param_1[1];
  *(undefined4 *)(in_EAX + 0xb0) = param_1[2];
  if ((*(uint *)(in_EAX + 0xdc) & 1) == 0) {
    *(undefined4 *)(in_EAX + 0xd4) = 0;
    *(undefined4 *)(in_EAX + 0xd0) = 0;
    *(undefined4 *)(in_EAX + 0xcc) = 0xfff0bdc1;
    *(undefined4 **)(in_EAX + 0xd8) = &DAT_004b2ed0;
    *(uint *)(in_EAX + 0xdc) = *(uint *)(in_EAX + 0xdc) | 1;
  }
  *(undefined4 *)(in_EAX + 0xd4) = 0;
  *(undefined4 *)(in_EAX + 0xd0) = 0;
  *(undefined4 *)(in_EAX + 0xcc) = 0xffffffff;
  return;
}


