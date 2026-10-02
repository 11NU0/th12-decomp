/* undefined __fastcall FUN_00465f50(undefined4 * param_1) @ 00465f50  133 bytes */
#include "th12.h"

void __fastcall FUN_00465f50(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  
  uVar3 = 0;
  *param_1 = &PTR_FUN_004a3b1c;
  if (param_1[4] != 0) {
    do {
      if (*(int *)(param_1[1] + uVar3 * 4) != 0) {
        piVar1 = *(int **)(param_1[1] + uVar3 * 4);
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_1[1] + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[4]);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    FUN_0046ca4f((void *)param_1[1]);
    param_1[1] = 0;
  }
  pvVar2 = (void *)param_1[3];
  if (pvVar2 != (void *)0x0) {
    if (*(int *)((int)pvVar2 + 0x78) == 1) {
      CloseHandle(*(HANDLE *)((int)pvVar2 + 0x8c));
      *(undefined4 *)((int)pvVar2 + 0x8c) = 0xffffffff;
    }
    FUN_0046ca4f(pvVar2);
    param_1[3] = 0;
  }
  return;
}


