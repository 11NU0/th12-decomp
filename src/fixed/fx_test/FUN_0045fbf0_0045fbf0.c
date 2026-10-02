/* undefined4 __stdcall FUN_0045fbf0(void) @ 0045fbf0  69 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0045fbf0(void)

{
  int unaff_ESI;
  
  *(uint *)(unaff_ESI + 0x10) = *(uint *)(unaff_ESI + 0x10) | 1;
  (**(code **)(*DAT_004ce8f0 + 0x5c))(DAT_004ce8f0,DAT_004ce9dc,DAT_004ce9e0,1,1,DAT_004ce9e4,0);
  *(uint *)(unaff_ESI + 0xc) = (uint)(DAT_004ce9e4 == 0x16) * 2 + 2;
  return 0;
}


