/* undefined __stdcall FUN_00422dd0(void) @ 00422dd0  56 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00422dd0(void)

{
  int in_EAX;
  
  *(int *)((int)in_EAX + 0x60) = *(int *)((int)in_EAX + 0x60) + 1;
  if (*(int *)((int)in_EAX + 0x60) < 10) {
    FUN_00453d90(*(int *)((int)in_EAX + 0x60),0x30);
  }
  else {
    *(undefined4 *)((int)in_EAX + 0x60) = 9;
  }
  FUN_0041cf40(DAT_004b43e4,_DAT_004b0ca0,(short)_DAT_004b0ca4);
  return;
}


