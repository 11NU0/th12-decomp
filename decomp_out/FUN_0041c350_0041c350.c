/* undefined __stdcall FUN_0041c350(void) @ 0041c350  52 bytes */
#include "th12.h"

void FUN_0041c350(void)

{
  int in_EAX;
  
  if ((*(uint *)(in_EAX + 0x30) & 1) == 0) {
    *(undefined4 *)(in_EAX + 0x28) = 0;
    *(undefined4 *)(in_EAX + 0x24) = 0;
    *(undefined4 *)(in_EAX + 0x20) = 0xfff0bdc1;
    *(undefined4 **)(in_EAX + 0x2c) = &DAT_004b2ed0;
    *(uint *)(in_EAX + 0x30) = *(uint *)(in_EAX + 0x30) | 1;
  }
  *(undefined4 *)(in_EAX + 0x28) = 0;
  *(undefined4 *)(in_EAX + 0x24) = 0;
  *(undefined4 *)(in_EAX + 0x20) = 0xffffffff;
  return;
}


