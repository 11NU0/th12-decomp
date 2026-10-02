/* undefined4 __thiscall FUN_00449360(void * this, void * param_1) @ 00449360  2570 bytes */
#include "th12.h"

undefined4 __thiscall FUN_00449360(void *this,void *param_1)

{
  byte bVar1;
  byte *this_00;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar6;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *this_01;
  undefined4 extraout_ECX_04;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  COLORREF CVar10;
  char *pcVar11;
  int *local_2c;
  int *local_28;
  int local_24;
  char *local_20;
  int *local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  
  switch(*(undefined4 *)((int)param_1 + 0x24)) {
  case 0:
    if (*(int *)((int)param_1 + 0x2b8) == 1) {
      local_28 = (int *)((int)param_1 + 0x28);
      *(undefined4 *)((int)param_1 + 0x30) = 6;
      iVar4 = *(int *)((int)param_1 + 0x30);
      if (iVar4 == 0) {
        *local_28 = 0;
      }
      else if (iVar4 < 1) {
        *local_28 = iVar4 + -1;
      }
      else {
        *local_28 = 0;
      }
      if (*(int *)((int)param_1 + 0x66c) == 0) {
        FUN_004615a0((void *)0x0,*(void **)(DAT_004b43b8 + 0x18fb4),&local_18,0x14,0);
        *(float *)((int)param_1 + 0x66c) = local_18;
      }
      FUN_0043efa0();
      local_1c = (int *)0x0;
      this_00 = FUN_00463c10((size_t *)&local_2c,0);
      *(byte **)((int)param_1 + 0x5c10) = this_00;
      if (this_00 == (byte *)0x0) goto LAB_00449c27;
      if (0 < (int)local_2c) {
        local_20 = (char *)((int)param_1 + 0xf34);
        iVar4 = (int)param_1 + 0x734;
        iVar7 = (int)param_1 + 0x1774;
        local_24 = iVar4;
        do {
          bVar1 = *this_00;
          if ((bVar1 == 0x23) || (bVar1 != 0x40)) {
            this_00 = (byte *)FUN_00449d80(CONCAT31((int3)((uint)iVar4 >> 8),bVar1),(int *)&local_2c
                                          );
            iVar4 = extraout_ECX_00;
          }
          else {
            pvVar2 = (void *)FUN_00449dc0(this_00 + 1,local_24);
            this_00 = (byte *)FUN_00449dc0(pvVar2,(int)local_20);
            local_18 = 1.12104e-44;
            do {
              this_00 = (byte *)FUN_00449dc0(this_00,iVar7);
              iVar7 = iVar7 + 0x42;
              local_18 = (float)((int)local_18 + -1);
            } while (local_18 != 0.0);
            local_1c = (int *)((int)local_1c + 1);
            local_24 = local_24 + 0x40;
            local_20 = (char *)((int)local_20 + 0x42);
            local_18 = 0.0;
            iVar4 = extraout_ECX;
          }
        } while (0 < (int)local_2c);
      }
      *(int **)((int)param_1 + 0x30) = local_1c;
      iVar4 = local_28[2];
      iVar7 = 0;
      if (iVar4 == 0) {
        *local_28 = 0;
      }
      else if (iVar4 < 1) {
        *local_28 = iVar4 + -1;
      }
      else {
        *local_28 = 0;
      }
      *(undefined4 *)((int)param_1 + 0x5974) = 0;
      *(int **)((int)param_1 + 0x724) = local_1c;
      pfVar9 = (float *)((int)param_1 + 0x700);
      do {
        FUN_004615a0((void *)0x0,DAT_004cee70,&local_18,iVar7 + 0x29,0);
        *pfVar9 = local_18;
        iVar7 = iVar7 + 1;
        pfVar9 = pfVar9 + 1;
      } while (iVar7 < 8);
      *(undefined4 *)((int)param_1 + 0x728) = 0;
      *(undefined4 *)((int)param_1 + 0x72c) = 0;
      *(undefined4 *)((int)param_1 + 0x730) = 0;
    }
    iVar4 = *(int *)((int)param_1 + 0x2b8);
    if (iVar4 < 10) {
      local_14 = 64.0;
      local_18 = (float)(iVar4 * 0x28 + -0x28);
      local_2c = (int *)(iVar4 * 2 + -2);
      local_10 = (96.0 - (float)*(int *)((int)param_1 + 0x5974) * 20.0) + (float)(int)local_18;
      local_c = 0;
      if ((int)local_2c < iVar4 * 2) {
        local_20 = (char *)((int)param_1 + (int)local_2c * 0x42 + 0xf34);
        local_1c = (int *)((int)param_1 + (int)local_2c * 4 + 0x6b0);
        do {
          if (*(int *)((int)param_1 + 0x724) <= (int)local_2c) break;
          FUN_004615a0((void *)0x0,*(void **)((int)param_1 + 0x14),&local_24,(int)local_2c + 0xd3,0)
          ;
          piVar5 = local_1c;
          *local_1c = local_24;
          piVar3 = FUN_00461920(extraout_ECX_01,DAT_004ce8cc,local_24);
          if (piVar3 == (int *)0x0) {
            *piVar5 = 0;
          }
          if (*(char *)(DAT_004b451c + 0x1e9da + (int)local_2c) == '\0') {
            FUN_00460760(0xffffff,0,0,0,&DAT_004a20a8);
          }
          else {
            FUN_00460760(0xffffff,0,0,0,local_20);
          }
          piVar5 = local_2c;
          if (((int)local_2c < *(int *)((int)param_1 + 0x5974)) ||
             (*(int *)((int)param_1 + 0x5974) + 10 <= (int)local_2c)) {
            piVar3[0x11f] = piVar3[0x11f] & 0xfffffffd;
          }
          else {
            piVar3[0x11f] = piVar3[0x11f] | 2;
          }
          if (local_2c == *(int **)((int)param_1 + 0x28)) {
            local_14 = local_14 - 4.0;
          }
          FUN_00427b90(&local_14,piVar3 + 0x109,4,0);
          if (piVar5 == *(int **)((int)param_1 + 0x28)) {
            local_14 = local_14 + 4.0;
          }
          local_10 = local_10 + 20.0;
          local_18 = (float)((piVar5 != *(int **)((int)param_1 + 0x28)) + 2);
          if ((code *)piVar3[0x125] != (code *)0x0) {
            (*(code *)piVar3[0x125])();
          }
          local_1c = local_1c + 1;
          local_20 = local_20 + 0x42;
          *(undefined2 *)(piVar3 + 0xf1) = local_18._0_2_;
          local_2c = (int *)((int)piVar5 + 1);
        } while ((int)local_2c < *(int *)((int)param_1 + 0x2b8) * 2);
      }
    }
    if (9 < *(int *)((int)param_1 + 0x2b8)) {
      *(undefined4 *)((int)param_1 + 0x24) = 1;
      if ((*(uint *)((int)param_1 + 0x2c4) & 1) == 0) {
        *(undefined4 *)((int)param_1 + 700) = 0;
        *(undefined4 *)((int)param_1 + 0x2b8) = 0;
        *(undefined4 *)((int)param_1 + 0x2b4) = 0xfff0bdc1;
        *(undefined4 **)((int)param_1 + 0x2c0) = &DAT_004b2ed0;
        *(uint *)((int)param_1 + 0x2c4) = *(uint *)((int)param_1 + 0x2c4) | 1;
      }
      *(undefined4 *)((int)param_1 + 0x2b8) = 0;
      *(undefined4 *)((int)param_1 + 700) = 0;
      *(undefined4 *)((int)param_1 + 0x2b4) = 0xffffffff;
      return 0;
    }
    break;
  case 1:
    uVar6 = *(uint *)((int)param_1 + 0x2b8) & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    if ((uVar6 == 0) && (*(int *)((int)param_1 + 0x728) < 8)) {
      FUN_00461c50(this);
      if ((*(char *)(*(int *)((int)param_1 + 0x72c) + 0x1e9da + DAT_004b451c) == '\0') &&
         (*(int *)((int)param_1 + 0x730) != 0)) {
        pcVar11 = (&PTR_DAT_004b33c0)[*(int *)((int)param_1 + 0x728)];
        CVar10 = 0x8080ff;
      }
      else {
        pcVar11 = (char *)((int)param_1 +
                          (*(int *)((int)param_1 + 0x728) + *(int *)((int)param_1 + 0x72c) * 8) *
                          0x42 + 0x1774);
        CVar10 = 0xffffff;
      }
      FUN_00460760(CVar10,0,0,0,pcVar11);
      FUN_0040d6e0();
      *(int *)((int)param_1 + 0x728) = *(int *)((int)param_1 + 0x728) + 1;
    }
    if (4 < *(int *)((int)param_1 + 0x2b8)) {
      FUN_0043ef40(2);
      return 0;
    }
    break;
  case 2:
    uVar6 = *(uint *)((int)param_1 + 0x2b8) & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    if ((uVar6 == 0) && (*(int *)((int)param_1 + 0x728) < 8)) {
      FUN_00461c50(0);
      if ((*(char *)(*(int *)((int)param_1 + 0x72c) + 0x1e9da + DAT_004b451c) == '\0') &&
         (*(int *)((int)param_1 + 0x730) != 0)) {
        pcVar11 = (&PTR_DAT_004b33c0)[*(int *)((int)param_1 + 0x728)];
        CVar10 = 0x8080ff;
      }
      else {
        pcVar11 = (char *)((int)param_1 +
                          (*(int *)((int)param_1 + 0x728) + *(int *)((int)param_1 + 0x72c) * 8) *
                          0x42 + 0x1774);
        CVar10 = 0xffffff;
      }
      FUN_00460760(CVar10,0,0,0,pcVar11);
      FUN_0040d6e0();
      *(int *)((int)param_1 + 0x728) = *(int *)((int)param_1 + 0x728) + 1;
    }
    piVar5 = (int *)((int)param_1 + 0x28);
    *(undefined4 *)((int)param_1 + 0x2c) = *(undefined4 *)((int)param_1 + 0x28);
    local_28 = piVar5;
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
    }
    if (*(int *)((int)param_1 + 0x2c) != *piVar5) {
      FUN_00453d90(*(int *)((int)param_1 + 0x2c),10);
      iVar4 = *piVar5;
      if (iVar4 < *(int *)((int)param_1 + 0x5974)) {
LAB_00449951:
        *(int *)((int)param_1 + 0x5974) = iVar4;
      }
      else if (*(int *)((int)param_1 + 0x5974) + 10 <= iVar4) {
        iVar4 = iVar4 + -9;
        goto LAB_00449951;
      }
      iVar4 = 0;
      local_14 = 64.0;
      local_10 = 96.0 - (float)*(int *)((int)param_1 + 0x5974) * 20.0;
      local_c = 0;
      if (0 < *(int *)((int)param_1 + 0x724)) {
        local_2c = (int *)((int)param_1 + 0x6b0);
        do {
          piVar5 = FUN_00461920(local_2c,DAT_004ce8cc,*local_2c);
          if (piVar5 == (int *)0x0) {
            *local_2c = 0;
          }
          if ((iVar4 < *(int *)((int)param_1 + 0x5974)) ||
             (*(int *)((int)param_1 + 0x5974) + 10 <= iVar4)) {
            piVar5[0x11f] = piVar5[0x11f] & 0xfffffffd;
          }
          else {
            piVar5[0x11f] = piVar5[0x11f] | 2;
          }
          if (iVar4 == *local_28) {
            local_14 = local_14 - 4.0;
          }
          local_18 = ABS((float)piVar5[0x10a] - local_10);
          if (local_18 < 40.0 == NAN(local_18)) {
            piVar5[0x109] = (int)local_14;
            piVar5[0x10a] = (int)local_10;
            piVar5[0x10b] = local_c;
          }
          else {
            FUN_00427b90(&local_14,piVar5 + 0x109,4,0);
          }
          if (iVar4 == *local_28) {
            local_14 = local_14 + 4.0;
          }
          local_10 = local_10 + 20.0;
          local_18 = (float)((iVar4 != *local_28) + 2);
          if ((code *)piVar5[0x125] != (code *)0x0) {
            (*(code *)piVar5[0x125])();
          }
          local_2c = local_2c + 1;
          iVar4 = iVar4 + 1;
          *(undefined2 *)(piVar5 + 0xf1) = local_18._0_2_;
        } while (iVar4 < *(int *)((int)param_1 + 0x724));
      }
      if (7 < *(int *)((int)param_1 + 0x728)) {
        *(undefined4 *)((int)param_1 + 0x730) = 0;
      }
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      puVar8 = (undefined4 *)((int)param_1 + 0x700);
      iVar4 = 8;
      do {
        FUN_00461970((void *)*puVar8,(int)*puVar8);
        puVar8 = puVar8 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(int *)((int)param_1 + 0x72c) = *local_28;
      *(undefined4 *)((int)param_1 + 0x728) = 0;
      if ((*(uint *)((int)param_1 + 0x2c4) & 1) == 0) {
        *(undefined4 *)((int)param_1 + 700) = 0;
        *(undefined4 *)((int)param_1 + 0x2b8) = 0;
        *(undefined4 *)((int)param_1 + 0x2b4) = 0xfff0bdc1;
        *(undefined4 **)((int)param_1 + 0x2c0) = &DAT_004b2ed0;
        *(uint *)((int)param_1 + 0x2c4) = *(uint *)((int)param_1 + 0x2c4) | 1;
      }
      iVar4 = DAT_004b451c;
      *(undefined4 *)((int)param_1 + 700) = 0;
      *(undefined4 *)((int)param_1 + 0x2b8) = 0;
      *(undefined4 *)((int)param_1 + 0x2b4) = 0xffffffff;
      if ((*(char *)(*(int *)((int)param_1 + 0x72c) + 0x1e9da + iVar4) == '\0') &&
         (*(int *)((int)param_1 + 0x730) == 0)) {
        if ((DAT_004ceae8 & 0x10) == 0) {
          FUN_00454960(3,0);
          *(undefined4 *)((int)param_1 + 0x730) = 1;
          return 0;
        }
        FUN_00454960(4,0);
        *(undefined4 *)((int)param_1 + 0x730) = 1;
        return 0;
      }
      FUN_004300d0(0,(char *)(*local_28 * 0x40 + 0x734 + (int)param_1));
      if ((DAT_004ceae8 & 0x10) != 0) {
        FUN_00454960(4,0);
      }
      FUN_00454960(2,0);
      *(undefined *)(DAT_004b451c + 0x1e9da) = 1;
      *(undefined4 *)((int)param_1 + 0x730) = 0;
      return 0;
    }
    if ((DAT_004d48c4 & 0x102) != 0) {
LAB_00449c27:
      iVar4 = 0;
      if (*(void **)((int)param_1 + 0x5c10) != (void *)0x0) {
        _free(*(void **)((int)param_1 + 0x5c10));
        *(undefined4 *)((int)param_1 + 0x5c10) = 0;
      }
      *(undefined4 *)((int)param_1 + 0x5c10) = 0;
      FUN_00464940();
      pvVar2 = extraout_ECX_02;
      if (0 < *(int *)((int)param_1 + 0x724)) {
        piVar5 = (int *)((int)param_1 + 0x6b0);
        pvVar2 = extraout_ECX_02;
        do {
          FUN_00461970(pvVar2,*piVar5);
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 1;
          pvVar2 = param_1;
        } while (iVar4 < *(int *)((int)param_1 + 0x724));
      }
      piVar5 = (int *)((int)param_1 + 0x700);
      iVar4 = 8;
      do {
        FUN_00461970(pvVar2,*piVar5);
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + -1;
        pvVar2 = extraout_ECX_03;
      } while (iVar4 != 0);
      FUN_00453d90(extraout_ECX_03,9);
      *(undefined4 *)((int)param_1 + 0x24) = 3;
      if ((*(uint *)((int)param_1 + 0x2c4) & 1) == 0) {
        *(undefined4 *)((int)param_1 + 700) = 0;
        *(undefined4 *)((int)param_1 + 0x2b8) = 0;
        *(undefined4 *)((int)param_1 + 0x2b4) = 0xfff0bdc1;
        *(undefined4 **)((int)param_1 + 0x2c0) = &DAT_004b2ed0;
        *(uint *)((int)param_1 + 0x2c4) = *(uint *)((int)param_1 + 0x2c4) | 1;
      }
      *(undefined4 *)((int)param_1 + 0x2b8) = 0;
      *(undefined4 *)((int)param_1 + 700) = 0;
      *(undefined4 *)((int)param_1 + 0x2b4) = 0xffffffff;
      return 0;
    }
    break;
  case 3:
    if (9 < *(int *)((int)param_1 + 0x2b8)) {
      FUN_0043efd0(this);
      FUN_00461970(this_01,*(int *)((int)param_1 + 0x66c));
      *(undefined4 *)((int)param_1 + 0x66c) = 0;
      FUN_0043eee0(extraout_ECX_04,1);
      FUN_004300d0(0,"bgm/th12_01.wav");
      FUN_00430150(0,0);
      FUN_00464940();
    }
  }
  return 0;
}


