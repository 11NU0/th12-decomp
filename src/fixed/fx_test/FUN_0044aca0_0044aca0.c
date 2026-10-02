/* undefined __fastcall FUN_0044aca0(undefined4 param_1, undefined4 param_2) @ 0044aca0  510 bytes */

#include "th12.h"

void __fastcall FUN_0044aca0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  undefined4 in_EAX;
  void *this;
  undefined4 extraout_ECX;
  int iVar4;
  undefined4 extraout_EDX;
  
  iVar4 = DAT_004b4534;
  switch(in_EAX) {
  case 1:
    piVar1 = (int *)(DAT_004b4534 + 0x30);
    if (*piVar1 == -1) {
      *(int *)(DAT_004b4534 + 0x4c) = *(int *)(DAT_004b4534 + 0x4c) + 1;
    }
    else {
      *(int *)(DAT_004b4534 + 0x48) = *(int *)(DAT_004b4534 + 0x48) + 1;
    }
    if (1.0 < *(float *)(iVar4 + 0x50) != (*(float *)(iVar4 + 0x50) == 1.0)) {
      return;
    }
    switch(*piVar1) {
    default:
      goto switchD_0044acc1_caseD_3;
    case -1:
    case 1:
    case 2:
    case 3:
switchD_0044ad32_caseD_ffffffff:
      fVar3 = (0.032 - (float)DAT_004b0cb0 * 0.002) + *(float *)(iVar4 + 0x50);
    }
    break;
  case 2:
    piVar1 = (int *)(DAT_004b4534 + 0x30);
    if (*piVar1 == -1) {
      *(int *)(DAT_004b4534 + 0x48) = *(int *)(DAT_004b4534 + 0x48) + 1;
    }
    else {
      *(int *)(DAT_004b4534 + 0x4c) = *(int *)(DAT_004b4534 + 0x4c) + 1;
    }
    if (1.0 < *(float *)(iVar4 + 0x50) != (*(float *)(iVar4 + 0x50) == 1.0)) {
      return;
    }
    switch(*piVar1) {
    default:
      goto switchD_0044acc1_caseD_3;
    case -1:
    case 1:
    case 2:
    case 3:
      goto switchD_0044ad32_caseD_ffffffff;
    }
  default:
    goto switchD_0044acc1_caseD_3;
  case 10:
  case 0xb:
  case 0xc:
    if (1.0 < *(float *)(DAT_004b4534 + 0x50) != (*(float *)(DAT_004b4534 + 0x50) == 1.0)) {
      return;
    }
    switch(*(undefined4 *)(DAT_004b4534 + 0x30)) {
    default:
      goto switchD_0044acc1_caseD_3;
    case 0xffffffff:
    case 1:
    case 2:
    case 3:
      fVar3 = *(float *)(DAT_004b4534 + 0x50) + 0.1;
    }
  }
  *(float *)(iVar4 + 0x50) = fVar3;
switchD_0044acc1_caseD_3:
  if (1.0 < *(float *)(iVar4 + 0x50) != (*(float *)(iVar4 + 0x50) == 1.0)) {
    *(undefined4 *)(iVar4 + 0x50) = 0x3f800000;
    FUN_00453e20(*(int *)(iVar4 + 0x34),param_2,*(undefined4 *)(*(int *)(iVar4 + 0x34) + 0x1074));
    FUN_00461970(this,*(int *)(iVar4 + 0x3c));
    iVar2 = *(int *)(iVar4 + 0x30);
    if (iVar2 == -1) {
      if (DAT_004b0c54 == 1) {
        iVar4 = *(int *)(iVar4 + 0x34) + 0x1074;
        FUN_004273f0(iVar4,extraout_EDX,0xd,(float *)iVar4,-1.5707964,2.2);
        return;
      }
      if (DAT_004b0c54 == 2) {
        FUN_004273f0(extraout_ECX,extraout_EDX,0xe,(float *)(*(int *)(iVar4 + 0x34) + 0x1074),
                     -1.5707964,2.2);
        return;
      }
      if (DAT_004b0c54 == 3) {
        iVar4 = *(int *)(iVar4 + 0x34) + 0x1074;
        FUN_004273f0(extraout_ECX,iVar4,0xf,(float *)iVar4,-1.5707964,2.2);
        return;
      }
    }
    else {
      if (iVar2 == 1) {
        iVar4 = *(int *)(iVar4 + 0x34) + 0x1074;
        FUN_004273f0(iVar4,extraout_EDX,4,(float *)iVar4,-1.5707964,2.2);
        return;
      }
      if (iVar2 == 3) {
        FUN_004273f0(extraout_ECX,extraout_EDX,7,(float *)(*(int *)(iVar4 + 0x34) + 0x1074),
                     -1.5707964,2.2);
        return;
      }
    }
  }
  return;
}


