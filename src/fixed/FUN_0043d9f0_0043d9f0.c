/* undefined4 __stdcall FUN_0043d9f0(void) @ 0043d9f0  208 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0043d9f0(void)

{
  int unaff_EDI;
  
  FUN_00401720("Sound Test\n");
  if (*(int *)((int)unaff_EDI + 0x30) == 1) {
    FUN_00401720("S.E. %d");
    FUN_00401720("Quit");
    FUN_00401720(">");
    *(undefined4 *)((int)DAT_004b43b8 + 0x18f80) = 0xffffffff;
  }
  return 1;
}


