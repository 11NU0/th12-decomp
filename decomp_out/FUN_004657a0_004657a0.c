/* undefined __thiscall FUN_004657a0(void * this, int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6, undefined4 param_7) @ 004657a0  703 bytes */
#include "th12.h"

void __thiscall
FUN_004657a0(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
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
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00496e4b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_004ad138 ^ (uint)&local_58;
  uVar1 = DAT_004ad138 ^ (uint)&stack0xffffff98;
  *unaff_FS_OFFSET = (int)&local_c;
  local_20 = param_2;
  local_1c = param_3;
  local_50 = param_1;
  local_18 = param_4;
  local_14 = param_5;
  local_4c = (int *)this;
  if (*param_1 != 0) {
    local_54 = (undefined4 *)0x0;
    local_58 = (int *)0x0;
    puVar2 = (undefined4 *)operator_new(0x9c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[0x24] = 0;
      *puVar2 = 0;
      puVar2[0xb] = 0;
      puVar2[0x1f] = 0;
    }
    puVar2[0x1f] = 0;
    puVar2[0x1e] = 1;
    iVar3 = FUN_00466b10();
    if (iVar3 == 0) {
      local_44[3] = 0;
      local_30 = local_20;
      local_28 = local_18;
      local_24 = local_14;
      local_2c = local_1c;
      local_44[0] = 0x24;
      local_44[1] = 0x18188;
      local_44[4] = puVar2[0x24] + 0x20;
      local_44[2] = param_6 << 4;
      iVar3 = (**(code **)(*(int *)*local_50 + 0xc))((int *)*local_50,local_44,&local_54,0,uVar1);
      if (((-1 < iVar3) &&
          (iVar3 = (**(code **)*local_54)(local_54,&DAT_0049981c,&local_58), -1 < iVar3)) &&
         (pvVar4 = operator_new(0x80), pvVar4 != (void *)0x0)) {
        uVar1 = 0;
        iVar3 = param_6 + -1;
        do {
          *(int *)((int)pvVar4 + uVar1 * 8) = iVar3;
          *(undefined4 *)((int)pvVar4 + uVar1 * 8 + 4) = param_7;
          uVar1 = uVar1 + 1;
          iVar3 = iVar3 + param_6;
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
          puVar2 = (undefined4 *)0x0;
          uStack_4 = 0;
          if (puStack_48 != (undefined4 *)0x0) {
            puVar2 = FUN_00466650(param_6 << 4,puStack_48,local_54,param_6);
          }
          *local_4c = (int)puVar2;
          piVar5 = local_44;
          piVar6 = puVar2 + 0xe;
          for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar6 = *piVar5;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          }
          *(int **)(*local_4c + 0x5c) = local_50;
          *(undefined4 *)(*local_4c + 0x74) = param_7;
          *(undefined4 *)(*local_4c + 0x78) = 0;
        }
      }
    }
    else {
      if (puVar2[0x1e] == 1) {
        CloseHandle((HANDLE)puVar2[0x23]);
        puVar2[0x23] = 0xffffffff;
      }
      FUN_0046ca4f(puVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  ___security_check_cookie_4(local_10 ^ (uint)&local_58);
  return;
}


