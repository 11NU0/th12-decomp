/* undefined __stdcall FUN_00450720(void) @ 00450720  226 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450720(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int unaff_ESI;
  float10 fVar2;
  ulonglong uVar3;
  
  fVar2 = FUN_004508b0();
  *(double *)(unaff_ESI + 0x40) = (double)fVar2;
  if (((DAT_004cead3 == '\x01') &&
      (fVar2 = fVar2 - (float10)*(double *)(unaff_ESI + 0x60), fVar2 < (float10)0.016666666666666666
      )) && ((float10)0 < fVar2 != (NAN((float10)0) || NAN(fVar2)))) {
    uVar3 = FUN_004931e0(extraout_ECX,extraout_EDX);
    if (0 < (int)(DWORD)uVar3) {
      Sleep((DWORD)uVar3);
    }
  }
  fVar2 = FUN_004508b0();
  *(double *)(unaff_ESI + 0x68) = (double)fVar2;
  FUN_00450810();
  iVar1 = (**(code **)(*DAT_004ce8f0 + 0x44))(DAT_004ce8f0,0,0,0,0);
  if (iVar1 < 0) {
    FUN_00431700();
    FUN_0044f370();
    (**(code **)(*DAT_004ce8f0 + 0x40))(DAT_004ce8f0,&DAT_004ce9dc);
    FUN_0044f400();
    FUN_00431630();
    FUN_00451200(extraout_ECX_00);
    _DAT_004cee5c = 2;
  }
  fVar2 = FUN_004508b0();
  *(double *)(unaff_ESI + 0x60) = (double)fVar2;
  if (DAT_004b43e0 != 0) {
    FUN_0041cb70();
  }
  if (DAT_004b43cc != 0) {
    FUN_0040dd50();
  }
  return;
}


