/* undefined __stdcall FUN_00459cf0(void) @ 00459cf0  315 bytes */
#include "th12.h"

void __stdcall FUN_00459cf0(void)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  int unaff_EDI;
  undefined4 uVar3;
  
  if ((&DAT_004b5640)[in_EAX] == ((byte)(*(uint *)((int)unaff_EDI + 0x47c) >> 5) & 7))
  goto switchD_00459d2d_caseD_7;
  FUN_0045a3c0();
  bVar1 = (byte)(*(uint *)((int)unaff_EDI + 0x47c) >> 5) & 7;
  (&DAT_004b5640)[in_EAX] = bVar1;
  switch(bVar1) {
  case 0:
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x13,5);
    uVar3 = 6;
    break;
  case 1:
  case 2:
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x13,5);
    uVar3 = 2;
    break;
  case 3:
    uVar3 = 2;
    goto LAB_00459d9a;
  case 4:
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x13,10);
    uVar3 = 6;
    break;
  case 5:
    uVar3 = 9;
LAB_00459d9a:
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x13,uVar3);
    uVar3 = 1;
    break;
  case 6:
    (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x13,4);
    uVar3 = 6;
    break;
  default:
    goto switchD_00459d2d_caseD_7;
  }
  (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0x14,uVar3);
switchD_00459d2d_caseD_7:
  if ((&DAT_004b5646)[in_EAX] != ((byte)(*(uint *)((int)unaff_EDI + 0x480) >> 1) & 1)) {
    FUN_0045a3c0();
    uVar2 = *(uint *)((int)unaff_EDI + 0x480) >> 1;
    (&DAT_004b5646)[in_EAX] = (byte)uVar2 & 1;
    if ((uVar2 & 1) == 0) {
      (**(code **)(*DAT_004ce8f0 + 0x114))(DAT_004ce8f0,0,5,2);
      uVar3 = 2;
    }
    else {
      (**(code **)(*DAT_004ce8f0 + 0x114))(DAT_004ce8f0,0,5,1);
      uVar3 = 1;
    }
    (**(code **)(*DAT_004ce8f0 + 0x114))(DAT_004ce8f0,0,6,uVar3);
  }
  *(int *)((int)in_EAX + 0xa8) = *(int *)((int)in_EAX + 0xa8) + 1;
  return;
}


