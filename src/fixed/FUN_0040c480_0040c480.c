/* undefined4 __fastcall FUN_0040c480(undefined4 param_1, undefined4 param_2) @ 0040c480  1062 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0040c480(undefined4 param_1,undefined4 param_2)

{
  undefined4 stack0xffffffc4;
  undefined4 stack0xffffffbc;
  float *(float *)this;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float unaff_ESI;
  int unaff_EDI;
  float fStack_54;
  float fStack_4c;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fStack_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  FUN_00464a20(param_1,param_2,-1.0);
  if (*(int *)((int)unaff_EDI + 0x998) != 0) {
    this = (float *)((int)unaff_EDI + 0x4bc);
    iVar4 = FUN_00409970(this,*(float *)(*(int *)((int)unaff_EDI + 0x3fc) + 0x38),
                         *(float *)(*(int *)((int)unaff_EDI + 0x3fc) + 0x34));
    if (iVar4 != 0) {
      FUN_0040d4d0(&local_34,*(float *)((int)unaff_EDI + 0x4d8),1.0);
      local_2c = (-384.0 - *(float *)(*(int *)((int)unaff_EDI + 0x3fc) + 0x38)) * 0.5 - *(float *)this;
      pfVar5 = &local_2c;
      local_28 = ((-448.0 - *(float *)(*(int *)((int)unaff_EDI + 0x3fc) + 0x34)) * 0.5 + 224.0) -
                 *(float *)((int)unaff_EDI + 0x4c0);
      pfVar7 = pfVar5;
      D3DXVec2Normalize();
      local_2c = fStack_30 * unaff_ESI - local_34 * fStack_38;
      fStack_1c = unaff_ESI * local_34 + fStack_38 * fStack_30;
      local_34 = (*(float *)(*(int *)((int)unaff_EDI + 0x3fc) + 0x38) + 384.0) * 0.5 - *(float *)this;
      fStack_30 = ((-448.0 - *(float *)(*(int *)((int)unaff_EDI + 0x3fc) + 0x34)) * 0.5 + 224.0) -
                  *(float *)((int)unaff_EDI + 0x4c0);
      D3DXVec2Normalize();
      fStack_30 = fStack_38 * (float)pfVar5 - unaff_ESI * (float)pfVar7;
      fStack_20 = (float)pfVar5 * unaff_ESI + (float)pfVar7 * fStack_38;
      fVar1 = (-384.0 - *(float *)(*(int *)((int)unaff_EDI + 0x3fc) + 0x38)) * 0.5 - *(float *)this;
      D3DXVec2Normalize();
      local_34 = (float)pfVar7 * (float)&local_34 - (float)pfVar5 * (float)&local_34;
      fStack_24 = (float)&local_34 * (float)pfVar5 + (float)&local_34 * (float)pfVar7;
      fVar6 = (*(float *)(*(int *)((int)unaff_EDI + 0x3fc) + 0x38) + 384.0) * 0.5 - *(float *)this;
      fVar8 = ((*(float *)(*(int *)((int)unaff_EDI + 0x3fc) + 0x34) + 448.0) * 0.5 + 224.0) -
              *(float *)((int)unaff_EDI + 0x4c0);
      D3DXVec2Normalize(&stack0xffffffbc,&stack0xffffffbc);
      fVar3 = (float)&local_34 * (float)&stack0xffffffc4 -
              (float)&local_34 * (float)&stack0xffffffc4;
      fVar2 = (float)&stack0xffffffc4 * (float)&local_34 +
              (float)&stack0xffffffc4 * (float)&local_34;
      fStack_54 = -999.0;
      if (((fVar6 < 0.0 != (fVar6 == 0.0)) && (-999.0 < local_34)) && (0.0 <= local_34)) {
        fStack_54 = local_34;
      }
      if (((fVar8 <= 0.0) && (fStack_54 < fStack_30)) && (0.0 <= fStack_30)) {
        fStack_54 = fStack_30;
      }
      if (((fVar1 <= 0.0) && (fStack_54 < local_2c)) && (0.0 <= local_2c)) {
        fStack_54 = local_2c;
      }
      if (((fVar3 <= 0.0) && (fStack_54 < fVar2)) && (0.0 < fVar2)) {
        fStack_54 = fVar2;
      }
      fStack_4c = -999.0;
      if (((0.0 <= fVar6) && (-999.0 <= local_34)) && (0.0 <= local_34)) {
        fStack_4c = local_34;
      }
      if (((0.0 < fVar8 != (fVar8 == 0.0)) &&
          (fStack_4c < fStack_30 != (NANP(fStack_4c) || NANP(fStack_30)))) &&
         (0.0 < fStack_30 != (fStack_30 == 0.0))) {
        fStack_4c = fStack_30;
      }
      if (((0.0 < fVar1 != (fVar1 == 0.0)) &&
          (fStack_4c < local_2c != (NANP(fStack_4c) || NANP(local_2c)))) &&
         (0.0 < local_2c != (local_2c == 0.0))) {
        fStack_4c = local_2c;
      }
      if (((0.0 < fVar3 != (fVar3 == 0.0)) && (fStack_4c < fVar2 != (NANP(fStack_4c) || NANP(fVar2))))
         && (0.0 < fVar2 != (fVar2 == 0.0))) {
        fStack_4c = fVar2;
      }
      if ((fStack_54 < -998.0) || (fStack_4c < -998.0 != NANP(fStack_4c))) goto LAB_0040c892;
    }
  }
  if (0 < *(int *)((int)unaff_EDI + 0x974)) {
    return 0;
  }
LAB_0040c892:
  *(uint *)((int)unaff_EDI + 0x528) = *(uint *)((int)unaff_EDI + 0x528) ^ 0x400;
  return 1;
}


