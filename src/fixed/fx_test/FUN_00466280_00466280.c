/* undefined4 __fastcall FUN_00466280(uint param_1) @ 00466280  100 bytes */

#include "th12.h"

undefined4 __fastcall FUN_00466280(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int unaff_EDI;
  bool bVar3;
  uint local_4;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    return 0;
  }
  uVar2 = 0;
  bVar3 = *(int *)(unaff_EDI + 0x10) == 0;
  local_4 = param_1;
  if (*(int *)(unaff_EDI + 0x10) != 0) {
    do {
      if (*(int *)(*(int *)(unaff_EDI + 4) + uVar2 * 4) != 0) {
        local_4 = 0;
        piVar1 = *(int **)(*(int *)(unaff_EDI + 4) + uVar2 * 4);
        (**(code **)(*piVar1 + 0x24))(piVar1,&local_4);
        if ((local_4 & 1) == 0) break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(unaff_EDI + 0x10));
    bVar3 = uVar2 == *(uint *)(unaff_EDI + 0x10);
  }
  if (!bVar3) {
    return *(undefined4 *)(*(int *)(unaff_EDI + 4) + uVar2 * 4);
  }
  uVar2 = _rand();
  return *(undefined4 *)(*(int *)(unaff_EDI + 4) + (uVar2 % *(uint *)(unaff_EDI + 0x10)) * 4);
}


