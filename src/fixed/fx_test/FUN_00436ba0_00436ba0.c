/* undefined4 __fastcall FUN_00436ba0(undefined4 param_1, uint param_2, int param_3) @ 00436ba0  2632 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00436ba0(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 uVar5;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  int extraout_EDX;
  uint extraout_EDX_00;
  int extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 uVar6;
  undefined4 extraout_EDX_10;
  uint extraout_EDX_11;
  uint extraout_EDX_12;
  uint extraout_EDX_13;
  uint extraout_EDX_14;
  uint extraout_EDX_15;
  void *this;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST0_00;
  ulonglong uVar8;
  float *local_48;
  int local_44;
  int local_24 [8];
  
  switch(*(undefined4 *)(param_3 + 0xa28)) {
  case 0:
    iVar4 = 0xf000 - (*(int *)(param_3 + 0xa34) * 0x2800) / 0x3c;
    *(int *)(param_3 + 0x98c) = iVar4;
    *(float *)(param_3 + 0x980) = (float)iVar4 * 0.0078125;
    FUN_00412610();
    *(undefined4 *)(param_3 + 0xa20) = 0;
    *(undefined4 *)(param_3 + 0xa24) = 0;
    if (*(int *)(param_3 + 0xa34) < 0x1e) {
      fVar3 = ((float)*(int *)(param_3 + 0xa34) * 512.0) / 30.0 + 64.0;
      FUN_0040caa0(0,extraout_EDX,fVar3,0,1);
      FUN_0040caa0(extraout_ECX_00,extraout_EDX_01,fVar3 * 0.25,0,0);
      FUN_004286f0(fVar3,0,1);
      FUN_004286f0(fVar3 * 0.25,0,0);
      param_1 = extraout_ECX_01;
      param_2 = extraout_EDX_02;
    }
    else {
      FUN_0040d230();
      FUN_00428750();
      param_1 = extraout_ECX;
      param_2 = extraout_EDX_00;
    }
    if (0x3b < *(int *)(param_3 + 0xa34)) {
      *(undefined4 *)(param_3 + 0xa28) = 1;
      FUN_004067e0(0);
      param_1 = extraout_ECX_02;
      param_2 = extraout_EDX_03;
      goto switchD_00436bbe_caseD_1;
    }
    break;
  case 1:
switchD_00436bbe_caseD_1:
    if (((DAT_004b43e4 != 0) && (*(int *)(DAT_004b43e4 + 0x6d30) == 0)) &&
       ((DAT_004b43dc != 0 &&
        ((((*(int *)(DAT_004b43dc + 0x70) != 0 && (DAT_004b43c4 != 0)) &&
          (*(int *)(DAT_004b43c4 + 0x3c) == 0)) &&
         ((_DAT_004b0ca0 != 0 && (((byte)DAT_004d49d0 & 2) != 0)))))))) {
      FUN_00406bf0();
      FUN_00422f20();
      FUN_004385b0(param_3);
      param_1 = extraout_ECX_03;
      param_2 = extraout_EDX_04;
    }
    if (*(int *)(param_3 + 0xa34) < 0x1e) {
      FUN_0040d230();
      FUN_00428750();
      param_1 = extraout_ECX_04;
      param_2 = extraout_EDX_05;
    }
    FUN_004364f0(param_1,param_2);
    param_1 = extraout_ECX_05;
    param_2 = extraout_EDX_06;
    break;
  case 2:
LAB_00436dd9:
    if (*(int *)(param_3 + 0xa34) == 3) {
      FUN_00439440(DAT_004b0cd4);
      fVar7 = FUN_00437730(param_3);
      local_24[0] = 1;
      local_24[1] = 1;
      local_24[2] = 1;
      local_24[3] = 1;
      local_24[4] = 1;
      local_24[5] = 1;
      local_24[6] = 1;
      local_44 = 0;
      uVar5 = extraout_ECX_08;
      uVar6 = extraout_EDX_09;
      do {
        FUN_004273f0(uVar5,uVar6,local_24[local_44],(float *)(param_3 + 0x97c),
                     (((float)local_44 * 3.1415927) / 28.0 + (float)fVar7) - 0.3926991,3.0);
        local_44 = local_44 + 1;
        uVar5 = extraout_ECX_09;
        uVar6 = extraout_EDX_10;
      } while (local_44 < 7);
      FUN_004385b0(param_3);
      param_1 = extraout_ECX_10;
      param_2 = extraout_EDX_11;
    }
    if (0x1d < *(int *)(param_3 + 0xa34)) {
      if (_DAT_004b0c98 < 0) {
        if (*(int *)(DAT_004b4518 + 0x10) == 1) {
          FUN_00432850();
          param_1 = extraout_ECX_12;
          param_2 = extraout_EDX_13;
        }
        else {
          FUN_00433710();
          param_1 = extraout_ECX_11;
          param_2 = extraout_EDX_12;
        }
      }
      else {
        *(undefined4 *)(param_3 + 0xa28) = 0;
        DAT_004b2ed0 = 0x3f800000;
        puVar1 = (undefined4 *)(param_3 + 0x97c);
        FUN_004390f0(puVar1,0x42000000,0x41800000,0x1e,0x96);
        if (_DAT_004b0ca0 < 2) {
          FUN_00422f60();
        }
        uVar5 = *puVar1;
        *puVar1 = 0;
        *(undefined4 *)(param_3 + 0xa08) = uVar5;
        *(undefined4 *)(param_3 + 0xa0c) = *(undefined4 *)(param_3 + 0x980);
        *(undefined4 *)(param_3 + 0x980) = 0x43f00000;
        *(undefined4 *)(param_3 + 0xa10) = *(undefined4 *)(param_3 + 0x984);
        *(undefined4 *)(param_3 + 0x988) = 0;
        *(undefined4 *)(param_3 + 0x98c) = 0xf000;
        FUN_004067e0(0x118);
        FUN_004067e0(0);
        param_1 = extraout_ECX_13;
        param_2 = extraout_EDX_14;
      }
    }
    break;
  case 3:
    if ((*(int *)(param_3 + 0xa34) != 4) && (*(int *)(param_3 + 0xa34) == 0xf)) {
      FUN_0040d230();
      FUN_00428750();
      param_1 = extraout_ECX_14;
      param_2 = extraout_EDX_15;
    }
    break;
  case 4:
    if (7 < *(int *)(param_3 + 0xa34)) {
      FUN_004381e0();
      iVar4 = DAT_004b43dc;
      *(int *)(DAT_004b43dc + 0x10) = *(int *)(DAT_004b43dc + 0x10) + 1;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      param_1 = extraout_ECX_06;
      param_2 = extraout_EDX_07;
      goto LAB_00436dd9;
    }
    if ((((DAT_004b43c4 != 0) && (*(int *)(DAT_004b43c4 + 0x3c) == 0)) && (_DAT_004b0ca0 != 0)) &&
       (((byte)DAT_004d49d0 & 2) != 0)) {
      FUN_004067e0(0x3c);
      FUN_00406bf0();
      FUN_00422f20();
      FUN_004385b0(param_3);
      *(undefined4 *)(param_3 + 0xa28) = 1;
      param_1 = extraout_ECX_07;
      param_2 = extraout_EDX_08;
    }
  }
  local_48 = (float *)(param_3 + 0x8988);
  *(undefined4 *)(param_3 + 0x825c) = 0x3f800000;
  fVar7 = (float10)1;
  this = (void *)(param_3 + 0x89ac);
  local_44 = 0x80;
  do {
    if ((*(byte *)((int)this + 0x4c) & 1) != 0) {
      if ((*(byte *)((int)this + 0x24) & 1) == 0) {
        FUN_00465390(this,*(float *)((int)this + 0x10),*(float *)((int)this + 0xc));
        *(undefined4 *)((int)this + 8) = 0;
      }
      else {
        *(float *)((int)this + 0x14) = *(float *)((int)this + 0x18) + *(float *)((int)this + 0x14);
        fVar7 = FUN_004646e0(*(float *)((int)this + 0xc) + *(float *)((int)this + 0x10));
        fVar7 = FUN_004646e0((float)fVar7);
        *(float *)((int)this + 0x10) = (float)fVar7;
      }
      FUN_00464db0();
      *local_48 = *(float *)((int)this + -0x20) + *local_48;
      *(float *)((int)this + -0x1c) = *(float *)((int)this + -0x18) + *(float *)((int)this + -0x1c);
      pfVar2 = *(float **)((int)this + 0x34);
      *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x2c);
      if ((*pfVar2 <= 0.99) || (1.01 <= *pfVar2)) {
        fVar3 = *(float *)((int)this + 0x30) - *pfVar2 * 1.0;
      }
      else {
        fVar3 = *(float *)((int)this + 0x30) - 1.0;
      }
      *(float *)((int)this + 0x30) = fVar3;
      uVar8 = FUN_004931e0(pfVar2,*(undefined4 *)((int)this + 0x2c));
      param_2 = (uint)(uVar8 >> 0x20);
      *(int *)((int)this + 0x2c) = (int)uVar8;
      param_1 = extraout_ECX_15;
      fVar7 = extraout_ST0;
      if ((int)uVar8 < 1) {
        *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) & 0xfffffffe;
      }
    }
    local_48 = local_48 + 0x1d;
    this = (void *)((int)this + 0x74);
    local_44 = local_44 + -1;
  } while (local_44 != 0);
  if (0 < *(int *)(param_3 + 0xc404)) {
    pfVar2 = *(float **)(param_3 + 0xc40c);
    *(undefined4 *)(param_3 + 0xc400) = *(undefined4 *)(param_3 + 0xc404);
    if ((*pfVar2 <= 0.99) || (1.01 <= *pfVar2)) {
      fVar7 = (float10)*(float *)(param_3 + 0xc408) - (float10)(float)((float10)*pfVar2 * fVar7);
    }
    else {
      fVar7 = (float10)*(float *)(param_3 + 0xc408) - fVar7;
    }
    *(float *)(param_3 + 0xc408) = (float)fVar7;
    uVar8 = FUN_004931e0(pfVar2,param_2);
    *(int *)(param_3 + 0xc404) = (int)uVar8;
    param_1 = extraout_ECX_16;
    if ((*(int *)(param_3 + 0xa34) != *(int *)(param_3 + 0xa30)) &&
       (param_1 = 3, *(int *)(param_3 + 0xa34) % 3 == 0)) {
      *(uint *)(param_3 + 0x490) = *(uint *)(param_3 + 0x490) | 0x10000;
      *(undefined4 *)(param_3 + 0x3d4) = 0xff0000ff;
      goto LAB_0043714a;
    }
  }
  *(uint *)(param_3 + 0x490) = *(uint *)(param_3 + 0x490) & 0xfffeffff;
LAB_0043714a:
  FUN_00455630(param_1,(short *)(param_3 + 0x14),(uint)(param_3 + 0x14));
  *(float *)(param_3 + 0x9cc) = *(float *)(param_3 + 0x97c) - *(float *)(param_3 + 0x9e4);
  *(float *)(param_3 + 0x9d0) = *(float *)(param_3 + 0x980) - *(float *)(param_3 + 0x9e8);
  *(float *)(param_3 + 0x9d4) = *(float *)(param_3 + 0x984) - *(float *)(param_3 + 0x9ec);
  *(float *)(param_3 + 0x9d8) = *(float *)(param_3 + 0x97c) + *(float *)(param_3 + 0x9e4);
  *(float *)(param_3 + 0x9dc) = *(float *)(param_3 + 0x980) + *(float *)(param_3 + 0x9e8);
  *(float *)(param_3 + 0x9e0) = *(float *)(param_3 + 0x984) + *(float *)(param_3 + 0x9ec);
  *(float *)(param_3 + 0xc444) = *(float *)(param_3 + 0x97c) - *(float *)(param_3 + 0x9f0) * 0.5;
  *(float *)(param_3 + 0xc448) = *(float *)(param_3 + 0x980) - *(float *)(param_3 + 0x9f4) * 0.5;
  *(float *)(param_3 + 0xc44c) = *(float *)(param_3 + 0x984) - *(float *)(param_3 + 0x9f8) * 0.5;
  *(float *)(param_3 + 0xc450) = *(float *)(param_3 + 0x9f0) * 0.5 + *(float *)(param_3 + 0x97c);
  *(float *)(param_3 + 0xc454) = *(float *)(param_3 + 0x980) + *(float *)(param_3 + 0x9f4) * 0.5;
  *(float *)(param_3 + 0xc458) = *(float *)(param_3 + 0x984) + *(float *)(param_3 + 0x9f8) * 0.5;
  *(float *)(param_3 + 0xc45c) = *(float *)(param_3 + 0x97c) - *(float *)(param_3 + 0x9fc);
  *(float *)(param_3 + 0xc460) = *(float *)(param_3 + 0x980) - *(float *)(param_3 + 0xa00);
  *(float *)(param_3 + 0xc464) = *(float *)(param_3 + 0x984) - *(float *)(param_3 + 0xa04);
  *(float *)(param_3 + 0xc468) = *(float *)(param_3 + 0x97c) + *(float *)(param_3 + 0x9fc);
  *(float *)(param_3 + 0xc46c) = *(float *)(param_3 + 0xa00) + *(float *)(param_3 + 0x980);
  *(float *)(param_3 + 0xc470) = *(float *)(param_3 + 0xa04) + *(float *)(param_3 + 0x984);
  *(float *)(param_3 + 0xc474) = *(float *)(param_3 + 0x97c) - *(float *)(param_3 + 0x9f0);
  *(float *)(param_3 + 0xc478) = *(float *)(param_3 + 0x980) - *(float *)(param_3 + 0x9f4);
  *(float *)(param_3 + 0xc47c) = *(float *)(param_3 + 0x984) - *(float *)(param_3 + 0x9f8);
  *(float *)(param_3 + 0xc480) = *(float *)(param_3 + 0x9f0) + *(float *)(param_3 + 0x97c);
  *(float *)(param_3 + 0xc484) = *(float *)(param_3 + 0x9f4) + *(float *)(param_3 + 0x980);
  *(float *)(param_3 + 0xc488) = *(float *)(param_3 + 0x9f8) + *(float *)(param_3 + 0x984);
  iVar4 = *(int *)(param_3 + 0xa34);
  pfVar2 = *(float **)(param_3 + 0xa3c);
  *(int *)(param_3 + 0xa30) = iVar4;
  fVar7 = (float10)0.9900000095367432;
  if ((fVar7 < (float10)*pfVar2 == (NAN(fVar7) || NAN((float10)*pfVar2))) || (1.01 <= *pfVar2)) {
    *(float *)(param_3 + 0xa38) = *pfVar2 + *(float *)(param_3 + 0xa38);
    uVar8 = FUN_004931e0(pfVar2,iVar4);
    *(int *)(param_3 + 0xa34) = (int)uVar8;
    fVar7 = extraout_ST0_00;
  }
  else {
    *(int *)(param_3 + 0xa34) = iVar4 + 1;
    *(float *)(param_3 + 0xa38) = *(float *)(param_3 + 0xa38) + 1.0;
  }
  iVar4 = *(int *)(param_3 + 0xa48);
  pfVar2 = *(float **)(param_3 + 0xa50);
  *(int *)(param_3 + 0xa44) = iVar4;
  if (((float10)*pfVar2 <= fVar7) || (1.01 <= *pfVar2)) {
    *(float *)(param_3 + 0xa4c) = *pfVar2 + *(float *)(param_3 + 0xa4c);
    uVar8 = FUN_004931e0(pfVar2,iVar4);
    *(int *)(param_3 + 0xa48) = (int)uVar8;
  }
  else {
    *(int *)(param_3 + 0xa48) = iVar4 + 1;
    *(float *)(param_3 + 0xa4c) = *(float *)(param_3 + 0xa4c) + 1.0;
  }
  if ((((*(int *)(DAT_004b43e4 + 0x6d30) == 0) && (DAT_004b43dc != 0)) &&
      (*(int *)(DAT_004b43dc + 0x70) != 0)) && (*(int *)(param_3 + 0xa34) % 0x3c == 0)) {
    DAT_004b0ccc = DAT_004b0ccc + 1;
    if (DAT_004b0ccc < 0x401) {
      if (DAT_004b0ccc < -0x400) {
        DAT_004b0ccc = -0x400;
      }
    }
    else {
      DAT_004b0ccc = 0x400;
    }
  }
  if (((*(int *)(DAT_004b43e4 + 0x6d30) == 0) && (DAT_004b43dc != 0)) &&
     ((*(int *)(DAT_004b43dc + 0x70) != 0 && ((*(byte *)(DAT_004b43e4 + 0x6d18) & 0x10) == 0)))) {
    FUN_00439a40(DAT_004b43dc,0,param_3);
    FUN_00439b10(param_3);
    return 1;
  }
  if ((*(uint *)(param_3 + 0xc430) & 1) == 0) {
    *(undefined4 *)(param_3 + 0xc428) = 0;
    *(undefined4 *)(param_3 + 0xc424) = 0;
    *(undefined4 *)(param_3 + 0xc420) = 0xfff0bdc1;
    *(undefined4 **)(param_3 + 0xc42c) = &DAT_004b2ed0;
    *(uint *)(param_3 + 0xc430) = *(uint *)(param_3 + 0xc430) | 1;
  }
  *(undefined4 *)(param_3 + 0xc424) = 0xffffffff;
  *(undefined4 *)(param_3 + 0xc428) = 0xbf800000;
  *(undefined4 *)(param_3 + 0xc420) = 0xfffffffe;
  *(undefined4 *)(param_3 + 0x8980) = 0;
  *(undefined *)(param_3 + 0x8984) = 0;
  FUN_00439b10(param_3);
  return 1;
}


