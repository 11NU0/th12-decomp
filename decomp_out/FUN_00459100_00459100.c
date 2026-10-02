/* float10 __stdcall FUN_00459100(void) @ 00459100  331 bytes */
#include "th12.h"

float10 FUN_00459100(void)

{
  float fVar1;
  float *unaff_EDI;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_c;
  
  local_c = unaff_EDI[9];
  if (0 < (int)local_c) {
    FUN_00464a80();
    local_c = unaff_EDI[9];
    if ((int)local_c <= (int)unaff_EDI[5]) {
      if (((uint)unaff_EDI[8] & 1) == 0) {
        unaff_EDI[6] = 0.0;
        unaff_EDI[5] = 0.0;
        unaff_EDI[4] = -NAN;
        unaff_EDI[7] = (float)&DAT_004b2ed0;
        unaff_EDI[8] = (float)((uint)unaff_EDI[8] | 1);
      }
      unaff_EDI[5] = local_c;
      unaff_EDI[4] = (float)((int)local_c + -1);
      unaff_EDI[6] = (float)(int)local_c;
      unaff_EDI[9] = 0.0;
      if (unaff_EDI[10] != 9.80909e-45) {
        return (float10)unaff_EDI[1];
      }
      goto LAB_0045919e;
    }
  }
  fVar1 = unaff_EDI[10];
  if (fVar1 == 9.80909e-45) {
    fVar1 = *unaff_EDI;
    *unaff_EDI = unaff_EDI[1] + fVar1;
    return (float10)(unaff_EDI[1] + fVar1);
  }
  if (fVar1 != 2.38221e-44) {
    if (fVar1 == 1.12104e-44) {
      fVar2 = (float10)(unaff_EDI[6] / (float)(int)local_c);
      fVar3 = (float10)1;
      fVar4 = fVar2 - fVar3;
      return (float10)((float)(fVar2 * fVar4 * fVar2) * unaff_EDI[3] +
                      (float)((float10)(double)(fVar3 - fVar2) * (float10)(double)(fVar3 - fVar2) *
                             fVar2) * unaff_EDI[2] +
                      (float)((fVar2 + fVar2 + fVar3) * fVar4 * fVar4) * *unaff_EDI +
                      (float)(((float10)3.0 - (fVar2 + fVar2)) * fVar2 * fVar2) * unaff_EDI[1]);
    }
    fVar3 = FUN_00459390();
    return (float10)(float)(((float10)unaff_EDI[1] - (float10)*unaff_EDI) * fVar3 +
                           (float10)*unaff_EDI);
  }
  *unaff_EDI = unaff_EDI[3] + *unaff_EDI;
  unaff_EDI[3] = unaff_EDI[1] + unaff_EDI[3];
LAB_0045919e:
  return (float10)*unaff_EDI;
}


