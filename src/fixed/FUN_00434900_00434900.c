/* undefined __thiscall FUN_00434900(void * this, int param_1) @ 00434900  3205 bytes */
#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x00434afa) */
/* WARNING: Removing unreachable block (ram,0x00434a35) */
/* WARNING: Removing unreachable block (ram,0x00435470) */
/* WARNING: Removing unreachable block (ram,0x00434a28) */
/* WARNING: Removing unreachable block (ram,0x00434aed) */
/* WARNING: Removing unreachable block (ram,0x004354ce) */

void __fastcall FUN_00434900(void *this,int param_1)

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
  undefined4 extraout_ECX;
  void *extraout_ECX_00;
  void *this_03;
  undefined4 extraout_ECX_01;
  void *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  void *extraout_ECX_04;
  void *this_04;
  void *extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 uVar10;
  byte *extraout_ECX_08;
  void *this_05;
  undefined4 extraout_ECX_09;
  uint extraout_ECX_10;
  uint extraout_ECX_11;
  uint uVar11;
  uint extraout_ECX_12;
  byte *extraout_ECX_13;
  byte *extraout_ECX_14;
  void *this_06;
  char *pcVar12;
  int iVar13;
  int *piVar14;
  char *pcVar15;
  bool bVar16;
  int iVar17;
  int local_58;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_48;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&local_58;
  switch(*(undefined4 *)((int)param_1 + 4)) {
  case 0x14:
    if ((9 < *(int *)((int)param_1 + 0x14)) && ((DAT_004d48c4 & 0x80001) != 0)) {
      FUN_00453d90(this,7);
      *(undefined4 *)((int)param_1 + 4) = 0x15;
      FUN_00461970(this_00,*(int *)((int)param_1 + 0x1e8));
      FUN_004067e0(0);
      ___security_check_cookie_4(local_4 ^ (uint)&local_58);
      return;
    }
    break;
  case 0x15:
    if (9 < *(int *)((int)param_1 + 0x14)) {
      FUN_00431b30();
      if (((byte)DAT_004b0ce0 & 0x10) != 0) {
        piVar14 = (int *)((DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + DAT_004b451c + 0x5a4 +
                         (DAT_004b0cb0 + DAT_004b0ca8 * 6) * 8);
        if (*piVar14 < DAT_004b0c44) {
          *piVar14 = DAT_004b0c44;
        }
        puVar5 = FUN_004357c0(&local_48,0x75 - (uint)(*(int *)((int)param_1 + 500) != 0));
        *(undefined4 *)((int)param_1 + 0x1e8) = *puVar5;
        *(undefined4 *)((int)param_1 + 4) = 0x16;
        *(undefined4 *)((int)param_1 + 0x40) = 3;
        *(undefined4 *)((int)param_1 + 0x108) = 1;
        *(undefined4 *)((int)param_1 + 0x38) = 0;
        FUN_00461970(this_01,*(int *)((int)param_1 + 0x1e8));
        FUN_00461970(*(void **)((int)param_1 + 0x1e8),(int)*(void **)((int)param_1 + 0x1e8));
        ___security_check_cookie_4(local_4 ^ (uint)&local_58);
        return;
      }
      FUN_00433a30();
      FUN_004067e0(0);
      if (*(int *)((int)param_1 + 0x1f8) == 0) {
        *(undefined4 *)((int)param_1 + 4) = 0x19;
        FUN_00461d80();
        ___security_check_cookie_4(local_4 ^ (uint)&local_58);
        return;
      }
      puVar5 = FUN_004357c0(local_54,0x6f);
      *(undefined4 *)((int)param_1 + 0x1e8) = *puVar5;
      *(undefined4 *)((int)param_1 + 4) = 0xe;
      *(undefined4 *)((int)param_1 + 0x40) = 3;
      *(undefined4 *)((int)param_1 + 0x108) = 1;
      *(undefined4 *)((int)param_1 + 0x38) = 0;
      FUN_00461970(*(void **)((int)param_1 + 0x1e8),(int)*(void **)((int)param_1 + 0x1e8));
      FUN_00461970(this_02,*(int *)((int)param_1 + 0x1e8));
      ___security_check_cookie_4(local_4 ^ (uint)&local_58);
      return;
    }
    break;
  case 0x16:
    *(undefined4 *)((int)param_1 + 0x3c) = *(undefined4 *)((int)param_1 + 0x38);
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
    }
    pvVar7 = *(void **)((int)param_1 + 0x3c);
    if (pvVar7 != *(void **)((int)param_1 + 0x38)) {
      FUN_00461970(pvVar7,*(int *)((int)param_1 + 0x1e8));
      FUN_00453d90(extraout_ECX,10);
      pvVar7 = extraout_ECX_00;
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      piVar14 = (( int * (__fastcall *)())FUN_00462060)(pvVar7);
      FUN_00461970(this_03,*piVar14);
      FUN_00453d90(extraout_ECX_01,7);
      *(undefined4 *)((int)param_1 + 4) = 0x1a;
      FUN_004067e0(0);
      FUN_00431b30();
      iVar17 = *(int *)((int)param_1 + 0x38);
      if (iVar17 == 0) {
LAB_00434bfa:
        *(undefined4 *)((int)param_1 + 4) = 0x1a;
        FUN_004067e0(0);
        FUN_00453d90(extraout_ECX_03,7);
        pvVar7 = extraout_ECX_04;
      }
      else if (iVar17 == 1) {
        *(undefined4 *)((int)param_1 + 4) = 0x17;
        FUN_004067e0(0);
        FUN_00461d80();
        piVar14 = (( int * (__stdcall *)())FUN_00464900)();
        *(undefined4 *)((int)param_1 + 0x40) = 0x19;
        *(undefined4 *)((int)param_1 + 0x108) = 1;
        iVar17 = piVar14[2];
        if (iVar17 == 0) {
          *piVar14 = 0;
        }
        else if (iVar17 < 1) {
          *piVar14 = iVar17 + -1;
        }
        else {
          *piVar14 = 0;
        }
        iVar17 = 1;
        puVar5 = (undefined4 *)((int)param_1 + 0x204);
        do {
          _sprintf(local_44,"th12_%.2d.rpy",iVar17);
          pvVar7 = FUN_0043b6f0(local_44);
          *puVar5 = pvVar7;
          iVar17 = iVar17 + 1;
          puVar5 = puVar5 + 1;
          pvVar7 = extraout_ECX_05;
        } while (iVar17 < 0x1a);
      }
      else {
        pvVar7 = extraout_ECX_02;
        if (iVar17 == 2) goto LAB_00434bfa;
      }
    }
    if (((DAT_004d48c4 & 0x102) != 0) && (FUN_00453d90(pvVar7,9), *(int *)((int)param_1 + 0x38) != 0)) {
      iVar17 = *(int *)((int)param_1 + 0x40);
      if (iVar17 == 0) {
        *(undefined4 *)((int)param_1 + 0x38) = 0;
      }
      else if (iVar17 < 1) {
        *(int *)((int)param_1 + 0x38) = iVar17 + -1;
      }
      else {
        *(undefined4 *)((int)param_1 + 0x38) = 0;
      }
      FUN_00461970(this_04,*(int *)((int)param_1 + 0x1e8));
      ___security_check_cookie_4(local_4 ^ (uint)&local_58);
      return;
    }
    break;
  case 0x17:
    if (9 < *(int *)((int)param_1 + 0x14)) {
      uVar10 = *(undefined4 *)((int)param_1 + 0x38);
      *(undefined4 *)((int)param_1 + 0x3c) = uVar10;
      if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
        FUN_00464970(-1);
        uVar10 = extraout_ECX_06;
      }
      if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
        FUN_00464970(1);
        uVar10 = extraout_ECX_07;
      }
      if (*(int *)((int)param_1 + 0x3c) != *(int *)((int)param_1 + 0x38)) {
        FUN_00453d90(uVar10,10);
      }
      if ((DAT_004d48c4 & 0x80001) != 0) {
        *(undefined4 *)((int)param_1 + 4) = 0x18;
        FUN_004067e0(0);
        iVar17 = *(int *)((int)param_1 + 0x118);
        piVar14 = (int *)((int)param_1 + 0x110);
        if (iVar17 == 0) {
          *piVar14 = 0;
        }
        else if (iVar17 < 1) {
          *piVar14 = iVar17 + -1;
        }
        else {
          *piVar14 = 0;
        }
        *(undefined4 *)((int)param_1 + 0x118) = 0x5b;
        *(undefined4 *)((int)param_1 + 0x1e0) = 1;
        if ((*(int *)((int)param_1 + 500) == 0) || (((byte)DAT_004b0ce0 & 0x10) != 0)) {
          piVar14 = (int *)((int)DAT_004b4518 + 0x1c);
          __time64((__time64_t *)(*(int *)((int)DAT_004b4518 + 0x1c) + 0xc));
          *(int *)(*piVar14 + 0x68) = DAT_004b0cb0;
        }
        else {
          piVar14 = (int *)((int)DAT_004b4518 + 0x1c);
          __time64((__time64_t *)(*(int *)((int)DAT_004b4518 + 0x1c) + 0xc));
          *(undefined4 *)(*piVar14 + 0x68) = 8;
        }
        pbVar6 = (byte *)((int)param_1 + 0x2cc);
        pcVar8 = (char *)((int)DAT_004b451c + 0x1e9c0);
        iVar17 = (int)pbVar6 - (int)pcVar8;
        do {
          cVar3 = *pcVar8;
          pcVar8[iVar17] = cVar3;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 != '\0');
        *(undefined4 *)((int)param_1 + 0x1f0) = 0;
        this = &DAT_004a0ee4;
        do {
          bVar2 = *pbVar6;
                    /* WARNING: Load size is inaccurate */
          bVar16 = bVar2 < *(float *)this;
          if (bVar2 != *(float *)this) {
LAB_00434e60:
            iVar17 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_00434e65;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar16 = bVar2 < *(byte *)((int)this + 1);
          if (bVar2 != *(byte *)((int)this + 1)) goto LAB_00434e60;
          pbVar6 = pbVar6 + 2;
          this = (void *)((int)this + 2);
        } while (bVar2 != 0);
        iVar17 = 0;
LAB_00434e65:
        if (iVar17 != 0) {
          FUN_00464970(-1);
          this = extraout_ECX_08;
        }
        iVar17 = 8;
        do {
          if (*(char *)(iVar17 + 0x2cb + param_1) != ' ') break;
          iVar17 = iVar17 + -1;
        } while (0 < iVar17);
        *(int *)((int)param_1 + 0x1f0) = iVar17;
        goto LAB_00434e95;
      }
      if ((DAT_004d48c4 & 0x102) != 0) {
        local_58 = param_1 + 0x10;
        *(undefined4 *)((int)param_1 + 4) = 0x16;
        FUN_004067e0(0);
        FUN_00461d40();
        FUN_00464940();
        *(undefined4 *)((int)param_1 + 0x40) = 3;
        *(undefined4 *)((int)param_1 + 0x108) = 1;
        FUN_00461970(this_05,*(int *)((int)param_1 + 0x1e8));
        puVar5 = (undefined4 *)((int)param_1 + 0x204);
        iVar17 = 0x19;
        do {
          iVar13 = iVar17;
          pvVar7 = (void *)*puVar5;
          if (pvVar7 != (void *)0x0) {
            FUN_0043b450((int)pvVar7);
            FUN_0046ca4f(pvVar7);
          }
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
          iVar17 = iVar13 + -1;
        } while (iVar17 != 0);
        *(undefined4 *)((int)param_1 + 4) = 0x16;
        FUN_004067e0(0);
        FUN_00453d90(extraout_ECX_09,iVar13 + 8);
        ___security_check_cookie_4(local_4 ^ (uint)&local_58);
        return;
      }
    }
    break;
  case 0x18:
    if (*(int *)((int)param_1 + 0x14) < 10) break;
    puVar1 = (uint *)((int)param_1 + 0x110);
    *(undefined4 *)((int)param_1 + 0x114) = *(undefined4 *)((int)param_1 + 0x110);
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-0xd);
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(0xd);
    }
    if (((DAT_004d48c4 & 0x40) != 0) || ((DAT_004d48c0 & 0x40) != 0)) {
      if (*puVar1 == ((int)*puVar1 / 0xd) * 0xd) {
        iVar17 = 0xc;
      }
      else {
        iVar17 = -1;
      }
      FUN_00464970(iVar17);
    }
    if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
      if ((int)*puVar1 % 0xd == 0xc) {
        iVar17 = -0xc;
      }
      else {
        iVar17 = 1;
      }
      FUN_00464970(iVar17);
    }
    uVar11 = *(uint *)((int)param_1 + 0x114);
    if (uVar11 != *puVar1) {
      FUN_00453d90(uVar11,10);
      uVar11 = extraout_ECX_10;
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      uVar4 = *puVar1;
      if ((int)uVar4 < 0x58) {
        uVar11 = *(uint *)((int)param_1 + 0x1f0);
        if ((int)uVar11 < 8) {
          *(char *)(uVar11 + 0x2cc + param_1) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
               [uVar4];
LAB_0043506c:
          *(int *)((int)param_1 + 0x1f0) = *(int *)((int)param_1 + 0x1f0) + 1;
          if (7 < *(int *)((int)param_1 + 0x1f0)) {
            FUN_0040f790(0x5a,puVar1);
            uVar11 = extraout_ECX_11;
          }
        }
        else {
          *(char *)(uVar11 + 0x2cb + param_1) =
               "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
               [uVar4];
        }
      }
      else if (uVar4 == 0x58) {
        iVar17 = *(int *)((int)param_1 + 0x1f0);
        if (iVar17 < 8) {
          *(undefined *)(iVar17 + 0x2cc + param_1) = 0x20;
          goto LAB_0043506c;
        }
        *(undefined *)(iVar17 + 0x2cb + param_1) = 0x20;
      }
      else {
        if (uVar4 == 0x59) {
          iVar17 = *(int *)((int)param_1 + 0x1f0);
          if (iVar17 != 0) {
            *(int *)((int)param_1 + 0x1f0) = iVar17 + -1;
            *(undefined *)(iVar17 + 0x2cb + param_1) = 0x20;
            FUN_00453d90(uVar11,9);
            ___security_check_cookie_4(local_4 ^ (uint)&local_58);
            return;
          }
          break;
        }
        if (uVar4 == 0x5a) {
          FUN_00453d90(uVar11,0x12);
          _sprintf(local_44,"th12_%.2d.rpy",*(int *)((int)param_1 + 0x38) + 1);
          FUN_0043b7c0();
          pcVar8 = (char *)((int)param_1 + 0x2cc);
          FUN_0043bc10(local_44,pcVar8,0);
          iVar17 = *(int *)((int)param_1 + 0x38);
          pvVar7 = FUN_0043b6f0(local_44);
          *(void **)(param_1 + 0x204 + iVar17 * 4) = pvVar7;
          *(undefined4 *)((int)param_1 + 4) = 0x17;
          FUN_004067e0(0);
          iVar17 = (DAT_004b451c + 0x1e9c0) - (int)pcVar8;
          do {
            cVar3 = *pcVar8;
            pcVar8[iVar17] = cVar3;
            pcVar8 = pcVar8 + 1;
          } while (cVar3 != '\0');
          ___security_check_cookie_4(local_4 ^ (uint)&local_58);
          return;
        }
      }
      FUN_00453d90(uVar11,7);
      uVar11 = extraout_ECX_12;
    }
    if ((DAT_004d48c4 & 0x102) != 0) {
      FUN_00453d90(uVar11,9);
      iVar17 = *(int *)((int)param_1 + 0x1f0);
      if (iVar17 == 0) {
        *(undefined4 *)((int)param_1 + 4) = 0x17;
        FUN_004067e0(0);
        ___security_check_cookie_4(local_4 ^ (uint)&local_58);
        return;
      }
      *(int *)((int)param_1 + 0x1f0) = iVar17 + -1;
      *(undefined *)(iVar17 + 0x2cb + param_1) = 0x20;
      ___security_check_cookie_4(local_4 ^ (uint)&local_58);
      return;
    }
    break;
  case 0x19:
    if (*(int *)((int)param_1 + 0x14) < 10) break;
    if (*(int *)((int)param_1 + 0x1f8) == 0) {
      piVar14 = (int *)((int)param_1 + 0x110);
      *(undefined4 *)((int)param_1 + 0x114) = *(undefined4 *)((int)param_1 + 0x110);
      if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
        FUN_00464970(-0xd);
      }
      if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
        FUN_00464970(0xd);
      }
      if (((DAT_004d48c4 & 0x40) != 0) || ((DAT_004d48c0 & 0x40) != 0)) {
        if (*piVar14 == (*piVar14 / 0xd) * 0xd) {
          iVar17 = 0xc;
        }
        else {
          iVar17 = -1;
        }
        FUN_00464970(iVar17);
      }
      if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
        if (*piVar14 % 0xd == 0xc) {
          iVar17 = -0xc;
        }
        else {
          iVar17 = 1;
        }
        FUN_00464970(iVar17);
      }
      this = *(void **)((int)param_1 + 0x114);
      if ((byte *)this != (byte *)*piVar14) {
        FUN_00453d90(this,10);
        this = extraout_ECX_13;
      }
    }
    iVar17 = DAT_004b451c;
    if ((DAT_004d48c4 & 0x80001) == 0) {
      if ((DAT_004d48c4 & 0x102) != 0) {
        if (*(int *)((int)param_1 + 0x38) < 0) goto LAB_0043542c;
        if (*(int *)((int)param_1 + 0x1f0) != 0) {
          FUN_00453d90(this,9);
          *(int *)((int)param_1 + 0x1f0) = *(int *)((int)param_1 + 0x1f0) + -1;
          *(undefined *)(*(int *)((int)param_1 + 0x1f0) + 0x2cc + param_1) = 0x20;
          ___security_check_cookie_4(local_4 ^ (uint)&local_58);
          return;
        }
      }
      break;
    }
    if (*(int *)((int)param_1 + 0x1f8) != 0) {
LAB_0043542c:
      piVar9 = FUN_004357c0(&local_4c,0x74);
      piVar14 = (int *)((int)param_1 + 0x1e8);
      *piVar14 = *piVar9;
      FUN_00461d40();
      *(undefined4 *)((int)param_1 + 4) = 0x16;
      *(undefined4 *)((int)param_1 + 0x40) = 3;
      *(undefined4 *)((int)param_1 + 0x108) = 1;
      *(undefined4 *)((int)param_1 + 0x38) = 0;
      FUN_00461970((void *)*piVar14,*piVar14);
      FUN_00461970(this_06,*piVar14);
      ___security_check_cookie_4(local_4 ^ (uint)&local_58);
      return;
    }
    iVar13 = *(int *)((int)param_1 + 0x110);
    if (iVar13 < 0x58) {
      this = *(void **)((int)param_1 + 0x1f0);
      if (7 < (int)this) {
        *(char *)((int)this + param_1 + 0x2cb) =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
             [iVar13];
        goto LAB_00434e95;
      }
      *(char *)((int)this + param_1 + 0x2cc) =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
           [iVar13];
    }
    else {
      if (iVar13 != 0x58) {
        if (iVar13 == 0x59) {
          iVar17 = *(int *)((int)param_1 + 0x1f0);
          if (iVar17 == 0) break;
          *(int *)((int)param_1 + 0x1f0) = iVar17 + -1;
          *(undefined *)(iVar17 + 0x2cb + param_1) = 0x20;
        }
        else if (iVar13 == 0x5a) {
          pcVar8 = (char *)((int)param_1 + 0x2cc);
          pcVar15 = (char *)((DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + DAT_004b451c + 0x1e +
                            (*(int *)((int)param_1 + 0x38) + DAT_004b0ca8 * 10) * 0x1c);
          pcVar12 = pcVar8;
          do {
            cVar3 = *pcVar12;
            *pcVar15 = cVar3;
            pcVar12 = pcVar12 + 1;
            pcVar15 = pcVar15 + 1;
          } while (cVar3 != '\0');
          iVar17 = (iVar17 + 0x1e9c0) - (int)pcVar8;
          do {
            cVar3 = *pcVar8;
            pcVar8[iVar17] = cVar3;
            pcVar8 = pcVar8 + 1;
          } while (cVar3 != '\0');
          goto LAB_0043542c;
        }
        goto LAB_00434e95;
      }
      iVar17 = *(int *)((int)param_1 + 0x1f0);
      if (7 < iVar17) {
        *(undefined *)(iVar17 + 0x2cb + param_1) = 0x20;
        goto LAB_00434e95;
      }
      *(undefined *)(iVar17 + 0x2cc + param_1) = 0x20;
    }
    *(int *)((int)param_1 + 0x1f0) = *(int *)((int)param_1 + 0x1f0) + 1;
    if (7 < *(int *)((int)param_1 + 0x1f0)) {
      FUN_0040f790(0x5a,(uint *)((int)param_1 + 0x110));
      this = extraout_ECX_14;
    }
LAB_00434e95:
    FUN_00453d90(this,7);
    ___security_check_cookie_4(local_4 ^ (uint)&local_58);
    return;
  case 0x1a:
    if (0xb < *(int *)((int)param_1 + 0x14)) {
      FUN_004339c0();
      *(undefined4 *)((int)param_1 + 4) = 0x1b;
      iVar17 = *(int *)((int)param_1 + 0x38);
      if ((iVar17 == 0) || (iVar17 == 1)) {
        FUN_0040f720(4);
      }
      else if (iVar17 == 2) {
        if (6 < DAT_004b0cb0) {
          DAT_004b452c = &DAT_004aedb0;
          DAT_004b0cb0 = 7;
          DAT_004b0cb4 = 7;
        }
        DAT_004cee40 = 10;
        ___security_check_cookie_4(local_4 ^ (uint)&local_58);
        return;
      }
    }
  }
  ___security_check_cookie_4(local_4 ^ (uint)&local_58);
  return;
}


