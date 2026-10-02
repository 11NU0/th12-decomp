/* undefined4 __thiscall FUN_004466a0(void * this, void * param_1) @ 004466a0  1383 bytes */

#include "th12.h"

undefined4 __thiscall FUN_004466a0(void *this,void *param_1)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar9;
  undefined4 extraout_ECX_03;
  void *extraout_ECX_04;
  void *this_00;
  undefined4 extraout_ECX_05;
  undefined4 extraout_EDX;
  char *pcVar10;
  int iVar11;
  undefined4 *puVar12;
  
  pvVar5 = param_1;
  switch(*(undefined4 *)((int)param_1 + 0x24)) {
  case 0:
    uVar4 = DAT_004ce8b4 / 0x19;
    uVar8 = DAT_004ce8b4 % 0x19;
    *(undefined4 *)((int)param_1 + 0x30) = 0x19;
    FUN_0040f790(uVar8,(uint *)((int)param_1 + 0x28));
    *(undefined4 *)((int)pvVar5 + 0x1e0) = 3;
    FUN_0040f790(uVar4,(uint *)((int)pvVar5 + 0x1d8));
    *(undefined4 *)((int)pvVar5 + 0x2a8) = 1;
    DAT_004ce8b4 = 0;
    if (*(int *)((int)pvVar5 + 0x66c) == 0) {
      FUN_004615a0((void *)0x0,*(void **)(DAT_004b43b8 + 0x18fb4),&param_1,0x14,0);
      *(void **)((int)pvVar5 + 0x66c) = param_1;
    }
    FUN_0043efa0();
    FUN_0043ef40(1);
    _memset((void *)((int)pvVar5 + 0x5a80),0,400);
    *(uint *)((int)pvVar5 + 0x5c18) = *(uint *)((int)pvVar5 + 0x5c18) & 0xfffffff3;
    *(undefined4 *)((int)pvVar5 + 0x5a74) = 0;
    FUN_00464cb0(pvVar5);
    piVar6 = FUN_00461920(extraout_ECX,DAT_004ce8cc,*(int *)((int)pvVar5 + 0x454));
    if (piVar6 == (int *)0x0) {
      FUN_0043efa0();
      FUN_004619e0(*(void **)((int)pvVar5 + 0x454),(int)*(void **)((int)pvVar5 + 0x454));
    }
  case 1:
    if (6 < *(int *)((int)pvVar5 + 0x2b8)) {
      FUN_0043ef40(2);
      return 1;
    }
    break;
  case 2:
    piVar6 = (int *)((int)param_1 + 0x28);
    *(undefined4 *)((int)param_1 + 0x2c) = *(undefined4 *)((int)param_1 + 0x28);
    piVar1 = (int *)((int)param_1 + 0x1d8);
    *(undefined4 *)((int)param_1 + 0x1dc) = *(undefined4 *)((int)param_1 + 0x1d8);
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
    }
    if (((DAT_004d48c4 & 0x40) != 0) || ((DAT_004d48c0 & 0x40) != 0)) {
      FUN_00464970(-1);
    }
    if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
      FUN_00464970(1);
    }
    iVar11 = *(int *)((int)pvVar5 + 0x1dc);
    if (iVar11 != *piVar1) {
      FUN_00453d90(iVar11,10);
      iVar11 = extraout_ECX_00;
    }
    if (*(int *)((int)pvVar5 + 0x2c) != *piVar6) {
      FUN_00453d90(iVar11,10);
    }
    if ((DAT_004d48c4 & 0x102) != 0) {
      FUN_0043ef40(5);
      FUN_00453d90(extraout_ECX_01,9);
      *(uint *)((int)pvVar5 + 0x5c18) = *(uint *)((int)pvVar5 + 0x5c18) | 4;
      return 1;
    }
    if (((DAT_004d48c4 & 0x80001) != 0) &&
       (*(int *)((int)pvVar5 + (*piVar1 * 0x19 + *piVar6) * 4 + 0x5a80) != 0)) {
      FUN_0043ef40(4);
      *(int *)((int)pvVar5 + 0x5a78) = *piVar1 * 0x19 + *piVar6;
      FUN_00464900();
      FUN_00453d90(extraout_ECX_02,7);
      *(undefined4 *)((int)pvVar5 + 0x30) = 7;
      iVar11 = *(int *)((int)pvVar5 + 0x30);
      if (iVar11 == 0) {
        *piVar6 = 0;
      }
      else if (iVar11 < 1) {
        *piVar6 = iVar11 + -1;
      }
      else {
        *piVar6 = 0;
      }
      iVar9 = 0;
      iVar11 = 0;
      do {
        if (*(int *)(*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x5a78) * 4 + 0x5a80) + 0xdc +
                    iVar11) == 0) {
          *(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0xfc) * 4 + 0xb8) = iVar9;
          *(int *)((int)pvVar5 + 0xfc) = *(int *)((int)pvVar5 + 0xfc) + 1;
        }
        iVar11 = iVar11 + 0x24;
        iVar9 = iVar9 + 1;
      } while (iVar11 < 0xfc);
      FUN_00464970(-1);
      FUN_00464970(1);
      return 1;
    }
    break;
  case 3:
    if (*(int *)((int)param_1 + 0x2b8) == 2) {
      FUN_004529a0(5,0x20,0,0,0,0x3b);
      FUN_00411b80(0x43f00000,0x43c40000);
      this = extraout_ECX_04;
    }
    if ((0x1f < *(int *)((int)pvVar5 + 0x2b8)) && ((*(byte *)((int)pvVar5 + 0x5c18) & 8) != 0)) {
      FUN_0043eee0(this,2);
      DAT_004b0cb0 = *(int *)((int)pvVar5 + 0x5a7c) + 1;
      DAT_004b452c = &DAT_004aebf0 + DAT_004b0cb0 * 0x40;
      DAT_004b0cb4 = DAT_004b0cb0;
      FUN_00430270(DAT_004b452c,extraout_EDX,0x40c00000);
      DAT_004cee40 = 0xd;
      pcVar7 = (char *)(*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x5a78) * 4 + 0x5a80) + 0x1e0)
      ;
      pcVar10 = &DAT_004b43e8;
      do {
        cVar2 = *pcVar7;
        *pcVar10 = cVar2;
        pcVar7 = pcVar7 + 1;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      iVar11 = *(int *)(*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x5a78) * 4 + 0x5a80) + 0x1c);
      DAT_004b0c90 = *(undefined4 *)(iVar11 + 0x5c);
      DAT_004b0c94 = *(undefined4 *)(iVar11 + 0x60);
      DAT_004ce8b0 = 2;
      DAT_004b0ca8 = *(undefined4 *)(iVar11 + 100);
      DAT_004ce8b4 = *(undefined4 *)((int)pvVar5 + 0x5a78);
      return 1;
    }
    break;
  case 4:
    if (0xe < *(int *)((int)param_1 + 0x2b8)) {
      piVar6 = (int *)((int)param_1 + 0x28);
      *(undefined4 *)((int)param_1 + 0x2c) = *(undefined4 *)((int)param_1 + 0x28);
      if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
        FUN_00464970(-1);
      }
      if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
        FUN_00464970(1);
      }
      if (*(int *)((int)pvVar5 + 0x2c) != *piVar6) {
        FUN_00453d90(*(int *)((int)pvVar5 + 0x2c),10);
      }
      if ((DAT_004d48c4 & 0x102) != 0) {
        FUN_00464940();
        *(undefined4 *)((int)pvVar5 + 0x30) = 0x19;
        *(undefined4 *)((int)pvVar5 + 0xfc) = 0;
        FUN_0043ef40(2);
        FUN_00453d90(extraout_ECX_03,9);
        return 1;
      }
      if ((DAT_004d48c4 & 0x80001) != 0) {
        *(int *)((int)pvVar5 + 0x5a7c) = *piVar6;
        FUN_0043ef40(3);
        *(uint *)((int)pvVar5 + 0x5c18) = *(uint *)((int)pvVar5 + 0x5c18) | 4;
        return 1;
      }
    }
    break;
  case 5:
    if ((5 < *(int *)((int)param_1 + 0x2b8)) && ((*(byte *)((int)param_1 + 0x5c18) & 8) != 0)) {
      puVar12 = (undefined4 *)((int)param_1 + 0x5a80);
      iVar11 = 100;
      do {
        pvVar3 = (void *)*puVar12;
        if (pvVar3 != (void *)0x0) {
          FUN_0043b450((int)pvVar3);
          FUN_0046ca4f(pvVar3);
        }
        puVar12 = puVar12 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      _memset((void *)((int)pvVar5 + 0x5a80),0,400);
      FUN_00461970(*(void **)((int)pvVar5 + 0x48c),(int)*(void **)((int)pvVar5 + 0x48c));
      *(undefined4 *)((int)pvVar5 + 0x48c) = 0;
      FUN_00461970(this_00,*(int *)((int)pvVar5 + 0x66c));
      *(undefined4 *)((int)pvVar5 + 0x66c) = 0;
      FUN_0043eee0(extraout_ECX_05,1);
      FUN_00464940();
    }
  }
  return 1;
}


