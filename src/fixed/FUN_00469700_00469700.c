/* undefined4 __stdcall FUN_00469700(void) @ 00469700  41 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00469700(void)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = *(int *)((int)in_EAX + 0x1000) + -4;
  uVar1 = *(undefined4 *)((int)in_EAX + 0x1004);
  if (-1 < iVar2) {
    *(int *)((int)in_EAX + 0x1000) = iVar2;
    *(undefined4 *)((int)in_EAX + 0x1004) = *(undefined4 *)(iVar2 + in_EAX);
  }
  *(undefined4 *)((int)in_EAX + 0x1000) = uVar1;
  return 0;
}


