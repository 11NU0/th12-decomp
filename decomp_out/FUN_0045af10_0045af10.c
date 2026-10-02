/* undefined __stdcall FUN_0045af10(float * param_1) @ 0045af10  672 bytes */
#include "th12.h"

void FUN_0045af10(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float *pfVar5;
  int in_EAX;
  uint uVar6;
  float *unaff_EBX;
  float *unaff_ESI;
  float *unaff_EDI;
  float10 fVar7;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float *local_c;
  float local_8;
  float *local_4;
  
  pfVar5 = param_1;
  param_1 = *(float **)(in_EAX + 0x2c);
  if (*(int *)(in_EAX + 0x3c) != 0) {
    param_1 = (float *)(*(float *)(*(int *)(in_EAX + 0x3c) + 0x2c) + (float)param_1);
  }
  fVar4 = (float10)fcos((float10)(float)param_1);
  fVar7 = (float10)fsin((float10)(float)param_1);
  fVar1 = (float)fVar4;
  fVar2 = (float)fVar7;
  local_30 = *(float *)(in_EAX + 0x430) + *(float *)(in_EAX + 0x424) + *(float *)(in_EAX + 0x43c);
  local_2c = *(float *)(in_EAX + 0x434) + *(float *)(in_EAX + 0x428) + *(float *)(in_EAX + 0x440);
  param_1 = (float *)(*(float *)(in_EAX + 0x58) * *(float *)(in_EAX + 0x40));
  local_34 = *(float *)(in_EAX + 0x5c) * *(float *)(in_EAX + 0x44);
  if (*(int *)(in_EAX + 0x3c) != 0) {
    iVar3 = *(int *)(in_EAX + 0x3c);
    local_30 = *(float *)(iVar3 + 0x430) + *(float *)(iVar3 + 0x424) + *(float *)(iVar3 + 0x43c) +
               local_30;
    local_2c = *(float *)(iVar3 + 0x434) + *(float *)(iVar3 + 0x428) + *(float *)(iVar3 + 0x440) +
               local_2c;
    param_1 = (float *)(*(float *)(iVar3 + 0x40) * (float)param_1);
    local_34 = *(float *)(iVar3 + 0x44) * local_34;
  }
  uVar6 = *(uint *)(in_EAX + 0x47c) >> 0x13 & 3;
  if (uVar6 == 0) {
    local_10 = -(float)param_1 * 0.5;
    local_c = (float *)((float)param_1 * 0.5);
    local_8 = local_10;
    local_4 = local_c;
  }
  else if (uVar6 == 1) {
    local_8 = 0.0;
    local_c = param_1;
    local_10 = local_8;
    local_4 = local_c;
  }
  else if (uVar6 == 2) {
    local_10 = -(float)param_1;
    local_4 = (float *)0x0;
    local_c = local_4;
    local_8 = local_10;
  }
  uVar6 = *(uint *)(in_EAX + 0x47c) >> 0x15 & 3;
  if (uVar6 == 0) {
    local_20 = -local_34 * 0.5;
    local_18 = local_34 * 0.5;
    local_1c = local_20;
    local_14 = local_18;
  }
  else if (uVar6 == 1) {
    local_1c = 0.0;
    local_20 = 0.0;
    local_14 = local_34;
    local_18 = local_34;
  }
  else if (uVar6 == 2) {
    local_20 = -local_34;
    local_14 = 0.0;
    local_18 = 0.0;
    local_1c = local_20;
  }
  *pfVar5 = local_30 + (fVar1 * local_10 - fVar2 * local_20);
  pfVar5[1] = local_2c + fVar1 * local_20 + fVar2 * local_10;
  *unaff_EBX = ((float)local_c * fVar1 - local_1c * fVar2) + local_30;
  unaff_EBX[1] = local_1c * fVar1 + (float)local_c * fVar2 + local_2c;
  *unaff_EDI = (local_8 * fVar1 - local_18 * fVar2) + local_30;
  unaff_EDI[1] = local_18 * fVar1 + fVar2 * local_8 + local_2c;
  *unaff_ESI = ((float)local_4 * fVar1 - local_14 * fVar2) + local_30;
  unaff_ESI[1] = local_14 * fVar1 + (float)local_4 * fVar2 + local_2c;
  fVar1 = *(float *)(in_EAX + 0x438) + *(float *)(in_EAX + 0x42c) + *(float *)(in_EAX + 0x444);
  unaff_ESI[2] = fVar1;
  unaff_EDI[2] = fVar1;
  unaff_EBX[2] = fVar1;
  pfVar5[2] = fVar1;
  return;
}


