/* int __stdcall FUN_004286f0(undefined4 param_1, undefined4 param_2, undefined4 param_3) @ 004286f0  95 bytes */
#include "th12.h"

int FUN_004286f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_ESI;
  
  iVar3 = DAT_004b44f4;
  piVar1 = *(int **)(DAT_004b44f4 + 0x18);
  *(undefined4 *)(DAT_004b44f4 + 0x470) = *unaff_ESI;
  *(undefined4 *)(iVar3 + 0x474) = unaff_ESI[1];
  iVar4 = 0;
  *(undefined4 *)(iVar3 + 0x478) = unaff_ESI[2];
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if (piVar2[3] != 1) {
      iVar3 = (**(code **)(*piVar2 + 0x1c))();
      iVar4 = iVar4 + iVar3;
    }
  }
  return iVar4;
}


