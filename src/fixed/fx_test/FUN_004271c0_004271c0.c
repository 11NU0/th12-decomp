/* undefined4 __stdcall FUN_004271c0(void) @ 004271c0  83 bytes */

#include "th12.h"

undefined4 __stdcall FUN_004271c0(void)

{
  int in_EAX;
  
  if (0x3b < *(int *)(DAT_004b4534 + 0x14)) {
    switch(*(undefined4 *)(DAT_004b4534 + 0x30)) {
    case 0xffffffff:
    case 1:
    case 2:
    case 3:
      if ((*(int *)(in_EAX + 0x9b4) == 1) || (*(int *)(in_EAX + 0x9b4) == 2)) {
        *(undefined4 *)(in_EAX + 0x9b0) = 7;
        *(undefined4 *)(in_EAX + 0x978) = 0;
        *(undefined4 *)(in_EAX + 0x97c) = 0;
        *(undefined4 *)(in_EAX + 0x9bc) = 0;
        return 1;
      }
    }
  }
  return 0;
}


