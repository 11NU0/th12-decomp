/* undefined4 __fastcall FUN_0045d5d0(undefined4 * param_1, undefined4 * param_2, int param_3) @ 0045d5d0  313 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0045d5d0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_4;
  
  iVar2 = DAT_004ce8cc;
  piVar1 = (int *)((int)DAT_004ce8cc + 0x8856b0);
  if (*(undefined4 **)((int)DAT_004ce8cc + 0x8856b0) + param_3 * 5 + 5 < piVar1) {
    local_4 = param_1;
    if (0 < param_3) {
      local_4 = (undefined4 *)param_3;
      puVar3 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b0);
      do {
        *puVar3 = *param_1;
        local_4 = (undefined4 *)((int)local_4 + -1);
        puVar3[1] = param_1[1];
        puVar3[2] = 0;
        puVar3[3] = 0x3f800000;
        puVar3[4] = *param_2;
        puVar3 = puVar3 + 5;
        param_1 = param_1 + 2;
        param_2 = param_2 + 1;
      } while (local_4 != (undefined4 *)0x0);
      local_4 = (undefined4 *)0x0;
    }
    if ((&DAT_004b5647)[DAT_004ce8cc] != '\0') {
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,4,3);
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,1,3);
      (&DAT_004b5647)[DAT_004ce8cc] = 0;
    }
    if ((&DAT_004b5642)[iVar2] != '\x01') {
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,6,0);
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,3,0);
      (&DAT_004b5642)[iVar2] = 1;
    }
    (**(code **)(*DAT_004ce8f0 + 0x164))(DAT_004ce8f0,0x44);
    (**(code **)(*DAT_004ce8f0 + 0x14c))(DAT_004ce8f0,3,(int)local_4 + -1,*piVar1,0x14);
    *piVar1 = *piVar1 + param_3 * 0x14;
    *(int *)((int)iVar2 + 0xac) = *(int *)((int)iVar2 + 0xac) + 1;
  }
  return 0;
}


