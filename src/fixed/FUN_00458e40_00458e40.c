/* undefined __stdcall FUN_00458e40(void) @ 00458e40  673 bytes */
#include "th12.h"

void __stdcall FUN_00458e40(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *unaff_EBX;
  float *unaff_EDI;
  float10 fVar9;
  float local_28;
  
  local_28 = unaff_EDI[0xd];
  if (0 < (int)local_28) {
    FUN_00464a80();
    local_28 = unaff_EDI[0xd];
    if ((int)local_28 <= (int)unaff_EDI[9]) {
      if (((uint)unaff_EDI[0xc] & 1) == 0) {
        unaff_EDI[10] = 0.0;
        unaff_EDI[9] = 0.0;
        unaff_EDI[8] = -NAN;
        unaff_EDI[0xb] = (float)&DAT_004b2ed0;
        unaff_EDI[0xc] = (float)((uint)unaff_EDI[0xc] | 1);
      }
      unaff_EDI[9] = local_28;
      unaff_EDI[8] = (float)((int)local_28 + -1);
      unaff_EDI[10] = (float)(int)local_28;
      unaff_EDI[0xd] = 0.0;
      if (unaff_EDI[0xe] != 9.80909e-45) {
        fVar1 = unaff_EDI[3];
        *unaff_EBX = unaff_EDI[2];
        unaff_EBX[1] = fVar1;
        return;
      }
      fVar1 = *unaff_EDI;
      unaff_EBX[1] = unaff_EDI[1];
      *unaff_EBX = fVar1;
      return;
    }
  }
  fVar1 = unaff_EDI[0xe];
  if (fVar1 == 9.80909e-45) {
    fVar2 = *unaff_EDI;
    fVar3 = unaff_EDI[1];
    fVar1 = unaff_EDI[3];
    *unaff_EDI = unaff_EDI[2] + fVar2;
    *unaff_EBX = unaff_EDI[2] + fVar2;
    unaff_EDI[1] = fVar1 + fVar3;
    unaff_EBX[1] = fVar1 + fVar3;
    return;
  }
  if (fVar1 == 2.38221e-44) {
    fVar2 = *unaff_EDI;
    fVar4 = unaff_EDI[1];
    fVar1 = unaff_EDI[7];
    *unaff_EDI = unaff_EDI[6] + fVar2;
    *unaff_EBX = unaff_EDI[6] + fVar2;
    unaff_EDI[1] = fVar1 + fVar4;
    fVar2 = unaff_EDI[6];
    fVar3 = unaff_EDI[2];
    unaff_EBX[1] = fVar1 + fVar4;
    unaff_EDI[6] = fVar2 + fVar3;
    unaff_EDI[7] = unaff_EDI[7] + unaff_EDI[3];
    return;
  }
  if (fVar1 == 1.12104e-44) {
    fVar5 = unaff_EDI[10] / (float)(int)local_28;
    fVar1 = fVar5 - 1.0;
    fVar7 = (fVar5 + fVar5 + 1.0) * fVar1 * fVar1;
    fVar8 = fVar5 * fVar5 * (3.0 - (fVar5 + fVar5));
    fVar6 = (1.0 - fVar5) * (1.0 - fVar5) * fVar5;
    fVar5 = fVar1 * fVar5 * fVar5;
    fVar1 = unaff_EDI[7];
    fVar2 = unaff_EDI[5];
    fVar3 = unaff_EDI[3];
    fVar4 = unaff_EDI[1];
    *unaff_EBX = fVar7 * *unaff_EDI + fVar8 * unaff_EDI[2] + fVar6 * unaff_EDI[4] +
                 fVar5 * unaff_EDI[6];
    unaff_EBX[1] = fVar7 * fVar4 + fVar8 * fVar3 + fVar6 * fVar2 + fVar5 * fVar1;
    return;
  }
  fVar9 = FUN_00459360();
  fVar1 = unaff_EDI[3];
  fVar2 = unaff_EDI[1];
  fVar3 = unaff_EDI[1];
  *unaff_EBX = (float)fVar9 * (unaff_EDI[2] - *unaff_EDI) + *unaff_EDI;
  unaff_EBX[1] = fVar3 + (float)fVar9 * (fVar1 - fVar2);
  return;
}


