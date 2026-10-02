/* undefined __stdcall FUN_00426ff0(void) @ 00426ff0  189 bytes */
#include "th12.h"

void FUN_00426ff0(void)

{
  bool bVar1;
  int in_EAX;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (DAT_004b0cd0 <= DAT_004b0c48) {
    DAT_004b0c44 = DAT_004b0c44 + 1;
    if (999999999 < DAT_004b0c44) {
      DAT_004b0c44 = 999999999;
    }
    FUN_0043e250((undefined4 *)(in_EAX + 0x96c),0xffffffff);
    return;
  }
  bVar1 = FUN_00422d70();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_004385b0(DAT_004b4514);
    FUN_0043e250((undefined4 *)(in_EAX + 0x96c),0xffffff40);
    FUN_00453e20(extraout_ECX,extraout_EDX,*(undefined4 *)(in_EAX + 0x96c));
    DAT_004b0ccc = DAT_004b0ccc + 0xc;
    if (0x400 < DAT_004b0ccc) {
      DAT_004b0ccc = 0x400;
      return;
    }
    if (DAT_004b0ccc < -0x400) {
      DAT_004b0ccc = -0x400;
    }
  }
  return;
}


