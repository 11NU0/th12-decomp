/* undefined4 __thiscall FUN_004099e0(void * this, uint * param_1) @ 004099e0  1586 bytes */

#include "th12.h"

undefined4 __thiscall FUN_004099e0(void *this,uint *param_1)

{
  float *pfVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  void *extraout_ECX_07;
  void *extraout_ECX_08;
  void *extraout_ECX_09;
  void *extraout_ECX_10;
  void *extraout_ECX_11;
  void *extraout_ECX_12;
  void *extraout_ECX_13;
  void *extraout_ECX_14;
  void *extraout_ECX_15;
  void *extraout_ECX_16;
  void *extraout_ECX_17;
  void *extraout_ECX_18;
  void *extraout_ECX_19;
  void *extraout_ECX_20;
  void *extraout_ECX_21;
  void *extraout_ECX_22;
  void *extraout_ECX_23;
  void *extraout_ECX_24;
  void *extraout_ECX_25;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  void *this_00;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  
  if ((*(byte *)param_1 & 8) != 0) goto LAB_004099f1;
  sVar2 = *(short *)((int)param_1 + 0x532);
  if (sVar2 == 1) {
LAB_00409c9a:
    do {
      FUN_0040aa60(param_1);
      this = extraout_ECX_05;
      if (param_1[0x14a] == 0) break;
      uVar7 = (ulonglong)extraout_EDX << 0x20;
      if ((param_1[0x14a] & 1) != 0) {
        uVar7 = FUN_0040b670(extraout_ECX_05,(int)param_1);
        this = extraout_ECX_06;
      }
      if ((*(byte *)(param_1 + 0x14a) & 4) != 0) {
        uVar8 = FUN_0040b6f0(this,(int)(uVar7 >> 0x20));
        uVar7 = CONCAT44((int)(uVar8 >> 0x20),(int)uVar7 + (int)uVar8);
        this = extraout_ECX_07;
      }
      if ((param_1[0x14a] & 0x20000000) != 0) {
        uVar8 = FUN_0040b800(this,(int)(uVar7 >> 0x20));
        uVar7 = CONCAT44((int)(uVar8 >> 0x20),(int)uVar7 + (int)uVar8);
        this = extraout_ECX_08;
      }
      if ((*(byte *)(param_1 + 0x14a) & 8) != 0) {
        uVar8 = FUN_0040b920(this,(int)(uVar7 >> 0x20));
        uVar7 = CONCAT44((int)(uVar8 >> 0x20),(int)uVar7 + (int)uVar8);
        this = extraout_ECX_09;
      }
      if ((*(byte *)(param_1 + 0x14a) & 0x10) != 0) {
        iVar6 = FUN_0040b9c0(this);
        uVar7 = CONCAT44(extraout_EDX_00,(int)uVar7 + iVar6);
        this = extraout_ECX_10;
      }
      if ((*(byte *)(param_1 + 0x14a) & 0x40) != 0) {
        iVar6 = FUN_0040baf0(this);
        uVar7 = CONCAT44(extraout_EDX_01,(int)uVar7 + iVar6);
        this = extraout_ECX_11;
      }
      if ((*(byte *)(param_1 + 0x14a) & 0x20) != 0) {
        iVar6 = FUN_0040bc20(this);
        uVar7 = CONCAT44(extraout_EDX_02,(int)uVar7 + iVar6);
        this = extraout_ECX_12;
      }
      if ((param_1[0x14a] & 0x100) != 0) {
        iVar6 = FUN_0040bef0();
        uVar7 = CONCAT44(extraout_EDX_03,(int)uVar7 + iVar6);
        this = extraout_ECX_13;
      }
      if ((param_1[0x14a] & 0x800000) != 0) {
        uVar8 = FUN_0040c170(this,(int)(uVar7 >> 0x20));
        uVar7 = CONCAT44((int)(uVar8 >> 0x20),(int)uVar7 + (int)uVar8);
        this = extraout_ECX_14;
      }
      if ((param_1[0x14a] & 0x2000000) != 0) {
        iVar6 = FUN_0040c230();
        uVar7 = CONCAT44(extraout_EDX_04,(int)uVar7 + iVar6);
        this = extraout_ECX_15;
      }
      if ((param_1[0x14a] & 0x8000000) != 0) {
        iVar6 = FUN_0040c3b0();
        uVar7 = CONCAT44(extraout_EDX_05,(int)uVar7 + iVar6);
        this = extraout_ECX_16;
      }
      if ((param_1[0x14a] & 0x400) != 0) {
        iVar6 = FUN_0040c480(this,(int)(uVar7 >> 0x20));
        uVar7 = CONCAT44(extraout_EDX_06,(int)uVar7 + iVar6);
        this = extraout_ECX_17;
      }
      iVar6 = (int)uVar7;
      if ((param_1[0x14a] & 0x1000) != 0) {
        if ((int)param_1[0x202] < 1) {
          param_1[0x14a] = param_1[0x14a] ^ 0x1000;
          iVar6 = iVar6 + 1;
        }
        else {
          FUN_00464a20(this,(int)(uVar7 >> 0x20),-1.0);
          this = extraout_ECX_18;
        }
      }
      if (param_1[1] != 0) {
        param_1[1] = param_1[1] - 1;
      }
    } while (iVar6 != 0);
    pfVar1 = (float *)(param_1 + 0x12f);
    fVar3 = (float)param_1[0x133] * DAT_004b2ed0;
    fVar4 = DAT_004b2ed0 * (float)param_1[0x134];
    *pfVar1 = *pfVar1 + DAT_004b2ed0 * (float)param_1[0x132];
    param_1[0x130] = (uint)(fVar3 + (float)param_1[0x130]);
    param_1[0x131] = (uint)((float)param_1[0x131] + fVar4);
    if ((*param_1 & 2) != 0) {
      if ((*param_1 & 0x10) == 0) {
        iVar6 = FUN_00437810(pfVar1);
        this = extraout_ECX_19;
      }
      else {
        iVar6 = FUN_00437980((float)param_1[0x137]);
        this = extraout_ECX_20;
      }
      if (iVar6 == 1) {
        this = (void *)0x3;
        *(undefined2 *)((int)param_1 + 0x532) = 3;
        if ((code *)param_1[0x127] != (code *)0x0) {
          (*(code *)param_1[0x127])();
          this = extraout_ECX_21;
        }
        *(undefined2 *)(param_1 + 0xf3) = 1;
        uVar10 = param_1[0x149];
        if (-1 < (int)uVar10) {
          this_00 = *(void **)(&DAT_004debdc + DAT_004b43c8);
          if ((DAT_004cee78 & 0x8000) != 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
            DAT_004cf221 = DAT_004cf221 + '\x01';
          }
          *(int *)((int)this_00 + 0x130) = *(int *)((int)this_00 + 0x130) + 1;
          pvVar5 = FUN_004621c0();
          *(uint *)((int)pvVar5 + 0x480) = *(uint *)((int)pvVar5 + 0x480) | 1;
          *(undefined4 *)((int)pvVar5 + 0x20) = 0x17;
          if (pfVar1 == (float *)0x0) {
            *(undefined4 *)((int)pvVar5 + 0x430) = 0;
            *(undefined4 *)((int)pvVar5 + 0x434) = 0;
            *(undefined4 *)((int)pvVar5 + 0x438) = 0;
          }
          else {
            *(float *)((int)pvVar5 + 0x430) = *pfVar1 + 32.0 + 192.0;
            *(float *)((int)pvVar5 + 0x434) = (float)param_1[0x130] + 16.0;
            *(uint *)((int)pvVar5 + 0x438) = param_1[0x131];
          }
          goto LAB_00409c33;
        }
      }
      else if ((iVar6 == 2) && ((*(byte *)param_1 & 4) == 0)) {
        FUN_004391c0(pfVar1);
        *param_1 = *param_1 | 4;
        this = extraout_ECX_22;
      }
    }
  }
  else if (sVar2 == 2) {
    pfVar1 = (float *)(param_1 + 0x12f);
    fVar3 = (float)param_1[0x133] * DAT_004b2ed0;
    fVar4 = DAT_004b2ed0 * (float)param_1[0x134];
    *pfVar1 = *pfVar1 + DAT_004b2ed0 * (float)param_1[0x132] * 0.5;
    param_1[0x130] = (uint)(fVar3 * 0.5 + (float)param_1[0x130]);
    param_1[0x131] = (uint)(fVar4 * 0.5 + (float)param_1[0x131]);
    if (((int)param_1[0x13a] < 8) || ((*param_1 & 2) == 0)) {
LAB_00409c81:
      if (param_1[0x101] != 0) {
        *(undefined2 *)((int)param_1 + 0x532) = 1;
        goto LAB_00409c9a;
      }
    }
    else {
      if ((*param_1 & 0x10) == 0) {
        iVar6 = FUN_00437810(pfVar1);
        this = extraout_ECX;
      }
      else {
        iVar6 = FUN_00437980((float)param_1[0x137]);
        this = extraout_ECX_00;
      }
      if (iVar6 != 1) {
        if ((iVar6 == 2) && ((*(byte *)param_1 & 4) == 0)) {
          FUN_004391c0(pfVar1);
          *param_1 = *param_1 | 4;
          this = extraout_ECX_04;
        }
        goto LAB_00409c81;
      }
      *(undefined2 *)((int)param_1 + 0x532) = 3;
      FUN_0040d6e0();
      uVar10 = param_1[0x149];
      this = extraout_ECX_01;
      if ((int)uVar10 < 0) goto LAB_00409f6e;
      this_00 = *(void **)(&DAT_004debdc + DAT_004b43c8);
      if ((DAT_004cee78 & 0x8000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + '\x01';
      }
      *(int *)((int)this_00 + 0x130) = *(int *)((int)this_00 + 0x130) + 1;
      pvVar5 = FUN_004621c0();
      *(uint *)((int)pvVar5 + 0x480) = *(uint *)((int)pvVar5 + 0x480) | 1;
      *(undefined4 *)((int)pvVar5 + 0x20) = 0x17;
      if (pfVar1 == (float *)0x0) {
        *(undefined4 *)((int)pvVar5 + 0x430) = 0;
        *(undefined4 *)((int)pvVar5 + 0x434) = 0;
        *(undefined4 *)((int)pvVar5 + 0x438) = 0;
      }
      else {
        *(float *)((int)pvVar5 + 0x430) = *pfVar1 + 32.0 + 192.0;
        *(float *)((int)pvVar5 + 0x434) = (float)param_1[0x130] + 16.0;
        *(uint *)((int)pvVar5 + 0x438) = param_1[0x131];
      }
LAB_00409c33:
      FUN_00454d10(this_00,pvVar5,uVar10);
      FUN_00461250();
      this = extraout_ECX_02;
      if ((DAT_004cee78 & 0x8000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + -1;
        this = extraout_ECX_03;
      }
    }
  }
  else if (sVar2 == 3) {
    fVar3 = (float)param_1[0x133] * DAT_004b2ed0;
    fVar4 = DAT_004b2ed0 * (float)param_1[0x134];
    param_1[0x12f] = (uint)(DAT_004b2ed0 * (float)param_1[0x132] * 0.5 + (float)param_1[0x12f]);
    param_1[0x130] = (uint)(fVar3 * 0.5 + (float)param_1[0x130]);
    param_1[0x131] = (uint)(fVar4 * 0.5 + (float)param_1[0x131]);
  }
LAB_00409f6e:
  if (param_1[0xff] != 0) {
    if ((param_1[0x14a] & 0x20000) != 0) {
      FUN_0040c000();
      this = extraout_ECX_23;
    }
    if ((param_1[0x14a] & 0x40000) != 0) {
      FUN_0040c0b0();
      this = extraout_ECX_24;
    }
    if ((((param_1[0x14a] & 0x400) == 0) && ((int)param_1[0x148] < 1)) &&
       (iVar6 = FUN_00409900(param_1 + 0x12f,*(float *)(param_1[0xff] + 0x38),
                             *(float *)(param_1[0xff] + 0x34)), this = extraout_ECX_25, iVar6 != 0))
    goto LAB_004099f1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] - 1;
  }
  if (0 < (int)param_1[0x148]) {
    param_1[0x148] = param_1[0x148] - 1;
  }
  lVar9 = FUN_00455630(this,(short *)(param_1 + 2),(uint)(param_1 + 2));
  if ((int)lVar9 == 0) {
    return 0;
  }
LAB_004099f1:
  FUN_00409350();
  return 0xffffffff;
}


