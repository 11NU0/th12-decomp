/* longlong __fastcall FUN_004214b0(undefined4 param_1, short * param_2, int param_3, int param_4) @ 004214b0  473 bytes */

#include "th12.h"

longlong __fastcall FUN_004214b0(undefined4 param_1,short *param_2,int param_3,int param_4)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 uVar6;
  short *extraout_EDX;
  short *psVar7;
  short *extraout_EDX_00;
  short *extraout_EDX_01;
  short *extraout_EDX_02;
  short *extraout_EDX_03;
  short *extraout_EDX_04;
  int iVar8;
  longlong lVar9;
  
  iVar8 = *(int *)(param_3 + 0x6788);
  iVar5 = (iVar8 + 1) * 0x4b4;
  sVar2 = (short)DAT_004b0c4c;
  uVar1 = iVar5 + 0x54b8 + param_3;
  if (*(code **)(uVar1 + 0x494) != (code *)0x0) {
    (**(code **)(uVar1 + 0x494))();
    iVar5 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  *(short *)(uVar1 + 0x3c4) = sVar2 + 10;
  lVar9 = FUN_00455630(iVar5,param_2,uVar1);
  psVar7 = (short *)((ulonglong)lVar9 >> 0x20);
  if (param_4 == 0) {
    uVar6 = extraout_ECX_00;
    if (*(code **)(uVar1 + 0x494) != (code *)0x0) {
      (**(code **)(uVar1 + 0x494))();
      uVar6 = extraout_ECX_01;
    }
    *(undefined2 *)(uVar1 + 0x3c4) = 0x11;
    lVar9 = FUN_00455630(uVar6,(short *)0x11,uVar1);
    psVar7 = (short *)((ulonglong)lVar9 >> 0x20);
  }
  iVar8 = iVar8 + 2;
  if (3 < iVar8) {
    iVar8 = 1;
  }
  iVar5 = iVar8 * 0x4b4;
  sVar2 = (short)DAT_004b0c50;
  uVar1 = iVar5 + 0x54b8 + param_3;
  if (*(code **)(uVar1 + 0x494) != (code *)0x0) {
    (**(code **)(uVar1 + 0x494))();
    iVar5 = extraout_ECX_02;
    psVar7 = extraout_EDX_00;
  }
  *(short *)(uVar1 + 0x3c4) = sVar2 + 10;
  lVar9 = FUN_00455630(iVar5,psVar7,uVar1);
  iVar5 = param_4;
  psVar7 = (short *)((ulonglong)lVar9 >> 0x20);
  uVar6 = extraout_ECX_03;
  if (param_4 == 1) {
    if (*(code **)(uVar1 + 0x494) != (code *)0x0) {
      (**(code **)(uVar1 + 0x494))();
      uVar6 = extraout_ECX_04;
    }
    *(undefined2 *)(uVar1 + 0x3c4) = 0x11;
    lVar9 = FUN_00455630(uVar6,(short *)0x11,uVar1);
    psVar7 = (short *)((ulonglong)lVar9 >> 0x20);
    uVar6 = extraout_ECX_05;
  }
  iVar8 = iVar8 + 1;
  if (3 < iVar8) {
    iVar8 = 1;
  }
  sVar2 = (short)DAT_004b0c54;
  uVar1 = iVar8 * 0x4b4 + 0x54b8 + param_3;
  if (*(code **)(uVar1 + 0x494) != (code *)0x0) {
    (**(code **)(uVar1 + 0x494))();
    uVar6 = extraout_ECX_06;
    psVar7 = extraout_EDX_01;
  }
  *(short *)(uVar1 + 0x3c4) = sVar2 + 10;
  lVar9 = FUN_00455630(uVar6,psVar7,uVar1);
  psVar7 = (short *)((ulonglong)lVar9 >> 0x20);
  if (iVar5 == 2) {
    if (*(code **)(uVar1 + 0x494) != (code *)0x0) {
      (**(code **)(uVar1 + 0x494))();
      psVar7 = extraout_EDX_02;
    }
    *(undefined2 *)(uVar1 + 0x3c4) = 0x11;
    FUN_00455630(0x11,psVar7,uVar1);
  }
  else if (iVar5 < 0) {
    return lVar9;
  }
  FUN_004615a0((void *)0x0,*(void **)(param_3 + 0x6d44),&param_4,0x51,0);
  piVar4 = FUN_00461920(param_4,DAT_004ce8cc,param_4);
  psVar7 = (short *)(iVar5 + 7);
  uVar3 = SUB42(psVar7,0);
  uVar6 = extraout_ECX_07;
  if ((code *)piVar4[0x125] != (code *)0x0) {
    (*(code *)piVar4[0x125])();
    uVar6 = extraout_ECX_08;
    psVar7 = extraout_EDX_03;
  }
  *(undefined2 *)(piVar4 + 0xf1) = uVar3;
  lVar9 = FUN_00455630(uVar6,psVar7,(uint)piVar4);
  psVar7 = (short *)((ulonglong)lVar9 >> 0x20);
  sVar2 = *(short *)(&DAT_004b0c4c + iVar5);
  uVar6 = extraout_ECX_09;
  if ((code *)piVar4[0x125] != (code *)0x0) {
    (*(code *)piVar4[0x125])();
    uVar6 = extraout_ECX_10;
    psVar7 = extraout_EDX_04;
  }
  *(short *)(piVar4 + 0xf1) = sVar2 + 10;
  lVar9 = FUN_00455630(uVar6,psVar7,(uint)piVar4);
  return lVar9;
}


