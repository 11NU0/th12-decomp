/* undefined __fastcall FUN_00461dd0(undefined4 param_1) @ 00461dd0  45 bytes */
#include "th12.h"

void __fastcall FUN_00461dd0(undefined4 param_1)

{
  int *in_EAX;
  int *piVar1;
  int *unaff_ESI;
  
  piVar1 = FUN_00461920(param_1,DAT_004ce8cc,*in_EAX);
  if (piVar1 != (int *)0x0) {
    piVar1[0x10c] = *unaff_ESI;
    piVar1[0x10d] = unaff_ESI[1];
    piVar1[0x10e] = unaff_ESI[2];
  }
  return;
}


