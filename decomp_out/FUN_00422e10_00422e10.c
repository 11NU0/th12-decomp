/* undefined __stdcall FUN_00422e10(void) @ 00422e10  112 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422e10(void)

{
  int in_EAX;
  int iVar1;
  
  if (8 < *(int *)(in_EAX + 0x60)) {
    *(undefined4 *)(in_EAX + 100) = 0;
    return;
  }
  *(int *)(in_EAX + 100) = *(int *)(in_EAX + 100) + 2;
  if (4 < *(int *)(in_EAX + 100)) {
    iVar1 = *(int *)(in_EAX + 0x60) + 1;
    *(undefined4 *)(in_EAX + 100) = 0;
    *(int *)(in_EAX + 0x60) = iVar1;
    if (iVar1 < 10) {
      FUN_00453d90(iVar1,0x30);
    }
    else {
      *(undefined4 *)(in_EAX + 0x60) = 9;
    }
    FUN_0041cf40(DAT_004b43e4,_DAT_004b0ca0,(short)_DAT_004b0ca4);
  }
  FUN_0041cf40(DAT_004b43e4,_DAT_004b0ca0,(short)_DAT_004b0ca4);
  return;
}


