/* undefined __thiscall FUN_00433bb0(void * this, int param_1) @ 00433bb0  3219 bytes */

#include "th12.h"

void __thiscall FUN_00433bb0(void *this,int param_1)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  void *pvVar7;
  char *pcVar8;
  int *piVar9;
  void *this_00;
  void *this_01;
  void *this_02;
  void *extraout_ECX;
  void *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  void *extraout_ECX_02;
  void *this_03;
  undefined4 extraout_ECX_03;
  void *extraout_ECX_04;
  undefined4 extraout_ECX_05;
  void *extraout_ECX_06;
  void *extraout_ECX_07;
  byte *extraout_ECX_08;
  undefined4 extraout_ECX_09;
  uint extraout_ECX_10;
  uint extraout_ECX_11;
  uint uVar10;
  uint extraout_ECX_12;
  byte *extraout_ECX_13;
  byte *extraout_ECX_14;
  void *this_04;
  char *pcVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  bool bVar15;
  int iVar16;
  int local_58;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_48;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&local_58;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0xc:
    if ((9 < *(int *)(param_1 + 0x14)) && ((DAT_004d48c4 & 0x80001) != 0)) {
      FUN_00453d90(this,7);
      *(undefined4 *)(param_1 + 4) = 0xd;
      FUN_00461970(this_00,*(int *)(param_1 + 0x1e8));
      FUN_004067e0(0);
      ___security_check_cookie_4(local_4 ^ (uint)&local_58);
      return;
    }
    break;
  case 0xd:
    if (9 < *(int *)(param_1 + 0x14)) {
      FUN_00431b30();
      if (((byte)DAT_004b0ce0 & 0x10) != 0) {
        piVar12 = (int *)((DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + DAT_004b451c + 0x5a4 +
                         (DAT_004b0cb0 + DAT_004b0ca8 * 6) * 8);
        if (*piVar12 < DAT_004b0c44) {
          *piVar12 = DAT_004b0c44;
        }
        puVar5 = FUN_004357c0(&local_48,0x6f);
        pvVar7 = (void *)*puVar5;
        *(void **)(param_1 + 0x1e8) = pvVar7;
        *(undefined4 *)(param_1 + 4) = 0xe;
        *(undefined4 *)(param_1 + 0x40) = 4;
        *(undefined4 *)(param_1 + 0x108) = 1;
        iVar16 = *(int *)(param_1 + 0x40);
        if (iVar16 == 0) {
          *(undefined4 *)(param_1 + 0x38) = 0;
        }
        else if (iVar16 < 1) {
          *(int *)(param_1 + 0x38) = iVar16 + -1;
        }
        else {
          *(undefined4 *)(param_1 + 0x38) = 0;
        }
        FUN_00461970(pvVar7,*(int *)(param_1 + 0x1e8));
        FUN_00461970(this_01,*(int *)(param_1 + 0x1e8));
        ___security_check_cookie_4(local_4 ^ (uint)&local_58);
        return;
      }
      FUN_00433a30();
      FUN_004067e0(0);
      if (*(int *)(param_1 + 0x1f8) == 0) {
        *(undefined4 *)(param_1 + 4) = 0x12;
        FUN_00461d80();
        ___security_check_cookie_4(local_4 ^ (uint)&local_58);
        return;
      }
      puVar5 = FUN_004357c0(local_54,0x6f);
      *(undefined4 *)(param_1 + 0x1e8) = *puVar5;
      *(undefined4 *)(param_1 + 4) = 0xe;
      *(undefined4 *)(param_1 + 0x40) = 4;
      *(undefined4 *)(param_1 + 0x108) = 1;
      iVar16 = *(int *)(param_1 + 0x40);
      if (iVar16 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else if (iVar16 < 1) {
        *(int *)(param_1 + 0x38) = iVar16 + -1;
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      FUN_00461970(this_02,*(int *)(param_1 + 0x1e8));
      FUN_00461970(*(void **)(param_1 + 0x1e8),(int)*(void **)(param_1 + 0x1e8));
      ___security_check_cookie_4(local_4 ^ (uint)&local_58);
      return;
    }
    break;
  case 0xe:
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
      this = extraout_ECX;
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
      this = extraout_ECX_00;
    }
    if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x38)) {
      FUN_00461970(*(void **)(param_1 + 0x1e8),(int)*(void **)(param_1 + 0x1e8));
      FUN_00453d90(extraout_ECX_01,10);
      this = extraout_ECX_02;
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      piVar12 = (int *)FUN_00462060(this);
      FUN_00461970(this_03,*piVar12);
      FUN_00453d90(extraout_ECX_03,7);
      *(undefined4 *)(param_1 + 4) = 0x13;
      FUN_004067e0(0);
      FUN_00431b30();
      iVar16 = *(int *)(param_1 + 0x38);
      if (iVar16 == 1) {
LAB_00433ea8:
        *(undefined4 *)(param_1 + 4) = 0x13;
        FUN_004067e0(0);
        FUN_00453d90(extraout_ECX_05,7);
        this = extraout_ECX_06;
      }
      else if (iVar16 == 2) {
        *(undefined4 *)(param_1 + 4) = 0x10;
        FUN_004067e0(0);
        FUN_00461d80();
        piVar12 = (int *)FUN_00464900();
        *(undefined4 *)(param_1 + 0x40) = 0x19;
        *(undefined4 *)(param_1 + 0x108) = 1;
        iVar16 = piVar12[2];
        if (iVar16 == 0) {
          *piVar12 = 0;
        }
        else if (iVar16 < 1) {
          *piVar12 = iVar16 + -1;
        }
        else {
          *piVar12 = 0;
        }
        iVar16 = 1;
        puVar5 = (undefined4 *)(param_1 + 0x204);
        do {
          _sprintf(local_44,"th12_%.2d.rpy",iVar16);
          pvVar7 = FUN_0043b6f0(local_44);
          *puVar5 = pvVar7;
          iVar16 = iVar16 + 1;
          puVar5 = puVar5 + 1;
          this = extraout_ECX_07;
        } while (iVar16 < 0x1a);
      }
      else {
        this = extraout_ECX_04;
        if (iVar16 == 3) goto LAB_00433ea8;
      }
    }
    if (((DAT_004d48c4 & 0x102) != 0) && (FUN_00453d90(this,9), *(int *)(param_1 + 0x38) != 1)) {
      iVar16 = *(int *)(param_1 + 0x40);
      if (iVar16 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
      else if (iVar16 < 2) {
        *(int *)(param_1 + 0x38) = iVar16 + -1;
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
      FUN_00461970((void *)0x1,*(int *)(param_1 + 0x1e8));
      ___security_check_cookie_4(local_4 ^ (uint)&local_58);
      return;
    }
    break;
  case 0x10:
    if (9 < *(int *)(param_1 + 0x14)) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
      if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
        FUN_00464970(-1);
      }
      if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
        FUN_00464970(1);
      }
      if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x38)) {
        FUN_00453d90(*(int *)(param_1 + 0x3c),10);
      }
      if ((DAT_004d48c4 & 0x80001) != 0) {
        *(undefined4 *)(param_1 + 4) = 0x11;
        FUN_004067e0(0);
        iVar16 = *(int *)(param_1 + 0x118);
        piVar12 = (int *)(param_1 + 0x110);
        if (iVar16 == 0) {
          *piVar12 = 0;
        }
        else if (iVar16 < 1) {
          *piVar12 = iVar16 + -1;
        }
        else {
          *piVar12 = 0;
        }
        *(undefined4 *)(param_1 + 0x118) = 0x5b;
        *(undefined4 *)(param_1 + 0x1e0) = 1;
        if ((*(int *)(param_1 + 500) == 0) || (((byte)DAT_004b0ce0 & 0x10) != 0)) {
          piVar12 = (int *)(DAT_004b4518 + 0x1c);
          __time64((__time64_t *)(*(int *)(DAT_004b4518 + 0x1c) + 0xc));
          *(int *)(*piVar12 + 0x68) = DAT_004b0cb0;
        }
        else {
          piVar12 = (int *)(DAT_004b4518 + 0x1c);
          __time64((__time64_t *)(*(int *)(DAT_004b4518 + 0x1c) + 0xc));
          *(undefined4 *)(*piVar12 + 0x68) = 8;
        }
        pbVar6 = (byte *)(param_1 + 0x2cc);
        pcVar8 = (char *)(DAT_004b451c + 0x1e9c0);
        iVar16 = (int)pbVar6 - (int)pcVar8;
        do {
          cVar3 = *pcVar8;
          pcVar8[iVar16] = cVar3;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 != '\0');
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        this = &DAT_004a0ee4;
        do {
          bVar2 = *pbVar6;
                    /* WARNING: Load size is inaccurate */
          bVar15 = bVar2 < *this;
          if (bVar2 != *this) {
LAB_00434120:
            iVar16 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_00434125;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar15 = bVar2 < *(byte *)((int)this + 1);
          if (bVar2 != *(byte *)((int)this + 1)) goto LAB_00434120;
          pbVar6 = pbVar6 + 2;
          this = (void *)((int)this + 2);
        } while (bVar2 != 0);
        iVar16 = 0;
LAB_00434125:
        if (iVar16 != 0) {
          FUN_00464970(-1);
          this = extraout_ECX_08;
        }
        iVar16 = 8;
        do {
          if (*(char *)(iVar16 + 0x2cb + param_1) != ' ') break;
          iVar16 = iVar16 + -1;
        } while (0 < iVar16);
        *(int *)(param_1 + 0x1f0) = iVar16;
        goto LAB_00434155;
      }
      if ((DAT_004d48c4 & 0x102) != 0) {
        local_58 = param_1 + 0x10;
        *(undefined4 *)(param_1 + 4) = 0xe;
        FUN_004067e0(0);
        FUN_00461d40();
        FUN_00464940();
        *(undefined4 *)(param_1 + 0x40) = 4;
        *(undefined4 *)(param_1 + 0x108) = 1;
        FUN_00461970(*(void **)(param_1 + 0x1e8),(int)*(void **)(param_1 + 0x1e8));
        puVar5 = (undefined4 *)(param_1 + 0x204);
        iVar16 = 0x19;
        do {
          iVar14 = iVar16;
          pvVar7 = (void *)*puVar5;
          if (pvVar7 != (void *)0x0) {
            FUN_0043b450((int)pvVar7);
            FUN_0046ca4f(pvVar7);
          }
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
          iVar16 = iVar14 + -1;
        } while (iVar16 != 0);
        *(undefined4 *)(param_1 + 4) = 0xe;
        FUN_004067e0(0);
        FUN_00453d90(extraout_ECX_09,iVar14 + 8);
        ___security_check_cookie_4(local_4 ^ (uint)&local_58);
        return;
      }
    }
    break;
  case 0x11:
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
        iVar16 = 0xc;
      }
      else {
        iVar16 = -1;
      }
      FUN_00464970(iVar16);
    }
    if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
      if ((int)*puVar1 % 0xd == 0xc) {
        iVar16 = -0xc;
      }
      else {
        iVar16 = 1;
      }
      FUN_00464970(iVar16);
    }
    uVar10 = *(uint *)(param_1 + 0x114);
    if (uVar10 != *puVar1) {
      FUN_00453d90(uVar10,10);
      uVar10 = extraout_ECX_10;
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      uVar4 = *puVar1;
      if ((int)uVar4 < 0x58) {
        uVar10 = *(uint *)(param_1 + 0x1f0);
        if ((int)uVar10 < 8) {
          *(char *)(uVar10 + 0x2cc + param_1) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
               [uVar4];
LAB_0043432f:
          *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
          if (7 < *(int *)(param_1 + 0x1f0)) {
            FUN_0040f790(0x5a,puVar1);
            uVar10 = extraout_ECX_11;
          }
        }
        else {
          *(char *)(uVar10 + 0x2cb + param_1) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
               [uVar4];
        }
      }
      else if (uVar4 == 0x58) {
        iVar16 = *(int *)(param_1 + 0x1f0);
        if (iVar16 < 8) {
          *(undefined *)(iVar16 + 0x2cc + param_1) = 0x20;
          goto LAB_0043432f;
        }
        *(undefined *)(iVar16 + 0x2cb + param_1) = 0x20;
      }
      else {
        if (uVar4 == 0x59) {
          iVar16 = *(int *)(param_1 + 0x1f0);
          if (iVar16 != 0) {
            *(int *)(param_1 + 0x1f0) = iVar16 + -1;
            *(undefined *)(iVar16 + 0x2cb + param_1) = 0x20;
            FUN_00453d90(uVar10,9);
            ___security_check_cookie_4(local_4 ^ (uint)&local_58);
            return;
          }
          break;
        }
        if (uVar4 == 0x5a) {
          FUN_00453d90(uVar10,0x12);
          _sprintf(local_44,"th12_%.2d.rpy",*(int *)(param_1 + 0x38) + 1);
          FUN_0043b7c0();
          pcVar8 = (char *)(param_1 + 0x2cc);
          FUN_0043bc10(local_44,pcVar8,0);
          iVar16 = *(int *)(param_1 + 0x38);
          pvVar7 = FUN_0043b6f0(local_44);
          *(void **)(param_1 + 0x204 + iVar16 * 4) = pvVar7;
          *(undefined4 *)(param_1 + 4) = 0x10;
          FUN_004067e0(0);
          iVar16 = (DAT_004b451c + 0x1e9c0) - (int)pcVar8;
          do {
            cVar3 = *pcVar8;
            pcVar8[iVar16] = cVar3;
            pcVar8 = pcVar8 + 1;
          } while (cVar3 != '\0');
          ___security_check_cookie_4(local_4 ^ (uint)&local_58);
          return;
        }
      }
      FUN_00453d90(uVar10,7);
      uVar10 = extraout_ECX_12;
    }
    if ((DAT_004d48c4 & 0x102) != 0) {
      FUN_00453d90(uVar10,9);
      iVar16 = *(int *)(param_1 + 0x1f0);
      if (iVar16 == 0) {
        *(undefined4 *)(param_1 + 4) = 0x10;
        FUN_004067e0(0);
        ___security_check_cookie_4(local_4 ^ (uint)&local_58);
        return;
      }
      *(int *)(param_1 + 0x1f0) = iVar16 + -1;
      *(undefined *)(iVar16 + 0x2cb + param_1) = 0x20;
      ___security_check_cookie_4(local_4 ^ (uint)&local_58);
      return;
    }
    break;
  case 0x12:
    if (*(int *)(param_1 + 0x14) < 10) break;
    if (*(int *)(param_1 + 0x1f8) == 0) {
      piVar12 = (int *)(param_1 + 0x110);
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x110);
      if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
        FUN_00464970(-0xd);
      }
      if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
        FUN_00464970(0xd);
      }
      if (((DAT_004d48c4 & 0x40) != 0) || ((DAT_004d48c0 & 0x40) != 0)) {
        if (*piVar12 == (*piVar12 / 0xd) * 0xd) {
          iVar16 = 0xc;
        }
        else {
          iVar16 = -1;
        }
        FUN_00464970(iVar16);
      }
      if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
        if (*piVar12 % 0xd == 0xc) {
          iVar16 = -0xc;
        }
        else {
          iVar16 = 1;
        }
        FUN_00464970(iVar16);
      }
      this = *(void **)(param_1 + 0x114);
      if ((byte *)this != (byte *)*piVar12) {
        FUN_00453d90(this,10);
        this = extraout_ECX_13;
      }
    }
    iVar16 = DAT_004b451c;
    if ((DAT_004d48c4 & 0x80001) == 0) {
      if ((DAT_004d48c4 & 0x102) != 0) {
        if (*(int *)(param_1 + 0x38) < 0) goto LAB_004346eb;
        if (*(int *)(param_1 + 0x1f0) != 0) {
          FUN_00453d90(this,9);
          *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + -1;
          *(undefined *)(*(int *)(param_1 + 0x1f0) + 0x2cc + param_1) = 0x20;
          ___security_check_cookie_4(local_4 ^ (uint)&local_58);
          return;
        }
      }
      break;
    }
    if (*(int *)(param_1 + 0x1f8) != 0) {
LAB_004346eb:
      piVar9 = FUN_004357c0(&local_4c,0x6f);
      piVar12 = (int *)(param_1 + 0x1e8);
      *piVar12 = *piVar9;
      FUN_00461d40();
      *(undefined4 *)(param_1 + 4) = 0xe;
      *(undefined4 *)(param_1 + 0x40) = 4;
      *(undefined4 *)(param_1 + 0x108) = 1;
      iVar16 = *(int *)(param_1 + 0x40);
      if (iVar16 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else if (iVar16 < 1) {
        *(int *)(param_1 + 0x38) = iVar16 + -1;
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      FUN_00461970((void *)*piVar12,*piVar12);
      FUN_00461970(this_04,*piVar12);
      ___security_check_cookie_4(local_4 ^ (uint)&local_58);
      return;
    }
    iVar14 = *(int *)(param_1 + 0x110);
    if (iVar14 < 0x58) {
      this = *(void **)(param_1 + 0x1f0);
      if (7 < (int)this) {
        *(char *)((int)this + param_1 + 0x2cb) =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
             [iVar14];
        goto LAB_00434155;
      }
      *(char *)((int)this + param_1 + 0x2cc) =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
           [iVar14];
    }
    else {
      if (iVar14 != 0x58) {
        if (iVar14 == 0x59) {
          iVar16 = *(int *)(param_1 + 0x1f0);
          if (iVar16 == 0) break;
          *(int *)(param_1 + 0x1f0) = iVar16 + -1;
          *(undefined *)(iVar16 + 0x2cb + param_1) = 0x20;
        }
        else if (iVar14 == 0x5a) {
          pcVar8 = (char *)(param_1 + 0x2cc);
          pcVar13 = (char *)((DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + DAT_004b451c + 0x1e +
                            (*(int *)(param_1 + 0x38) + DAT_004b0ca8 * 10) * 0x1c);
          pcVar11 = pcVar8;
          do {
            cVar3 = *pcVar11;
            *pcVar13 = cVar3;
            pcVar11 = pcVar11 + 1;
            pcVar13 = pcVar13 + 1;
          } while (cVar3 != '\0');
          iVar16 = (iVar16 + 0x1e9c0) - (int)pcVar8;
          do {
            cVar3 = *pcVar8;
            pcVar8[iVar16] = cVar3;
            pcVar8 = pcVar8 + 1;
          } while (cVar3 != '\0');
          goto LAB_004346eb;
        }
        goto LAB_00434155;
      }
      iVar16 = *(int *)(param_1 + 0x1f0);
      if (7 < iVar16) {
        *(undefined *)(iVar16 + 0x2cb + param_1) = 0x20;
        goto LAB_00434155;
      }
      *(undefined *)(iVar16 + 0x2cc + param_1) = 0x20;
    }
    *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
    if (7 < *(int *)(param_1 + 0x1f0)) {
      FUN_0040f790(0x5a,(uint *)(param_1 + 0x110));
      this = extraout_ECX_14;
    }
LAB_00434155:
    FUN_00453d90(this,7);
    ___security_check_cookie_4(local_4 ^ (uint)&local_58);
    return;
  case 0x13:
    if (0xb < *(int *)(param_1 + 0x14)) {
      FUN_004339c0();
      *(undefined4 *)(param_1 + 4) = 0x1b;
      switch(*(undefined4 *)(param_1 + 0x38)) {
      case 0:
        DAT_004cee40 = (uint)(*(int *)(param_1 + 500) == 0) * 4 + 10;
        ___security_check_cookie_4(local_4 ^ (uint)&local_58);
        return;
      case 1:
      case 2:
        FUN_0040f720(4);
        ___security_check_cookie_4(local_4 ^ (uint)&local_58);
        return;
      case 3:
        DAT_004cee40 = 10;
      }
    }
  }
  ___security_check_cookie_4(local_4 ^ (uint)&local_58);
  return;
}


