/* undefined __fastcall FUN_00402390(int param_1) @ 00402390  90 bytes */

#include "th12.h"

void __fastcall FUN_00402390(int param_1)

{
  undefined4 uVar1;
  int in_EAX;
  
  *(int *)(in_EAX + 0x3f4) = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_EAX + 0x8c) = uVar1;
  *(undefined4 *)(in_EAX + 0x7c) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_EAX + 0x94) = uVar1;
  *(undefined4 *)(in_EAX + 0x84) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_EAX + 0x88) = uVar1;
  *(undefined4 *)(in_EAX + 0x80) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_EAX + 0x98) = uVar1;
  *(undefined4 *)(in_EAX + 0x90) = uVar1;
  return;
}


