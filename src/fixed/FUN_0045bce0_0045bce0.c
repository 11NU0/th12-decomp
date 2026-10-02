/* undefined4 __stdcall FUN_0045bce0(int param_1, uint param_2) @ 0045bce0  1123 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0045bce0(int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 local_c4 [12];
  float local_94;
  float local_90 [5];
  float fStack_7c;
  float fStack_70;
  float fStack_6c;
  undefined auStack_4c [8];
  undefined local_44 [68];
  
  if ((((*(uint *)((int)param_2 + 0x47c) & 1) != 0) && ((*(uint *)((int)param_2 + 0x47c) & 2) != 0)) &&
     (*(char *)((int)param_2 + 0x3bf) != '\0')) {
    if (*(int *)(&DAT_004b56a0 + param_1) != 0) {
      FUN_0045a3c0();
    }
    uVar3 = *(uint *)((int)param_2 + 0x47c);
    if (((uVar3 & 0x8000) == 0) && ((uVar3 & 0xc) != 0)) {
      fVar1 = *(float *)((int)param_2 + 0x40);
      pfVar7 = (float *)((int)param_2 + 0x33c);
      pfVar5 = (float *)((int)param_2 + 0x2fc);
      pfVar8 = pfVar7;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar8 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar8 = pfVar8 + 1;
      }
      *pfVar7 = fVar1 * *pfVar7;
      *(float *)((int)param_2 + 0x350) = *(float *)((int)param_2 + 0x44) * *(float *)((int)param_2 + 0x350);
      *(uint *)((int)param_2 + 0x47c) = uVar3 & 0xfffffff7;
      if (NANP(*(float *)((int)param_2 + 0x24)) == (*(float *)((int)param_2 + 0x24) == 0.0)) {
        D3DXMatrixRotationX(local_44,*(undefined4 *)((int)param_2 + 0x24));
        D3DXMatrixMultiply(pfVar7,pfVar7,auStack_4c);
      }
      if (NANP(*(float *)((int)param_2 + 0x28)) == (*(float *)((int)param_2 + 0x28) == 0.0)) {
        D3DXMatrixRotationY(local_44,*(undefined4 *)((int)param_2 + 0x28));
        D3DXMatrixMultiply(pfVar7,pfVar7,auStack_4c);
      }
      if (NANP(*(float *)((int)param_2 + 0x2c)) == (*(float *)((int)param_2 + 0x2c) == 0.0)) {
        D3DXMatrixRotationZ(local_44,*(undefined4 *)((int)param_2 + 0x2c));
        D3DXMatrixMultiply(pfVar7,pfVar7,auStack_4c);
      }
      *(uint *)((int)param_2 + 0x47c) = *(uint *)((int)param_2 + 0x47c) & 0xfffffffb;
    }
    puVar6 = (undefined4 *)((int)param_2 + 0x33c);
    puVar9 = local_c4;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    uVar3 = *(uint *)((int)param_2 + 0x47c) >> 0x13 & 3;
    if (uVar3 == 0) {
      local_94 = *(float *)((int)param_2 + 0x430) + *(float *)((int)param_2 + 0x424) +
                 *(float *)((int)param_2 + 0x43c);
    }
    else if (uVar3 == 1) {
      local_94 = (*(float *)((int)param_2 + 0x430) + *(float *)((int)param_2 + 0x424) +
                 *(float *)((int)param_2 + 0x43c)) -
                 ABS(*(float *)((int)param_2 + 0x58) * *(float *)((int)param_2 + 0x40) * 0.5);
    }
    else if (uVar3 == 2) {
      local_94 = *(float *)((int)param_2 + 0x430) + *(float *)((int)param_2 + 0x424) +
                 *(float *)((int)param_2 + 0x43c) +
                 ABS(*(float *)((int)param_2 + 0x58) * *(float *)((int)param_2 + 0x40) * 0.5);
    }
    uVar3 = *(uint *)((int)param_2 + 0x47c) >> 0x15 & 3;
    if (uVar3 == 0) {
      local_90[0] = *(float *)((int)param_2 + 0x434) + *(float *)((int)param_2 + 0x428) +
                    *(float *)((int)param_2 + 0x440);
    }
    else if (uVar3 == 1) {
      local_90[0] = (*(float *)((int)param_2 + 0x434) + *(float *)((int)param_2 + 0x428) +
                    *(float *)((int)param_2 + 0x440)) -
                    ABS(*(float *)((int)param_2 + 0x5c) * *(float *)((int)param_2 + 0x44) * 0.5);
    }
    else if (uVar3 == 2) {
      local_90[0] = *(float *)((int)param_2 + 0x434) + *(float *)((int)param_2 + 0x428) +
                    *(float *)((int)param_2 + 0x440) +
                    ABS(*(float *)((int)param_2 + 0x5c) * *(float *)((int)param_2 + 0x44) * 0.5);
    }
    local_90[1] = *(float *)((int)param_2 + 0x438) + *(float *)((int)param_2 + 0x42c);
    FUN_00459a60(param_2);
    local_90[1] = *(float *)((int)param_2 + 0x438) + *(float *)((int)param_2 + 0x42c) +
                  *(float *)((int)param_2 + 0x444);
    (**(code **)(*DAT_004ce8f0 + 0xb0))(DAT_004ce8f0,0x100,local_c4);
    puVar6 = *(undefined4 **)(*(int *)((int)param_2 + 0x3f4) + 8);
    if (*(undefined4 **)(&DAT_004b563c + param_1) != puVar6) {
      *(undefined4 **)(&DAT_004b563c + param_1) = puVar6;
      (**(code **)(*DAT_004ce8f0 + 0x104))(DAT_004ce8f0,0,*puVar6);
    }
    if (((*(int *)(&DAT_004b5648 + param_1) != *(int *)((int)param_2 + 0x3f4)) ||
        (NANP(*(float *)((int)param_2 + 0x60)) == (*(float *)((int)param_2 + 0x60) == 0.0))) ||
       ((NANP(*(float *)((int)param_2 + 0x60)) == (*(float *)((int)param_2 + 0x60) == 0.0) ||
        ((NANP(*(float *)((int)param_2 + 0x50)) == (*(float *)((int)param_2 + 0x50) == 1.0) ||
         (NANP(*(float *)((int)param_2 + 0x54)) == (*(float *)((int)param_2 + 0x54) == 1.0))))))) {
      *(int *)(&DAT_004b5648 + param_1) = *(int *)((int)param_2 + 0x3f4);
      fVar1 = *(float *)((int)param_2 + 0x7c);
      fVar2 = *(float *)((int)param_2 + 0x60);
      pfVar7 = (float *)((int)param_2 + 0x37c);
      pfVar5 = local_90;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar5 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar5 = pfVar5 + 1;
      }
      fStack_6c = *(float *)((int)param_2 + 0x80) + *(float *)((int)param_2 + 100);
      local_90[0] = *(float *)((int)param_2 + 0x50) * local_90[0];
      fStack_7c = *(float *)((int)param_2 + 0x54) * fStack_7c;
      fStack_70 = fVar1 + fVar2;
      (**(code **)(*DAT_004ce8f0 + 0xb0))(DAT_004ce8f0,0x10,local_90);
    }
    if ((&DAT_004b5642)[param_1] != '\x02') {
      (**(code **)(*DAT_004ce8f0 + 400))
                (DAT_004ce8f0,0,*(undefined4 *)(&DAT_004b564c + param_1),0,0x14);
      (**(code **)(*DAT_004ce8f0 + 0x164))(DAT_004ce8f0,0x102);
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,6,3);
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,3,3);
      (&DAT_004b5642)[param_1] = 2;
    }
    if ((&DAT_004b5647)[DAT_004ce8cc] != '\x01') {
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,4,4);
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,1,4);
      (&DAT_004b5647)[DAT_004ce8cc] = 1;
    }
    (**(code **)(*DAT_004ce8f0 + 0x144))(DAT_004ce8f0,5,0,2);
    return 0;
  }
  return 0xffffffff;
}


