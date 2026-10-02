/* undefined4 __thiscall FUN_004452d0(void * this, void * param_1) @ 004452d0  1863 bytes */
#include "th12.h"

undefined4 __thiscall FUN_004452d0(void *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  void *this_00;
  void *this_01;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar7;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *this_02;
  void *extraout_ECX_04;
  undefined4 extraout_ECX_05;
  void *this_03;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  void *extraout_ECX_08;
  void *pvVar8;
  void *extraout_ECX_09;
  void *this_04;
  void *this_05;
  undefined4 extraout_ECX_10;
  int *extraout_ECX_11;
  int *this_06;
  void *extraout_ECX_12;
  undefined4 extraout_ECX_13;
  int *extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  void *extraout_ECX_17;
  undefined4 extraout_ECX_18;
  
  pvVar8 = param_1;
  switch(*(undefined4 *)((int)param_1 + 0x24)) {
  case 0:
    *(undefined4 *)((int)param_1 + 0x30) = 3;
    iVar5 = DAT_004b451c;
    if (DAT_004b0ca8 == 4) {
      if (((*(byte *)(DAT_004b451c + 0x1e9d0) & 0x10) == 0) &&
         ((*(byte *)(DAT_004b451c + 0x1e9d1) & 0x10) == 0)) {
        if (*(int *)((int)param_1 + 0x28) == 0) {
          iVar1 = *(int *)((int)param_1 + 0x30);
          if (iVar1 == 0) {
            *(undefined4 *)((int)param_1 + 0x28) = 1;
          }
          else if (iVar1 < 2) {
            *(int *)((int)param_1 + 0x28) = iVar1 + -1;
          }
          else {
            *(undefined4 *)((int)param_1 + 0x28) = 1;
          }
        }
        *(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0xfc) * 4 + 0xb8) = 0;
        *(int *)((int)param_1 + 0xfc) = *(int *)((int)param_1 + 0xfc) + 1;
      }
      if (((*(byte *)(iVar5 + 0x1e9d2) & 0x10) == 0) && ((*(byte *)(iVar5 + 0x1e9d3) & 0x10) == 0))
      {
        if (*(int *)((int)param_1 + 0x28) == 1) {
          if (((*(byte *)(iVar5 + 0x1e9d0) & 0x10) == 0) &&
             ((*(byte *)(iVar5 + 0x1e9d1) & 0x10) == 0)) {
            iVar1 = *(int *)((int)param_1 + 0x30);
            if (iVar1 == 0) {
              *(undefined4 *)((int)param_1 + 0x28) = 2;
            }
            else if (iVar1 < 3) {
              *(int *)((int)param_1 + 0x28) = iVar1 + -1;
            }
            else {
              *(undefined4 *)((int)param_1 + 0x28) = 2;
            }
          }
          else {
            iVar1 = *(int *)((int)param_1 + 0x30);
            if (iVar1 == 0) {
              *(undefined4 *)((int)param_1 + 0x28) = 0;
            }
            else if (iVar1 < 1) {
              *(int *)((int)param_1 + 0x28) = iVar1 + -1;
            }
            else {
              *(undefined4 *)((int)param_1 + 0x28) = 0;
            }
          }
        }
        *(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0xfc) * 4 + 0xb8) = 1;
        *(int *)((int)param_1 + 0xfc) = *(int *)((int)param_1 + 0xfc) + 1;
      }
      if (((*(byte *)(iVar5 + 0x1e9d4) & 0x10) == 0) && ((*(byte *)(iVar5 + 0x1e9d5) & 0x10) == 0))
      {
        if (*(int *)((int)param_1 + 0x28) == 2) {
          if (((*(byte *)(iVar5 + 0x1e9d0) & 0x10) == 0) &&
             ((*(byte *)(iVar5 + 0x1e9d1) & 0x10) == 0)) {
            iVar5 = *(int *)((int)param_1 + 0x30);
            if (iVar5 == 0) {
              *(undefined4 *)((int)param_1 + 0x28) = 1;
            }
            else if (iVar5 < 2) {
              *(int *)((int)param_1 + 0x28) = iVar5 + -1;
            }
            else {
              *(undefined4 *)((int)param_1 + 0x28) = 1;
            }
          }
          else {
            iVar5 = *(int *)((int)param_1 + 0x30);
            if (iVar5 == 0) {
              *(undefined4 *)((int)param_1 + 0x28) = 0;
            }
            else if (iVar5 < 1) {
              *(int *)((int)param_1 + 0x28) = iVar5 + -1;
            }
            else {
              *(undefined4 *)((int)param_1 + 0x28) = 0;
            }
          }
        }
        *(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0xfc) * 4 + 0xb8) = 2;
        *(int *)((int)param_1 + 0xfc) = *(int *)((int)param_1 + 0xfc) + 1;
      }
    }
    FUN_004615a0((void *)0x0,*(void **)((int)param_1 + 0x14),&param_1,0x6f,0);
    *(void **)((int)pvVar8 + 0x484) = param_1;
    FUN_00461970(param_1,*(int *)((int)pvVar8 + 0x504));
    *(undefined4 *)((int)pvVar8 + 0x504) = 0;
    FUN_004615a0((void *)0x0,*(void **)((int)pvVar8 + 0x14),&param_1,0x8f,0);
    *(void **)((int)pvVar8 + 0x504) = param_1;
    FUN_004619e0(this_00,(int)param_1);
    FUN_00461970(this_01,*(int *)((int)pvVar8 + 0x504));
    FUN_0043ef40(1);
    iVar1 = DAT_004ce8cc;
    iVar5 = DAT_004b451c;
    if ((*(int *)(DAT_004b451c + 0x598 + DAT_004b0ca8 * 4) == 0) ||
       (uVar7 = extraout_ECX, *(int *)(DAT_004b451c + 0x4b8c + DAT_004b0ca8 * 4) == 0)) {
      piVar3 = FUN_00461920(extraout_ECX,DAT_004ce8cc,*(int *)((int)pvVar8 + 0x504));
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)((int)pvVar8 + 0x504) = 0;
      }
      for (piVar3 = piVar3 + 4; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        if (*(short *)(*piVar3 + 0x3ea) == 0x88) {
          param_1 = *(void **)*piVar3;
          goto LAB_0044552f;
        }
      }
      param_1 = (void *)0x0;
