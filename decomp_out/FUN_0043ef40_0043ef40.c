/* undefined __fastcall FUN_0043ef40(undefined4 param_1) @ 0043ef40  82 bytes */
#include "th12.h"

void __fastcall FUN_0043ef40(undefined4 param_1)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0x24) = param_1;
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


