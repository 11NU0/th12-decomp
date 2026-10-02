/* undefined4 __stdcall FUN_00408510(void) @ 00408510  111 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00408510(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(in_EAX + 0x500) + 4;
  iVar3 = 8;
  do {
    if (*(int *)(iVar2 + 0x80) != 0) {
      uVar1 = ~*(uint *)(DAT_004b43cc + 0x7c) & 1;
      FUN_0040caa0(DAT_004b43cc,uVar1,64.0,uVar1,1);
      FUN_004286f0(0x42800000,~*(uint *)(DAT_004b43cc + 0x7c) & 1 | 2,1);
    }
    iVar2 = iVar2 + 0xb4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}


