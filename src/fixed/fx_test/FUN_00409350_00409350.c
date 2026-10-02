/* undefined __stdcall FUN_00409350(void) @ 00409350  162 bytes */

#include "th12.h"

void __stdcall FUN_00409350(void)

{
  int in_EAX;
  
  *(undefined2 *)(in_EAX + 0x532) = 0;
  if ((*(uint *)(in_EAX + 0x4f4) & 1) == 0) {
    *(undefined4 *)(in_EAX + 0x4ec) = 0;
    *(undefined4 *)(in_EAX + 0x4e8) = 0;
    *(undefined4 *)(in_EAX + 0x4e4) = 0xfff0bdc1;
    *(undefined4 **)(in_EAX + 0x4f0) = &DAT_004b2ed0;
    *(uint *)(in_EAX + 0x4f4) = *(uint *)(in_EAX + 0x4f4) | 1;
  }
  *(undefined4 *)(in_EAX + 0x4ec) = 0;
  *(undefined4 *)(in_EAX + 0x4e8) = 0;
  *(undefined4 *)(in_EAX + 0x4e4) = 0xffffffff;
  if ((*(uint *)(in_EAX + 0x508) & 1) == 0) {
    *(undefined4 *)(in_EAX + 0x500) = 0;
    *(undefined4 *)(in_EAX + 0x4fc) = 0;
    *(undefined4 *)(in_EAX + 0x4f8) = 0xfff0bdc1;
    *(undefined4 **)(in_EAX + 0x504) = &DAT_004b2ed0;
    *(uint *)(in_EAX + 0x508) = *(uint *)(in_EAX + 0x508) | 1;
  }
  *(undefined4 *)(in_EAX + 0x500) = 0;
  *(undefined4 *)(in_EAX + 0x4fc) = 0;
  *(undefined4 *)(in_EAX + 0x4f8) = 0xffffffff;
  return;
}


