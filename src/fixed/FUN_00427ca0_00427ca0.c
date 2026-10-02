/* undefined __fastcall FUN_00427ca0(undefined4 param_1, undefined4 param_2, undefined4 param_3) @ 00427ca0  37 bytes */
#include "th12.h"

void __fastcall FUN_00427ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_ESI;
  ulonglong uVar1;
  
  uVar1 = FUN_004931e0(param_1,param_2);
  *(int *)((int)unaff_ESI + 0x38) = *(int *)((int)unaff_ESI + 0x38) + (int)uVar1;
  if (*(int *)((int)unaff_ESI + 0xb4) < *(int *)((int)unaff_ESI + 0x38)) {
    *(int *)((int)unaff_ESI + 0x38) = *(int *)((int)unaff_ESI + 0xb4);
  }
  return;
}


