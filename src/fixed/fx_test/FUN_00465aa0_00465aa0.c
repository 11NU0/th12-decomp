/* undefined __fastcall FUN_00465aa0(int * param_1, undefined4 param_2, int * param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, int param_10, undefined4 param_11) @ 00465aa0  657 bytes */

#include "th12.h"

void __fastcall
FUN_00465aa0(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10
            ,undefined4 param_11)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int *local_58;
  undefined4 *local_54;
  int *local_50;
  int *local_4c;
  undefined4 *puStack_48;
  int local_44 [5];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00496e0b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_004ad138 ^ (uint)&local_58;
  uVar1 = DAT_004ad138 ^ (uint)&stack0xffffff98;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = param_7;
  local_50 = param_3;
  local_18 = param_8;
  local_14 = param_9;
  local_4c = param_1;
  if (*param_3 != 0) {
    local_54 = (undefined4 *)0x0;
    local_58 = (int *)0x0;
    puVar2 = (undefined4 *)operator_new(0x9c);
    puVar5 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[0x24] = 0;
      *puVar2 = 0;
      puVar2[0xb] = 0;
      puVar2[0x1f] = 0;
      puVar5 = puVar2;
    }
    puVar5[0x24] = param_5;
    puVar5[0x20] = param_2;
    puVar5[0x21] = param_2;
    puVar5[0x22] = param_4;
    puVar5[0x1f] = 1;
    local_44[3] = 0;
    local_2c = local_1c;
    local_28 = local_18;
    local_44[0] = 0x24;
    local_44[1] = 0x18188;
    local_30 = param_6;
    local_24 = local_14;
    local_44[4] = puVar5[0x24] + 0x20;
    local_44[2] = param_10 << 4;
    iVar3 = (**(code **)(*(int *)*local_50 + 0xc))((int *)*local_50,local_44,&local_54,0,uVar1);
    if (((-1 < iVar3) &&
        (iVar3 = (**(code **)*local_54)(local_54,&DAT_0049981c,&local_58), -1 < iVar3)) &&
       (pvVar4 = operator_new(0x80), pvVar4 != (void *)0x0)) {
      uVar1 = 0;
      iVar3 = param_10 + -1;
      do {
        *(int *)((int)pvVar4 + uVar1 * 8) = iVar3;
        *(undefined4 *)((int)pvVar4 + uVar1 * 8 + 4) = param_11;
        uVar1 = uVar1 + 1;
        iVar3 = iVar3 + param_10;
      } while (uVar1 < 0x10);
      iVar3 = (**(code **)(*local_58 + 0xc))(local_58,0x10,pvVar4);
      if (iVar3 < 0) {
        if (local_58 != (int *)0x0) {
          (**(code **)(*local_58 + 8))(local_58);
          local_58 = (int *)0x0;
        }
        FUN_0046ca4f(pvVar4);
      }
      else {
        if (local_58 != (int *)0x0) {
          (**(code **)(*local_58 + 8))(local_58);
          local_58 = (int *)0x0;
        }
        FUN_0046ca4f(pvVar4);
        puStack_48 = (undefined4 *)operator_new(0x7c);
        uStack_4 = 0;
        if (puStack_48 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = FUN_00466650(param_10 << 4,puStack_48,local_54,param_10);
        }
        *local_4c = (int)puVar5;
        piVar6 = local_44;
        piVar7 = puVar5 + 0xe;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        *(int **)(*local_4c + 0x5c) = local_50;
        *(undefined4 *)(*local_4c + 0x74) = param_11;
        *(undefined4 *)(*local_4c + 0x78) = 0;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  ___security_check_cookie_4(local_10 ^ (uint)&local_58);
  return;
}


