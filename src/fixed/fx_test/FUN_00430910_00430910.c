/* undefined __stdcall FUN_00430910(void) @ 00430910  344 bytes */

#include "th12.h"

void __stdcall FUN_00430910(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined in_DL;
  undefined extraout_DL;
  int unaff_EDI;
  float10 fVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (DAT_004ce8cc != 0) {
    FUN_0045a3c0();
    in_DL = extraout_DL;
  }
  fVar1 = (float)*(int *)(unaff_EDI + 0xd4);
  if (*(int *)(unaff_EDI + 0xd4) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar3 = (float)*(int *)(unaff_EDI + 0xd8);
  if (*(int *)(unaff_EDI + 0xd8) < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar2 = fVar3 * 0.5;
  local_c = fVar1 * 0.5;
  local_8 = fVar2;
  fVar5 = FUN_004317d0(*(int *)(unaff_EDI + 0xd8),in_DL,0x3e20d97c);
  local_4 = (float)((float10)fVar2 / fVar5);
  local_10 = 0;
  local_24 = 0;
  local_20 = 0xbf800000;
  local_1c = 0;
  local_18 = fVar1 * 0.5;
  local_14 = fVar2;
  D3DXMatrixLookAtLH(unaff_EDI + 0x4c,&local_c,&local_18,&local_24);
  D3DXMatrixPerspectiveFovLH(unaff_EDI + 0x8c,0x3ea0d97c,fVar1 / fVar3,0x3f800000,0x461c4000);
  (**(code **)(*DAT_004ce8f0 + 0xb0))(DAT_004ce8f0,2,unaff_EDI + 0x4c);
  (**(code **)(*DAT_004ce8f0 + 0xb0))(DAT_004ce8f0,3,unaff_EDI + 0x8c);
  iVar4 = DAT_004ce8cc;
  if (DAT_004ce8cc != 0) {
    *(undefined4 *)(DAT_004ce8cc + 0xb0) = *(undefined4 *)(unaff_EDI + 0xe8);
    *(undefined4 *)(iVar4 + 0xb4) = *(undefined4 *)(unaff_EDI + 0xec);
  }
  return;
}


