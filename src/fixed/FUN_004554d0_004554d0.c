/* int __fastcall FUN_004554d0(undefined4 param_1, undefined4 param_2) @ 004554d0  95 bytes */
#include "th12.h"

int __fastcall FUN_004554d0(undefined4 param_1,undefined4 param_2)

{
  int unaff_ESI;
  int unaff_EDI;
  ulonglong uVar1;
  
  uVar1 = FUN_004931e0(param_1,param_2);
  switch((int)uVar1) {
  case 0x2714:
    return unaff_ESI + 0x40c;
  case 0x2715:
    return unaff_ESI + 0x410;
  case 0x2716:
    return unaff_ESI + 0x414;
  case 0x2717:
    return unaff_ESI + 0x418;
  default:
    return unaff_EDI;
  case 0x271d:
    return unaff_ESI + 0x424;
  case 0x271e:
    return unaff_ESI + 0x428;
  case 0x271f:
    return unaff_ESI + 0x42c;
  case 0x2727:
    return unaff_ESI + 0x24;
  case 0x2728:
    return unaff_ESI + 0x28;
  case 0x2729:
    return unaff_ESI + 0x2c;
  }
}


