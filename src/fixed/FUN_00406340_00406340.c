/* undefined __stdcall FUN_00406340(void) @ 00406340  52 bytes */
#include "th12.h"

void __stdcall FUN_00406340(void)

{
  int in_EAX;
  
  if ((*(uint *)((int)in_EAX + 0x40) & 1) == 0) {
    *(undefined4 *)((int)in_EAX + 0x38) = 0;
    *(undefined4 *)((int)in_EAX + 0x34) = 0;
    *(undefined4 *)((int)in_EAX + 0x30) = 0xfff0bdc1;
    *(undefined4 **)((int)in_EAX + 0x3c) = &DAT_004b2ed0;
    *(uint *)((int)in_EAX + 0x40) = *(uint *)((int)in_EAX + 0x40) | 1;
  }
  *(undefined4 *)((int)in_EAX + 0x38) = 0;
  *(undefined4 *)((int)in_EAX + 0x34) = 0;
  *(undefined4 *)((int)in_EAX + 0x30) = 0xffffffff;
  return;
}


