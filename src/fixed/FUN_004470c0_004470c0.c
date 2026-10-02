/* undefined4 __thiscall FUN_004470c0(void * this, int param_1) @ 004470c0  2621 bytes */
#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x004470ed) */
/* WARNING: Removing unreachable block (ram,0x004470fa) */

undefined4 __fastcall FUN_004470c0(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  void *this_00;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  void *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar5;
  void *this_01;
  void *this_02;
  void *pvVar6;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  void *extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  void *this_07;
  void *this_08;
  void *this_09;
  void *extraout_ECX_10;
  void *extraout_ECX_11;
  void *this_10;
  undefined4 extraout_ECX_12;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  
  iVar10 = param_1;
  switch(*(undefined4 *)((int)param_1 + 0x24)) {
  case 0:
    *(undefined4 *)((int)param_1 + 0x30) = 6;
    *(undefined4 *)((int)param_1 + 0x28) = 0;
    *(undefined4 *)((int)param_1 + 0x108) = 5;
    iVar2 = *(int *)((int)param_1 + 0x108);
    if (iVar2 == 0) {
      *(undefined4 *)((int)param_1 + 0x100) = 1;
    }
    else if (iVar2 < 2) {
      *(int *)((int)param_1 + 0x100) = iVar2 + -1;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x100) = 1;
    }
    *(undefined4 *)((int)param_1 + 0x1d0) = 1;
    iVar2 = FUN_0040d840(this,*(int *)((int)param_1 + 0x100));
    iVar3 = (iVar2 + 9) / 10;
    iVar2 = iVar3 + 1;
    *(int *)((int)iVar10 + 0x1e0) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((int)iVar10 + 0x1d8) = 0;
    }
    else if (iVar2 < 1) {
      *(int *)((int)iVar10 + 0x1d8) = iVar3;
    }
    else {
      *(undefined4 *)((int)iVar10 + 0x1d8) = 0;
    }
    *(undefined4 *)((int)iVar10 + 0x2a8) = 1;
    if (*(int *)((int)iVar10 + 0x66c) == 0) {
      FUN_004615a0((void *)0x0,*(void **)((int)DAT_004b43b8 + 0x18fb4),&param_1,0x14,0);
      *(int *)((int)iVar10 + 0x66c) = param_1;
    }
    FUN_004615a0((void *)0x0,*(void **)((int)iVar10 + 0x14),&param_1,0x72,0);
    *(int *)((int)iVar10 + 0x490) = param_1;
    FUN_0043ef40(1);
    iVar2 = *(int *)((int)iVar10 + 0x28) / 2 + 0xc1;
    FUN_004615a0((void *)0x0,*(void **)((int)iVar10 + 0x14),&param_1,iVar2,0);
    *(int *)(iVar10 + 0x2c8 + iVar2 * 4) = param_1;
    uVar9 = *(uint *)((int)iVar10 + 0x28) & 0x80000001;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
    }
    FUN_004615a0((void *)0x0,*(void **)((int)iVar10 + 0x14),&param_1,uVar9 + 0xc4,0);
    *(int *)(iVar10 + 0x2c8 + (uVar9 + 0xc4) * 4) = param_1;
    iVar2 = *(int *)((int)iVar10 + 0x100) + 0xc6;
    FUN_004615a0((void *)0x0,*(void **)((int)iVar10 + 0x14),&param_1,iVar2,0);
    *(int *)(iVar10 + 0x2c8 + iVar2 * 4) = param_1;
    FUN_004615a0((void *)0x0,*(void **)((int)iVar10 + 0x14),&param_1,0xce,0);
    *(int *)((int)iVar10 + 0x600) = param_1;
    FUN_004615a0((void *)0x0,*(void **)((int)iVar10 + 0x14),&param_1,0xcf,0);
    *(int *)((int)iVar10 + 0x604) = param_1;
    FUN_004615a0((void *)0x0,*(void **)((int)iVar10 + 0x14),&param_1,0xd0,0);
    *(int *)((int)iVar10 + 0x608) = param_1;
    FUN_004615a0((void *)0x0,*(void **)((int)iVar10 + 0x14),&param_1,0xd1,0);
    *(int *)((int)iVar10 + 0x60c) = param_1;
    FUN_004615a0((void *)0x0,*(void **)((int)iVar10 + 0x14),&param_1,0xcb,0);
    *(int *)((int)iVar10 + 0x5f4) = param_1;
    FUN_004615a0((void *)0x0,*(void **)((int)iVar10 + 0x14),&param_1,0xcc,0);
    *(int *)((int)iVar10 + 0x5f8) = param_1;
    FUN_004615a0((void *)0x0,*(void **)((int)iVar10 + 0x14),&param_1,0xcd,0);
    *(int *)((int)iVar10 + 0x5fc) = param_1;
    FUN_004615a0((void *)0x0,*(void **)((int)iVar10 + 0x14),&param_1,0xd2,0);
    *(int *)((int)iVar10 + 0x610) = param_1;
  case 1:
    if (6 < *(int *)((int)iVar10 + 0x2b8)) {
      FUN_0043ef40(2);
      return 1;
    }
    break;
  case 2:
    *(undefined4 *)((int)param_1 + 0x2c) = *(undefined4 *)((int)param_1 + 0x28);
    uVar5 = *(undefined4 *)((int)param_1 + 0x100);
    piVar7 = (int *)((int)param_1 + 0x100);
    *(undefined4 *)((int)param_1 + 0x104) = uVar5;
    *(undefined4 *)((int)param_1 + 0x1dc) = *(undefined4 *)((int)param_1 + 0x1d8);
    if (((DAT_004d48c4 & 0x10) != 0) || ((DAT_004d48c0 & 0x10) != 0)) {
      FUN_00464970(-1);
      FUN_004619e0(this_00,*(int *)((int)iVar10 + 0x608));
      uVar5 = extraout_ECX;
    }
    if (((DAT_004d48c4 & 0x20) != 0) || ((DAT_004d48c0 & 0x20) != 0)) {
      FUN_00464970(1);
      FUN_004619e0(*(void **)((int)iVar10 + 0x60c),(int)*(void **)((int)iVar10 + 0x60c));
      uVar5 = extraout_ECX_00;
    }
    if (*(int *)((int)iVar10 + 0x104) != *piVar7) {
      FUN_00453d90(uVar5,10);
      FUN_0043efd0(extraout_ECX_01);
      FUN_0043efa0();
      uVar5 = extraout_ECX_02;
      if (0 < *(int *)((int)iVar10 + 0x1d8)) {
        iVar2 = *(int *)((int)iVar10 + 0x1e0);
        if (iVar2 == 0) {
          *(undefined4 *)((int)iVar10 + 0x1d8) = 1;
        }
        else if (iVar2 < 2) {
          *(int *)((int)iVar10 + 0x1d8) = iVar2 + -1;
        }
        else {
          *(undefined4 *)((int)iVar10 + 0x1d8) = 1;
        }
        FUN_00447b20(iVar10);
        uVar5 = extraout_ECX_03;
      }
      iVar2 = FUN_0040d840(uVar5,*(int *)((int)iVar10 + 0x100));
      *(int *)((int)iVar10 + 0x1e0) = (iVar2 + 9) / 10 + 1;
    }
    if (((DAT_004d48c4 & 0x40) != 0) || ((DAT_004d48c0 & 0x40) != 0)) {
      FUN_00464970(-1);
      FUN_004619e0(this_01,*(int *)((int)iVar10 + 0x600));
    }
    if (((DAT_004d48c4 & 0x80) != 0) || ((DAT_004d48c0 & 0x80) != 0)) {
      FUN_00464970(1);
      FUN_004619e0(this_02,*(int *)((int)iVar10 + 0x604));
    }
    if (*(int *)((int)iVar10 + 0x2c) != *(int *)((int)iVar10 + 0x28)) {
      FUN_00453d90(*(int *)((int)iVar10 + 0x2c),10);
      pvVar6 = (void *)(*(int *)((int)iVar10 + 0x2c) / 2);
      if ((void *)(*(int *)((int)iVar10 + 0x28) / 2) != pvVar6) {
        FUN_0043efd0(pvVar6);
        FUN_0043efa0();
        pvVar6 = extraout_ECX_04;
      }
      FUN_0043efd0(pvVar6);
      FUN_0043efa0();
      if (0 < *(int *)((int)iVar10 + 0x1d8)) {
        FUN_00447b20(iVar10);
      }
    }
    if ((DAT_004d48c4 & 0x80001) != 0) {
      if (*(int *)((int)iVar10 + 0x1d8) == 0) {
        iVar2 = 0;
        piVar7 = (int *)((int)iVar10 + 0x670);
        do {
          FUN_004615a0((void *)0x0,DAT_004cee70,&param_1,iVar2 + 0x19,0);
          *piVar7 = param_1;
          iVar2 = iVar2 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar2 < 10);
      }
      FUN_00464970(1);
      if (*(int *)((int)iVar10 + 0x1d8) == 0) {
        piVar7 = (int *)((int)iVar10 + 0x670);
        iVar2 = 10;
        pvVar6 = extraout_ECX_05;
        do {
          FUN_00461970(pvVar6,*piVar7);
          piVar7 = piVar7 + 1;
          iVar2 = iVar2 + -1;
          pvVar6 = extraout_ECX_06;
        } while (iVar2 != 0);
      }
      else {
        FUN_00447b20(iVar10);
        pvVar6 = extraout_ECX_07;
      }
      FUN_00453d90(pvVar6,7);
    }
    if ((*(int *)((int)iVar10 + 0x100) == 4) && (*(int *)((int)iVar10 + 0x28) == 2)) {
      if ((DAT_004d48c4 & 0x80103) != 0) {
        DAT_004d4ea0 = 0;
        DAT_004d4ea4 = 0;
      }
      puVar8 = &DAT_004d51d0;
      puVar11 = &DAT_004d50d0;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      iVar2 = FUN_00463910();
      if (iVar2 == 2) {
        _memset(&DAT_004d4da0,0,0x100);
        DAT_004d4dbe = DAT_004d5211;
        DAT_004d4dd0 = DAT_004d5212;
        DAT_004d4dce = DAT_004d5213;
        DAT_004d4dc0 = DAT_004d5214;
        DAT_004d4db2 = DAT_004d5215;
        DAT_004d4dc2 = DAT_004d5217;
        DAT_004d4dc1 = DAT_004d5216;
        DAT_004d4dc3 = DAT_004d5218;
        DAT_004d4dc4 = DAT_004d521a;
        DAT_004d4db7 = DAT_004d5219;
        DAT_004d4dc5 = DAT_004d521b;
        DAT_004d4dd2 = DAT_004d521d;
        DAT_004d4dc6 = DAT_004d521c;
        DAT_004d4dd1 = DAT_004d521e;
        DAT_004d4db9 = DAT_004d5220;
        DAT_004d4db8 = DAT_004d521f;
        DAT_004d4db0 = DAT_004d5221;
        DAT_004d4dbf = DAT_004d5223;
        DAT_004d4db3 = DAT_004d5222;
        DAT_004d4db4 = DAT_004d5224;
        DAT_004d4dcf = DAT_004d5226;
        DAT_004d4db6 = DAT_004d5225;
        DAT_004d4db1 = DAT_004d5227;
        DAT_004d4db5 = DAT_004d5229;
        DAT_004d4dcd = DAT_004d5228;
        DAT_004d4dcc = DAT_004d522a;
        puVar8 = (undefined4 *)&DAT_004d4da0;
        puVar11 = &DAT_004d51d0;
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        }
LAB_00447845:
        iVar2 = 0;
        do {
          bVar4 = *(byte *)((int)&DAT_004d51d0 + iVar2 + 1);
          (&DAT_004d4da0)[iVar2] =
               (*(byte *)((int)&DAT_004d50d0 + iVar2) ^ *(byte *)((int)&DAT_004d51d0 + iVar2)) &
               *(byte *)((int)&DAT_004d51d0 + iVar2);
          bVar1 = *(byte *)((int)&DAT_004d51d0 + iVar2 + 2);
          (&DAT_004d4da1)[iVar2] = (*(byte *)((int)&DAT_004d50d0 + iVar2 + 1) ^ bVar4) & bVar4;
          bVar4 = *(byte *)((int)&DAT_004d51d0 + iVar2 + 3);
          (&DAT_004d4da2)[iVar2] = (*(byte *)((int)&DAT_004d50d0 + iVar2 + 2) ^ bVar1) & bVar1;
          (&DAT_004d4da3)[iVar2] = (*(byte *)((int)&DAT_004d50d0 + iVar2 + 3) ^ bVar4) & bVar4;
          iVar2 = iVar2 + 4;
        } while (iVar2 < 0x100);
        if (DAT_004d4ea0 < 0xc) {
          if (((&DAT_004d4da0)[(&DAT_004a1f94)[DAT_004d4ea0]] & 0x80) == 0) {
            bVar4 = 0;
            iVar2 = 0;
            do {
              iVar3 = iVar2 + 3;
              bVar4 = bVar4 | (&DAT_004d4da0)[iVar2] | (&DAT_004d4da2)[iVar2] |
                              (&DAT_004d4da1)[iVar2];
              iVar2 = iVar3;
            } while (iVar3 < 0x39);
            if ((char)bVar4 < '\0') goto LAB_00447920;
          }
          else {
            DAT_004d4ea0 = DAT_004d4ea0 + 1;
            DAT_004d4ea4 = 0;
          }
        }
        else {
          FUN_0043f1e0();
          FUN_00453d90(extraout_ECX_08,0x12);
LAB_00447920:
          DAT_004d4ea0 = 0;
        }
      }
      else if (iVar2 == 1) goto LAB_00447845;
      DAT_004d4ea4 = DAT_004d4ea4 + 1;
      if (300 < DAT_004d4ea4) {
        DAT_004d4ea0 = 0;
        DAT_004d4ea4 = 0;
      }
    }
    if ((DAT_004d48c4 & 0x102) != 0) {
      FUN_0043ef40(3);
      FUN_00453d90(extraout_ECX_09,9);
      iVar2 = *(int *)((int)iVar10 + 0x100);
      FUN_00461970(this_03,*(int *)(iVar10 + 0x5e0 + iVar2 * 4));
      *(undefined4 *)(iVar10 + 0x2c8 + (iVar2 + 0xc6) * 4) = 0;
      uVar9 = *(uint *)((int)iVar10 + 0x28) & 0x80000001;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
      }
      pvVar6 = *(void **)(iVar10 + 0x5d8 + uVar9 * 4);
      FUN_00461970(pvVar6,(int)pvVar6);
      *(undefined4 *)(iVar10 + 0x2c8 + (uVar9 + 0xc4) * 4) = 0;
      iVar2 = *(int *)((int)iVar10 + 0x28) / 2;
      FUN_00461970(this_04,*(int *)(iVar10 + 0x5cc + iVar2 * 4));
      *(undefined4 *)(iVar10 + 0x2c8 + (iVar2 + 0xc1) * 4) = 0;
      FUN_00461970(this_05,*(int *)((int)iVar10 + 0x600));
      *(undefined4 *)((int)iVar10 + 0x600) = 0;
      FUN_00461970(*(void **)((int)iVar10 + 0x604),(int)*(void **)((int)iVar10 + 0x604));
      *(undefined4 *)((int)iVar10 + 0x604) = 0;
      FUN_00461970(this_06,*(int *)((int)iVar10 + 0x608));
      *(undefined4 *)((int)iVar10 + 0x608) = 0;
      FUN_00461970(this_07,*(int *)((int)iVar10 + 0x60c));
      *(undefined4 *)((int)iVar10 + 0x60c) = 0;
      FUN_00461970(*(void **)((int)iVar10 + 0x5f4),(int)*(void **)((int)iVar10 + 0x5f4));
      *(undefined4 *)((int)iVar10 + 0x5f4) = 0;
      FUN_00461970(this_08,*(int *)((int)iVar10 + 0x5f8));
      *(undefined4 *)((int)iVar10 + 0x5f8) = 0;
      FUN_00461970(this_09,*(int *)((int)iVar10 + 0x5fc));
      *(undefined4 *)((int)iVar10 + 0x5fc) = 0;
      FUN_00461970(*(void **)((int)iVar10 + 0x610),(int)*(void **)((int)iVar10 + 0x610));
      *(undefined4 *)((int)iVar10 + 0x610) = 0;
      piVar7 = (int *)((int)iVar10 + 0x670);
      iVar10 = 10;
      pvVar6 = extraout_ECX_10;
      do {
        FUN_00461970(pvVar6,*piVar7);
        piVar7 = piVar7 + 1;
        iVar10 = iVar10 + -1;
        pvVar6 = extraout_ECX_11;
      } while (iVar10 != 0);
      return 1;
    }
    break;
  case 3:
    if (5 < *(int *)((int)param_1 + 0x2b8)) {
      FUN_0043efd0(this);
      FUN_00461970(this_10,*(int *)((int)iVar10 + 0x66c));
      *(undefined4 *)((int)iVar10 + 0x66c) = 0;
      FUN_0043eee0(extraout_ECX_12,1);
      FUN_00464940();
    }
  }
  return 1;
}


