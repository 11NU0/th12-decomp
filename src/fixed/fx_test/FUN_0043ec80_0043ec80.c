/* undefined4 __stdcall FUN_0043ec80(void) @ 0043ec80  538 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0043ec80(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int unaff_EDI;
  ulonglong uVar2;
  
  FUN_00401720("Spt Test\n");
  iVar1 = *(int *)(unaff_EDI + 0x30);
  if (iVar1 == 1) {
    if (*(int *)(unaff_EDI + 0x38) == 0) {
      FUN_00401720("File not found.");
    }
    else {
      FUN_00401720("File %s");
    }
    if (*(int *)(unaff_EDI + 0x2d8) == 0) {
      FUN_00401720("Ecl not load");
    }
    else {
      FUN_00401720("Ecl %s");
    }
    FUN_00401720("Quit");
    FUN_00401720(">");
    *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffff4040;
      FUN_00401720("Loading %s");
      *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
      return 1;
    }
    if (iVar1 == 3) {
      *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffa0a0a0;
      uVar2 = FUN_004931e0(extraout_ECX,extraout_EDX);
      FUN_004931e0(extraout_ECX_00,(int)(uVar2 >> 0x20));
      FUN_00401720("Pos %.3d %.3d");
      *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
      return 1;
    }
  }
  return 1;
}


