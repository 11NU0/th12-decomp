/* undefined __stdcall FUN_004230a0(void) @ 004230a0  26 bytes */
#include "th12.h"

void FUN_004230a0(void)

{
  int in_EAX;
  
  *(int *)(in_EAX + 0x84) = *(int *)(in_EAX + 0x84) + 1;
  if (9 < *(int *)(in_EAX + 0x84)) {
    *(undefined4 *)(in_EAX + 0x84) = 9;
  }
  return;
}


