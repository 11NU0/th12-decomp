/* undefined __stdcall FUN_00459a60(uint param_1) @ 00459a60  617 bytes */
#include "th12.h"

void FUN_00459a60(uint param_1)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = param_1;
  if ((&DAT_004b5640)[in_EAX] == ((byte)(*(uint *)(param_1 + 0x47c) >> 5) & 7))
  goto switchD_00459aa8_caseD_7;
  FUN_0045a3c0();
  bVar1 = (byte)(*(uint *)(param_1 + 0x47c) >> 5) & 7;
  (&DAT_004b5640)[in_EAX] = bVar1;
  switch(bVar1) {
  case 0:
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x13,5);
    uVar5 = 6;
    break;
  case 1:
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x13,5);
    uVar5 = 2;
    break;
  case 2:
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x13,5);
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x14,2);
    uVar5 = 3;
    goto LAB_00459b6a;
  case 3:
    uVar5 = 2;
    goto LAB_00459b44;
  case 4:
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x13,10);
    uVar5 = 6;
    break;
  case 5:
    uVar5 = 9;
LAB_00459b44:
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x13,uVar5);
    uVar5 = 1;
    break;
  case 6:
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x13,4);
    uVar5 = 6;
    break;
  default:
    goto switchD_00459aa8_caseD_7;
  }
  (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x14,uVar5);
  uVar5 = 1;
LAB_00459b6a:
  (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0xab,uVar5);
switchD_00459aa8_caseD_7:
  if ((*(byte *)(param_1 + 0x47e) & 1) == 0) {
    uVar3 = *(uint *)(param_1 + 0x3bc);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x3c0);
  }
  param_1 = uVar3;
  if (*(int *)(in_EAX + 0x88ed50) != 0) {
    uVar2 = (uVar3 >> 0x10 & 0xff) * (uint)*(byte *)(in_EAX + 0x88ed4e) >> 7;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    param_1._3_1_ = (byte)(uVar3 >> 0x18);
    bVar1 = param_1._3_1_;
    param_1._0_3_ = CONCAT12((char)uVar2,(short)uVar3);
    uVar3 = (uint)*(byte *)(in_EAX + 0x88ed4d) * (uVar3 >> 8 & 0xff) >> 7;
    if (0xff < uVar3) {
      uVar3 = 0xff;
    }
    uVar2 = (uint)(uint3)param_1;
    uVar2 = (uint)*(byte *)(in_EAX + 0x88ed4c) * (uVar2 & 0xff) >> 7;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    param_1 = CONCAT31(CONCAT21(param_1._2_2_,(char)uVar3),(char)uVar2);
    uVar3 = (uint)*(byte *)(in_EAX + 0x88ed4f) * (uint)bVar1 >> 7;
    if (0xff < uVar3) {
      uVar3 = 0xff;
    }
    param_1 = CONCAT13((char)uVar3,(uint3)param_1);
  }
  if (*(uint *)(&DAT_004b5638 + in_EAX) != param_1) {
    FUN_0045a3c0();
    *(uint *)(&DAT_004b5638 + in_EAX) = param_1;
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x3c,param_1);
  }
  if ((&DAT_004b5646)[in_EAX] != ((byte)(*(uint *)(uVar4 + 0x480) >> 1) & 1)) {
    FUN_0045a3c0();
    uVar4 = *(uint *)(uVar4 + 0x480) >> 1;
    (&DAT_004b5646)[in_EAX] = (byte)uVar4 & 1;
    if ((uVar4 & 1) == 0) {
      (**(code **)(*DAT_004ce8f0 + 0x114))(DAT_004ce8f0,0,5,2);
      uVar5 = 2;
    }
    else {
      (**(code **)(*DAT_004ce8f0 + 0x114))(DAT_004ce8f0,0,5,1);
      uVar5 = 1;
    }
    (**(code **)(*DAT_004ce8f0 + 0x114))(DAT_004ce8f0,0,6,uVar5);
  }
  *(int *)(in_EAX + 0xa8) = *(int *)(in_EAX + 0xa8) + 1;
  return;
}


