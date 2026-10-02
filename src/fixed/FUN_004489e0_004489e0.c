/* undefined __fastcall FUN_004489e0(void * param_1) @ 004489e0  1460 bytes */
#include "th12.h"

void __fastcall FUN_004489e0(void *param_1)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  void *pvVar7;
  char *pcVar8;
  undefined4 extraout_ECX;
  void *this;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  byte *pbVar9;
  byte *extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  uint uVar10;
  uint extraout_ECX_07;
  void *this_00;
  undefined4 extraout_ECX_08;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  bool bVar14;
  int local_48;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&local_48;
  switch(*(undefined4 *)((int)param_1 + 0x24)) {
  case 0:
    *(undefined4 *)((int)param_1 + 0x30) = 0x19;
    *(undefined4 *)((int)param_1 + 0xf8) = 1;
    iVar13 = *(int *)((int)param_1 + 0x30);
    if (iVar13 == 0) {
      *(undefined4 *)((int)param_1 + 0x28) = 0;
    }
    else if (iVar13 < 1) {
      *(int *)((int)param_1 + 0x28) = iVar13 + -1;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x28) = 0;
    }
    DAT_004b452c = &DAT_004aedf0;
    DAT_004b0cb0 = 8;
    DAT_004b0cb4 = 8;
    iVar13 = 1;
    puVar12 = (undefined4 *)((int)param_1 + 0x5a80);
    do {
      _sprintf(local_44,"th12_%.2d.rpy",iVar13);
      pvVar7 = FUN_0043b6f0(local_44);
      *puVar12 = pvVar7;
      iVar13 = iVar13 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar13 < 0x1a);
    piVar5 = FUN_00461920(extraout_ECX,DAT_004ce8cc,*(int *)((int)param_1 + 0x454));
    if (piVar5 == (int *)0x0) {
      FUN_004615a0((void *)0x0,*(void **)((int)param_1 + 0x14),&local_48,99,0);
      *(int *)((int)param_1 + 0x454) = local_48;
      FUN_004619e0(this,local_48);
    }
    FUN_004615a0((void *)0x0,*(void **)((int)param_1 + 0x14),&local_48,0x75,0);
    *(int *)((int)param_1 + 0x49c) = local_48;
    FUN_0043ef40(1);
  case 1:
    if (6 < *(int *)((int)param_1 + 0x2b8)) {
LAB_00448b07:
      FUN_0043ef40(2);
    }
    break;
  case 2:
    *(undefined4 *)((int)param_1 + 0x2c) = *(undefined4 *)((int)param_1 + 0x28);
    if (((DAT_004d48c4 & 0x10) != 0) || (pvVar7 = param_1, (DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
      pvVar7 = extraout_ECX_00;
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
      pvVar7 = extraout_ECX_01;
    }
    if (*(int *)((int)param_1 + 0x2c) != *(int *)((int)param_1 + 0x28)) {
      FUN_00453d90(pvVar7,10);
    }
    if ((DAT_004d48c4 & 0x102) == 0) {
      if ((DAT_004d48c4 & 0x80001) != 0) {
        piVar5 = (int *)((int)param_1 + 0x5990);
        *(int *)((int)param_1 + 0x5a78) = *(int *)((int)param_1 + 0x28);
        iVar13 = *(int *)((int)param_1 + 0x5998);
        if (iVar13 == 0) {
          *piVar5 = 0;
        }
        else if (iVar13 < 1) {
          *piVar5 = iVar13 + -1;
        }
        else {
          *piVar5 = 0;
        }
        pvVar7 = DAT_004b4518;
        *(undefined4 *)((int)param_1 + 0x5998) = 0x5b;
        *(undefined4 *)((int)param_1 + 0x5a60) = 1;
        __time64((__time64_t *)(*(int *)((int)pvVar7 + 0x1c) + 0xc));
        *(undefined4 *)(*(int *)((int)pvVar7 + 0x1c) + 0x68) = 8;
        pbVar6 = (byte *)((int)param_1 + 0x5978);
        pcVar8 = (char *)((int)DAT_004b451c + 0x1e9c0);
        iVar13 = (int)pbVar6 - (int)pcVar8;
        do {
          cVar3 = *pcVar8;
          pcVar8[iVar13] = cVar3;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 != '\0');
        *(undefined4 *)((int)param_1 + 0x5984) = 0;
        pbVar9 = &DAT_004a0ee4;
        do {
          bVar2 = *pbVar6;
          bVar14 = bVar2 < *pbVar9;
          if (bVar2 != *pbVar9) {
LAB_00448c50:
            iVar13 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_00448c55;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar14 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_00448c50;
          pbVar6 = pbVar6 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar2 != 0);
        iVar13 = 0;
LAB_00448c55:
        if (iVar13 != 0) {
          FUN_00464970(-1);
          pbVar9 = extraout_ECX_03;
        }
        iVar13 = 8;
        do {
          if (*(char *)((int)param_1 + iVar13 + 0x5977) != ' ') break;
          iVar13 = iVar13 + -1;
        } while (0 < iVar13);
        *(int *)((int)param_1 + 0x5984) = iVar13;
        FUN_00453d90(pbVar9,7);
        FUN_0043ef40(3);
      }
    }
    else {
      FUN_0043ef40(4);
      FUN_00453d90(extraout_ECX_02,9);
    }
    break;
  case 3:
    puVar1 = (uint *)((int)param_1 + 0x5990);
    *(undefined4 *)((int)param_1 + 0x5994) = *(undefined4 *)((int)param_1 + 0x5990);
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-0xd);
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(0xd);
    }
    if (((DAT_004d48c4 & 0x40) != 0) || ((DAT_004d48c0 & 0x40) != 0)) {
      if (*puVar1 == ((int)*puVar1 / 0xd) * 0xd) {
        iVar13 = 0xc;
      }
      else {
        iVar13 = -1;
      }
      FUN_00464970(iVar13);
    }
    if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
      if ((int)*puVar1 % 0xd == 0xc) {
        iVar13 = -0xc;
      }
      else {
        iVar13 = 1;
      }
      FUN_00464970(iVar13);
    }
    uVar10 = *(uint *)((int)param_1 + 0x5994);
    if (uVar10 != *puVar1) {
      FUN_00453d90(uVar10,10);
      uVar10 = extraout_ECX_04;
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      uVar4 = *puVar1;
      if ((int)uVar4 < 0x58) {
        uVar10 = *(uint *)((int)param_1 + 0x5984);
        if ((int)uVar10 < 8) {
          *(char *)(uVar10 + 0x5978 + (int)param_1) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
               [uVar4];
LAB_00448d90:
          *(int *)((int)param_1 + 0x5984) = *(int *)((int)param_1 + 0x5984) + 1;
          if (7 < *(int *)((int)param_1 + 0x5984)) {
            FUN_0040f790(0x5a,puVar1);
            uVar10 = extraout_ECX_05;
          }
        }
        else {
          *(char *)(uVar10 + 0x5977 + (int)param_1) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
               [uVar4];
        }
      }
      else if (uVar4 == 0x58) {
        iVar13 = *(int *)((int)param_1 + 0x5984);
        if (iVar13 < 8) {
          *(undefined *)(iVar13 + 0x5978 + (int)param_1) = 0x20;
          goto LAB_00448d90;
        }
        *(undefined *)(iVar13 + 0x5977 + (int)param_1) = 0x20;
      }
      else if (uVar4 == 0x59) {
        iVar13 = *(int *)((int)param_1 + 0x5984);
        if (iVar13 == 0) break;
        *(int *)((int)param_1 + 0x5984) = iVar13 + -1;
        *(undefined *)(iVar13 + 0x5977 + (int)param_1) = 0x20;
      }
      else if (uVar4 == 0x5a) {
        FUN_00453d90(uVar10,0x12);
        _sprintf(local_44,"th12_%.2d.rpy",*(int *)((int)param_1 + 0x28) + 1);
        FUN_0043b7c0();
        pcVar8 = (char *)((int)param_1 + 0x5978);
        FUN_0043bc10(local_44,pcVar8,0);
        iVar13 = *(int *)((int)param_1 + 0x28);
        pvVar7 = FUN_0043b6f0(local_44);
        iVar11 = DAT_004b451c + 0x1e9c0;
        *(void **)((int)param_1 + iVar13 * 4 + 0x5a80) = pvVar7;
        iVar11 = iVar11 - (int)pcVar8;
        do {
          cVar3 = *pcVar8;
          pcVar8[iVar11] = cVar3;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 != '\0');
        FUN_0043ef40(2);
        uVar10 = extraout_ECX_06;
      }
      FUN_00453d90(uVar10,7);
      uVar10 = extraout_ECX_07;
    }
    if ((DAT_004d48c4 & 0x102) == 0) break;
    if (*(int *)((int)param_1 + 0x5984) != 0) {
      FUN_00453d90(uVar10,9);
      *(int *)((int)param_1 + 0x5984) = *(int *)((int)param_1 + 0x5984) + -1;
      *(undefined *)(*(int *)((int)param_1 + 0x5984) + 0x5978 + (int)param_1) = 0x20;
      break;
    }
    goto LAB_00448b07;
  case 4:
    if (5 < *(int *)((int)param_1 + 0x2b8)) {
      FUN_0043efd0(param_1);
      FUN_00461970(this_00,*(int *)((int)param_1 + 0x66c));
      *(undefined4 *)((int)param_1 + 0x66c) = 0;
      FUN_0043eee0(extraout_ECX_08,1);
      FUN_00464940();
      pvVar7 = DAT_004b4518;
      if (DAT_004b4518 != (void *)0x0) {
        FUN_0043b450((int)DAT_004b4518);
        FUN_0046ca4f(pvVar7);
      }
      FUN_004300d0(0,"bgm/th12_01.wav");
      FUN_00430150(0,0);
      iVar13 = 0x19;
      puVar12 = (undefined4 *)((int)param_1 + 0x5a80);
      do {
        pvVar7 = (void *)*puVar12;
        if (pvVar7 != (void *)0x0) {
          FUN_0043b450((int)pvVar7);
          FUN_0046ca4f(pvVar7);
        }
        puVar12 = puVar12 + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      _memset((undefined4 *)((int)param_1 + 0x5a80),0,400);
    }
  }
  ___security_check_cookie_4(local_4 ^ (uint)&local_48);
  return;
}