LAB_0044552f:
      FUN_00461d80();
      uVar7 = extraout_ECX_00;
    }
    if ((*(int *)(iVar5 + 0x9180 + DAT_004b0ca8 * 4) == 0) ||
       (*(int *)(iVar5 + 0xd774 + DAT_004b0ca8 * 4) == 0)) {
      piVar3 = FUN_00461920(uVar7,iVar1,*(int *)((int)pvVar8 + 0x504));
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)((int)pvVar8 + 0x504) = 0;
      }
      for (piVar3 = piVar3 + 4; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        if (*(short *)(*piVar3 + 0x3ea) == 0x89) {
          param_1 = *(void **)*piVar3;
          goto LAB_0044558f;
        }
      }
      param_1 = (void *)0x0;
LAB_0044558f:
      FUN_00461d80();
      uVar7 = extraout_ECX_01;
    }
    if ((*(int *)(iVar5 + 0x11d68 + DAT_004b0ca8 * 4) == 0) ||
       (*(int *)(iVar5 + 0x1635c + DAT_004b0ca8 * 4) == 0)) {
      piVar3 = FUN_00461920(uVar7,iVar1,*(int *)((int)pvVar8 + 0x504));
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)((int)pvVar8 + 0x504) = 0;
      }
      for (piVar3 = piVar3 + 4; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        if (*(short *)(*piVar3 + 0x3ea) == 0x8a) {
          param_1 = *(void **)*piVar3;
          goto LAB_004455eb;
        }
      }
      param_1 = (void *)0x0;
