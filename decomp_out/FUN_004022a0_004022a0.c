/* undefined __stdcall FUN_004022a0(int param_1) @ 004022a0  124 bytes */
#include "th12.h"

void FUN_004022a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_4;
  
  iVar1 = param_1;
  iVar6 = 0;
  iVar2 = 0;
  piVar4 = (int *)(param_1 + 0x18f7c);
  param_1 = 0;
  puVar5 = (undefined4 *)(iVar1 + 0x97c);
  if (0 < *piVar4) {
    piVar4 = (int *)(iVar1 + 0xaa8);
    puVar8 = puVar5;
    local_4 = puVar5;
    do {
      *piVar4 = *piVar4 + -1;
      if (-1 < *piVar4) {
        if (iVar6 != iVar2) {
          puVar7 = puVar5;
          for (iVar3 = 0x4e; iVar6 = param_1, iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        iVar6 = iVar6 + 1;
        puVar8 = local_4 + 0x4e;
        param_1 = iVar6;
        local_4 = puVar8;
      }
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 0x4e;
      piVar4 = piVar4 + 0x4e;
    } while (iVar2 < *(int *)(iVar1 + 0x18f7c));
  }
  *(int *)(iVar1 + 0x18f7c) = iVar6;
  return;
}


