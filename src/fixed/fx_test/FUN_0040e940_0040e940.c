/* undefined __stdcall FUN_0040e940(int param_1) @ 0040e940  201 bytes */

#include "th12.h"

void __stdcall FUN_0040e940(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int local_4;
  
  iVar6 = DAT_004ce8cc;
  piVar7 = (int *)(&DAT_004b50e0 + DAT_004ce8cc);
  local_4 = 4;
  do {
    iVar2 = *piVar7;
    piVar5 = *(int **)(iVar6 + 0x8856b8);
    while (piVar5 != (int *)0x0) {
      piVar3 = (int *)piVar5[1];
      iVar4 = *piVar5;
      piVar5 = piVar3;
      if (*(int *)(iVar4 + 0x3f8) == iVar2) {
        puVar1 = (uint *)(iVar4 + 0x47c);
        *puVar1 = *puVar1 | 0x10000000;
      }
    }
    piVar5 = *(int **)(iVar6 + 0x8856c0);
    while (piVar5 != (int *)0x0) {
      piVar3 = (int *)piVar5[1];
      iVar4 = *piVar5;
      piVar5 = piVar3;
      if (*(int *)(iVar4 + 0x3f8) == iVar2) {
        puVar1 = (uint *)(iVar4 + 0x47c);
        *puVar1 = *puVar1 | 0x10000000;
      }
    }
    piVar7 = piVar7 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  piVar7 = *(int **)(param_1 + 0x68);
  while (piVar7 != (int *)0x0) {
    piVar5 = (int *)piVar7[1];
    piVar3 = (int *)*piVar7;
    piVar7 = piVar5;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x14))(1);
    }
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 8) + 4);
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0xc) + 4);
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  return;
}


