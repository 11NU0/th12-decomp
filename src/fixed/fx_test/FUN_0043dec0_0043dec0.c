/* undefined4 __fastcall FUN_0043dec0(undefined4 param_1, byte * param_2, int param_3) @ 0043dec0  870 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0043dec0(undefined4 param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  byte *extraout_EDX;
  byte *pbVar6;
  byte *extraout_EDX_00;
  int iVar7;
  ulonglong uVar8;
  uint local_c;
  int local_8;
  undefined4 local_4;
  
  iVar4 = param_3;
  iVar7 = param_3 + 0x4cc;
  if (((DAT_004ceae8 & 4) == 0) && (DAT_004cf278 != 0)) {
    FUN_0045a3c0();
    DAT_004cf278 = 0;
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x1c,0);
    param_2 = extraout_EDX;
  }
  local_8 = 0xd;
  do {
    if (*(char *)(iVar7 + 0x38) != '\0') {
      if (*(int *)(iVar7 + 0x20) < 8) {
        fVar3 = 8.0 / *(float *)(iVar7 + 0x24);
      }
      else {
        fVar3 = 8.0;
      }
      *(float *)(iVar4 + 0x448) =
           (*(float *)(iVar7 + 0xc) - (float)(uint)*(byte *)(iVar7 + 0x39) * fVar3 * 0.5) + 32.0 +
           192.0;
      *(float *)(iVar4 + 0x44c) = *(float *)(iVar7 + 0x10) + 16.0;
      uVar2 = *(undefined4 *)(iVar7 + 0x18);
      *(undefined4 *)(iVar4 + 0x3d4) = uVar2;
      uVar8 = FUN_004931e0(uVar2,param_2);
      iVar5 = (int)uVar8;
      if (iVar5 < 0x4001) {
        if (iVar5 < 0x1001) {
          param_3._0_1_ = '0';
        }
        else {
          param_3._0_1_ = (char)(((iVar5 * 5 + -0x5000) * 0x20) / 0x3000) + '0';
        }
      }
      else {
        param_3._0_1_ = -0x30;
      }
      local_c = (uint)*(byte *)(iVar7 + 0x39);
      pbVar6 = (byte *)((local_c - 1) + iVar7);
      param_2 = pbVar6;
      if (local_c != 0) {
        do {
          if ((*(int *)(iVar7 + 0x20) < 0x34) || (bVar1 = *pbVar6, bVar1 == 10)) {
            iVar5 = *(int *)(*(int *)(iVar4 + 0x10) + 0x118) + (*pbVar6 + 0xc4) * 0x48;
            *(int *)(iVar4 + 0x40c) = iVar5;
            uVar2 = *(undefined4 *)(iVar5 + 0x24);
            *(undefined4 *)(iVar4 + 0xa4) = uVar2;
            *(undefined4 *)(iVar4 + 0x94) = uVar2;
            uVar2 = *(undefined4 *)(iVar5 + 0x2c);
            *(undefined4 *)(iVar4 + 0xac) = uVar2;
            *(undefined4 *)(iVar4 + 0x9c) = uVar2;
            uVar2 = *(undefined4 *)(iVar5 + 0x28);
            *(undefined4 *)(iVar4 + 0xa0) = uVar2;
            *(undefined4 *)(iVar4 + 0x98) = uVar2;
            local_4 = *(undefined4 *)(iVar5 + 0x30);
          }
          else if (*(int *)(iVar7 + 0x20) < 0x38) {
            iVar5 = *(int *)(*(int *)(iVar4 + 0x10) + 0x118) + (bVar1 + 0xcf) * 0x48;
            *(int *)(iVar4 + 0x40c) = iVar5;
            uVar2 = *(undefined4 *)(iVar5 + 0x24);
            *(undefined4 *)(iVar4 + 0xa4) = uVar2;
            *(undefined4 *)(iVar4 + 0x94) = uVar2;
            uVar2 = *(undefined4 *)(iVar5 + 0x2c);
            *(undefined4 *)(iVar4 + 0xac) = uVar2;
            *(undefined4 *)(iVar4 + 0x9c) = uVar2;
            uVar2 = *(undefined4 *)(iVar5 + 0x28);
            *(undefined4 *)(iVar4 + 0xa0) = uVar2;
            *(undefined4 *)(iVar4 + 0x98) = uVar2;
            local_4 = *(undefined4 *)(iVar5 + 0x30);
          }
          else {
            iVar5 = *(int *)(*(int *)(iVar4 + 0x10) + 0x118) + (bVar1 + 0xd9) * 0x48;
            *(int *)(iVar4 + 0x40c) = iVar5;
            uVar2 = *(undefined4 *)(iVar5 + 0x24);
            *(undefined4 *)(iVar4 + 0xa4) = uVar2;
            *(undefined4 *)(iVar4 + 0x94) = uVar2;
            uVar2 = *(undefined4 *)(iVar5 + 0x2c);
            *(undefined4 *)(iVar4 + 0xac) = uVar2;
            *(undefined4 *)(iVar4 + 0x9c) = uVar2;
            uVar2 = *(undefined4 *)(iVar5 + 0x28);
            *(undefined4 *)(iVar4 + 0xa0) = uVar2;
            *(undefined4 *)(iVar4 + 0x98) = uVar2;
            local_4 = *(undefined4 *)(iVar5 + 0x30);
          }
          *(undefined4 *)(iVar4 + 0xb0) = local_4;
          *(undefined4 *)(iVar4 + 0xa8) = local_4;
          *(char *)(iVar4 + 0x3d7) = (char)param_3;
          uVar2 = *(undefined4 *)(*(int *)(iVar4 + 0x40c) + 0x38);
          *(uint *)(iVar4 + 0x494) = *(uint *)(iVar4 + 0x494) | 8;
          *(undefined4 *)(iVar4 + 0x70) = uVar2;
          FUN_0045a570((float *)&DAT_004d47e8,(float *)&DAT_004d4804);
          FUN_00459e50(DAT_004ce8cc,1);
          pbVar6 = pbVar6 + -1;
          local_c = local_c - 1;
          *(float *)(iVar4 + 0x448) = *(float *)(iVar4 + 0x448) + fVar3;
          param_2 = extraout_EDX_00;
        } while (0 < (int)local_c);
      }
    }
    iVar7 = iVar7 + 0x40;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 1;
}


