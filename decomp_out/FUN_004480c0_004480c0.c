/* undefined4 __fastcall FUN_004480c0(void * param_1) @ 004480c0  1468 bytes */
#include "th12.h"

undefined4 __fastcall FUN_004480c0(void *param_1)

{
  byte bVar1;
  char cVar2;
  int in_EAX;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  void *this;
  byte *pbVar6;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  undefined4 extraout_ECX_07;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  bool bVar11;
  int iVar12;
  void *local_4;
  
  local_4 = param_1;
  switch(*(undefined4 *)(in_EAX + 0x24)) {
  case 0:
    *(undefined4 *)(in_EAX + 0x30) = 0x1e;
    FUN_004300d0(0,"bgm/th10_17.wav");
    FUN_00430150(0,0x11);
    if (*(int *)(in_EAX + 0x66c) == 0) {
      FUN_004615a0((void *)0x0,*(void **)(DAT_004b43b8 + 0x18fb4),&local_4,0x14,0);
      *(void **)(in_EAX + 0x66c) = local_4;
    }
    FUN_004615a0((void *)0x0,*(void **)(in_EAX + 0x14),&local_4,0x74,0);
    *(void **)(in_EAX + 0x498) = local_4;
    FUN_0043ef40(1);
    iVar12 = DAT_004b0c90 + 0xc1;
    FUN_004615a0((void *)0x0,*(void **)(in_EAX + 0x14),&local_4,iVar12,0);
    *(void **)(in_EAX + 0x2c8 + iVar12 * 4) = local_4;
    iVar12 = DAT_004b0c94 + 0xc4;
    FUN_004615a0((void *)0x0,*(void **)(in_EAX + 0x14),&local_4,iVar12,0);
    *(void **)(in_EAX + 0x2c8 + iVar12 * 4) = local_4;
    iVar9 = DAT_004b0ca8 + 0xc6;
    FUN_004615a0((void *)0x0,*(void **)(in_EAX + 0x14),&local_4,iVar9,0);
    iVar12 = DAT_004ce8cc;
    *(void **)(in_EAX + 0x2c8 + iVar9 * 4) = local_4;
    piVar3 = FUN_00461920(*(undefined4 *)(in_EAX + 0x454),iVar12,*(undefined4 *)(in_EAX + 0x454));
    if (piVar3 == (int *)0x0) {
      FUN_0043efa0();
      FUN_004619e0(this,*(int *)(in_EAX + 0x454));
    }
    DAT_004b0cb0 = 8;
    DAT_004b0cb4 = 8;
    DAT_004b452c = &DAT_004aedf0;
    uVar4 = FUN_00431b90((DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + 8 + DAT_004b451c);
    DAT_004b452c = &DAT_004aebf0;
    DAT_004b0cb0 = 0;
    DAT_004b0cb4 = 0;
    if ((int)uVar4 < 0) {
      uVar4 = *(uint *)(in_EAX + 0x30);
      if (uVar4 == 0) {
        *(undefined4 *)(in_EAX + 0x28) = 0xffffffff;
      }
      else if (uVar4 < 0x80000000) {
        *(undefined4 *)(in_EAX + 0x28) = 0;
      }
      else {
        *(uint *)(in_EAX + 0x28) = uVar4 - 1;
      }
      *(undefined4 *)(in_EAX + 0x5988) = 1;
    }
    else {
      FUN_004067e0(0);
      *(undefined4 *)(in_EAX + 0xf8) = 1;
      FUN_0040f790(uVar4,(uint *)(in_EAX + 0x28));
      iVar12 = *(int *)(in_EAX + 0x5998);
      piVar3 = (int *)(in_EAX + 0x5990);
      if (iVar12 == 0) {
        *piVar3 = 0;
      }
      else if (iVar12 < 1) {
        *piVar3 = iVar12 + -1;
      }
      else {
        *piVar3 = 0;
      }
      pbVar6 = (byte *)(in_EAX + 0x5978);
      pcVar5 = (char *)(DAT_004b451c + 0x1e9c0);
      *(undefined4 *)(in_EAX + 0x5998) = 0x5b;
      *(undefined4 *)(in_EAX + 0x5a60) = 1;
      iVar12 = (int)pbVar6 - (int)pcVar5;
      do {
        cVar2 = *pcVar5;
        pcVar5[iVar12] = cVar2;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      pbVar7 = &DAT_004a0ee4;
      do {
        bVar1 = *pbVar6;
        bVar11 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00448316:
          iVar12 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_0044831b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar11 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00448316;
        pbVar6 = pbVar6 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar12 = 0;
LAB_0044831b:
      if (iVar12 != 0) {
        FUN_00464970(-1);
      }
      iVar12 = 8;
      do {
        if (*(char *)(in_EAX + 0x5977 + iVar12) != ' ') break;
        iVar12 = iVar12 + -1;
      } while (0 < iVar12);
      *(int *)(in_EAX + 0x5984) = iVar12;
      *(undefined4 *)(in_EAX + 0x5988) = 0;
    }
  case 1:
    if (6 < *(int *)(in_EAX + 0x2b8)) {
      FUN_0043ef40(2);
      return 1;
    }
    break;
  case 2:
    if (*(int *)(in_EAX + 0x5988) == 0) {
      piVar3 = (int *)(in_EAX + 0x5990);
      *(undefined4 *)(in_EAX + 0x5994) = *(undefined4 *)(in_EAX + 0x5990);
      if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
        FUN_00464970(-0xd);
      }
      if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
        FUN_00464970(0xd);
      }
      if (((DAT_004d48c4 & 0x40) != 0) || ((DAT_004d48c0 & 0x40) != 0)) {
        if (*piVar3 == (*piVar3 / 0xd) * 0xd) {
          iVar12 = 0xc;
        }
        else {
          iVar12 = -1;
        }
        FUN_00464970(iVar12);
      }
      if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
        if (*piVar3 % 0xd == 0xc) {
          iVar12 = -0xc;
        }
        else {
          iVar12 = 1;
        }
        FUN_00464970(iVar12);
      }
      param_1 = *(void **)(in_EAX + 0x5994);
      if (param_1 != (void *)*piVar3) {
        FUN_00453d90(param_1,10);
        param_1 = extraout_ECX;
      }
    }
    iVar12 = DAT_004b451c;
    if ((DAT_004d48c4 & 0x80001) != 0) {
      if (*(int *)(in_EAX + 0x5988) == 0) {
        iVar9 = *(int *)(in_EAX + 0x5990);
        if (iVar9 < 0x58) {
          param_1 = *(void **)(in_EAX + 0x5984);
          if ((int)param_1 < 8) {
            *(char *)((int)param_1 + in_EAX + 0x5978) =
                 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
                 [iVar9];
LAB_004484bc:
            *(int *)(in_EAX + 0x5984) = *(int *)(in_EAX + 0x5984) + 1;
            if (7 < *(int *)(in_EAX + 0x5984)) {
              FUN_0040f790(0x5a,(uint *)(in_EAX + 0x5990));
              param_1 = extraout_ECX_00;
            }
          }
          else {
            *(char *)((int)param_1 + in_EAX + 0x5977) =
                 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-=.,!?@:;[]()_/{}|~^#$%&*   "
                 [iVar9];
          }
        }
        else if (iVar9 == 0x58) {
          iVar12 = *(int *)(in_EAX + 0x5984);
          if (iVar12 < 8) {
            *(undefined *)(iVar12 + 0x5978 + in_EAX) = 0x20;
            goto LAB_004484bc;
          }
          *(undefined *)(iVar12 + 0x5977 + in_EAX) = 0x20;
        }
        else if (iVar9 == 0x59) {
          iVar12 = *(int *)(in_EAX + 0x5984);
          if (iVar12 == 0) {
            return 1;
          }
          *(int *)(in_EAX + 0x5984) = iVar12 + -1;
          *(undefined *)(iVar12 + 0x5977 + in_EAX) = 0x20;
        }
        else if (iVar9 == 0x5a) {
          pcVar5 = (char *)(in_EAX + 0x5978);
          pcVar10 = (char *)((DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + DAT_004b451c + 0x1e +
                            (*(int *)(in_EAX + 0x28) + DAT_004b0ca8 * 10) * 0x1c);
          pcVar8 = pcVar5;
          do {
            cVar2 = *pcVar8;
            *pcVar10 = cVar2;
            pcVar8 = pcVar8 + 1;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          iVar12 = (iVar12 + 0x1e9c0) - (int)pcVar5;
          do {
            cVar2 = *pcVar5;
            pcVar5[iVar12] = cVar2;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          goto LAB_0044859c;
        }
      }
      else {
LAB_0044859c:
        FUN_0043ef40(3);
        param_1 = extraout_ECX_01;
      }
      FUN_00453d90(param_1,7);
      param_1 = extraout_ECX_02;
    }
    if ((DAT_004d48c4 & 0x102) != 0) {
      if (*(int *)(in_EAX + 0x5988) != 0) {
        FUN_0043ef40(3);
        FUN_00453d90(extraout_ECX_03,7);
        return 1;
      }
      if (*(int *)(in_EAX + 0x5984) != 0) {
        FUN_00453d90(param_1,9);
        *(int *)(in_EAX + 0x5984) = *(int *)(in_EAX + 0x5984) + -1;
        *(undefined *)(*(int *)(in_EAX + 0x5984) + 0x5978 + in_EAX) = 0x20;
        return 1;
      }
    }
    break;
  case 3:
    if (5 < *(int *)(in_EAX + 0x2b8)) {
      FUN_0043efd0(param_1);
      FUN_0043efd0(extraout_ECX_04);
      FUN_0043efd0(extraout_ECX_05);
      FUN_0043efd0(extraout_ECX_06);
      FUN_0043eee0(extraout_ECX_07,0xf);
    }
  }
  return 1;
}


