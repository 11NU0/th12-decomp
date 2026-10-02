/* undefined __fastcall FUN_00459640(byte * param_1, byte * param_2, undefined4 param_3, byte param_4) @ 00459640  216 bytes */

#include "th12.h"

void __fastcall FUN_00459640(byte *param_1,byte *param_2,undefined4 param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0x268) = param_3;
  *(undefined4 *)(in_EAX + 0x23c) = 0;
  *(undefined4 *)(in_EAX + 0x248) = 0;
  *(undefined4 *)(in_EAX + 0x240) = 0;
  *(undefined4 *)(in_EAX + 0x24c) = 0;
  *(uint *)(in_EAX + 0x26c) = (uint)param_4;
  *(undefined4 *)(in_EAX + 0x244) = 0;
  *(undefined4 *)(in_EAX + 0x250) = 0;
  bVar1 = param_1[2];
  bVar2 = param_1[1];
  bVar3 = param_2[2];
  bVar4 = param_2[1];
  bVar5 = *param_2;
  *(uint *)(in_EAX + 0x230) = (uint)*param_1;
  *(uint *)(in_EAX + 0x234) = (uint)bVar2;
  *(uint *)(in_EAX + 0x224) = (uint)bVar5;
  *(uint *)(in_EAX + 0x238) = (uint)bVar1;
  *(uint *)(in_EAX + 0x228) = (uint)bVar4;
  *(uint *)(in_EAX + 0x22c) = (uint)bVar3;
  if ((*(uint *)(in_EAX + 0x264) & 1) == 0) {
    *(undefined4 *)(in_EAX + 0x25c) = 0;
    *(undefined4 *)(in_EAX + 600) = 0;
    *(undefined4 *)(in_EAX + 0x254) = 0xfff0bdc1;
    *(undefined4 **)(in_EAX + 0x260) = &DAT_004b2ed0;
    *(uint *)(in_EAX + 0x264) = *(uint *)(in_EAX + 0x264) | 1;
  }
  *(undefined4 *)(in_EAX + 0x25c) = 0;
  *(undefined4 *)(in_EAX + 600) = 0;
  *(undefined4 *)(in_EAX + 0x254) = 0xffffffff;
  return;
}


