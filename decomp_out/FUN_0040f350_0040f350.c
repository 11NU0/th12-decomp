/* undefined4 __stdcall FUN_0040f350(void) @ 0040f350  749 bytes */
#include "th12.h"

undefined4 FUN_0040f350(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int unaff_EDI;
  ulonglong uVar1;
  char *pcVar2;
  void *pvVar3;
  
  FUN_00401720("SprtView\n");
  switch(*(undefined4 *)(unaff_EDI + 0x30)) {
  case 1:
    if (*(int *)(unaff_EDI + 0x38) == 0) {
      FUN_00401720("File not found.");
    }
    else {
      FUN_00401720("File %s");
    }
    if (DAT_004b43dc == 0) {
      pcVar2 = "Ecl %d";
    }
    else {
      pcVar2 = "Ecl %s";
    }
    FUN_00401720(pcVar2);
    FUN_00401720("Quit");
    FUN_00401720(">");
    *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
    if ((*(byte *)(unaff_EDI + 0x78c) & 2) == 0) {
      return 1;
    }
    *(undefined4 *)(unaff_EDI + 0x6ec) = 0x43a00000;
    pvVar3 = DAT_004ce8cc;
    *(undefined4 *)(unaff_EDI + 0x6f0) = 0x43700000;
    *(undefined4 *)(unaff_EDI + 0x6f4) = 0;
    break;
  case 2:
    *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffff4040;
    FUN_00401720("Loading %s");
    *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
    return 1;
  case 3:
    *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffa0a0a0;
    uVar1 = FUN_004931e0(extraout_ECX,extraout_EDX);
    FUN_004931e0(extraout_ECX_00,(int)(uVar1 >> 0x20));
    FUN_00401720("Pos %.3d %.3d");
    *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
    if ((*(byte *)(unaff_EDI + 0x78c) & 2) == 0) {
      return 1;
    }
    *(undefined4 *)(unaff_EDI + 0x6ec) = 0x43a00000;
    pvVar3 = DAT_004ce8cc;
    *(undefined4 *)(unaff_EDI + 0x6f0) = 0x43700000;
    *(undefined4 *)(unaff_EDI + 0x6f4) = 0;
    break;
  case 4:
    FUN_00401720("Enemy %d");
    return 1;
  default:
    goto switchD_0040f387_caseD_4;
  }
  FUN_0045a9f0(pvVar3);
switchD_0040f387_caseD_4:
  return 1;
}


