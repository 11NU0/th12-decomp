/* undefined __fastcall FUN_00428b00(int * param_1) @ 00428b00  1568 bytes */
#include "th12.h"

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_00428b00(int *param_1)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  void *this;
  undefined4 extraout_ECX;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  ushort local_220;
  ushort local_21e;
  float local_21c;
  float local_218;
  undefined4 local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  int local_1fc [117];
  undefined2 local_28;
  undefined2 local_26;
  ushort local_24;
  float local_20;
  undefined4 local_18;
  uint local_14;
  
  if (param_1[0x10b] < 0x12) {
    while( true ) {
      iVar6 = param_1[0x10b];
      uVar5 = param_1[iVar6 * 6 + 0x125];
      pfVar1 = (float *)(param_1 + iVar6 * 6 + 0x121);
      if ((uVar5 == 0) || ((pfVar1[5] == 0.0 && (param_1[0x10c] != 0)))) break;
      if (uVar5 == 0x80000000) {
        param_1[0x10b] = iVar6 + 1;
        goto LAB_00429101;
      }
      if (uVar5 < 0x1001) {
        if (uVar5 == 0x1000) {
          param_1[0x10c] = param_1[0x10c] | 0x1000;
          fVar2 = pfVar1[2];
          if ((param_1[0x66] & 1U) == 0) {
            param_1[100] = 0;
            param_1[99] = 0;
            param_1[0x62] = -999999;
            param_1[0x65] = (int)&DAT_004b2ed0;
            param_1[0x66] = param_1[0x66] | 1;
          }
          param_1[99] = (int)fVar2;
          param_1[0x62] = (int)fVar2 + -1;
          param_1[100] = (int)(float)(int)fVar2;
        }
        else if (uVar5 < 0x21) {
          if (uVar5 == 0x20) {
switchD_00428b9d_caseD_10:
            param_1[0x10c] = param_1[0x10c] | uVar5;
            param_1[0x4e] = (int)*pfVar1;
            if (pfVar1[1] <= -999.0) {
              fVar2 = (float)param_1[0x1d];
            }
            else {
              fVar2 = pfVar1[1];
            }
            param_1[0x4d] = (int)fVar2;
            if ((param_1[0x4c] & 1U) == 0) {
              param_1[0x4a] = 0;
              param_1[0x49] = 0;
              param_1[0x48] = -999999;
              param_1[0x4b] = (int)&DAT_004b2ed0;
              param_1[0x4c] = param_1[0x4c] | 1;
            }
            param_1[0x4a] = 0;
            param_1[0x49] = 0;
            param_1[0x48] = -1;
            param_1[0x52] = (int)pfVar1[2];
            param_1[0x53] = (int)pfVar1[3];
            param_1[0x54] = 0;
          }
          else {
            switch(uVar5) {
            case 1:
              param_1[0x10c] = param_1[0x10c] | 1;
              FUN_004067e0(0);
              param_1[0x2a] = 0;
              break;
            case 4:
              param_1[0x10c] = param_1[0x10c] | 4;
              param_1[0x33] = (int)*pfVar1;
              if (pfVar1[1] < -990.0 == (pfVar1[1] == -990.0)) {
                if (pfVar1[1] < 990.0) {
                  fVar9 = (float10)pfVar1[1];
                }
                else {
                  fVar9 = FUN_004377a0((float *)(param_1 + 0x14));
                }
              }
              else {
                fVar9 = (float10)(float)param_1[0x1a];
              }
              param_1[0x34] = (int)(float)fVar9;
              FUN_004067e0(0);
              param_1[0x38] = (int)pfVar1[2];
              FUN_0042e880(param_1 + 0x35,(float)param_1[0x34],(float)param_1[0x33]);
              if ((param_1[0x10b] != 0) && (-1 < param_1[0x18e])) {
                FUN_00453d90(extraout_ECX,param_1[0x18e]);
              }
              break;
            case 8:
              param_1[0x10c] = param_1[0x10c] | 8;
              param_1[0x40] = (int)*pfVar1;
              param_1[0x41] = (int)pfVar1[1];
              FUN_004067e0(0);
              fVar2 = pfVar1[2];
              param_1[0x45] = (int)fVar2;
              if ((param_1[0x10b] != 0) && (-1 < param_1[0x18e])) {
                FUN_00453d90(fVar2,param_1[0x18e]);
              }
              break;
            case 0x10:
              goto switchD_00428b9d_caseD_10;
            }
          }
        }
        else if (uVar5 < 0x201) {
          if (uVar5 == 0x200) {
            param_1[0x113] = (int)pfVar1[2];
          }
          else {
            if (uVar5 == 0x40) goto switchD_00428b9d_caseD_10;
            if ((uVar5 == 0x100) && (0 < (int)pfVar1[2])) {
              param_1[0x10c] = param_1[0x10c] | 0x100;
              if (0.0 < *pfVar1 == (*pfVar1 == 0.0)) {
                fVar2 = (float)param_1[0x1d];
              }
              else {
                fVar2 = *pfVar1;
              }
              param_1[0x5a] = (int)fVar2;
              pfVar1[2] = (float)((int)pfVar1[2] + -1);
              param_1[0x60] = (int)pfVar1[2];
              param_1[0x5f] = 0;
              param_1[0x61] = (int)pfVar1[3];
            }
          }
        }
        else if (uVar5 == 0x800) {
          iVar6 = *(int *)(&DAT_004af280 + (int)pfVar1[2] * 0xd0);
          fVar2 = pfVar1[3];
          this = *(void **)(&DAT_004debdc + DAT_004b43c8);
          FUN_00402520();
          *(undefined *)((int)param_1 + 0xad9) = 0x10;
          *(undefined *)(param_1 + 0x2b6) = 0x10;
          FUN_00454d10(this,param_1 + 399,iVar6 + (int)fVar2);
        }
LAB_004290fb:
        param_1[0x10b] = param_1[0x10b] + 1;
      }
      else {
        if (uVar5 < 0x80001) {
          if (uVar5 == 0x80000) {
            _memset(&local_220,0,0x214);
            local_18 = 0xffffffff;
            FUN_0042e880(&local_21c,(float)param_1[0x1a],(float)param_1[0x1b]);
            fVar2 = pfVar1[2];
            local_21c = (float)param_1[0x14] + local_21c;
            bVar3 = *(byte *)((int)pfVar1 + 10);
            local_24 = (byte)((uint)fVar2 >> 0x18) & 0x7f;
            local_218 = (float)param_1[0x15] + local_218;
            local_14 = (uint)fVar2 & 0xff;
            bVar4 = *(byte *)((int)pfVar1 + 9);
            local_214 = 0;
            local_208 = *pfVar1;
            local_28 = *(undefined2 *)(pfVar1 + 3);
            local_204 = pfVar1[1];
            param_1[0x10b] = param_1[0x10b] + 1;
            local_220 = (ushort)bVar3;
            local_26 = *(undefined2 *)(pfVar1 + 8);
            local_210 = pfVar1[6];
            local_20c = pfVar1[7];
            local_21e = (ushort)bVar4;
            local_20 = pfVar1[9];
            piVar7 = param_1 + 0x121;
            piVar8 = local_1fc;
            for (iVar6 = 0x6c; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar8 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            }
            FUN_0040b5e0();
            param_1[0x10b] = param_1[0x10b] + 1;
            if (((uint)fVar2 & 0x80000000) == 0) goto LAB_00429101;
            (**(code **)(*param_1 + 0x14))(0,0);
          }
          else if (uVar5 < 0x20001) {
            if (uVar5 == 0x20000) {
              param_1[0x10c] = param_1[0x10c] | 0x20000;
              FUN_004067e0((int)pfVar1[2]);
            }
            else if (uVar5 == 0x2000) {
              param_1[3] = 3;
            }
            else if (uVar5 == 0x4000) {
              FUN_00453e20(0x4000,iVar6,param_1[0x14]);
            }
          }
          else if (uVar5 == 0x40000) {
            param_1[0x10c] = param_1[0x10c] | 0x40000;
            FUN_004067e0((int)pfVar1[2]);
          }
          goto LAB_004290fb;
        }
        if (0x800000 < uVar5) {
          if (uVar5 == 0x10000000) {
            if (pfVar1[2] == 0.0) {
              param_1[0x2ae] = param_1[0x2ae] & 0xffffff1f;
            }
            else {
              param_1[0x2ae] = param_1[0x2ae] & 0xffffff3fU | 0x20;
            }
          }
          goto LAB_004290fb;
        }
        if (uVar5 == 0x800000) {
          param_1[0x10c] = param_1[0x10c] | 0x800000;
          param_1[0x8e] = (int)*pfVar1;
          param_1[0x8f] = (int)pfVar1[1];
          if ((param_1[0x8d] & 1U) == 0) {
            param_1[0x8b] = 0;
            param_1[0x8a] = 0;
            param_1[0x89] = -999999;
            param_1[0x8c] = (int)&DAT_004b2ed0;
            param_1[0x8d] = param_1[0x8d] | 1;
          }
          param_1[0x8b] = 0;
          param_1[0x8a] = 0;
          param_1[0x89] = -1;
          param_1[0x93] = (int)pfVar1[2];
          goto LAB_004290fb;
        }
        if (uVar5 == 0x200000) {
          param_1[0x20] = (int)pfVar1[2];
          param_1[0x10b] = iVar6 + 1;
        }
        else {
          if (uVar5 != 0x400000) goto LAB_004290fb;
          param_1[0x10b] = (int)pfVar1[2];
        }
      }
LAB_00429101:
      if (0x11 < param_1[0x10b]) {
        return;
      }
    }
  }
  return;
}


