/* undefined4 __stdcall FUN_0040a250(int param_1, short * param_2, uint param_3, int param_4, float param_5) @ 0040a250  1999 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0040a250(int param_1,short *param_2,uint param_3,int param_4,float param_5)

{
  short *psVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  short sVar5;
  code *pcVar6;
  float fVar7;
  short *psVar8;
  undefined4 extraout_ECX;
  int iVar9;
  uint extraout_EDX;
  short *extraout_EDX_00;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  float10 fVar13;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  psVar8 = param_2;
  puVar11 = *(uint **)((int)param_1 + 0x10);
  iVar9 = 0;
  do {
    puVar12 = puVar11;
    if (*(short *)((int)puVar11 + 0x532) == 0) {
LAB_0040a336:
      if (1999 < iVar9) {
        return 1;
      }
      psVar1 = param_2 + 0xfd;
      param_2 = (short *)0x0;
      if (*psVar1 < 2) {
        local_10 = *(float *)((int)psVar8 + 0xc);
      }
      else {
        local_10 = *(float *)((int)psVar8 + 0xc) -
                   ((*(float *)((int)psVar8 + 0xc) - *(float *)((int)psVar8 + 0xe)) * (float)param_4) /
                   (float)(int)*psVar1;
      }
      switch(psVar8[0xfe]) {
      case 0:
      case 1:
        if ((*(byte *)((int)psVar8 + 0xfc) & 1) == 0) {
          fVar2 = *(float *)((int)psVar8 + 10) * 0.5 +
                  (float)((int)param_3 / 2) * *(float *)((int)psVar8 + 10);
        }
        else {
          fVar2 = (float)((int)(param_3 + 1) / 2) * *(float *)((int)psVar8 + 10);
        }
        param_2 = (short *)(fVar2 + 0.0);
        if ((param_3 & 1) != 0) {
          param_2 = (short *)((float)param_2 * -1.0);
        }
        if (psVar8[0xfe] == 0) {
          param_2 = (short *)((float)param_2 + param_5);
        }
        param_2 = (short *)(*(float *)((int)psVar8 + 8) + (float)param_2);
        break;
      case 2:
        param_2 = (short *)(param_5 + 0.0);
      case 3:
        param_2 = (short *)(*(float *)((int)psVar8 + 10) * (float)param_4 + *(float *)((int)psVar8 + 8) +
                           ((float)param_3 * 6.2831855) / (float)(int)psVar8[0xfc] + (float)param_2)
        ;
        break;
      case 4:
        param_2 = (short *)(param_5 + 0.0);
      case 5:
        param_2 = (short *)(*(float *)((int)psVar8 + 10) * (float)param_4 + *(float *)((int)psVar8 + 8) +
                           ((float)param_3 * 6.2831855) / (float)(int)psVar8[0xfc] +
                           3.1415927 / (float)(int)psVar8[0xfc] + (float)param_2);
        break;
      case 6:
        fVar2 = *(float *)((int)psVar8 + 8);
        fVar3 = *(float *)((int)psVar8 + 10);
        iVar9 = FUN_00464440();
        fVar7 = (float)iVar9;
        if (iVar9 < 0) {
          fVar7 = fVar7 + 4.2949673e+09;
        }
        param_2 = (short *)(*(float *)((int)psVar8 + 10) + fVar7 * 2.3283064e-10 * (fVar2 - fVar3));
        break;
      case 7:
        fVar2 = *(float *)((int)psVar8 + 0xc);
        fVar3 = *(float *)((int)psVar8 + 0xe);
        iVar9 = FUN_00464440();
        fVar7 = (float)iVar9;
        if (iVar9 < 0) {
          fVar7 = fVar7 + 4.2949673e+09;
        }
        local_10 = fVar7 * 2.3283064e-10 * (fVar2 - fVar3) + *(float *)((int)psVar8 + 0xe);
        param_2 = (short *)(*(float *)((int)psVar8 + 10) * (float)param_4 + *(float *)((int)psVar8 + 8) +
                           ((float)param_3 * 6.2831855) / (float)(int)psVar8[0xfc] + 0.0);
        break;
      case 8:
        fVar2 = *(float *)((int)psVar8 + 8);
        fVar3 = *(float *)((int)psVar8 + 10);
        iVar9 = FUN_00464440();
        fVar7 = (float)iVar9;
        if (iVar9 < 0) {
          fVar7 = fVar7 + 4.2949673e+09;
        }
        param_2 = (short *)(*(float *)((int)psVar8 + 10) + fVar7 * 2.3283064e-10 * (fVar2 - fVar3));
        fVar2 = *(float *)((int)psVar8 + 0xc);
        fVar3 = *(float *)((int)psVar8 + 0xe);
        iVar9 = FUN_00464440();
        fVar7 = (float)iVar9;
        if (iVar9 < 0) {
          fVar7 = fVar7 + 4.2949673e+09;
        }
        local_10 = fVar7 * 2.3283064e-10 * (fVar2 - fVar3) + *(float *)((int)psVar8 + 0xe);
      }
      puVar12[0x135] = (uint)local_10;
      fVar13 = FUN_00464640((float)param_2,0.0);
      puVar12[0x136] = (uint)(float)fVar13;
      puVar12[0x12f] = *(uint *)((int)psVar8 + 2);
      puVar12[0x130] = *(uint *)((int)psVar8 + 4);
      puVar12[0x131] = *(uint *)((int)psVar8 + 6);
      if (NANP(*(float *)((int)psVar8 + 0x10)) == (*(float *)((int)psVar8 + 0x10) == 0.0)) {
        FUN_0040d640(&local_c,(float)fVar13,*(float *)((int)psVar8 + 0x10));
        puVar12[0x12f] = (uint)((float)puVar12[0x12f] + local_c);
        puVar12[0x130] = (uint)(local_8 + (float)puVar12[0x130]);
      }
      puVar12[0x131] = 0x3dcccccd;
      if ((0.0 < *(float *)((int)param_1 + 0x60) != NANP(*(float *)((int)param_1 + 0x60))) &&
         (fVar2 = (float)puVar12[0x130] - *(float *)((int)DAT_004b4514 + 0x980),
         fVar3 = (float)puVar12[0x12f] - *(float *)((int)DAT_004b4514 + 0x97c),
         fVar2 = fVar3 * fVar3 + fVar2 * fVar2,
         fVar2 < *(float *)((int)param_1 + 0x60) != (NANP(fVar2) || NANP(*(float *)((int)param_1 + 0x60))))) {
        return 0xffffffff;
      }
      *puVar12 = *puVar12 | 1;
      *(undefined2 *)((int)puVar12 + 0x532) = 1;
      if ((puVar12[0x13d] & 1) == 0) {
        puVar12[0x13b] = 0;
        puVar12[0x13a] = 0;
        puVar12[0x139] = 0xfff0bdc1;
        puVar12[0x13c] = (uint)&DAT_004b2ed0;
        puVar12[0x13d] = puVar12[0x13d] | 1;
      }
      puVar12[0x13b] = 0;
      puVar12[0x13a] = 0;
      puVar12[0x139] = 0xffffffff;
      if ((puVar12[0x142] & 1) == 0) {
        puVar12[0x140] = 0;
        puVar12[0x13f] = 0;
        puVar12[0x13e] = 0xfff0bdc1;
        puVar12[0x141] = (uint)&DAT_004b2ed0;
        puVar12[0x142] = puVar12[0x142] | 1;
      }
      puVar12[0x140] = 0;
      puVar12[0x13f] = 0;
      puVar12[0x13e] = 0xffffffff;
      puVar12[1] = 0;
      FUN_0040d640(puVar12 + 0x132,(float)param_2,local_10);
      puVar12[0x14a] = *(uint *)((int)psVar8 + 0x100);
      *(short *)((int)puVar12 + 0x9f6) = psVar8[1];
      *(short *)((int)puVar12 + 0x27d) = *psVar8;
      puVar12[0x150] = extraout_EDX;
      *puVar12 = *puVar12 & 0xfffffff3 | 2;
      FUN_00402520();
      puVar12[0x12d] = (uint)((void *)0x0040d430);
      puVar12[0x12e] = (uint)puVar12;
      FUN_00454ee0(*(undefined2 **)(&DAT_004debdc + param_1),
                   *(short **)(&DAT_004af280 + *psVar8 * 0xd0));
      *puVar12 = *puVar12 & 0xffffffef;
      switch(*(undefined4 *)(&DAT_004af34c + *psVar8 * 0xd0)) {
      case 0:
        puVar12[0x149] = psVar8[1] * 2 + 4;
        break;
      case 1:
        puVar12[0x149] = *(uint *)(&DAT_004b0bb0 + psVar8[1] * 4);
        break;
      case 2:
        puVar12[0x149] = 0xffffffff;
        *puVar12 = *puVar12 | 0x10;
        break;
      case 3:
        puVar12[0x149] = 0x10;
        break;
      case 4:
        puVar12[0x149] = 6;
      }
      puVar12[0x153] = *(uint *)(&DAT_004af348 + *psVar8 * 0xd0);
      puVar12[0x151] = *(uint *)((int)psVar8 + 0x104);
      puVar12[0x148] = 10;
      uVar4 = *(uint *)(&DAT_004af344 + *psVar8 * 0xd0);
      puVar12[0x138] = uVar4;
      puVar12[0x137] = uVar4;
      puVar12[0x14b] = *(uint *)((int)psVar8 + 0x100);
      puVar12[0x14a] = 0;
      uVar4 = *(uint *)((int)psVar8 + 0x106);
      puVar12[0x152] = uVar4;
      puVar11 = (uint *)((int)psVar8 + 0x12);
      puVar10 = puVar12 + 0x154;
      for (iVar9 = 0x6c; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar10 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
      }
      pcVar6 = (code *)puVar12[0x127];
      if (*(int *)(psVar8 + uVar4 * 0xc + 0x1a) == 2) {
        sVar5 = psVar8[uVar4 * 0xc + 0x16];
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)();
        }
        *(short *)((int)puVar12 + 0xf3) = sVar5 + 7;
        *(undefined2 *)((int)puVar12 + 0x532) = 2;
        local_c = (float)puVar12[0x132] * 4.0;
        local_8 = (float)puVar12[0x133] * 4.0;
        local_4 = (float)puVar12[0x134] * 4.0;
        puVar12[0x12f] = (uint)((float)puVar12[0x12f] - local_c);
        puVar12[0x130] = (uint)((float)puVar12[0x130] - local_8);
        puVar12[0x131] = (uint)((float)puVar12[0x131] - local_4);
        puVar12[0x152] = puVar12[0x152] + 1;
      }
      else {
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)();
        }
        *(undefined2 *)((int)puVar12 + 0xf3) = 2;
      }
      FUN_0040aa60(puVar12);
      FUN_00455630(extraout_ECX,extraout_EDX_00,(uint)(puVar12 + 2));
      if (*(short *)((int)puVar12 + 0xf2a) != 5) {
        *(uint **)((int)param_1 + 0x10) = puVar12 + 0x27e;
        return 0;
      }
      *(int *)((int)param_1 + 0x10) = param_1 + 100;
      return 0;
    }
    puVar12 = puVar11 + 0x27e;
    if (*(short *)((int)puVar11 + 0xf2a) == 5) {
      puVar12 = (uint *)((int)param_1 + 100);
    }
    if (*(short *)((int)puVar12 + 0x532) == 0) {
      iVar9 = iVar9 + 1;
      goto LAB_0040a336;
    }
    psVar1 = (short *)((int)puVar12 + 0xf2a);
    puVar12 = puVar12 + 0x27e;
    if (*psVar1 == 5) {
      puVar12 = (uint *)((int)param_1 + 100);
    }
    if (*(short *)((int)puVar12 + 0x532) == 0) {
      iVar9 = iVar9 + 2;
      goto LAB_0040a336;
    }
    psVar1 = (short *)((int)puVar12 + 0xf2a);
    puVar12 = puVar12 + 0x27e;
    if (*psVar1 == 5) {
      puVar12 = (uint *)((int)param_1 + 100);
    }
    if (*(short *)((int)puVar12 + 0x532) == 0) {
      iVar9 = iVar9 + 3;
      goto LAB_0040a336;
    }
    puVar10 = puVar12 + 0x27e;
    if (*(short *)((int)puVar12 + 0xf2a) == 5) {
      puVar10 = (uint *)((int)param_1 + 100);
    }
    if (*(short *)((int)puVar10 + 0x532) == 0) {
      iVar9 = iVar9 + 4;
      puVar12 = puVar10;
      goto LAB_0040a336;
    }
    puVar11 = puVar10 + 0x27e;
    if (*(short *)((int)puVar10 + 0xf2a) == 5) {
      puVar11 = (uint *)((int)param_1 + 100);
    }
    iVar9 = iVar9 + 5;
    if (1999 < iVar9) {
      return 1;
    }
  } while( true );
}


