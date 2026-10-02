/* undefined __stdcall FUN_0044f4b0(void) @ 0044f4b0  48 bytes */

#include "th12.h"

void __stdcall FUN_0044f4b0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = DAT_004ce8cc;
  iVar3 = 4;
  piVar2 = DAT_004ce8cc;
  do {
    if (-1 < *piVar2) {
      FUN_004609d0((int)piVar1);
      *piVar2 = -1;
    }
    piVar2 = piVar2 + 10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


