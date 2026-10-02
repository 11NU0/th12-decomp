/* uint __stdcall FUN_004665c0(void) @ 004665c0  52 bytes */
#include "th12.h"

uint __stdcall FUN_004665c0(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EDI;
  
  if (*(int *)((int)unaff_EDI + 4) == 0) {
    return 0x800401f0;
  }
  uVar3 = 0;
  uVar4 = 0;
  if (*(int *)((int)unaff_EDI + 0x10) != 0) {
    do {
      piVar1 = *(int **)(*(int *)((int)unaff_EDI + 4) + uVar4 * 4);
      uVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,0);
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 | uVar2;
    } while (uVar4 < *(uint *)((int)unaff_EDI + 0x10));
  }
  return uVar3;
}


