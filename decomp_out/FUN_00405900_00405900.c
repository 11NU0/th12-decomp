/* undefined __stdcall FUN_00405900(void) @ 00405900  883 bytes */
#include "th12.h"

void FUN_00405900(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *unaff_EBX;
  float *unaff_EDI;
  float10 fVar13;
  float local_4c;
  
  local_4c = unaff_EDI[0x11];
  if (0 < (int)local_4c) {
    FUN_00464a80();
    local_4c = unaff_EDI[0x11];
    if ((int)local_4c <= (int)unaff_EDI[0xd]) {
      if (((uint)unaff_EDI[0x10] & 1) == 0) {
        unaff_EDI[0xe] = 0.0;
        unaff_EDI[0xd] = 0.0;
        unaff_EDI[0xc] = -NAN;
        unaff_EDI[0xf] = (float)&DAT_004b2ed0;
        unaff_EDI[0x10] = (float)((uint)unaff_EDI[0x10] | 1);
      }
      unaff_EDI[0xd] = local_4c;
      unaff_EDI[0xc] = (float)((int)local_4c + -1);
      unaff_EDI[0xe] = (float)(int)local_4c;
      unaff_EDI[0x11] = 0.0;
      if (unaff_EDI[0x12] != 9.80909e-45) {
        fVar4 = unaff_EDI[4];
        fVar5 = unaff_EDI[5];
        *unaff_EBX = unaff_EDI[3];
        unaff_EBX[1] = fVar4;
        unaff_EBX[2] = fVar5;
        return;
      }
      fVar4 = unaff_EDI[1];
      fVar5 = unaff_EDI[2];
      *unaff_EBX = *unaff_EDI;
      unaff_EBX[1] = fVar4;
      unaff_EBX[2] = fVar5;
      return;
    }
  }
  fVar4 = unaff_EDI[0x12];
  if (fVar4 == 9.80909e-45) {
    fVar6 = *unaff_EDI;
    fVar4 = unaff_EDI[3];
    fVar7 = unaff_EDI[1];
    fVar8 = unaff_EDI[2];
    fVar5 = unaff_EDI[4];
    *unaff_EBX = fVar4 + fVar6;
    fVar1 = unaff_EDI[5];
    *unaff_EDI = fVar4 + fVar6;
    unaff_EDI[1] = fVar5 + fVar7;
    unaff_EBX[1] = fVar5 + fVar7;
    unaff_EDI[2] = fVar1 + fVar8;
    unaff_EBX[2] = fVar1 + fVar8;
    return;
  }
  if (fVar4 == 2.38221e-44) {
    fVar4 = unaff_EDI[9];
    fVar6 = *unaff_EDI;
    fVar7 = unaff_EDI[1];
    fVar8 = unaff_EDI[2];
    fVar5 = unaff_EDI[10];
    *unaff_EBX = fVar4 + fVar6;
    fVar1 = unaff_EDI[0xb];
    *unaff_EDI = fVar4 + fVar6;
    unaff_EDI[1] = fVar5 + fVar7;
    unaff_EBX[1] = fVar5 + fVar7;
    unaff_EDI[2] = fVar1 + fVar8;
    fVar4 = unaff_EDI[9];
    fVar5 = unaff_EDI[3];
    unaff_EBX[2] = fVar1 + fVar8;
    unaff_EDI[9] = fVar4 + fVar5;
    unaff_EDI[10] = unaff_EDI[10] + unaff_EDI[4];
    unaff_EDI[0xb] = unaff_EDI[0xb] + unaff_EDI[5];
    return;
  }
  if (fVar4 == 1.12104e-44) {
    fVar9 = unaff_EDI[0xe] / (float)(int)local_4c;
    fVar4 = fVar9 - 1.0;
    fVar11 = (fVar9 + fVar9 + 1.0) * fVar4 * fVar4;
    fVar12 = fVar9 * fVar9 * (3.0 - (fVar9 + fVar9));
    fVar10 = (1.0 - fVar9) * (1.0 - fVar9) * fVar9;
    fVar9 = fVar4 * fVar9 * fVar9;
    fVar4 = unaff_EDI[10];
    fVar5 = unaff_EDI[0xb];
    fVar1 = unaff_EDI[7];
    fVar6 = unaff_EDI[8];
    fVar7 = unaff_EDI[4];
    fVar8 = unaff_EDI[5];
    fVar2 = unaff_EDI[1];
    fVar3 = unaff_EDI[2];
    *unaff_EBX = fVar11 * *unaff_EDI + fVar12 * unaff_EDI[3] + fVar10 * unaff_EDI[6] +
                 fVar9 * unaff_EDI[9];
    unaff_EBX[1] = fVar2 * fVar11 + fVar7 * fVar12 + fVar1 * fVar10 + fVar4 * fVar9;
    unaff_EBX[2] = fVar11 * fVar3 + fVar12 * fVar8 + fVar10 * fVar6 + fVar9 * fVar5;
    return;
  }
  fVar13 = FUN_00406020();
  fVar4 = (float)fVar13;
  fVar5 = unaff_EDI[4];
  fVar1 = unaff_EDI[1];
  fVar6 = unaff_EDI[5];
  fVar7 = unaff_EDI[2];
  *unaff_EBX = fVar4 * (unaff_EDI[3] - *unaff_EDI) + *unaff_EDI;
  fVar8 = unaff_EDI[2];
  unaff_EBX[1] = (fVar5 - fVar1) * fVar4 + unaff_EDI[1];
  unaff_EBX[2] = fVar8 + fVar4 * (fVar6 - fVar7);
  return;
}


