/* undefined4 __fastcall FUN_00453fa0(undefined4 * param_1, int * param_2) @ 00453fa0  1257 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00453fa0(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  undefined4 *extraout_ECX_07;
  undefined4 *extraout_ECX_08;
  undefined4 *extraout_ECX_09;
  undefined4 *extraout_ECX_10;
  undefined4 *extraout_ECX_11;
  undefined extraout_DL;
  int *extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar6;
  uint unaff_EBX;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  float fStack_4;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf200);
    DAT_004cf223 = DAT_004cf223 + '\x01';
    param_1 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  if (DAT_004cf4f8 == 0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf200);
      DAT_004cf223 = DAT_004cf223 + -1;
    }
    return 0;
  }
  piVar7 = &DAT_004d14d4;
LAB_00453ff5:
  bVar1 = false;
  switch(*piVar7) {
  case 1:
    if ((DAT_004ceae8 & 0x10) == 0) {
      FUN_004538e0(piVar7[1]);
      bVar1 = true;
      param_1 = extraout_ECX_02;
    }
    else {
      if (piVar7[2] != 0) goto LAB_004543a1;
      FUN_00453c30();
      FUN_004538e0(piVar7[1]);
      bVar1 = true;
      param_1 = extraout_ECX_01;
    }
    break;
  case 2:
    if (((DAT_004ceae8 & 0x10) == 0) || (piVar7[1] < 0)) {
      param_1 = DAT_004d4754;
      if (DAT_004d4754 != (undefined4 *)0x0) {
        iVar4 = piVar7[2];
        if (iVar4 == 0) {
          iVar4 = 0;
LAB_0045439c:
          FUN_00466460(iVar4);
          goto LAB_004543a1;
        }
        if (iVar4 != 1) {
          if (iVar4 == 2) {
            if (piVar7[1] < 0) {
              piVar3 = piVar7 + 3;
            }
            else {
              piVar3 = (int *)(&DAT_004d3654 + piVar7[1] * 0x100);
            }
            FUN_00453670(piVar3,0x4cf4e8);
            FUN_00466bc0(DAT_004d4754[3],extraout_DL,0);
          }
          else {
            if (iVar4 == 3) {
              piVar3 = (int *)FUN_004662f0((int)DAT_004d4754);
              FUN_004669f0(extraout_ECX_06);
              piVar7[1] = (uint)(*(int *)(*(int *)(DAT_004d4754[3] + 0x90) + 0x1c) != 0);
              goto LAB_00454156;
            }
            if (iVar4 == 4) {
              FUN_00466350((uint)DAT_004d4754);
            }
            else if (6 < iVar4) break;
          }
          goto LAB_004543a1;
        }
        if (DAT_004d4754[0x1e] != 0) goto switchD_00454006_caseD_8;
        FUN_00465de0();
        goto LAB_004543a1;
      }
    }
    else {
      iVar4 = piVar7[2];
      if (iVar4 != 0) {
        if (iVar4 == 2) {
          if (DAT_004d4754 != (undefined4 *)0x0) {
            iVar4 = FUN_004669f0((int)param_1);
            param_1 = extraout_ECX_04;
LAB_00454161:
            if (iVar4 < 0) break;
          }
        }
        else {
          if (iVar4 == 5) {
            piVar3 = (int *)FUN_004662f0((int)DAT_004d4754);
            piVar7[1] = (uint)(*(int *)(*(int *)(*(int *)((int)extraout_ECX_05 + 0xc) + 0x90) + 0x1c) !=
                              0);
LAB_00454156:
            iVar4 = FUN_00465fe0(piVar3);
            param_1 = extraout_ECX_07;
            goto LAB_00454161;
          }
          if (iVar4 == 7) {
            FUN_00466350((uint)param_1);
          }
          else if (0x13 < iVar4) break;
        }
LAB_004543a1:
        piVar7[2] = piVar7[2] + 1;
        goto switchD_00454006_caseD_8;
      }
      iVar4 = FUN_00453ae0();
      param_1 = extraout_ECX_03;
      if (iVar4 == 0) goto LAB_004543a1;
    }
    break;
  case 3:
    if (DAT_004d4754 != (undefined4 *)0x0) {
      if (piVar7[2] == 0) {
LAB_0045439a:
        iVar4 = 1;
        goto LAB_0045439c;
      }
      if (piVar7[2] != 1) goto LAB_004543a1;
      param_1 = (undefined4 *)0x1;
    }
    break;
  case 4:
    if (DAT_004d4754 != (undefined4 *)0x0) {
      param_1 = (undefined4 *)piVar7[2];
      if (param_1 == (undefined4 *)0x0) goto LAB_0045439a;
      if (param_1 == (undefined4 *)0x1) {
        if (DAT_004cf500 == (HANDLE)0x0) break;
        PostThreadMessageA(DAT_004cf4fc,0x12,0,0);
      }
      else if (param_1 == (undefined4 *)0x2) {
        DVar5 = WaitForSingleObject(DAT_004cf500,0x100);
        if (DVar5 == 0) {
          DAT_004cf500 = (HANDLE)0x0;
        }
        else {
          PostThreadMessageA(DAT_004cf4fc,0x12,0,0);
          piVar7[2] = piVar7[2] + -1;
        }
      }
      else if (param_1 == (undefined4 *)0x3) {
        CloseHandle(DAT_004cf500);
        CloseHandle(DAT_004d4758);
        DAT_004cf500 = (HANDLE)0x0;
        if (DAT_004d4754 != (undefined4 *)0x0) {
          (**(code **)*DAT_004d4754)(1);
        }
        DAT_004d4754 = (undefined4 *)0x0;
      }
      else if (param_1 == (undefined4 *)0xa) break;
      goto LAB_004543a1;
    }
    break;
  case 5:
    FUN_00454b00();
    puVar2 = DAT_004d4754;
    fStack_4 = (float)piVar7[1];
    param_1 = extraout_ECX_08;
    if (DAT_004d4754 != (undefined4 *)0x0) {
      DAT_004d4754[7] = 1;
      uVar9 = FUN_004931e0(extraout_ECX_08,extraout_EDX_00);
      puVar2[5] = (int)uVar9;
      puVar2[6] = (int)uVar9;
      param_1 = extraout_ECX_09;
    }
    break;
  case 6:
    if (DAT_004ceacb == '\x01') {
      if (DAT_004d4754[0x1e] != 0) goto switchD_00454006_caseD_8;
      FUN_004664f0();
      param_1 = extraout_ECX_10;
    }
    break;
  case 7:
    if (DAT_004ceacb == '\x01') {
      if (DAT_004d4754[0x1e] != 0) goto switchD_00454006_caseD_8;
      FUN_00466570();
      param_1 = extraout_ECX_11;
    }
    break;
  case 8:
    if (DAT_004d4754 != (undefined4 *)0x0) {
      FUN_004663e0(DAT_004d477c,param_2);
      param_1 = extraout_ECX_00;
    }
    break;
  default:
    goto switchD_00454006_caseD_8;
  }
  iVar4 = 0;
  piVar3 = piVar7 + 0x43;
  piVar8 = piVar7;
  do {
    param_2 = piVar3;
    piVar7 = piVar8;
    if (*piVar8 == 0) break;
    iVar4 = iVar4 + 1;
    piVar7 = piVar8 + 0x43;
    param_2 = piVar3 + 0x43;
    for (iVar6 = 0x43; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar8 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar8 = piVar8 + 1;
    }
    param_1 = (undefined4 *)0x0;
    piVar3 = param_2;
    piVar8 = piVar7;
  } while (iVar4 < 0x1f);
  if (!bVar1) goto switchD_00454006_caseD_8;
  goto LAB_00453ff5;
switchD_00454006_caseD_8:
  if (DAT_004ceacc != '\0') {
    piVar7 = &DAT_004cf538;
    do {
      iVar4 = piVar7[-0xc];
      if (iVar4 < 0) break;
      iVar6 = *piVar7;
      piVar7[-0xc] = -1;
      if (iVar6 < 0) {
        piVar3 = (int *)(&DAT_004d0e70)[iVar4 * 6];
        (&DAT_004d0e84)[iVar4 * 6] = 0;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x24))(piVar3,&fStack_4);
          (&DAT_004d0e84)[iVar4 * 6] = unaff_EBX & 1;
          (**(code **)(*(int *)(&DAT_004d0e70)[iVar4 * 6] + 0x48))
                    ((int *)(&DAT_004d0e70)[iVar4 * 6]);
        }
        *piVar7 = 0;
      }
      else {
        if (0 < iVar6) {
          do {
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        *piVar7 = 0;
        FUN_004544b0();
      }
      piVar7 = piVar7 + 1;
    } while ((int)piVar7 < 0x4cf568);
  }
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf200);
    DAT_004cf223 = DAT_004cf223 + -1;
  }
  return DAT_004d14d4;
}


