/* undefined4 __fastcall FUN_00411420(undefined4 param_1, int param_2, void * param_3) @ 00411420  1592 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00411420(undefined4 param_1,int param_2,void *param_3)

{
  byte bVar1;
  float *pfVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  byte *pbVar6;
  void *pvVar7;
  void *this;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  int extraout_ECX_02;
  void *extraout_ECX_03;
  undefined4 extraout_ECX_04;
  byte *pbVar8;
  void *extraout_ECX_05;
  undefined4 extraout_ECX_06;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  COLORREF CVar13;
  COLORREF CVar14;
  undefined4 uVar15;
  uint uVar16;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(byte *)((int)param_3 + 0x74) & 4) != 0) {
    return 0;
  }
  if ((int)(uint)**(ushort **)((int)param_3 + 0x54) <= *(int *)((int)param_3 + 0x1c)) {
    do {
      iVar9 = *(int *)((int)param_3 + 0x54);
      pvVar7 = (void *)(uint)*(byte *)(iVar9 + 2);
      switch(pvVar7) {
      case (void *)0x0:
        return 0xffffffff;
      case (void *)0x3:
        if (*(int *)((int)param_3 + 0x78) == 0) {
          piVar4 = (int *)((int)param_3 + 0x40);
          local_14 = 5;
          do {
            piVar3 = FUN_00461920(pvVar7,DAT_004ce8cc,*piVar4);
            if (piVar3 == (int *)0x0) {
              *piVar4 = 0;
            }
            FUN_00460760(0xffffff,0,0,0," ");
            FUN_00461970(this,*piVar4);
            piVar4 = piVar4 + 1;
            local_14 = local_14 + -1;
            pvVar7 = extraout_ECX;
          } while (local_14 != 0);
          piVar4 = FUN_00461920(*(undefined4 *)((int)param_3 + 0x40),DAT_004ce8cc,
                                *(undefined4 *)((int)param_3 + 0x40));
          if (piVar4 == (int *)0x0) {
            *(undefined4 *)((int)param_3 + 0x40) = 0;
          }
          pcVar5 = FUN_00420e40();
          FUN_00460760(*(COLORREF *)((int)param_3 + 0x7c),0,0,0,pcVar5);
          FUN_00461970(this_00,*(int *)((int)param_3 + 0x40));
          *(int *)((int)param_3 + 0x78) = *(int *)((int)param_3 + 0x78) + 1;
        }
        else {
          pcVar5 = FUN_00420e40();
          CVar13 = *(COLORREF *)((int)param_3 + 0x7c);
          uVar16 = 0;
          uVar15 = 0;
          CVar14 = 0;
          FUN_00461c50(CVar13);
          FUN_00460760(CVar13,CVar14,uVar15,uVar16,pcVar5);
          pvVar7 = *(void **)((int)param_3 + *(int *)((int)param_3 + 0x78) * 4 + 0x40);
          FUN_00461970(pvVar7,(int)pvVar7);
          *(int *)((int)param_3 + 0x78) = *(int *)((int)param_3 + 0x78) + 1;
          if (4 < *(int *)((int)param_3 + 0x78)) {
            *(undefined4 *)((int)param_3 + 0x78) = 0;
          }
        }
        break;
      case (void *)0x4:
        piVar4 = (int *)((int)param_3 + 0x40);
        iVar9 = 5;
        do {
          FUN_00461970(pvVar7,*piVar4);
          piVar4 = piVar4 + 1;
          iVar9 = iVar9 + -1;
          pvVar7 = extraout_ECX_00;
        } while (iVar9 != 0);
        break;
      case (void *)0x5:
        if (*(int *)((int)param_3 + 0x30) < 1) {
          FUN_004067e0(*(int *)(iVar9 + 4));
          pvVar7 = extraout_ECX_01;
          param_2 = extraout_EDX;
        }
        FUN_00464a20(pvVar7,param_2,-1.0);
        iVar9 = *(int *)((int)param_3 + 0x54);
        if (*(int *)(iVar9 + 4) < 0) {
          FUN_004067e0(999);
          iVar9 = extraout_ECX_02;
        }
        if (((DAT_004d48c4 & 0x80001) == 0) && (0 < *(int *)((int)param_3 + 0x30))) {
          if ((*(byte *)(DAT_004b43d8 + 0x20) & 1) != 0) {
            return 0;
          }
          if ((_DAT_004d48b8 & 0x200) == 0) {
            return 0;
          }
          if (*(int *)((int)param_3 + 0x30) % 6 != 0) {
            return 0;
          }
          FUN_004067e0(0);
        }
        else {
          FUN_00453d90(iVar9,0);
          FUN_004067e0(0);
        }
        break;
      case (void *)0x6:
        if (*(int *)((int)param_3 + 0x30) < 1) {
          FUN_004067e0(*(int *)(iVar9 + 4));
          pvVar7 = extraout_ECX_03;
          param_2 = extraout_EDX_00;
        }
        FUN_00464a20(pvVar7,param_2,-1.0);
        if (((DAT_004d48c4 & 0x80001) == 0) && (0 < *(int *)((int)param_3 + 0x30))) {
          if ((*(byte *)(DAT_004b43d8 + 0x20) & 1) != 0) {
            return 0;
          }
          if ((_DAT_004d48b8 & 0x200) == 0) {
            return 0;
          }
          if (*(int *)((int)param_3 + 0x30) % 6 != 0) {
            return 0;
          }
        }
        else {
          FUN_00453d90(extraout_ECX_04,0);
        }
        FUN_004067e0(0);
        *(undefined4 *)((int)param_3 + 0x78) = 0;
        DAT_004ce55c = 0;
        break;
      case (void *)0x7:
        FUN_00411b80(0x43f00000,0x43c40000);
        if (-1 < *(int *)(*(int *)((int)param_3 + 0x54) + 4) + 0x1c) {
          FUN_004604a0(extraout_ECX_06);
        }
        *(uint *)((int)param_3 + 0x74) = *(uint *)((int)param_3 + 0x74) | 4;
        *(int *)((int)param_3 + 0x70) = *(int *)((int)param_3 + 0x54) + 8;
        *(undefined4 *)((int)param_3 + 0xec) = *(undefined4 *)(*(int *)((int)param_3 + 0x54) + 4);
        FUN_00464cb0(param_3);
        *(uint *)((int)param_3 + 0x54) =
             *(byte *)(*(int *)((int)param_3 + 0x54) + 3) + 4 + *(int *)((int)param_3 + 0x54);
        return 0;
      case (void *)0x8:
        iVar9 = *(int *)(iVar9 + 4);
        FUN_00461a70(pvVar7,*(int *)((int)param_3 + iVar9 * 4 + 0x90));
        *(undefined4 *)((int)param_3 + iVar9 * 4 + 0x90) = 0;
        FUN_004615a0((void *)0x0,
                     *(void **)((int)param_3 +
                               *(int *)(*(int *)((int)param_3 + 0x54) + 8) * 4 + 0x80),&local_10,
                     *(int *)(*(int *)((int)param_3 + 0x54) + 0xc),0);
        *(undefined4 *)((int)param_3 + *(int *)(*(int *)((int)param_3 + 0x54) + 4) * 4 + 0x90) =
             local_10;
        break;
      case (void *)0x9:
        *(undefined4 *)((int)param_3 + 0x7c) = *(undefined4 *)(iVar9 + 4);
        break;
      case (void *)0xa:
        FUN_004300d0(0,(char *)(iVar9 + 4));
        pbVar8 = &DAT_0049fb3c;
        pbVar6 = (byte *)(*(int *)((int)param_3 + 0x54) + 4);
        do {
          bVar1 = *pbVar6;
          bVar10 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_00411878:
            iVar9 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0041187d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar10 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00411878;
          pbVar6 = pbVar6 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar9 = 0;
LAB_0041187d:
        if (iVar9 == 0) {
          FUN_00430150(0,0xf);
        }
        else {
          FUN_00430150(0,0x10);
        }
        break;
      case (void *)0xb:
        FUN_00430270(pvVar7,param_2,0x40400000);
        *(uint *)((int)param_3 + 0x74) = *(uint *)((int)param_3 + 0x74) & 0xfffffffe;
        break;
      case (void *)0xc:
        piVar4 = (int *)((int)param_3 + 0x40);
        iVar9 = 5;
        do {
          FUN_00461a70(pvVar7,*piVar4);
          *piVar4 = 0;
          piVar4 = piVar4 + 1;
          iVar9 = iVar9 + -1;
          pvVar7 = extraout_ECX_05;
        } while (iVar9 != 0);
        pbVar6 = FUN_00410b30();
        if (pbVar6 == (byte *)0x0) {
          return 0xffffffff;
        }
        _memset(param_3,0,0xf0);
        *(byte **)((int)param_3 + 0x54) = pbVar6 + *(int *)(pbVar6 + 4);
        FUN_004067e0(0);
        FUN_004067e0(0);
        FUN_004067e0(0);
        *(uint *)((int)param_3 + 0x74) = *(uint *)((int)param_3 + 0x74) | 2;
        *(undefined4 *)((int)param_3 + 0x7c) = 0xffffff;
        param_2 = extraout_EDX_01;
        goto LAB_0041195b;
      case (void *)0xd:
        uVar15 = *(undefined4 *)(iVar9 + 4);
        uVar12 = 0;
        goto LAB_00411948;
      case (void *)0xe:
        uVar15 = *(undefined4 *)(iVar9 + 4);
        uVar12 = 5;
LAB_00411948:
        FUN_004529a0(uVar12,uVar15,0,0,0,0x46);
        break;
      case (void *)0xf:
        if (DAT_004b0ca8 == 1) {
          iVar9 = *(int *)(iVar9 + 4);
          FUN_00461a70(pvVar7,*(int *)((int)param_3 + iVar9 * 4 + 0x90));
          *(undefined4 *)((int)param_3 + iVar9 * 4 + 0x90) = 0;
          FUN_004615a0((void *)0x0,
                       *(void **)((int)param_3 +
                                 *(int *)(*(int *)((int)param_3 + 0x54) + 8) * 4 + 0x80),&local_c,
                       *(int *)(*(int *)((int)param_3 + 0x54) + 0xc),0);
          *(undefined4 *)((int)param_3 + *(int *)(*(int *)((int)param_3 + 0x54) + 4) * 4 + 0x90) =
               local_c;
        }
        break;
      case (void *)0x10:
        if (DAT_004b0ca8 == 2) {
          iVar9 = *(int *)(iVar9 + 4);
          FUN_00461a70(pvVar7,*(int *)((int)param_3 + iVar9 * 4 + 0x90));
          *(undefined4 *)((int)param_3 + iVar9 * 4 + 0x90) = 0;
          FUN_004615a0((void *)0x0,
                       *(void **)((int)param_3 +
                                 *(int *)(*(int *)((int)param_3 + 0x54) + 8) * 4 + 0x80),&local_8,
                       *(int *)(*(int *)((int)param_3 + 0x54) + 0xc),0);
          *(undefined4 *)((int)param_3 + *(int *)(*(int *)((int)param_3 + 0x54) + 4) * 4 + 0x90) =
               local_8;
        }
        break;
      case (void *)0x11:
        if (DAT_004b0ca8 == 3) {
          iVar9 = *(int *)(iVar9 + 4);
          FUN_00461a70(pvVar7,*(int *)((int)param_3 + iVar9 * 4 + 0x90));
          *(undefined4 *)((int)param_3 + iVar9 * 4 + 0x90) = 0;
          FUN_004615a0((void *)0x0,
                       *(void **)((int)param_3 +
                                 *(int *)(*(int *)((int)param_3 + 0x54) + 8) * 4 + 0x80),&local_4,
                       *(int *)(*(int *)((int)param_3 + 0x54) + 0xc),0);
          *(undefined4 *)((int)param_3 + *(int *)(*(int *)((int)param_3 + 0x54) + 4) * 4 + 0x90) =
               local_4;
        }
      }
      param_2 = *(byte *)(*(int *)((int)param_3 + 0x54) + 3) + 4 + *(int *)((int)param_3 + 0x54);
      *(int *)((int)param_3 + 0x54) = param_2;
LAB_0041195b:
    } while ((int)(uint)**(ushort **)((int)param_3 + 0x54) <= *(int *)((int)param_3 + 0x1c));
  }
  iVar9 = *(int *)((int)param_3 + 0x1c);
  pfVar2 = *(float **)((int)param_3 + 0x24);
  *(int *)((int)param_3 + 0x18) = iVar9;
  if ((0.99 < *pfVar2) && (*pfVar2 < 1.01)) {
    *(float *)((int)param_3 + 0x20) = *(float *)((int)param_3 + 0x20) + 1.0;
    *(int *)((int)param_3 + 0x1c) = iVar9 + 1;
    return 0;
  }
  *(float *)((int)param_3 + 0x20) = *pfVar2 + *(float *)((int)param_3 + 0x20);
  uVar11 = FUN_004931e0(pfVar2,iVar9);
  *(int *)((int)param_3 + 0x1c) = (int)uVar11;
  return 0;
}


