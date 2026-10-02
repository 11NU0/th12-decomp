/* undefined __fastcall FUN_00461e30(undefined4 param_1) @ 00461e30  63 bytes */
#include "th12.h"

void __fastcall FUN_00461e30(undefined4 param_1)

{
  int *in_EAX;
  int *piVar1;
  float *unaff_ESI;
  
  piVar1 = FUN_00461920(param_1,DAT_004ce8cc,*in_EAX);
  if (piVar1 != (int *)0x0) {
    piVar1[0x10c] = (int)(*unaff_ESI + 32.0 + 192.0);
    piVar1[0x10d] = (int)(unaff_ESI[1] + 16.0);
    piVar1[0x10e] = (int)unaff_ESI[2];
  }
  return;
}


