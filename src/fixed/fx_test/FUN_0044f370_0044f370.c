/* undefined __stdcall FUN_0044f370(void) @ 0044f370  135 bytes */

#include "th12.h"

void __stdcall FUN_0044f370(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_4;
  
  piVar5 = (int *)(&DAT_004b50c0 + DAT_004ce8cc);
  local_4 = 0x20;
  do {
    iVar1 = *piVar5;
    if ((iVar1 != 0) && (iVar3 = 0, 0 < *(int *)(iVar1 + 0x10c))) {
      iVar4 = 0;
      do {
        piVar2 = (int *)(*(int *)(iVar1 + 0x120) + iVar4);
        if (((*(byte *)(piVar2 + 4) & 1) != 0) && (*piVar2 != 0)) {
          piVar2 = *(int **)(*(int *)(iVar1 + 0x120) + iVar4);
          (**(code **)(*piVar2 + 8))(piVar2);
          *(undefined4 *)(iVar4 + *(int *)(*piVar5 + 0x120)) = 0;
        }
        iVar1 = *piVar5;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x14;
      } while (iVar3 < *(int *)(iVar1 + 0x10c));
    }
    piVar5 = piVar5 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}


