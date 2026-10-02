/* undefined4 __stdcall FUN_0040c000(void) @ 0040c000  161 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0040c000(void)

{
  float fVar1;
  int iVar2;
  float *extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int unaff_EDI;
  
  iVar2 = FUN_00409970((void *)((int)unaff_EDI + 0x4bc),*(float *)(*(int *)((int)unaff_EDI + 0x3fc) + 0x38),
                       *(float *)(*(int *)((int)unaff_EDI + 0x3fc) + 0x34));
  if (iVar2 == 0) {
    return 0;
  }
  if (-192.0 <= *extraout_ECX) {
    if (192.0 < *extraout_ECX == NANP(*extraout_ECX)) goto LAB_0040c084;
    fVar1 = *extraout_ECX - (*(float *)((int)extraout_EDX + 0x38) + 384.0);
  }
  else {
    fVar1 = *(float *)((int)extraout_EDX + 0x38) + 384.0 + *extraout_ECX;
  }
  *extraout_ECX = fVar1;
  FUN_00464a20(extraout_ECX,extraout_EDX,-1.0);
  if (-1 < *(int *)((int)unaff_EDI + 0x544)) {
    FUN_00453d90(extraout_ECX_00,*(int *)((int)unaff_EDI + 0x544));
  }
LAB_0040c084:
  if (0 < *(int *)((int)unaff_EDI + 0x83c)) {
    return 0;
  }
  *(uint *)((int)unaff_EDI + 0x528) = *(uint *)((int)unaff_EDI + 0x528) ^ 0x20000;
  return 1;
}


