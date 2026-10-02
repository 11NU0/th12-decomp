/* undefined __stdcall FUN_00432960(void) @ 00432960  59 bytes */

#include "th12.h"

void __stdcall FUN_00432960(void)

{
  int unaff_ESI;
  
  *(uint *)(DAT_004b44e8 + 0x60) = *(uint *)(DAT_004b44e8 + 0x60) & 0xffffffef;
  FUN_00435670();
  FUN_00454960(7,0);
  DAT_004b2ed0 = *(undefined4 *)(unaff_ESI + 0x2d8);
  DAT_004cf468 = *(undefined4 *)(unaff_ESI + 0x200);
  return;
}


