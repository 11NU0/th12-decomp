/* undefined __stdcall FUN_00464d50(void) @ 00464d50  84 bytes */
#include "th12.h"

void FUN_00464d50(void)

{
  int unaff_ESI;
  float10 fVar1;
  
  if ((*(byte *)(unaff_ESI + 0x30) & 1) == 0) {
    FUN_00465390((void *)(unaff_ESI + 0xc),*(float *)(unaff_ESI + 0x1c),*(float *)(unaff_ESI + 0x18)
                );
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
    return;
  }
  *(float *)(unaff_ESI + 0x20) = *(float *)(unaff_ESI + 0x24) + *(float *)(unaff_ESI + 0x20);
  fVar1 = FUN_004646e0(*(float *)(unaff_ESI + 0x18) + *(float *)(unaff_ESI + 0x1c));
  fVar1 = FUN_004646e0((float)fVar1);
  *(float *)(unaff_ESI + 0x1c) = (float)fVar1;
  return;
}


