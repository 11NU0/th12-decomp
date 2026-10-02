/* undefined4 __fastcall FUN_00408b90(undefined4 param_1) @ 00408b90  112 bytes */

#include "th12.h"

undefined4 __fastcall FUN_00408b90(undefined4 param_1)

{
  int *piVar1;
  void *this;
  undefined4 extraout_ECX;
  int unaff_ESI;
  
  piVar1 = FUN_00461920(param_1,DAT_004ce8cc,*(int *)(unaff_ESI + 0x40));
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)(unaff_ESI + 0x40) = 0;
  }
  FUN_00406f60(0x28);
  if (piVar1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (0xef < *(int *)(unaff_ESI + 0x18)) {
    FUN_00461970(*(void **)(unaff_ESI + 0x40),(int)*(void **)(unaff_ESI + 0x40));
    FUN_00461970(this,*(int *)(unaff_ESI + 0x48));
    *(undefined4 *)(unaff_ESI + 0x40) = 0;
    FUN_00453d90(extraout_ECX,0x2e);
    return 0;
  }
  FUN_00408c30();
  *(int *)(unaff_ESI + 0x514) = piVar1[0x11];
  return 0;
}


