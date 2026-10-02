/* undefined4 __stdcall FUN_00406bf0(void) @ 00406bf0  216 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00406bf0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_004b43c4;
  if (*(int *)(DAT_004b43c4 + 0x3c) == 0) {
    *(undefined4 *)(DAT_004b43c4 + 0x3c) = 1;
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0xfff0bdc1;
      *(undefined4 **)(iVar1 + 0x20) = &DAT_004b2ed0;
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
    }
    iVar2 = DAT_004b43cc;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
    if (((*(byte *)(iVar2 + 0x7c) & 1) == 0) || (*(int *)(iVar2 + 0x28) < 0x3c)) {
      *(undefined4 *)(iVar1 + 0x51c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x51c) = 1;
    }
    FUN_00453e20(1,0,*(undefined4 *)(DAT_004b4514 + 0x97c));
    switch(DAT_004b0c94 + DAT_004b0c90 * 2) {
    case 0:
      FUN_0046a5f0(iVar1);
      return 0;
    case 1:
      FUN_00408120();
      return 0;
    case 2:
      FUN_00407010(iVar1);
      return 0;
    case 3:
      FUN_00407780(iVar1);
      return 0;
    case 4:
      FUN_004089c0(iVar1);
      return 0;
    case 5:
      FUN_00408cb0(iVar1);
    }
    return 0;
  }
  return 0xffffffff;
}


