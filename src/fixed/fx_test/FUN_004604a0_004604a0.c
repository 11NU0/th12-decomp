/* undefined __fastcall FUN_004604a0(undefined4 param_1) @ 004604a0  51 bytes */

#include "th12.h"

void __fastcall FUN_004604a0(undefined4 param_1)

{
  int unaff_EBX;
  uint unaff_ESI;
  
  if ((unaff_ESI < 0x20) && (*(int *)(&DAT_004b50c0 + unaff_ESI * 4 + unaff_EBX) != 0)) {
    FUN_004604e0(param_1);
    FUN_0046ca4f(*(void **)(&DAT_004b50c0 + unaff_ESI * 4 + unaff_EBX));
    *(undefined4 *)(&DAT_004b50c0 + unaff_ESI * 4 + unaff_EBX) = 0;
  }
  return;
}


