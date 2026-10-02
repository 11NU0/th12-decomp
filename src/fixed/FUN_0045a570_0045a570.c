/* undefined __stdcall FUN_0045a570(float * param_1, float * param_2) @ 0045a570  1141 bytes */
#include "th12.h"

void __stdcall FUN_0045a570(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  float *unaff_EBX;
  int unaff_ESI;
  float *unaff_EDI;
  float10 fVar9;
  undefined2 in_stack_ffffff80;
  float local_68;
  float local_64;
  
  local_68 = *(float *)((int)unaff_ESI + 0x58) * *(float *)((int)unaff_ESI + 0x40);
  local_64 = *(float *)((int)unaff_ESI + 0x5c) * *(float *)((int)unaff_ESI + 0x44);
  if (*(int *)((int)unaff_ESI + 0x3c) != 0) {
    local_68 = *(float *)(*(int *)((int)unaff_ESI + 0x3c) + 0x40) * local_68;
    local_64 = *(float *)(*(int *)((int)unaff_ESI + 0x3c) + 0x44) * local_64;
  }
  uVar8 = *(uint *)((int)unaff_ESI + 0x47c) >> 0x13 & 3;
  if (uVar8 == 0) {
    fVar9 = FUN_00493290((double)((*(float *)((int)unaff_ESI + 0x430) + *(float *)((int)unaff_ESI + 0x424) +
                                  *(float *)((int)unaff_ESI + 0x43c)) - local_68 * 0.5),in_stack_ffffff80
                        );
    fVar1 = (float)fVar9;
    *unaff_EBX = fVar1;
    *param_1 = fVar1;
    *unaff_EDI = fVar1 + local_68;
    *param_2 = fVar1 + local_68;
  }
  else if (uVar8 == 1) {
    fVar1 = *(float *)((int)unaff_ESI + 0x430) + *(float *)((int)unaff_ESI + 0x424) +
            *(float *)((int)unaff_ESI + 0x43c);
    *unaff_EBX = fVar1;
    *param_1 = fVar1;
    local_68 = *(float *)((int)unaff_ESI + 0x430) + *(float *)((int)unaff_ESI + 0x424) +
               *(float *)((int)unaff_ESI + 0x43c) + local_68;
    *unaff_EDI = local_68;
    *param_2 = local_68;
  }
  else if (uVar8 == 2) {
    local_68 = (*(float *)((int)unaff_ESI + 0x430) + *(float *)((int)unaff_ESI + 0x424) +
               *(float *)((int)unaff_ESI + 0x43c)) - local_68;
    *unaff_EBX = local_68;
    *param_1 = local_68;
    fVar1 = *(float *)((int)unaff_ESI + 0x430) + *(float *)((int)unaff_ESI + 0x424) +
            *(float *)((int)unaff_ESI + 0x43c);
    *unaff_EDI = fVar1;
    *param_2 = fVar1;
  }
  uVar8 = *(uint *)((int)unaff_ESI + 0x47c) >> 0x15 & 3;
  if (uVar8 == 0) {
    fVar9 = FUN_00493290((double)((*(float *)((int)unaff_ESI + 0x434) + *(float *)((int)unaff_ESI + 0x428) +
                                  *(float *)((int)unaff_ESI + 0x440)) - local_64 * 0.5),in_stack_ffffff80
                        );
    fVar1 = (float)fVar9;
    param_2[1] = fVar1;
    param_1[1] = fVar1;
    unaff_EDI[1] = fVar1 + local_64;
    unaff_EBX[1] = fVar1 + local_64;
  }
  else if (uVar8 == 1) {
    fVar1 = *(float *)((int)unaff_ESI + 0x434) + *(float *)((int)unaff_ESI + 0x428) +
            *(float *)((int)unaff_ESI + 0x440);
    param_2[1] = fVar1;
    param_1[1] = fVar1;
    local_64 = *(float *)((int)unaff_ESI + 0x434) + *(float *)((int)unaff_ESI + 0x428) +
               *(float *)((int)unaff_ESI + 0x440) + local_64;
    unaff_EDI[1] = local_64;
    unaff_EBX[1] = local_64;
  }
  else if (uVar8 == 2) {
    local_64 = (*(float *)((int)unaff_ESI + 0x434) + *(float *)((int)unaff_ESI + 0x428) +
               *(float *)((int)unaff_ESI + 0x440)) - local_64;
    param_2[1] = local_64;
    param_1[1] = local_64;
    fVar1 = *(float *)((int)unaff_ESI + 0x434) + *(float *)((int)unaff_ESI + 0x428) +
            *(float *)((int)unaff_ESI + 0x440);
    unaff_EDI[1] = fVar1;
    unaff_EBX[1] = fVar1;
  }
  if (*(int *)((int)unaff_ESI + 0x3c) != 0) {
    iVar7 = *(int *)((int)unaff_ESI + 0x3c);
    fVar1 = *(float *)((int)iVar7 + 0x428);
    fVar2 = *(float *)((int)iVar7 + 0x434);
    fVar3 = *(float *)((int)iVar7 + 0x42c);
    fVar4 = *(float *)((int)iVar7 + 0x438);
    fVar5 = *(float *)((int)iVar7 + 0x440);
    fVar6 = *(float *)((int)iVar7 + 0x444);
    *param_1 = *param_1 +
               *(float *)((int)iVar7 + 0x424) + *(float *)((int)iVar7 + 0x430) + *(float *)((int)iVar7 + 0x43c);
    param_1[1] = param_1[1] + fVar5 + fVar1 + fVar2;
    param_1[2] = param_1[2] + fVar6 + fVar3 + fVar4;
    iVar7 = *(int *)((int)unaff_ESI + 0x3c);
    fVar1 = *(float *)((int)iVar7 + 0x428);
    fVar2 = *(float *)((int)iVar7 + 0x434);
    fVar3 = *(float *)((int)iVar7 + 0x42c);
    fVar4 = *(float *)((int)iVar7 + 0x438);
    fVar5 = *(float *)((int)iVar7 + 0x440);
    fVar6 = *(float *)((int)iVar7 + 0x444);
    *param_2 = *param_2 +
               *(float *)((int)iVar7 + 0x430) + *(float *)((int)iVar7 + 0x424) + *(float *)((int)iVar7 + 0x43c);
    param_2[1] = fVar5 + fVar1 + fVar2 + param_2[1];
    param_2[2] = param_2[2] + fVar6 + fVar3 + fVar4;
    iVar7 = *(int *)((int)unaff_ESI + 0x3c);
    fVar1 = *(float *)((int)iVar7 + 0x428);
    fVar2 = *(float *)((int)iVar7 + 0x434);
    fVar3 = *(float *)((int)iVar7 + 0x42c);
    fVar4 = *(float *)((int)iVar7 + 0x438);
    fVar5 = *(float *)((int)iVar7 + 0x440);
    fVar6 = *(float *)((int)iVar7 + 0x444);
    *unaff_EBX = *(float *)((int)iVar7 + 0x43c) + *(float *)((int)iVar7 + 0x430) + *(float *)((int)iVar7 + 0x424) +
                 *unaff_EBX;
    unaff_EBX[1] = fVar5 + fVar1 + fVar2 + unaff_EBX[1];
    unaff_EBX[2] = unaff_EBX[2] + fVar6 + fVar3 + fVar4;
    iVar7 = *(int *)((int)unaff_ESI + 0x3c);
    fVar1 = *(float *)((int)iVar7 + 0x428);
    fVar2 = *(float *)((int)iVar7 + 0x434);
    fVar3 = *(float *)((int)iVar7 + 0x42c);
    fVar4 = *(float *)((int)iVar7 + 0x438);
    fVar5 = *(float *)((int)iVar7 + 0x440);
    fVar6 = *(float *)((int)iVar7 + 0x444);
    *unaff_EDI = *(float *)((int)iVar7 + 0x424) + *(float *)((int)iVar7 + 0x430) + *(float *)((int)iVar7 + 0x43c) +
                 *unaff_EDI;
    unaff_EDI[1] = fVar5 + fVar1 + fVar2 + unaff_EDI[1];
    unaff_EDI[2] = unaff_EDI[2] + fVar6 + fVar3 + fVar4;
  }
  fVar1 = *(float *)((int)unaff_ESI + 0x438) + *(float *)((int)unaff_ESI + 0x42c) +
          *(float *)((int)unaff_ESI + 0x444);
  unaff_EDI[2] = fVar1;
  unaff_EBX[2] = fVar1;
  param_2[2] = fVar1;
  param_1[2] = fVar1;
  return;
}


