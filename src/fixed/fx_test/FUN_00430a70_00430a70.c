/* undefined __stdcall FUN_00430a70(void) @ 00430a70  361 bytes */

#include "th12.h"

void __stdcall FUN_00430a70(void)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *unaff_EDI;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (DAT_004ce8cc != 0) {
    FUN_0045a3c0();
  }
  pfVar1 = unaff_EDI + 6;
  local_18 = unaff_EDI[3] + *unaff_EDI;
  local_14 = unaff_EDI[4] + unaff_EDI[1];
  local_10 = unaff_EDI[5] + unaff_EDI[2];
  local_c = unaff_EDI[0xf] + *unaff_EDI;
  local_8 = unaff_EDI[0x10] + unaff_EDI[1];
  local_4 = unaff_EDI[0x11] + unaff_EDI[2];
  D3DXMatrixLookAtLH(unaff_EDI + 0x13,&local_c,&local_18,pfVar1);
  fVar3 = (float)(int)unaff_EDI[0x35];
  if ((int)unaff_EDI[0x35] < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar4 = (float)(int)unaff_EDI[0x36];
  if ((int)unaff_EDI[0x36] < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  D3DXMatrixPerspectiveFovLH(unaff_EDI + 0x23,unaff_EDI[0x12],fVar3 / fVar4,0x41f00000,0x44e10000);
  (**(code **)(*DAT_004ce8f0 + 0xb0))(DAT_004ce8f0,2,unaff_EDI + 0x13);
  (**(code **)(*DAT_004ce8f0 + 0xb0))(DAT_004ce8f0,3,unaff_EDI + 0x23);
  pfVar2 = unaff_EDI + 0xc;
  *pfVar2 = unaff_EDI[4] * unaff_EDI[8] - unaff_EDI[5] * unaff_EDI[7];
  unaff_EDI[0xd] = *pfVar1 * unaff_EDI[5] - unaff_EDI[3] * unaff_EDI[8];
  unaff_EDI[0xe] = unaff_EDI[7] * unaff_EDI[3] - *pfVar1 * unaff_EDI[4];
  D3DXVec3Normalize(pfVar2,pfVar2);
  iVar5 = DAT_004ce8cc;
  if (DAT_004ce8cc != 0) {
    *(float *)(DAT_004ce8cc + 0xb0) = unaff_EDI[0x3a];
    *(float *)(iVar5 + 0xb4) = unaff_EDI[0x3b];
  }
  return;
}


