/* undefined __thiscall FUN_004599b0(void * this, byte param_1, byte param_2, byte param_3) @ 004599b0  132 bytes */
#include "th12.h"

void __thiscall FUN_004599b0(void *this,byte param_1,byte param_2,byte param_3)

{
  int in_EAX;
  
  *(void **)(in_EAX + 0x158) = this;
  *(uint *)(in_EAX + 0x15c) = (uint)param_1;
  *(uint *)(in_EAX + 0x134) = (uint)param_2;
  *(undefined4 *)(in_EAX + 0x13c) = 0;
  *(undefined4 *)(in_EAX + 0x140) = 0;
  *(uint *)(in_EAX + 0x138) = (uint)param_3;
  if ((*(uint *)(in_EAX + 0x154) & 1) == 0) {
    *(undefined4 *)(in_EAX + 0x14c) = 0;
    *(undefined4 *)(in_EAX + 0x148) = 0;
    *(undefined4 *)(in_EAX + 0x144) = 0xfff0bdc1;
    *(undefined4 **)(in_EAX + 0x150) = &DAT_004b2ed0;
    *(uint *)(in_EAX + 0x154) = *(uint *)(in_EAX + 0x154) | 1;
  }
  *(undefined4 *)(in_EAX + 0x14c) = 0;
  *(undefined4 *)(in_EAX + 0x148) = 0;
  *(undefined4 *)(in_EAX + 0x144) = 0xffffffff;
  return;
}


