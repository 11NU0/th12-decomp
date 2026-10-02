/* undefined8 __stdcall FUN_00413190(int param_1) @ 00413190  102 bytes */
#include "th12.h"

undefined8 FUN_00413190(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  piVar3 = *(int **)(param_1 + 0x68);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[1];
    if (((*(byte *)(*piVar3 + 0x26fb) & 1) == 0) &&
       (iVar4 = FUN_00413840((undefined4 *)(*piVar3 + 0x1040)), iVar4 == 0)) {
      *(uint *)(*piVar3 + 0x26f8) = *(uint *)(*piVar3 + 0x26f8) & 0xfffdffff;
      piVar3 = piVar1;
    }
    else {
      piVar2 = (int *)*piVar3;
      piVar3 = piVar1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x14))(1);
      }
    }
  }
  uVar5 = FUN_00464a80();
  return CONCAT44((int)(uVar5 >> 0x20),1);
}


