/* undefined4 __stdcall FUN_0044a4f0(void) @ 0044a4f0  210 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0044a4f0(void)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int unaff_EBX;
  
  if ((*(int *)((int)unaff_EBX + 0x38) != 0) && (0x13 < *(int *)((int)unaff_EBX + 0x14))) {
    *(undefined4 *)((int)DAT_004b43b8 + 0x18f98) = 3;
    FUN_004020a0("%3d");
    FUN_004020a0("%3d");
    *(undefined4 *)((int)DAT_004b43b8 + 0x18f98) = 2;
    FUN_004931e0(extraout_ECX,extraout_EDX);
    FUN_004020a0("%3d%%");
    *(undefined4 *)((int)DAT_004b43b8 + 0x18f98) = 0;
  }
  return 1;
}


