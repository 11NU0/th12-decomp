/* undefined __thiscall FUN_004329a0(void * this, int param_1) @ 004329a0  3365 bytes */
#include "th12.h"

void __thiscall FUN_004329a0(void *this,int param_1)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  void *pvVar6;
  char *pcVar7;
  void *extraout_ECX;
  void *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  void *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  void *this_00;
  void *this_01;
  void *this_02;
  void *extraout_ECX_04;
  undefined4 extraout_ECX_05;
  void *this_03;
  void *extraout_ECX_06;
  undefined4 extraout_ECX_07;
  void *this_04;
  void *extraout_ECX_08;
  void *extraout_ECX_09;
  undefined4 extraout_ECX_10;
  void *extraout_ECX_11;
  void *this_05;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 uVar8;
  void *extraout_ECX_14;
  void *this_06;
  void *extraout_ECX_15;
  void *extraout_ECX_16;
  void *extraout_ECX_17;
  void *extraout_ECX_18;
  byte *pbVar9;
  byte *extraout_ECX_19;
  void *this_07;
  undefined4 extraout_ECX_20;
  uint extraout_ECX_21;
  uint extraout_ECX_22;
  uint uVar10;
  uint extraout_ECX_23;
  void *this_08;
  void *this_09;
  undefined4 *puVar11;
  int *piVar12;
  bool bVar13;
  int iVar14;
  int local_6c;
  int local_68;
  char local_44 [64];
  uint local_4;
  
  pvVar6 = DAT_004b44e8;
  local_4 = DAT_004ad138 ^ (uint)&local_6c;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 1:
    if (9 < *(int *)(param_1 + 0x14)) {
      *(undefined4 *)(param_1 + 4) = 3;
      *(undefined4 *)(param_1 + 0x40) = 4;
      if (*(int *)((int)pvVar6 + 0x74) != 0) {
        *(undefined4 *)(param_1 + 200 + *(int *)(param_1 + 0x10c) * 4) = 2;
        *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
      }
      *(undefined4 *)(param_1 + 0x108) = 1;
      iVar14 = *(int *)(param_1 + 0x40);
      if (iVar14 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else if (iVar14 < 1) {
        *(int *)(param_1 + 0x38) = iVar14 + -1;
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      FUN_00461970(pvVar6,*(int *)(param_1 + 0x1e8));
      *(undefined4 *)(param_1 + 0x1fc) = 0;
      ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
      return;
    }
    break;
  case 2:
    if (9 < *(int *)(param_1 + 0x14)) {
      *(undefined4 *)(param_1 + 4) = 3;
      *(undefined4 *)(param_1 + 0x40) = 4;
      pvVar6 = *(void **)(param_1 + 0x10c);
      *(undefined4 *)(param_1 + 200 + (int)pvVar6 * 4) = 2;
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
      *(undefined4 *)(param_1 + 200 + *(int *)(param_1 + 0x10c) * 4) = 0;
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
      *(undefined4 *)(param_1 + 0x108) = 1;
      iVar14 = *(int *)(param_1 + 0x40);
      if (iVar14 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
      else if (iVar14 < 2) {
        *(int *)(param_1 + 0x38) = iVar14 + -1;
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
      FUN_00461970(pvVar6,*(int *)(param_1 + 0x1e8));
      *(undefined4 *)(param_1 + 0x1fc) = 1;
      ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
      return;
    }
    break;
  case 3:
    pvVar6 = *(void **)(param_1 + 0x38);
    *(void **)(param_1 + 0x3c) = pvVar6;
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
      pvVar6 = extraout_ECX;
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
      pvVar6 = extraout_ECX_00;
    }
    if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x38)) {
      FUN_00461970(pvVar6,*(int *)(param_1 + 0x1e8));
      FUN_00453d90(extraout_ECX_01,10);
      pvVar6 = extraout_ECX_02;
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      FUN_00453d90(pvVar6,7);
      switch(*(int *)(param_1 + 0x38)) {
      case 0:
        FUN_00461970(*(void **)(param_1 + 0x1ec),(int)*(void **)(param_1 + 0x1ec));
        FUN_00461970(this_00,*(int *)(param_1 + 0x1e8));
        *(undefined4 *)(param_1 + 4) = 4;
        break;
      case 1:
        piVar12 = (int *)FUN_00462060(extraout_ECX_03);
        FUN_00461970(this_01,*piVar12);
        *(uint *)(param_1 + 4) = 5 - (uint)(*(int *)((int)DAT_004b44e8 + 0x74) != 0);
        break;
      case 2:
        piVar12 = (int *)FUN_00462060(extraout_ECX_03);
        FUN_00461970(this_02,*piVar12);
        *(undefined4 *)(param_1 + 4) = 7;
        break;
      case 3:
        puVar11 = (undefined4 *)FUN_00462060(extraout_ECX_03);
        FUN_00461970((void *)*puVar11,(int)*puVar11);
        pvVar6 = DAT_004b44e8;
        *(undefined4 *)(param_1 + 4) = 5;
        *(uint *)(param_1 + 4) = 5 - (uint)(*(int *)((int)pvVar6 + 0x74) != 0);
      }
      FUN_004067e0(0);
      pvVar6 = extraout_ECX_04;
    }
    if ((*(int *)(param_1 + 0x1fc) == 0) && ((DAT_004d48c4 & 0x200000) != 0)) {
      FUN_00453d90(pvVar6,7);
      puVar11 = (undefined4 *)FUN_00462060(extraout_ECX_05);
      FUN_00461970((void *)*puVar11,(int)*puVar11);
      *(undefined4 *)(param_1 + 4) = 4;
      FUN_004067e0(0);
      iVar14 = *(int *)(param_1 + 0x40);
      if (iVar14 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 3;
      }
      else if (iVar14 < 4) {
        *(int *)(param_1 + 0x38) = iVar14 + -1;
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = 3;
      }
      FUN_00461970(this_03,*(int *)(param_1 + 0x1ec));
      pvVar6 = extraout_ECX_06;
    }
    if ((DAT_004d48c4 & 0x10000) != 0) {
      FUN_00453d90(pvVar6,7);
      piVar12 = (int *)FUN_00462060(extraout_ECX_07);
      FUN_00461970(this_04,*piVar12);
      *(undefined4 *)(param_1 + 4) = 4;
      FUN_004067e0(0);
      iVar14 = *(int *)(param_1 + 0x40);
      pvVar6 = extraout_ECX_08;
      if (iVar14 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
      else if (iVar14 < 2) {
        *(int *)(param_1 + 0x38) = iVar14 + -1;
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
    }
    if (*(int *)(param_1 + 0x1fc) != 0) break;
    goto LAB_00432f38;
  case 4:
    if (0xb < *(int *)(param_1 + 0x14)) {
      iVar14 = *(int *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 4) = 0;
      if (iVar14 == 0) {
        FUN_00432960();
      }
      else {
        if (iVar14 == 1) {
          FUN_00461970(*(void **)(param_1 + 0x1ec),(int)*(void **)(param_1 + 0x1ec));
          FUN_00461970(this_09,*(int *)(param_1 + 0x1e8));
          FUN_0040f720(4);
          ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
          return;
        }
        if (iVar14 == 3) {
          FUN_00461970(this,*(int *)(param_1 + 0x1ec));
          FUN_00461970(*(void **)(param_1 + 0x1e8),(int)*(void **)(param_1 + 0x1e8));
          DAT_004cee40 = (*(int *)((int)DAT_004b44e8 + 0x74) != 0) + 10;
          ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
          return;
        }
      }
    }
    break;
  case 5:
  case 7:
    if (*(int *)(param_1 + 0x14) < 0x14) break;
    if (*(int *)(param_1 + 0x14) == 0x14) {
      piVar12 = (int *)FUN_00464900();
      *(undefined4 *)(param_1 + 0x40) = 2;
      *(undefined4 *)(param_1 + 0x108) = 1;
      iVar14 = piVar12[2];
      if (iVar14 == 0) {
        *piVar12 = 1;
      }
      else if (iVar14 < 2) {
        *piVar12 = iVar14 + -1;
      }
      else {
        *piVar12 = 1;
      }
      FUN_00461970(*(void **)(param_1 + 0x1e8),(int)*(void **)(param_1 + 0x1e8));
      this = extraout_ECX_09;
    }
    if (*(int *)(param_1 + 0x14) < 0x1e) break;
    if (*(int *)(param_1 + 0x14) == 0x1e) {
      FUN_00461970(this,*(int *)(param_1 + 0x1e8));
    }
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
    }
    pvVar6 = *(void **)(param_1 + 0x3c);
    if (pvVar6 != *(void **)(param_1 + 0x38)) {
      FUN_00461970(pvVar6,*(int *)(param_1 + 0x1e8));
      FUN_00453d90(extraout_ECX_10,10);
      pvVar6 = extraout_ECX_11;
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      iVar14 = *(int *)(param_1 + 0x38);
      if (iVar14 == 0) {
        puVar11 = (undefined4 *)FUN_00462060(pvVar6);
        FUN_00461970((void *)*puVar11,(int)*puVar11);
        iVar14 = 7;
        *(uint *)(param_1 + 4) = (uint)(*(int *)(param_1 + 4) == 7) * 2 + 6;
        uVar8 = extraout_ECX_13;
LAB_00432ea3:
        FUN_00453d90(uVar8,iVar14);
      }
      else if (iVar14 == 1) {
        piVar12 = (int *)FUN_00462060(pvVar6);
        FUN_00461970(this_05,*piVar12);
        *(undefined4 *)(param_1 + 4) = 6;
        iVar14 = 9;
        uVar8 = extraout_ECX_12;
        goto LAB_00432ea3;
      }
      FUN_004067e0(0);
      pvVar6 = extraout_ECX_14;
    }
    if ((DAT_004d48c4 & 0x102) != 0) {
      FUN_00453d90(pvVar6,9);
      if (*(int *)(param_1 + 0x38) == 0) {
        iVar14 = *(int *)(param_1 + 0x40);
        if (iVar14 == 0) {
          *(undefined4 *)(param_1 + 0x38) = 1;
        }
        else if (iVar14 < 2) {
          *(int *)(param_1 + 0x38) = iVar14 + -1;
        }
        else {
          *(undefined4 *)(param_1 + 0x38) = 1;
        }
        FUN_00461970(this_06,*(int *)(param_1 + 0x1e8));
        pvVar6 = extraout_ECX_16;
      }
      else {
        pvVar6 = this_06;
        if (*(int *)(param_1 + 0x38) == 1) {
          puVar11 = (undefined4 *)FUN_00462060(this_06);
          FUN_00461970((void *)*puVar11,(int)*puVar11);
          *(undefined4 *)(param_1 + 4) = 6;
          FUN_004067e0(0);
          pvVar6 = extraout_ECX_15;
        }
      }
    }
LAB_00432f38:
    if ((DAT_004d48c4 & 0x100) != 0) {
      iVar14 = *(int *)(param_1 + 0x40);
      if (iVar14 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else if (iVar14 < 1) {
        *(int *)(param_1 + 0x38) = iVar14 + -1;
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      FUN_00461970(pvVar6,*(int *)(param_1 + 0x1ec));
      FUN_00461970(*(void **)(param_1 + 0x1e8),(int)*(void **)(param_1 + 0x1e8));
      *(undefined4 *)(param_1 + 4) = 4;
      FUN_004067e0(0);
      ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
      return;
    }
    break;
  case 6:
    if (0x13 < *(int *)(param_1 + 0x14)) {
      if (*(int *)(param_1 + 0x38) == 0) {
        FUN_00461970(this,*(int *)(param_1 + 0x1e8));
        *(undefined4 *)(param_1 + 4) = 4;
        FUN_00464940();
      }
      else if (*(int *)(param_1 + 0x38) == 1) {
        FUN_00464940();
        FUN_00461970(this_08,*(int *)(param_1 + 0x1e8));
        *(undefined4 *)(param_1 + 4) = 3;
        FUN_004067e0(0);
        ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
        return;
      }
      FUN_004067e0(0);
      ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
      return;
    }
    break;
  case 8:
    if (0x13 < *(int *)(param_1 + 0x14)) {
      *(undefined4 *)(param_1 + 4) = 9;
      FUN_004067e0(0);
      FUN_00461d80();
      piVar12 = (int *)FUN_00464900();
      *(undefined4 *)(param_1 + 0x40) = 0x19;
      *(undefined4 *)(param_1 + 0x108) = 1;
      iVar14 = piVar12[2];
      if (iVar14 == 0) {
        *piVar12 = 0;
      }
      else if (iVar14 < 1) {
        *piVar12 = iVar14 + -1;
      }
      else {
        *piVar12 = 0;
      }
      iVar14 = 1;
      puVar11 = (undefined4 *)(param_1 + 0x204);
      do {
        _sprintf(local_44,"th12_%.2d.rpy",iVar14);
        pvVar6 = FUN_0043b6f0(local_44);
        *puVar11 = pvVar6;
        iVar14 = iVar14 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar14 < 0x1a);
      ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
      return;
    }
    break;
  case 9:
    if (9 < *(int *)(param_1 + 0x14)) {
      piVar12 = (int *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
      if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
        FUN_00464970(-1);
        this = extraout_ECX_17;
      }
      if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
        FUN_00464970(1);
        this = extraout_ECX_18;
      }
      if (*(int *)(param_1 + 0x3c) != *piVar12) {
        FUN_00453d90(this,10);
      }
      if ((DAT_004d48c4 & 0x80001) != 0) {
        *(undefined4 *)(param_1 + 4) = 10;
        FUN_004067e0(0);
        iVar14 = *(int *)(param_1 + 0x118);
        piVar12 = (int *)(param_1 + 0x110);
        if (iVar14 == 0) {
          *piVar12 = 0;
        }
        else if (iVar14 < 1) {
          *piVar12 = iVar14 + -1;
        }
        else {
          *piVar12 = 0;
        }
        *(undefined4 *)(param_1 + 0x118) = 0x5b;
        *(undefined4 *)(param_1 + 0x1e0) = 1;
        if ((*(int *)(param_1 + 500) == 0) || (((byte)DAT_004b0ce0 & 0x10) != 0)) {
          piVar12 = (int *)(DAT_004b4518 + 0x1c);
          __time64((__time64_t *)(*(int *)(DAT_004b4518 + 0x1c) + 0xc));
          *(undefined4 *)(*piVar12 + 0x68) = DAT_004b0cb0;
        }
        else {
          piVar12 = (int *)(DAT_004b4518 + 0x1c);
          __time64((__time64_t *)(*(int *)(DAT_004b4518 + 0x1c) + 0xc));
          *(undefined4 *)(*piVar12 + 0x68) = 8;
        }
        pbVar5 = (byte *)(param_1 + 0x2cc);
        pcVar7 = (char *)(DAT_004b451c + 0x1e9c0);
        iVar14 = (int)pbVar5 - (int)pcVar7;
        do {
          cVar3 = *pcVar7;
          pcVar7[iVar14] = cVar3;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        pbVar9 = &DAT_004a0ee4;
        do {
          bVar2 = *pbVar5;
          bVar13 = bVar2 < *pbVar9;
          if (bVar2 != *pbVar9) {
LAB_00433100:
            iVar14 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_00433105;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar13 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_00433100;
          pbVar5 = pbVar5 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar2 != 0);
        iVar14 = 0;
LAB_00433105:
        if (iVar14 != 0) {
          FUN_00464970(-1);
          pbVar9 = extraout_ECX_19;
        }
        iVar14 = 8;
        do {
          if (*(char *)(iVar14 + 0x2cb + param_1) != ' ') break;
          iVar14 = iVar14 + -1;
        } while (0 < iVar14);
        *(int *)(param_1 + 0x1f0) = iVar14;
        FUN_00453d90(pbVar9,7);
        ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
        return;
      }
      if ((DAT_004d48c4 & 0x102) != 0) {
        local_68 = param_1 + 0x10;
        *(undefined4 *)(param_1 + 4) = 0xe;
        FUN_004067e0(0);
        FUN_00464940();
        *(undefined4 *)(param_1 + 0x108) = 1;
        *(undefined4 *)(param_1 + 0x40) = 4;
        FUN_00461970(this_07,*(int *)(param_1 + 0x1e8));
        puVar11 = (undefined4 *)(param_1 + 0x204);
        local_6c = 0x19;
        do {
          FUN_0043b7c0();
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
          local_6c = local_6c + -1;
        } while (local_6c != 0);
        *(undefined4 *)(param_1 + 4) = 4;
        iVar14 = *(int *)(param_1 + 0x40);
        if (iVar14 == 0) {
          *piVar12 = 1;
        }
        else if (iVar14 < 2) {
          *piVar12 = iVar14 + -1;
        }
        else {
          *piVar12 = 1;
        }
        FUN_004067e0(0);
        FUN_00453d90(extraout_ECX_20,9);
        ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
        return;
      }
    }
    break;
  case 10:
    if (*(int *)(param_1 + 0x14) < 10) break;
    puVar1 = (uint *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x110);
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-0xd);
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(0xd);
    }
    if (((DAT_004d48c4 & 0x40) != 0) || ((DAT_004d48c0 & 0x40) != 0)) {
      if (*puVar1 == ((int)*puVar1 / 0xd) * 0xd) {
        iVar14 = 0xc;
      }
      else {
        iVar14 = -1;
      }
      FUN_00464970(iVar14);
    }
    if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
      if ((int)*puVar1 % 0xd == 0xc) {
        iVar14 = -0xc;
      }
      else {
        iVar14 = 1;
      }
      FUN_00464970(iVar14);
    }
    uVar10 = *(uint *)(param_1 + 0x114);
    if (uVar10 != *puVar1) {
      FUN_00453d90(uVar10,10);
      uVar10 = extraout_ECX_21;
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      uVar4 = *puVar1;
      if ((int)uVar4 < 0x58) {
        uVar10 = *(uint *)(param_1 + 0x1f0);
        if ((int)uVar10 < 8) {
          *(char *)(uVar10 + 0x2cc + param_1) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
               [uVar4];
LAB_00433320:
          *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
          if (7 < *(int *)(param_1 + 0x1f0)) {
            FUN_0040f790(0x5a,puVar1);
            uVar10 = extraout_ECX_22;
          }
        }
        else {
          *(char *)(uVar10 + 0x2cb + param_1) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
               [uVar4];
        }
      }
      else if (uVar4 == 0x58) {
        iVar14 = *(int *)(param_1 + 0x1f0);
        if (iVar14 < 8) {
          *(undefined *)(iVar14 + 0x2cc + param_1) = 0x20;
          goto LAB_00433320;
        }
        *(undefined *)(iVar14 + 0x2cb + param_1) = 0x20;
      }
      else {
        if (uVar4 == 0x59) {
          iVar14 = *(int *)(param_1 + 0x1f0);
          if (iVar14 != 0) {
            *(int *)(param_1 + 0x1f0) = iVar14 + -1;
            *(undefined *)(iVar14 + 0x2cb + param_1) = 0x20;
            FUN_00453d90(uVar10,9);
            ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
            return;
          }
          break;
        }
        if (uVar4 == 0x5a) {
          FUN_00453d90(uVar10,0x12);
          _sprintf(local_44,"th12_%.2d.rpy",*(int *)(param_1 + 0x38) + 1);
          FUN_0043b7c0();
          pcVar7 = (char *)(param_1 + 0x2cc);
          FUN_0043bc10(local_44,pcVar7,1);
          iVar14 = *(int *)(param_1 + 0x38);
          pvVar6 = FUN_0043b6f0(local_44);
          *(void **)(param_1 + 0x204 + iVar14 * 4) = pvVar6;
          *(undefined4 *)(param_1 + 4) = 9;
          FUN_004067e0(0);
          iVar14 = (DAT_004b451c + 0x1e9c0) - (int)pcVar7;
          do {
            cVar3 = *pcVar7;
            pcVar7[iVar14] = cVar3;
            pcVar7 = pcVar7 + 1;
          } while (cVar3 != '\0');
          ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
          return;
        }
      }
      FUN_00453d90(uVar10,7);
      uVar10 = extraout_ECX_23;
    }
    if ((DAT_004d48c4 & 0x102) != 0) {
      FUN_00453d90(uVar10,9);
      iVar14 = *(int *)(param_1 + 0x1f0);
      if (iVar14 != 0) {
        *(int *)(param_1 + 0x1f0) = iVar14 + -1;
        *(undefined *)(iVar14 + 0x2cb + param_1) = 0x20;
        ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
        return;
      }
      *(undefined4 *)(param_1 + 4) = 9;
      FUN_004067e0(0);
      ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
      return;
    }
  }
  ___security_check_cookie_4(local_4 ^ (uint)&local_6c);
  return;
}


