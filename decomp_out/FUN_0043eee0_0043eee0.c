/* undefined __fastcall FUN_0043eee0(undefined4 param_1, undefined4 param_2) @ 0043eee0  91 bytes */
#include "th12.h"

void __fastcall FUN_0043eee0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_EAX;
  
  uVar1 = *(undefined4 *)(in_EAX + 0x1c);
  *(undefined4 *)(in_EAX + 0x1c) = param_2;
  *(undefined4 *)(in_EAX + 0x20) = uVar1;
  *(undefined4 *)(in_EAX + 0x24) = 0;
  if ((*(uint *)(in_EAX + 0x2c4) & 1) == 0) {
    *(undefined4 *)(in_EAX + 700) = 0;
    *(undefined4 *)(in_EAX + 0x2b8) = 0;
    *(undefined4 *)(in_EAX + 0x2b4) = 0xfff0bdc1;
    *(undefined4 **)(in_EAX + 0x2c0) = &DAT_004b2ed0;
    *(uint *)(in_EAX + 0x2c4) = *(uint *)(in_EAX + 0x2c4) | 1;
  }
  *(undefined4 *)(in_EAX + 700) = 0;
  *(undefined4 *)(in_EAX + 0x2b8) = 0;
  *(undefined4 *)(in_EAX + 0x2b4) = 0xffffffff;
  return;
}


