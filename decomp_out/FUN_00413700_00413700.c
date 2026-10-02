/* undefined __stdcall FUN_00413700(void) @ 00413700  306 bytes */
#include "th12.h"

void FUN_00413700(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int unaff_ESI;
  
  pfVar1 = (float *)(unaff_ESI + 0x34);
  *(float *)(unaff_ESI + 0x40) =
       (*(float *)(unaff_ESI + 0x9c) + *(float *)(unaff_ESI + 0x68)) - *pfVar1;
  *(float *)(unaff_ESI + 0x44) =
       (*(float *)(unaff_ESI + 0xa0) + *(float *)(unaff_ESI + 0x6c)) - *(float *)(unaff_ESI + 0x38);
  *(float *)(unaff_ESI + 0x48) =
       (*(float *)(unaff_ESI + 0xa4) + *(float *)(unaff_ESI + 0x70)) - *(float *)(unaff_ESI + 0x3c);
  FUN_00464db0();
  if ((*(byte *)(unaff_ESI + 0x16ba) & 1) != 0) {
    fVar2 = *(float *)(unaff_ESI + 0x15fc) * 0.5;
    fVar3 = *(float *)(unaff_ESI + 0x15f4) - fVar2;
    if (*pfVar1 < fVar3 == (NAN(*pfVar1) || NAN(fVar3))) {
      fVar2 = *(float *)(unaff_ESI + 0x15f4) + fVar2;
      if (fVar2 < *pfVar1) {
        *pfVar1 = fVar2;
      }
    }
    else {
      *pfVar1 = fVar3;
    }
    fVar2 = *(float *)(unaff_ESI + 0x1600) * 0.5;
    fVar3 = *(float *)(unaff_ESI + 0x15f8) - fVar2;
    if ((*(float *)(unaff_ESI + 0x38) < fVar3 != (NAN(*(float *)(unaff_ESI + 0x38)) || NAN(fVar3)))
       || (fVar3 = fVar2 + *(float *)(unaff_ESI + 0x15f8), fVar3 < *(float *)(unaff_ESI + 0x38))) {
      *(float *)(unaff_ESI + 0x38) = fVar3;
    }
    *(float *)(unaff_ESI + 0x68) = *pfVar1 - *(float *)(unaff_ESI + 0x9c);
    *(float *)(unaff_ESI + 0x6c) = *(float *)(unaff_ESI + 0x38) - *(float *)(unaff_ESI + 0xa0);
    *(float *)(unaff_ESI + 0x70) = *(float *)(unaff_ESI + 0x3c) - *(float *)(unaff_ESI + 0xa4);
  }
  return;
}


