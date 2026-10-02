/* undefined __stdcall FUN_00461f40(int param_1) @ 00461f40  36 bytes */
#include "th12.h"

void FUN_00461f40(int param_1)

{
  undefined4 *in_EAX;
  int *piVar1;
  
  piVar1 = FUN_00461920(*in_EAX,DAT_004ce8cc,*in_EAX);
  if (piVar1 != (int *)0x0) {
    FUN_00454fa0(param_1,(undefined2 *)piVar1[0xfe]);
  }
  return;
}


