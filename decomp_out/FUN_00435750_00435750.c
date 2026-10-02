/* undefined __thiscall FUN_00435750(void * this, int param_1) @ 00435750  101 bytes */
#include "th12.h"

void __thiscall FUN_00435750(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  ulonglong uVar7;
  
  piVar2 = DAT_004ce8cc;
  piVar3 = FUN_00461920(this,(int)DAT_004ce8cc,param_1);
  iVar1 = *(int *)(piVar3[0xfd] + 4);
  uVar7 = FUN_004931e0(extraout_ECX,extraout_EDX);
  iVar4 = (int)uVar7;
  uVar7 = FUN_004931e0(extraout_ECX_00,(int)(uVar7 >> 0x20));
  iVar5 = (int)uVar7;
  uVar7 = FUN_004931e0(extraout_ECX_01,(int)(uVar7 >> 0x20));
  iVar6 = (int)uVar7;
  uVar7 = FUN_004931e0(extraout_ECX_02,(int)(uVar7 >> 0x20));
  FUN_004356d0((int *)piVar3[0xfe],piVar2,*(int *)piVar3[0xfe],iVar1,(int)uVar7,iVar6,iVar5,iVar4);
  return;
}


