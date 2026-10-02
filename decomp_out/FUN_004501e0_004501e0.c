/* undefined __stdcall FUN_004501e0(void) @ 004501e0  525 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004501e0(void)

{
  uint *puVar1;
  int *piVar2;
  DWORD dwMilliseconds;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int unaff_ESI;
  float10 fVar6;
  ulonglong uVar7;
  int local_c;
  uint local_8;
  
  fVar6 = FUN_004508b0();
  *(double *)(unaff_ESI + 0x40) = (double)fVar6;
  uVar7 = FUN_004931e0(extraout_ECX,extraout_EDX);
  uVar4 = (uint)uVar7;
  puVar1 = (uint *)(unaff_ESI + 0x80 + *(int *)(unaff_ESI + 0x78) * 0xc);
  *(uint *)(unaff_ESI + 0x74) = uVar4;
  if ((int)*puVar1 < (int)uVar4) {
    piVar2 = (int *)(unaff_ESI + (*(int *)(unaff_ESI + 0x78) * 3 + 0x21) * 4);
    *piVar2 = *piVar2 + 1;
    iVar5 = *(int *)(unaff_ESI + 0x78);
    if (*(int *)(unaff_ESI + (iVar5 * 3 + 0x21) * 4) < 0xf) goto LAB_0045026b;
    if (*(int *)(unaff_ESI + 0x80 + iVar5 * 0xc) < *(int *)(unaff_ESI + 0x7c + iVar5 * 0xc)) {
      piVar2 = (int *)(unaff_ESI + iVar5 * 0xc + 0x80);
      *piVar2 = *piVar2 + 1;
    }
  }
  else {
    *puVar1 = ((int)uVar4 < 0) - 1 & uVar4;
  }
  *(undefined4 *)(unaff_ESI + (*(int *)(unaff_ESI + 0x78) + 0xb) * 0xc) = 0;
LAB_0045026b:
  if (*(int *)(unaff_ESI + 0x74) < 0) {
    *(undefined4 *)(unaff_ESI + 0x74) = 0;
  }
  local_8 = 0;
  fVar6 = FUN_004508b0();
  if (fVar6 < (float10)*(double *)(unaff_ESI + 0x68) !=
      (NAN(fVar6) || NAN((float10)*(double *)(unaff_ESI + 0x68)))) {
    *(double *)(unaff_ESI + 0x68) = (double)fVar6;
  }
  fVar6 = fVar6 - (float10)*(double *)(unaff_ESI + 0x68);
  if (fVar6 < (float10)0.01694915254237288 == (NAN(fVar6) || NAN((float10)0.01694915254237288))) {
    piVar2 = (int *)(unaff_ESI + 0x80 + *(int *)(unaff_ESI + 0x78) * 0xc);
    if (0 < *(int *)(unaff_ESI + 0x80 + *(int *)(unaff_ESI + 0x78) * 0xc)) {
      *piVar2 = *piVar2 + -1;
    }
  }
  else {
    fVar6 = FUN_004508b0();
    fVar6 = fVar6 - (float10)*(double *)(unaff_ESI + 0x68);
    if (fVar6 < (float10)0.013 != (NAN(fVar6) || NAN((float10)0.013))) {
      do {
        Sleep(1);
        fVar6 = FUN_004508b0();
        fVar6 = fVar6 - (float10)*(double *)(unaff_ESI + 0x68);
      } while (fVar6 < (float10)0.013 != (NAN(fVar6) || NAN((float10)0.013)));
    }
    uVar4 = local_8;
    local_c = 0;
    iVar5 = (**(code **)(*DAT_004ce8f0 + 0x4c))(DAT_004ce8f0,0,&local_c);
    while ((((uVar3 = local_8, local_8 = uVar3, iVar5 == 0 && (uVar4 <= uVar3)) && (uVar3 != 0)) &&
           (local_c == 0))) {
      iVar5 = (**(code **)(*DAT_004ce8f0 + 0x4c))(DAT_004ce8f0,0,&local_c);
      uVar4 = uVar3;
    }
  }
  fVar6 = FUN_004508b0();
  *(double *)(unaff_ESI + 0x68) = (double)fVar6;
  FUN_00450810();
  iVar5 = (**(code **)(*DAT_004ce8f0 + 0x44))(DAT_004ce8f0,0,0,0,0);
  if (iVar5 < 0) {
    FUN_00431700();
    FUN_0044f370();
    (**(code **)(*DAT_004ce8f0 + 0x40))(DAT_004ce8f0,&DAT_004ce9dc);
    FUN_0044f400();
    FUN_00431630();
    FUN_00451200(extraout_ECX_00);
    _DAT_004cee5c = 2;
  }
  if (DAT_004b43e0 != 0) {
    FUN_0041cb70();
  }
  if (DAT_004b43cc != 0) {
    FUN_0040dd50();
  }
  FUN_004508b0();
  dwMilliseconds = *(DWORD *)(unaff_ESI + 0x80 + *(int *)(unaff_ESI + 0x78) * 0xc);
  if (0 < (int)dwMilliseconds) {
    Sleep(dwMilliseconds);
  }
  fVar6 = FUN_004508b0();
  *(double *)(unaff_ESI + 0x60) = (double)fVar6;
  return;
}


