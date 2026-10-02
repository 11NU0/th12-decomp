/* undefined __stdcall FUN_004592b0(void) @ 004592b0  52 bytes */
#include "th12.h"

void FUN_004592b0(void)

{
  int in_EAX;
  
  if ((*(uint *)(in_EAX + 0x20) & 1) == 0) {
    *(undefined4 *)(in_EAX + 0x18) = 0;
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined4 *)(in_EAX + 0x10) = 0xfff0bdc1;
    *(undefined4 **)(in_EAX + 0x1c) = &DAT_004b2ed0;
    *(uint *)(in_EAX + 0x20) = *(uint *)(in_EAX + 0x20) | 1;
  }
  *(undefined4 *)(in_EAX + 0x18) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0xffffffff;
  return;
}


