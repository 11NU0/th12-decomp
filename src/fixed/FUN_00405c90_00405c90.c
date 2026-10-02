/* undefined __stdcall FUN_00405c90(float * param_1) @ 00405c90  737 bytes */
#include "th12.h"

void __stdcall FUN_00405c90(float *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *unaff_EBX;
  float *pfVar4;
  float10 fVar5;
  float fVar6;
  float local_d4;
  float local_cc [4];
  float local_bc;
  float local_b8;
  float local_b0 [4];
  float local_a0;
  float local_9c;
  float local_94;
  float local_90;
  
  local_d4 = unaff_EBX[0x21];
  if (0 < (int)local_d4) {
    FUN_00464a80();
    local_d4 = unaff_EBX[0x21];
    if ((int)local_d4 <= (int)unaff_EBX[0x1d]) {
      if (((uint)unaff_EBX[0x20] & 1) == 0) {
        unaff_EBX[0x1e] = 0.0;
        unaff_EBX[0x1d] = 0.0;
        unaff_EBX[0x1c] = -NAN;
        unaff_EBX[0x1f] = (float)&DAT_004b2ed0;
        unaff_EBX[0x20] = (float)((uint)unaff_EBX[0x20] | 1);
      }
      unaff_EBX[0x1d] = local_d4;
      unaff_EBX[0x1c] = (float)((int)local_d4 + -1);
      unaff_EBX[0x1e] = (float)(int)local_d4;
      iVar3 = 7;
      unaff_EBX[0x21] = 0.0;
      if (unaff_EBX[0x22] == 9.80909e-45) {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *param_1 = *unaff_EBX;
          unaff_EBX = unaff_EBX + 1;
          param_1 = param_1 + 1;
        }
        return;
      }
      pfVar2 = unaff_EBX + 7;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_1 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        param_1 = param_1 + 1;
      }
      return;
    }
  }
  fVar6 = unaff_EBX[0x22];
  if (fVar6 == 9.80909e-45) {
    local_cc[0] = unaff_EBX[7];
    pfVar2 = unaff_EBX;
    pfVar4 = local_b0;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar4 = pfVar4 + 1;
    }
    local_cc[0] = local_cc[0] + local_b0[0];
    local_cc[1] = unaff_EBX[8] + local_b0[1];
    local_cc[2] = unaff_EBX[9] + local_b0[2];
    local_cc[3] = unaff_EBX[10] + local_b0[3];
    local_bc = unaff_EBX[0xb] + local_a0;
    local_b8 = unaff_EBX[0xc] + local_9c;
    FUN_00406250((int)local_cc);
    pfVar2 = local_cc;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *unaff_EBX = *pfVar2;
      pfVar2 = pfVar2 + 1;
      unaff_EBX = unaff_EBX + 1;
    }
    pfVar2 = local_cc;
  }
  else if (fVar6 == 2.38221e-44) {
    local_cc[0] = unaff_EBX[0x15];
    pfVar2 = unaff_EBX;
    pfVar4 = local_b0;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar4 = pfVar4 + 1;
    }
    local_cc[0] = local_cc[0] + local_b0[0];
    local_cc[1] = unaff_EBX[0x16] + local_b0[1];
    local_cc[2] = unaff_EBX[0x17] + local_b0[2];
    local_cc[3] = unaff_EBX[0x18] + local_b0[3];
    local_bc = unaff_EBX[0x19] + local_a0;
    local_b8 = unaff_EBX[0x1a] + local_9c;
    FUN_00406250((int)local_cc);
    pfVar2 = local_cc;
    pfVar4 = unaff_EBX;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar4 = pfVar4 + 1;
    }
    pfVar2 = (( float * (__fastcall *)())FUN_00406110)(unaff_EBX + 0x15);
    pfVar4 = unaff_EBX + 0x15;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar4 = pfVar4 + 1;
    }
    pfVar2 = local_cc;
  }
  else {
    if (fVar6 == 1.12104e-44) {
      fVar6 = unaff_EBX[0x1e] / (float)(int)local_d4;
      fVar1 = fVar6 - 1.0;
      local_94 = fVar6 * fVar6 * (3.0 - (fVar6 + fVar6));
      local_90 = (1.0 - fVar6) * (1.0 - fVar6) * fVar6;
      FUN_004060d0(fVar1 * fVar6 * fVar6);
      FUN_004060d0(local_90);
      FUN_004060d0(local_94);
      pfVar2 = (( float * (__stdcall *)())FUN_004060d0)((fVar6 + fVar6 + 1.0) * fVar1 * fVar1);
      pfVar2 = (( float * (__fastcall *)())FUN_00406110)(pfVar2);
      pfVar2 = (( float * (__fastcall *)())FUN_00406110)(pfVar2);
    }
    else {
      fVar5 = FUN_00406050();
      fVar6 = (float)fVar5;
      FUN_00406090(unaff_EBX + 7);
      pfVar2 = (( float * (__stdcall *)())FUN_004060d0)(fVar6);
    }
    pfVar2 = (( float * (__fastcall *)())FUN_00406110)(pfVar2);
  }
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


