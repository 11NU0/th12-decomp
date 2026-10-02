/* undefined __stdcall FUN_00422ce0(void) @ 00422ce0  76 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00422ce0(void)

{
  int in_EAX;
  
  *(int *)((int)in_EAX + 0x58) = *(int *)((int)in_EAX + 0x58) + 1;
  if (*(int *)((int)in_EAX + 0x58) < 9) {
    FUN_00453d90(*(int *)((int)in_EAX + 0x58),0x12);
    FUN_00420f90();
  }
  else {
    *(undefined4 *)((int)in_EAX + 0x58) = 8;
  }
  FUN_0041ce60(DAT_004b43e4,_DAT_004b0c98,(short)_DAT_004b0c9c);
  return;
}


