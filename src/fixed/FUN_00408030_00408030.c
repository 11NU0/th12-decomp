/* undefined __fastcall FUN_00408030(undefined4 param_1, undefined4 param_2) @ 00408030  190 bytes */
#include "th12.h"

void __fastcall FUN_00408030(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  int extraout_EDX;
  int *unaff_EDI;
  
  if (*unaff_EDI != 0) {
    FUN_00453e20(param_1,param_2,unaff_EDI[1]);
    uVar2 = ~*(uint *)((int)DAT_004b43cc + 0x7c) & 1;
    FUN_0040caa0(uVar2,extraout_EDX,128.0,uVar2,1);
    FUN_004286f0(0x43000000,~*(uint *)((int)DAT_004b43cc + 0x7c) & 1 | 2,1);
    FUN_004390f0(unaff_EDI + 1,0x42800000,0x41000000,0xb,0x3c);
  }
  FUN_00461970((void *)*unaff_EDI,*unaff_EDI);
  *unaff_EDI = 0;
  unaff_EDI[0x21] = 0;
  if (unaff_EDI[0x2c] != 0) {
    puVar1 = (uint *)(unaff_EDI[0x2c] + 0x70);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  unaff_EDI[0x2c] = 0;
  return;
}


