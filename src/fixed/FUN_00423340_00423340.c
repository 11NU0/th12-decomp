/* undefined __stdcall FUN_00423340(void) @ 00423340  60 bytes */
#include "th12.h"

void __stdcall FUN_00423340(void)

{
  void *unaff_ESI;
  
  _memset(unaff_ESI,0,0x88);
  *(void **)((int)unaff_ESI + 0xc) = unaff_ESI;
  *(undefined4 *)((int)unaff_ESI + 0x10) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x7c) = 0x3f800000;
  *(undefined4 *)((int)unaff_ESI + 0x84) = 0xffffffff;
  *(undefined4 *)((int)unaff_ESI + 0x70) = 0xffffffff;
  *(undefined4 *)((int)unaff_ESI + 0x6c) = 300;
  return;
}


