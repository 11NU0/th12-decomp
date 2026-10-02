/* ulonglong __stdcall FUN_00407b80(int * param_1) @ 00407b80  798 bytes */
#include "th12.h"

ulonglong FUN_00407b80(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  float10 fVar7;
  ulonglong uVar8;
  float fVar9;
  float local_2c;
  
  iVar5 = DAT_004b4514;
  if (param_1[0x23] != param_1[0x22]) {
    iVar1 = param_1[0x23];
    if (iVar1 < 0x5a) {
      param_1[4] = *(int *)(DAT_004b4514 + 0x97c);
      param_1[5] = *(int *)(iVar5 + 0x980);
      param_1[6] = *(int *)(iVar5 + 0x984);
      param_1[9] = (int)((float)param_1[9] + 1.0);
      fVar7 = FUN_004646e0((float)param_1[8] + 0.10471976);
      param_1[8] = (int)(float)fVar7;
    }
    else {
      iVar4 = (param_1[0x2b] + 9) * 10;
      if (iVar1 < iVar4) {
        param_1[4] = *(int *)(DAT_004b4514 + 0x97c);
        param_1[5] = *(int *)(iVar5 + 0x980);
        param_1[6] = *(int *)(iVar5 + 0x984);
        fVar7 = FUN_004646e0((float)param_1[8] + 0.10471976);
        param_1[8] = (int)(float)fVar7;
      }
      else {
        if (iVar1 == iVar4) {
          param_1[0xd] = param_1[0xd] & 0xfffffffc;
          fVar7 = (float10)FUN_004937aa(iVar1);
          fVar7 = FUN_004646e0((float)fVar7);
          fVar7 = FUN_004646e0((float)fVar7);
          param_1[8] = (int)(float)fVar7;
          fVar7 = FUN_00408880();
        }
        else {
          if (DAT_004b43dc != 0) {
            iVar5 = FUN_0041a9f0(512.0);
            param_1[0x2a] = iVar5;
          }
          if (param_1[0x2a] == 0) {
            iVar5 = FUN_004086b0(param_1 + 1,0.0,224.0,320.0,384.0);
            if (iVar5 == 0) goto LAB_00407dec;
            fVar7 = (float10)(float)param_1[7] * (float10)0.8999999761581421;
          }
          else {
            iVar5 = FUN_00407b60();
            if (iVar5 != 0) goto LAB_00407dec;
            fVar9 = (float)param_1[8];
            fVar7 = FUN_00408820(param_1 + 1);
            fVar7 = FUN_004087b0((float)fVar7,fVar9);
            local_2c = (float)param_1[7];
            fVar9 = ABS((float)fVar7);
            if (fVar9 < 0.7853982) {
              if ((fVar9 < 0.2617994 != NAN(fVar9)) &&
                 (local_2c = local_2c + 0.2, 8.0 < local_2c != NAN(local_2c))) {
                local_2c = 8.0;
              }
            }
            else {
              local_2c = local_2c - 0.7;
              if (local_2c < 1.0) {
                local_2c = 1.0;
              }
            }
            fVar7 = FUN_004646e0((float)fVar7 * 0.1 + (float)param_1[8]);
            FUN_00408910((int)(param_1 + 1),(float)fVar7);
            fVar7 = (float10)local_2c;
          }
        }
        param_1[7] = (int)(float)fVar7;
      }
    }
  }
LAB_00407dec:
  fVar9 = (float)param_1[1];
  fVar2 = (float)param_1[2];
  fVar3 = (float)param_1[3];
  FUN_00464d50();
  FUN_00464db0();
  piVar6 = FUN_00461920(extraout_ECX,DAT_004ce8cc,*param_1);
  if (piVar6 != (int *)0x0) {
    piVar6[0x10c] = (int)((float)param_1[1] + 32.0 + 192.0);
    piVar6[0x10d] = (int)((float)param_1[2] + 16.0);
    piVar6[0x10e] = param_1[3];
  }
  param_1[0x27] = (int)((float)param_1[1] - fVar9);
  param_1[0x28] = (int)((float)param_1[2] - fVar2);
  param_1[0x29] = (int)((float)param_1[3] - fVar3);
  uVar8 = FUN_00464a80();
  return uVar8;
}


