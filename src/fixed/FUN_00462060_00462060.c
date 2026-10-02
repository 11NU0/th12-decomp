/* undefined __fastcall FUN_00462060(undefined4 param_1) @ 00462060  75 bytes */
#include "th12.h"

void __fastcall FUN_00462060(undefined4 param_1)

{
  int *piVar1;
  undefined4 *unaff_EBX;
  int *unaff_ESI;
  int unaff_EDI;
  
  piVar1 = FUN_00461920(param_1,DAT_004ce8cc,*unaff_ESI);
  if (piVar1 == (int *)0x0) {
    *unaff_ESI = 0;
  }
  piVar1 = piVar1 + 4;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      *unaff_EBX = 0;
      return;
    }
    if ((*(short *)(*piVar1 + 0x3ea) == unaff_EDI) || (unaff_EDI == -1)) break;
    piVar1 = (int *)piVar1[1];
  }
  *unaff_EBX = *(undefined4 *)*piVar1;
  return;
}


