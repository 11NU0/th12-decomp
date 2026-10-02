/* bool __fastcall FUN_0041c890(undefined4 param_1) @ 0041c890  30 bytes */
#include "th12.h"

bool __fastcall FUN_0041c890(undefined4 param_1)

{
  int *piVar1;
  int *unaff_ESI;
  
  piVar1 = FUN_00461920(param_1,DAT_004ce8cc,*unaff_ESI);
  if (piVar1 == (int *)0x0) {
    *unaff_ESI = 0;
  }
  return piVar1 != (int *)0x0;
}


