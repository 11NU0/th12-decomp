/* undefined __fastcall FUN_004589e0(int param_1, undefined4 param_2) @ 004589e0  768 bytes */
#include "th12.h"

void __fastcall FUN_004589e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_EAX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  int *unaff_EBX;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  if (0 < in_EAX[0x11]) {
    uVar7 = FUN_00464a80();
    param_2 = (undefined4)(uVar7 >> 0x20);
    param_1 = in_EAX[0x11];
    if (param_1 <= in_EAX[0xd]) {
      if ((in_EAX[0x10] & 1U) == 0) {
        in_EAX[0xe] = 0;
        in_EAX[0xd] = 0;
        in_EAX[0xc] = -999999;
        in_EAX[0xf] = (int)&DAT_004b2ed0;
        in_EAX[0x10] = in_EAX[0x10] | 1;
      }
      in_EAX[0xd] = param_1;
      in_EAX[0xc] = param_1 + -1;
      in_EAX[0xe] = (int)(float)param_1;
      in_EAX[0x11] = 0;
      if (in_EAX[0x12] != 7) {
        iVar1 = in_EAX[4];
        iVar2 = in_EAX[5];
        *unaff_EBX = in_EAX[3];
        unaff_EBX[1] = iVar1;
        unaff_EBX[2] = iVar2;
        return;
      }
      iVar1 = in_EAX[1];
      iVar2 = in_EAX[2];
      *unaff_EBX = *in_EAX;
      unaff_EBX[1] = iVar1;
      unaff_EBX[2] = iVar2;
      return;
    }
  }
  iVar1 = in_EAX[0x12];
  if (iVar1 == 7) {
    iVar1 = *in_EAX;
    iVar2 = in_EAX[1];
    iVar3 = in_EAX[2];
    iVar4 = in_EAX[4];
    iVar5 = in_EAX[5];
    *in_EAX = in_EAX[3] + iVar1;
    in_EAX[1] = iVar4 + iVar2;
    in_EAX[2] = iVar5 + iVar3;
    *unaff_EBX = in_EAX[3] + iVar1;
    unaff_EBX[1] = iVar4 + iVar2;
    unaff_EBX[2] = iVar5 + iVar3;
    return;
  }
  if (iVar1 == 0x11) {
    iVar1 = in_EAX[9];
    iVar2 = *in_EAX;
    iVar3 = in_EAX[1];
    iVar4 = in_EAX[2];
    iVar5 = in_EAX[10];
    iVar6 = in_EAX[0xb];
    *in_EAX = iVar1 + iVar2;
    in_EAX[1] = iVar5 + iVar3;
    in_EAX[2] = iVar6 + iVar4;
    in_EAX[9] = in_EAX[9] + in_EAX[3];
    in_EAX[10] = in_EAX[10] + in_EAX[4];
    in_EAX[0xb] = in_EAX[0xb] + in_EAX[5];
    *unaff_EBX = iVar1 + iVar2;
    unaff_EBX[1] = iVar5 + iVar3;
    unaff_EBX[2] = iVar6 + iVar4;
    return;
  }
  if (iVar1 == 8) {
    uVar7 = FUN_004931e0(param_1,param_2);
    uVar8 = FUN_004931e0(extraout_ECX,(int)(uVar7 >> 0x20));
    uVar9 = FUN_004931e0(extraout_ECX_00,(int)(uVar8 >> 0x20));
    uVar10 = FUN_004931e0(extraout_ECX_01,(int)(uVar9 >> 0x20));
    uVar11 = FUN_004931e0(extraout_ECX_02,(int)(uVar10 >> 0x20));
    uVar12 = FUN_004931e0(extraout_ECX_03,(int)(uVar11 >> 0x20));
    uVar13 = FUN_004931e0(extraout_ECX_04,(int)(uVar12 >> 0x20));
    uVar14 = FUN_004931e0(extraout_ECX_05,(int)(uVar13 >> 0x20));
    uVar15 = FUN_004931e0(extraout_ECX_06,(int)(uVar14 >> 0x20));
    uVar16 = FUN_004931e0(extraout_ECX_07,(int)(uVar15 >> 0x20));
    uVar17 = FUN_004931e0(extraout_ECX_08,(int)(uVar16 >> 0x20));
    uVar18 = FUN_004931e0(extraout_ECX_09,(int)(uVar17 >> 0x20));
    *unaff_EBX = (int)uVar16 + (int)uVar13 + (int)uVar10 + (int)uVar7;
    unaff_EBX[1] = (int)uVar17 + (int)uVar14 + (int)uVar11 + (int)uVar8;
    unaff_EBX[2] = (int)uVar18 + (int)uVar15 + (int)uVar12 + (int)uVar9;
    return;
  }
  FUN_00459300();
  iVar1 = *in_EAX;
  iVar2 = in_EAX[1];
  iVar3 = in_EAX[2];
  uVar7 = FUN_004931e0(in_EAX[4] - iVar2,in_EAX[5] - iVar3);
  uVar8 = FUN_004931e0(extraout_ECX_10,(int)(uVar7 >> 0x20));
  uVar9 = FUN_004931e0(extraout_ECX_11,(int)(uVar8 >> 0x20));
  *unaff_EBX = iVar1 + (int)uVar7;
  unaff_EBX[1] = iVar2 + (int)uVar8;
  unaff_EBX[2] = (int)uVar9 + iVar3;
  return;
}


