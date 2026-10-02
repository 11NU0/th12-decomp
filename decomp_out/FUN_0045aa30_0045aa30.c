/* undefined __fastcall FUN_0045aa30(undefined4 param_1, float * param_2, float param_3) @ 0045aa30  1041 bytes */
#include "th12.h"

void __fastcall FUN_0045aa30(undefined4 param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  float *unaff_EBX;
  float *unaff_ESI;
  float *unaff_EDI;
  float local_20;
  
  fVar8 = param_3;
  fVar1 = *(float *)((int)param_3 + 0x58) * *(float *)((int)param_3 + 0x40);
  local_20 = *(float *)((int)param_3 + 0x5c) * *(float *)((int)param_3 + 0x44);
  if (*(int *)((int)param_3 + 0x3c) != 0) {
    local_20 = *(float *)(*(int *)((int)param_3 + 0x3c) + 0x44) * local_20;
    fVar1 = *(float *)(*(int *)((int)param_3 + 0x3c) + 0x40) * fVar1;
  }
  param_3 = fVar1;
  uVar9 = *(uint *)((int)fVar8 + 0x47c) >> 0x13 & 3;
  if (uVar9 == 0) {
    fVar1 = (*(float *)((int)fVar8 + 0x430) + *(float *)((int)fVar8 + 0x424) +
            *(float *)((int)fVar8 + 0x43c)) - param_3 * 0.5;
    *unaff_ESI = fVar1;
    *unaff_EBX = fVar1;
    fVar1 = fVar1 + param_3;
  }
  else if (uVar9 == 1) {
    fVar1 = *(float *)((int)fVar8 + 0x430) + *(float *)((int)fVar8 + 0x424) +
            *(float *)((int)fVar8 + 0x43c);
    *unaff_ESI = fVar1;
    *unaff_EBX = fVar1;
    fVar1 = *(float *)((int)fVar8 + 0x430) + *(float *)((int)fVar8 + 0x424) +
            *(float *)((int)fVar8 + 0x43c) + param_3;
  }
  else {
    if (uVar9 != 2) goto LAB_0045ab57;
    fVar1 = (*(float *)((int)fVar8 + 0x430) + *(float *)((int)fVar8 + 0x424) +
            *(float *)((int)fVar8 + 0x43c)) - param_3;
    *unaff_ESI = fVar1;
    *unaff_EBX = fVar1;
    fVar1 = *(float *)((int)fVar8 + 0x430) + *(float *)((int)fVar8 + 0x424) +
            *(float *)((int)fVar8 + 0x43c);
  }
  *param_2 = fVar1;
  *unaff_EDI = fVar1;
LAB_0045ab57:
  uVar9 = *(uint *)((int)fVar8 + 0x47c) >> 0x15 & 3;
  if (uVar9 == 0) {
    fVar1 = (*(float *)((int)fVar8 + 0x434) + *(float *)((int)fVar8 + 0x428) +
            *(float *)((int)fVar8 + 0x440)) - local_20 * 0.5;
    unaff_EDI[1] = fVar1;
    unaff_EBX[1] = fVar1;
    param_2[1] = fVar1 + local_20;
    unaff_ESI[1] = fVar1 + local_20;
  }
  else if (uVar9 == 1) {
    fVar1 = *(float *)((int)fVar8 + 0x434) + *(float *)((int)fVar8 + 0x428) +
            *(float *)((int)fVar8 + 0x440);
    unaff_EDI[1] = fVar1;
    unaff_EBX[1] = fVar1;
    local_20 = *(float *)((int)fVar8 + 0x434) + *(float *)((int)fVar8 + 0x428) +
               *(float *)((int)fVar8 + 0x440) + local_20;
    param_2[1] = local_20;
    unaff_ESI[1] = local_20;
  }
  else if (uVar9 == 2) {
    local_20 = (*(float *)((int)fVar8 + 0x434) + *(float *)((int)fVar8 + 0x428) +
               *(float *)((int)fVar8 + 0x440)) - local_20;
    unaff_EDI[1] = local_20;
    unaff_EBX[1] = local_20;
    fVar1 = *(float *)((int)fVar8 + 0x434) + *(float *)((int)fVar8 + 0x428) +
            *(float *)((int)fVar8 + 0x440);
    param_2[1] = fVar1;
    unaff_ESI[1] = fVar1;
  }
  if (*(int *)((int)fVar8 + 0x3c) != 0) {
    iVar7 = *(int *)((int)fVar8 + 0x3c);
    fVar1 = *(float *)(iVar7 + 0x428);
    fVar2 = *(float *)(iVar7 + 0x434);
    fVar3 = *(float *)(iVar7 + 0x42c);
    fVar4 = *(float *)(iVar7 + 0x438);
    fVar5 = *(float *)(iVar7 + 0x440);
    fVar6 = *(float *)(iVar7 + 0x444);
    *unaff_EBX = *unaff_EBX +
                 *(float *)(iVar7 + 0x43c) + *(float *)(iVar7 + 0x424) + *(float *)(iVar7 + 0x430);
    unaff_EBX[1] = fVar5 + fVar1 + fVar2 + unaff_EBX[1];
    unaff_EBX[2] = fVar6 + fVar3 + fVar4 + unaff_EBX[2];
    iVar7 = *(int *)((int)fVar8 + 0x3c);
    fVar1 = *(float *)(iVar7 + 0x428);
    fVar2 = *(float *)(iVar7 + 0x434);
    fVar3 = *(float *)(iVar7 + 0x42c);
    fVar4 = *(float *)(iVar7 + 0x438);
    fVar5 = *(float *)(iVar7 + 0x440);
    fVar6 = *(float *)(iVar7 + 0x444);
    *unaff_EDI = *unaff_EDI +
                 *(float *)(iVar7 + 0x430) + *(float *)(iVar7 + 0x424) + *(float *)(iVar7 + 0x43c);
    unaff_EDI[1] = unaff_EDI[1] + fVar5 + fVar1 + fVar2;
    unaff_EDI[2] = fVar6 + fVar3 + fVar4 + unaff_EDI[2];
    iVar7 = *(int *)((int)fVar8 + 0x3c);
    fVar1 = *(float *)(iVar7 + 0x428);
    fVar2 = *(float *)(iVar7 + 0x434);
    fVar3 = *(float *)(iVar7 + 0x42c);
    fVar4 = *(float *)(iVar7 + 0x438);
    fVar5 = *(float *)(iVar7 + 0x440);
    fVar6 = *(float *)(iVar7 + 0x444);
    *unaff_ESI = *(float *)(iVar7 + 0x43c) + *(float *)(iVar7 + 0x424) + *(float *)(iVar7 + 0x430) +
                 *unaff_ESI;
    unaff_ESI[1] = unaff_ESI[1] + fVar5 + fVar1 + fVar2;
    unaff_ESI[2] = fVar6 + fVar3 + fVar4 + unaff_ESI[2];
    iVar7 = *(int *)((int)fVar8 + 0x3c);
    fVar1 = *(float *)(iVar7 + 0x428);
    fVar2 = *(float *)(iVar7 + 0x434);
    fVar3 = *(float *)(iVar7 + 0x42c);
    fVar4 = *(float *)(iVar7 + 0x438);
    fVar5 = *(float *)(iVar7 + 0x440);
    fVar6 = *(float *)(iVar7 + 0x444);
    *param_2 = *(float *)(iVar7 + 0x43c) + *(float *)(iVar7 + 0x430) + *(float *)(iVar7 + 0x424) +
               *param_2;
    param_2[1] = fVar5 + fVar1 + fVar2 + param_2[1];
    param_2[2] = fVar6 + fVar3 + fVar4 + param_2[2];
  }
  fVar1 = *(float *)((int)fVar8 + 0x438) + *(float *)((int)fVar8 + 0x42c) +
          *(float *)((int)fVar8 + 0x444);
  param_2[2] = fVar1;
  unaff_ESI[2] = fVar1;
  unaff_EDI[2] = fVar1;
  unaff_EBX[2] = fVar1;
  return;
}


