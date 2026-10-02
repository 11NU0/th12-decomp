/* undefined4 __fastcall FUN_00407950(undefined4 param_1) @ 00407950  106 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00407950(undefined4 param_1)

{
  int *piVar1;
  void *this;
  int unaff_ESI;
  
  piVar1 = FUN_00461920(param_1,DAT_004ce8cc,*(int *)(unaff_ESI + 0x40));
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)(unaff_ESI + 0x40) = 0;
  }
  FUN_00406f60(0x28);
  if (piVar1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (0x9f < *(int *)(unaff_ESI + 0x18)) {
    FUN_00461970(*(void **)(unaff_ESI + 0x40),(int)*(void **)(unaff_ESI + 0x40));
    FUN_00461970(this,*(int *)(unaff_ESI + 0x48));
    *(undefined4 *)(unaff_ESI + 0x40) = 0;
    return 0;
  }
  FUN_00407a30(unaff_ESI);
  *(int *)(unaff_ESI + 0x514) = piVar1[0x11];
  return 0;
}


