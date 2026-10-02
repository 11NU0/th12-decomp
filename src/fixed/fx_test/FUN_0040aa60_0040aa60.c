/* undefined __fastcall FUN_0040aa60(uint * param_1) @ 0040aa60  2798 bytes */

#include "th12.h"

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_0040aa60(uint *param_1)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar8;
  uint *puVar9;
  float10 fVar10;
  float fVar11;
  ushort local_220;
  short local_21e;
  uint local_21c;
  uint local_218;
  uint local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  uint local_1fc [117];
  undefined2 local_28;
  undefined2 local_26;
  ushort local_24;
  float local_20;
  uint local_14;
  
  if ((int)param_1[0x152] < 0x12) {
    while( true ) {
      uVar4 = param_1[0x152];
      uVar5 = param_1[uVar4 * 6 + 0x158];
      pfVar1 = (float *)(param_1 + uVar4 * 6 + 0x154);
      if ((uVar5 == 0) ||
         (((pfVar1[5] == 0.0 && (param_1[0x14a] != 0)) ||
          (uVar6 = param_1[0x14a], (uVar5 & uVar6) != 0)))) break;
      if (uVar5 == 0x80000000) {
        param_1[0x152] = uVar4 + 1;
        goto LAB_0040b52d;
      }
      if (uVar5 < 0x4001) {
        if (uVar5 == 0x4000) {
          FUN_00453e20(0x4000,0x4000,param_1[0x12f]);
        }
        else if (uVar5 < 0x101) {
          if (uVar5 == 0x100) {
            param_1[0x14a] = uVar6 | 0x100;
            param_1[0x1f9] = (uint)*pfVar1;
            param_1[0x1ff] = (uint)pfVar1[2];
            param_1[0x1fe] = 0;
            param_1[0x200] = (uint)pfVar1[3];
          }
          else {
            switch(uVar5) {
            case 1:
              param_1[0x14a] = uVar6 | 1;
              FUN_004067e0(0);
              param_1[0x1c9] = 0;
              break;
            case 4:
              param_1[0x14a] = uVar6 | 4;
              param_1[0x1d2] = (uint)*pfVar1;
              if (pfVar1[1] < -990.0 == (pfVar1[1] == -990.0)) {
                if (pfVar1[1] < 990.0) {
                  fVar10 = (float10)pfVar1[1];
                }
                else {
                  fVar10 = FUN_004377a0((float *)(param_1 + 0x12f));
                }
              }
              else {
                fVar10 = (float10)(float)param_1[0x136];
              }
              param_1[0x1d3] = (uint)(float)fVar10;
              FUN_004067e0(0);
              fVar11 = (float)param_1[0x1d2];
              param_1[0x1d7] = (uint)pfVar1[2];
              fVar2 = (float)param_1[0x1d3];
              puVar7 = param_1 + 0x1d4;
              goto LAB_0040abc9;
            case 8:
              param_1[0x14a] = uVar6 | 8;
              param_1[0x1df] = (uint)*pfVar1;
              param_1[0x1e0] = (uint)pfVar1[1];
              FUN_004067e0(0);
              param_1[0x1e4] = (uint)pfVar1[2];
              if ((param_1[0x152] != 0) && (-1 < (int)param_1[0x151])) {
                FUN_00453d90(extraout_ECX_00,param_1[0x151]);
              }
              break;
            case 0x10:
            case 0x20:
            case 0x40:
              param_1[0x14a] = uVar6 | uVar5;
              if (*pfVar1 < -990.0 == (*pfVar1 == -990.0)) {
                if (*pfVar1 < 990.0) {
                  fVar10 = (float10)*pfVar1;
                }
                else {
                  fVar10 = FUN_004377a0((float *)(param_1 + 0x12f));
                }
              }
              else {
                fVar10 = (float10)(float)param_1[0x136];
              }
              param_1[0x1ed] = (uint)(float)fVar10;
              if (pfVar1[1] <= -999.0) {
                fVar11 = (float)param_1[0x135];
              }
              else {
                fVar11 = pfVar1[1];
              }
              param_1[0x1ec] = (uint)fVar11;
              FUN_004067e0(0);
              param_1[0x1f1] = (uint)pfVar1[2];
              param_1[0x1f2] = (uint)pfVar1[3];
              param_1[499] = 0;
            }
          }
        }
        else if (uVar5 < 0x801) {
          if (uVar5 == 0x800) {
            *(undefined2 *)(param_1 + 0x27d) = *(undefined2 *)(pfVar1 + 2);
            *(undefined2 *)((int)param_1 + 0x9f6) = *(undefined2 *)(pfVar1 + 3);
            uVar4 = *(uint *)(&DAT_004af344 + (int)pfVar1[2] * 0xd0);
            param_1[0x138] = uVar4;
            param_1[0x137] = uVar4;
            FUN_00402520();
            iVar8 = DAT_004b43c8;
            param_1[0x12d] = (uint)&LAB_0040d430;
            param_1[0x12e] = (uint)param_1;
            FUN_00454ee0(*(undefined2 **)(&DAT_004debdc + iVar8),
                         *(short **)(&DAT_004af280 + (int)pfVar1[2] * 0xd0));
            *param_1 = *param_1 & 0xffffffef;
            switch(*(undefined4 *)(&DAT_004af34c + *(short *)(param_1 + 0x27d) * 0xd0)) {
            case 0:
              param_1[0x149] = *(short *)((int)param_1 + 0x9f6) * 2 + 4;
              break;
            case 1:
              param_1[0x149] = *(uint *)(&DAT_004b0bb0 + *(short *)((int)param_1 + 0x9f6) * 4);
              break;
            case 2:
              param_1[0x149] = 0xffffffff;
              *param_1 = *param_1 | 0x10;
              break;
            case 3:
              param_1[0x149] = 0x10;
              break;
            case 4:
              param_1[0x149] = 6;
              break;
            case 5:
              param_1[0x149] = 0xc;
            }
          }
          else if (uVar5 == 0x200) {
            param_1[1] = (uint)pfVar1[2];
          }
          else if (uVar5 == 0x400) {
            param_1[0x14a] = uVar6 | 0x400;
            FUN_004067e0((int)pfVar1[2]);
            param_1[0x266] = (uint)pfVar1[3];
          }
        }
        else if (uVar5 == 0x1000) {
          param_1[0x14a] = uVar6 | 0x1000;
          FUN_004067e0((int)pfVar1[2]);
        }
        else if (uVar5 == 0x2000) {
          FUN_0040c8b0();
        }
        goto switchD_0040ae02_caseD_6;
      }
      if (uVar5 < 0x1000001) {
        if (uVar5 == 0x1000000) {
          *(undefined2 *)(param_1 + 0x27d) = *(undefined2 *)(pfVar1 + 2);
          *(undefined2 *)((int)param_1 + 0x9f6) = *(undefined2 *)(pfVar1 + 3);
          uVar4 = *(uint *)(&DAT_004af344 + (int)pfVar1[2] * 0xd0);
          param_1[0x138] = uVar4;
          param_1[0x137] = uVar4;
          FUN_00402520();
          iVar8 = DAT_004b43c8;
          param_1[0x12d] = (uint)&LAB_0040d430;
          param_1[0x12e] = (uint)param_1;
          FUN_00454ee0(*(undefined2 **)(&DAT_004debdc + iVar8),
                       *(short **)(&DAT_004af280 + (int)pfVar1[2] * 0xd0));
          *param_1 = *param_1 & 0xffffffef;
          switch(*(undefined4 *)(&DAT_004af34c + *(short *)(param_1 + 0x27d) * 0xd0)) {
          case 0:
            param_1[0x149] = *(short *)((int)param_1 + 0x9f6) * 2 + 4;
            break;
          case 1:
            param_1[0x149] = *(uint *)(&DAT_004b0bb0 + *(short *)((int)param_1 + 0x9f6) * 4);
            break;
          case 2:
            param_1[0x149] = 0xffffffff;
            *param_1 = *param_1 | 0x10;
            break;
          case 3:
            param_1[0x149] = 0x10;
            break;
          case 4:
            param_1[0x149] = 6;
            break;
          case 5:
            param_1[0x149] = 0xc;
          }
          if ((code *)param_1[0x127] != (code *)0x0) {
            (*(code *)param_1[0x127])();
          }
          *(undefined2 *)(param_1 + 0xf3) = 2;
          goto switchD_0040ae02_caseD_6;
        }
        if (uVar5 < 0x200001) {
          if (uVar5 != 0x200000) {
            if (uVar5 == 0x20000) {
              param_1[0x14a] = uVar6 | 0x20000;
              FUN_004067e0((int)pfVar1[2]);
            }
            else if (uVar5 == 0x40000) {
              param_1[0x14a] = uVar6 | 0x40000;
              FUN_004067e0((int)pfVar1[2]);
            }
            else if (uVar5 == 0x80000) {
              FUN_00409400(&local_220);
              local_208 = *pfVar1;
              local_218 = param_1[0x130];
              local_21c = param_1[0x12f];
              local_204 = pfVar1[1];
              local_214 = param_1[0x131];
              fVar11 = pfVar1[2];
              bVar3 = *(byte *)((int)pfVar1 + 10);
              local_24 = (byte)((uint)fVar11 >> 0x18) & 0x7f;
              local_14 = (uint)fVar11 & 0xff;
              local_21e = (short)*(char *)((int)pfVar1 + 9);
              local_28 = *(undefined2 *)(pfVar1 + 3);
              param_1[0x152] = uVar4 + 1;
              local_220 = (ushort)bVar3;
              local_26 = *(undefined2 *)(pfVar1 + 8);
              local_210 = pfVar1[6];
              local_20c = pfVar1[7];
              local_20 = pfVar1[9];
              puVar7 = param_1 + 0x154;
              puVar9 = local_1fc;
              for (iVar8 = 0x6c; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
              FUN_0040b5e0();
              param_1[0x152] = param_1[0x152] + 1;
              if (((uint)fVar11 & 0x80000000) == 0) goto LAB_0040b52d;
              FUN_0040c8b0();
            }
            goto switchD_0040ae02_caseD_6;
          }
          param_1[0x143] = (uint)pfVar1[2];
          param_1[0x152] = uVar4 + 1;
        }
        else {
          if (uVar5 != 0x400000) {
            if (uVar5 == 0x800000) {
              param_1[0x14a] = uVar6 | 0x800000;
              param_1[0x22d] = (uint)*pfVar1;
              param_1[0x22e] = (uint)pfVar1[1];
              FUN_004067e0(0);
              param_1[0x232] = (uint)pfVar1[2];
            }
            goto switchD_0040ae02_caseD_6;
          }
          param_1[0x152] = (uint)pfVar1[2];
        }
      }
      else {
        if (uVar5 < 0x8000001) {
          if (uVar5 == 0x8000000) {
            param_1[0x14a] = uVar6 | 0x8000000;
            FUN_0040d640(param_1 + 0x249,*pfVar1,pfVar1[1]);
            param_1[0x24b] = 0;
            param_1[0x248] = (uint)*pfVar1;
            param_1[0x247] = (uint)pfVar1[1];
            param_1[0x24c] = (uint)pfVar1[2];
            if ((param_1[0x246] & 1) == 0) {
              param_1[0x244] = 0;
              param_1[0x243] = 0;
              param_1[0x242] = 0xfff0bdc1;
              param_1[0x245] = (uint)&DAT_004b2ed0;
              param_1[0x246] = param_1[0x246] | 1;
            }
            param_1[0x244] = 0;
            param_1[0x243] = 0;
            param_1[0x242] = 0xffffffff;
          }
          else if (uVar5 == 0x2000000) {
            param_1[0x14a] = uVar6 | 0x2000000;
            param_1[0x23c] = (uint)*pfVar1;
            param_1[0x23d] = (uint)pfVar1[1];
            if (((uint)pfVar1[3] & 0x100) != 0) {
              param_1[0x23c] = (uint)((float)param_1[0x23c] + (float)param_1[0x12f]);
              param_1[0x23d] = (uint)((float)param_1[0x130] + (float)param_1[0x23d]);
              param_1[0x23e] = (uint)((float)param_1[0x131] + (float)param_1[0x23e]);
            }
            param_1[0x23a] = param_1[0x135];
            param_1[0x23e] = 0;
            param_1[0x23f] = (uint)pfVar1[2];
            param_1[0x240] = (uint)pfVar1[3] & 0xff;
            FUN_004067e0(0);
            param_1[0x26a] = param_1[0x12f];
            param_1[0x26b] = param_1[0x130];
            param_1[0x26d] = param_1[0x23c];
            param_1[0x26c] = param_1[0x131];
            param_1[0x26e] = param_1[0x23d];
            param_1[0x26f] = param_1[0x23e];
            param_1[0x270] = DAT_004ce8d0;
            param_1[0x271] = DAT_004ce8d4;
            param_1[0x272] = DAT_004ce8d8;
            param_1[0x273] = DAT_004ce8d0;
            param_1[0x274] = DAT_004ce8d4;
            param_1[0x275] = DAT_004ce8d8;
            param_1[0x27b] = (uint)pfVar1[2];
            param_1[0x27c] = (uint)pfVar1[3] & 0xff;
            FUN_00406340();
          }
          else if (uVar5 == 0x4000000) {
            if (*pfVar1 < 990.0) {
              if (-990.0 <= *pfVar1) {
                fVar10 = (float10)*pfVar1;
                goto LAB_0040b224;
              }
            }
            else {
              fVar11 = *pfVar1 - 999.0;
              fVar10 = FUN_004377a0((float *)(param_1 + 0x12f));
              fVar10 = FUN_00464640((float)fVar10,fVar11);
LAB_0040b224:
              param_1[0x136] = (uint)(float)fVar10;
            }
            if (-990.0 <= pfVar1[1]) {
              param_1[0x135] = (uint)pfVar1[1];
            }
            FUN_0040d640(param_1 + 0x132,(float)param_1[0x136],(float)param_1[0x135]);
          }
        }
        else if (uVar5 == 0x10000000) {
          if (pfVar1[2] == 0.0) {
            param_1[0x121] = param_1[0x121] & 0xffffff1f;
          }
          else {
            param_1[0x121] = param_1[0x121] & 0xffffff3f | 0x20;
          }
        }
        else if (uVar5 == 0x20000000) {
          param_1[0x14a] = uVar6 | 0x20000000;
          param_1[0x254] = (uint)((*pfVar1 - (float)param_1[0x135]) / (float)(int)pfVar1[2]);
          if (pfVar1[1] < -990.0 == (pfVar1[1] == -990.0)) {
            if (pfVar1[1] < 990.0) {
              fVar10 = (float10)pfVar1[1];
            }
            else {
              fVar10 = FUN_004377a0((float *)(param_1 + 0x12f));
            }
          }
          else {
            fVar10 = (float10)(float)param_1[0x136];
          }
          param_1[0x255] = (uint)(float)fVar10;
          FUN_004067e0(0);
          fVar11 = (float)param_1[0x254];
          param_1[0x259] = (uint)pfVar1[2];
          fVar2 = (float)param_1[0x255];
          puVar7 = param_1 + 0x256;
LAB_0040abc9:
          FUN_0040d640(puVar7,fVar2,fVar11);
          if ((param_1[0x152] != 0) && (-1 < (int)param_1[0x151])) {
            FUN_00453d90(extraout_ECX,param_1[0x151]);
          }
        }
switchD_0040ae02_caseD_6:
        param_1[0x152] = param_1[0x152] + 1;
      }
LAB_0040b52d:
      if (0x11 < (int)param_1[0x152]) {
        return;
      }
    }
  }
  return;
}