LAB_004455eb:
      FUN_00461d80();
    }
  case 1:
    if (6 < *(int *)((int)pvVar8 + 0x2b8)) {
      FUN_0043ef40(2);
      return 1;
    }
    break;
  case 2:
    piVar3 = (int *)((int)param_1 + 0x28);
    *(undefined4 *)((int)param_1 + 0x2c) = *(undefined4 *)((int)param_1 + 0x28);
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
      this = extraout_ECX_02;
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
      this = extraout_ECX_03;
    }
    if (*(int *)((int)pvVar8 + 0x2c) != *piVar3) {
      FUN_00453d90(this,10);
      FUN_004619e0(*(void **)((int)pvVar8 + 0x504),(int)*(void **)((int)pvVar8 + 0x504));
      FUN_00461970(this_02,*(int *)((int)pvVar8 + 0x504));
      this = extraout_ECX_04;
    }
    if ((DAT_004d48c4 & 0x102) != 0) {
      FUN_0043ef40(4);
      FUN_00453d90(extraout_ECX_05,9);
      return 1;
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      piVar3 = (int *)((int)pvVar8 + 0x504);
      FUN_00462060(this);
      FUN_00461970(this_03,(int)param_1);
      FUN_00462060(extraout_ECX_06);
      FUN_00461970(param_1,(int)param_1);
      piVar4 = FUN_00461920(extraout_ECX_07,DAT_004ce8cc,*piVar3);
      if (piVar4 == (int *)0x0) {
        *piVar3 = 0;
      }
      piVar4 = piVar4 + 4;
      pvVar8 = extraout_ECX_08;
      if (piVar4 != (int *)0x0) {
        pvVar8 = (void *)0x5f;
        do {
          if (*(short *)(*piVar4 + 0x3ea) == 0x5f) {
            iVar5 = *(int *)*piVar4;
            goto LAB_00445768;
          }
          piVar4 = (int *)piVar4[1];
        } while (piVar4 != (int *)0x0);
      }
      iVar5 = 0;
LAB_00445768:
      FUN_00461970(pvVar8,iVar5);
      piVar4 = FUN_00461920(*piVar3,DAT_004ce8cc,*piVar3);
      if (piVar4 == (int *)0x0) {
        *piVar3 = 0;
      }
      piVar4 = piVar4 + 4;
      pvVar8 = extraout_ECX_09;
      if (piVar4 != (int *)0x0) {
        pvVar8 = (void *)0x60;
        do {
          if (*(short *)(*piVar4 + 0x3ea) == 0x60) {
            iVar5 = *(int *)*piVar4;
            goto LAB_004457a8;
          }
          piVar4 = (int *)piVar4[1];
        } while (piVar4 != (int *)0x0);
      }
      iVar5 = 0;
LAB_004457a8:
      FUN_00461970(pvVar8,iVar5);
      FUN_00462060(3);
      FUN_00461970(this_04,(int)param_1);
      FUN_00462060(3);
      FUN_00461970(this_05,(int)param_1);
      piVar4 = FUN_00461920(extraout_ECX_10,DAT_004ce8cc,*piVar3);
      if (piVar4 == (int *)0x0) {
        *piVar3 = 0;
      }
      this_06 = extraout_ECX_11;
      for (piVar4 = piVar4 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
        this_06 = (int *)*piVar4;
        if (*(short *)((int)this_06 + 0x3ea) == 0x88) {
          iVar5 = *this_06;
          goto LAB_0044583e;
        }
      }
      iVar5 = 0;
LAB_0044583e:
      FUN_00461970(this_06,iVar5);
      piVar4 = FUN_00461920(*piVar3,DAT_004ce8cc,*piVar3);
      if (piVar4 == (int *)0x0) {
        *piVar3 = 0;
      }
      pvVar8 = extraout_ECX_12;
      for (piVar4 = piVar4 + 4; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
        pvVar8 = (void *)0x89;
        if (*(short *)(*piVar4 + 0x3ea) == 0x89) {
          iVar5 = *(int *)*piVar4;
          goto LAB_0044587d;
        }
      }
      iVar5 = 0;
LAB_0044587d:
      FUN_00461970(pvVar8,iVar5);
      piVar4 = FUN_00461920(extraout_ECX_13,DAT_004ce8cc,*piVar3);
      if (piVar4 == (int *)0x0) {
        *piVar3 = 0;
      }
      piVar4 = piVar4 + 4;
      piVar3 = extraout_ECX_14;
      do {
        if (piVar4 == (int *)0x0) {
          iVar5 = 0;
LAB_004458b9:
          FUN_00461970(piVar3,iVar5);
          FUN_00453d90(extraout_ECX_15,7);
          FUN_0043ef40(3);
          return 1;
        }
        piVar3 = (int *)*piVar4;
        if (*(short *)((int)piVar3 + 0x3ea) == 0x8a) {
          iVar5 = *piVar3;
          goto LAB_004458b9;
        }
        piVar4 = (int *)piVar4[1];
      } while( true );
    }
    break;
  case 3:
    if (0xd < *(int *)((int)param_1 + 0x2b8)) {
      FUN_0043efd0(this);
      FUN_0043eee0(extraout_ECX_16,7);
      iVar1 = DAT_004b0c90;
      iVar5 = *(int *)((int)pvVar8 + 0x28);
      DAT_004b0c90 = iVar5;
      DAT_004ce8bc = iVar5;
      puVar6 = (uint *)FUN_00464900();
      *(undefined4 *)((int)pvVar8 + 0x30) = 3;
      uVar2 = DAT_004ce8c0;
      if (iVar1 == iVar5) {
        FUN_0040f790(DAT_004ce8c0,puVar6);
        DAT_004b0c94 = uVar2;
        return 1;
      }
      uVar2 = puVar6[2];
      if (uVar2 == 0) {
        *puVar6 = 0;
        DAT_004ce8c0 = 0;
        return 1;
      }
      if (0 < (int)uVar2) {
        *puVar6 = 0;
        DAT_004ce8c0 = 0;
        return 1;
      }
      *puVar6 = uVar2 - 1;
      DAT_004ce8c0 = 0;
      return 1;
    }
    break;
  case 4:
    if (5 < *(int *)((int)param_1 + 0x2b8)) {
      FUN_0043efd0(this);
      FUN_0043efd0(extraout_ECX_17);
      FUN_0043eee0(extraout_ECX_18,5);
      DAT_004b0c90 = *(int *)((int)pvVar8 + 0x28);
      FUN_00464940();
      DAT_004ce8bc = DAT_004b0c90;
    }
  }
  return 1;
}


