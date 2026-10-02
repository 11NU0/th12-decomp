/* undefined4 __stdcall FUN_0040c0b0(void) @ 0040c0b0  183 bytes */
#include "th12.h"

undefined4 FUN_0040c0b0(void)

{
  float fVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int unaff_EDI;
  
  iVar2 = FUN_00409970((void *)(unaff_EDI + 0x4bc),*(float *)(*(int *)(unaff_EDI + 0x3fc) + 0x38),
                       *(float *)(*(int *)(unaff_EDI + 0x3fc) + 0x34));
  if (iVar2 == 0) {
    return 0;
  }
  if (0.0 <= *(float *)(unaff_EDI + 0x4c0)) {
    if (448.0 < *(float *)(unaff_EDI + 0x4c0) == NAN(*(float *)(unaff_EDI + 0x4c0)))
    goto LAB_0040c14a;
    fVar1 = *(float *)(unaff_EDI + 0x4c0) - (*(float *)(extraout_EDX + 0x34) + 448.0);
  }
  else {
    fVar1 = *(float *)(extraout_EDX + 0x34) + 448.0 + *(float *)(unaff_EDI + 0x4c0);
  }
  *(float *)(unaff_EDI + 0x4c0) = fVar1;
  FUN_00464a20(extraout_ECX,extraout_EDX,-1.0);
  if (-1 < *(int *)(unaff_EDI + 0x544)) {
    FUN_00453d90(extraout_ECX_00,*(int *)(unaff_EDI + 0x544));
  }
LAB_0040c14a:
  if (0 < *(int *)(unaff_EDI + 0x870)) {
    return 0;
  }
  *(uint *)(unaff_EDI + 0x528) = *(uint *)(unaff_EDI + 0x528) ^ 0x40000;
  return 1;
}


