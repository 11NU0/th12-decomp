/* int __stdcall FUN_00406de0(undefined4 param_1) @ 00406de0  90 bytes */
#include "th12.h"

int FUN_00406de0(undefined4 param_1)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(DAT_004b43c4 + 0x3c) != 0) {
    switch(DAT_004b0c94 + DAT_004b0c90 * 2) {
    case 0:
    case 1:
    case 5:
      break;
    case 2:
      iVar1 = FUN_004073b0(DAT_004b43c4);
      return iVar1;
    case 3:
      iVar1 = FUN_004079d0(DAT_004b43c4,DAT_004b43c4,unaff_EDI);
      return iVar1;
    case 4:
      iVar1 = FUN_00408c10();
      return iVar1;
    }
  }
  return 0;
}


