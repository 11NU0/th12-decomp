/* undefined __stdcall FUN_004230a0(void) @ 004230a0  26 bytes */
#include "th12.h"

void __stdcall FUN_004230a0(void)

{
  int in_EAX;
  
  *(int *)((int)in_EAX + 0x84) = *(int *)((int)in_EAX + 0x84) + 1;
  if (9 < *(int *)((int)in_EAX + 0x84)) {
    *(undefined4 *)((int)in_EAX + 0x84) = 9;
  }
  return;
}


