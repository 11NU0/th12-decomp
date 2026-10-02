/* undefined4 __fastcall FUN_00421cd0(int * param_1) @ 00421cd0  1449 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00421cd0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint extraout_ECX;
  uint uVar8;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  int *extraout_ECX_09;
  int *extraout_ECX_10;
  int *extraout_ECX_11;
  int *extraout_ECX_12;
  int *extraout_ECX_13;
  int *extraout_ECX_14;
  void *extraout_ECX_15;
  void *extraout_ECX_16;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  
  piVar1 = DAT_004ce8cc;
  iVar2 = DAT_004b44e8;
  *(uint *)(DAT_004b44e8 + 0x60) = *(uint *)(DAT_004b44e8 + 0x60) | 4;
  iVar4 = *piVar1;
  while (-1 < iVar4) {
    if ((DAT_004cee78 & 0x180) != 0) goto LAB_00422180;
    Sleep(1);
    param_1 = DAT_004ce8cc;
    iVar4 = *DAT_004ce8cc;
  }
  if (DAT_004cee4c == 0) {
    Sleep(0x3c);
  }
  uVar3 = DAT_004ceaa4;
  uVar8 = DAT_004ceaa4;
  if (*(code **)(DAT_004ceaa4 + 0x494) != (code *)0x0) {
    (**(code **)(DAT_004ceaa4 + 0x494))();
    uVar8 = extraout_ECX;
  }
  *(undefined2 *)(uVar3 + 0x3c4) = 2;
  FUN_00455630(uVar8,(short *)0x2,DAT_004ceaa4);
  DAT_004b2ed0 = 0x3f800000;
  DAT_004b0cbc = 0;
  DAT_004b0cc0 = 0;
  if (DAT_004cee4c == 0) {
    if (DAT_004b0c40 < DAT_004b0c44) {
      DAT_004b0c40 = DAT_004b0c44;
    }
  }
  else {
    if (DAT_004b0cb0 == 7) {
      DAT_004b0ca8 = 4;
    }
    iVar4 = DAT_004b0ca8 * 0x118 + (DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + DAT_004b451c;
    DAT_004b0c40 = *(int *)(iVar4 + 0x18);
    DAT_004b0cc8 = (int)*(char *)(iVar4 + 0x1d);
    if ((DAT_004b0ce0 & 8) == 0) {
      DAT_004b0cc4 = 0;
    }
    DAT_004b0cdc = 0;
    DAT_004b0c44 = 0;
    _DAT_004b0ca0 = 2;
    if (DAT_004b43e4 != 0) {
      FUN_0041cf40(DAT_004b43e4,2,(short)_DAT_004b0ca4);
    }
    _DAT_004b0cf0 = *(int *)(DAT_004b0ca8 * 4 + 0x4b30e8) * 100;
    DAT_004b0cf4 = *(int *)(DAT_004b0ca8 * 4 + 0x4b30fc) * 100;
    _DAT_004b0ca4 = 0;
    DAT_004b0c54 = 0;
    DAT_004b0c50 = 0;
    DAT_004b0c4c = 0;
    DAT_004b0c58 = 0;
    DAT_004b0c5c = 0;
    uVar13 = FUN_004931e0(DAT_004b0ca8,_DAT_004b0cf0);
    DAT_004b0c78 = (undefined4)uVar13;
    _DAT_004b0c9c = 0;
    if ((DAT_004b0ce0 & 0x10) == 0) {
      _DAT_004b0c98 = 2;
    }
    else if (DAT_004b0cec == 0) {
      _DAT_004b0c98 = 9;
    }
    else {
      _DAT_004b0c98 = DAT_004b0cec + -1;
    }
    pvVar5 = FUN_00436410();
    param_1 = extraout_ECX_00;
    if (pvVar5 == (void *)0x0) goto LAB_00422180;
    iVar4 = DAT_004b0cd0;
    if ((DAT_004b0cb0 < 2) || (DAT_004b0cb0 == 7)) {
      DAT_004b0c48 = 0;
      if (-1 < DAT_004b0cd0) {
        bVar12 = false;
        bVar11 = DAT_004b0cd4 < 0;
        bVar10 = DAT_004b0cd4 == 0;
        goto LAB_00421f1e;
      }
LAB_00421f20:
      DAT_004b0c48 = iVar4;
    }
    else {
      if ((DAT_004b0ce0 & 8) != 0) {
        DAT_004b0c48 = 400;
        if (399 < DAT_004b0cd0) {
          bVar12 = SBORROW4(DAT_004b0cd4,400);
          bVar11 = DAT_004b0cd4 + -400 < 0;
          bVar10 = DAT_004b0cd4 == 400;
          goto LAB_00421f1e;
        }
        goto LAB_00421f20;
      }
      DAT_004b0c48 = 200;
      if (DAT_004b0cd0 < 200) goto LAB_00421f20;
      bVar12 = SBORROW4(DAT_004b0cd4,200);
      bVar11 = DAT_004b0cd4 + -200 < 0;
      bVar10 = DAT_004b0cd4 == 200;
LAB_00421f1e:
      iVar4 = DAT_004b0cd4;
      if (!bVar10 && bVar12 == bVar11) goto LAB_00421f20;
    }
    FUN_004385b0(DAT_004b4514);
    DAT_004b0ce0 = DAT_004b0ce0 & 0xfffffffb;
    if ((*(int *)(iVar2 + 0x74) == 0) &&
       (iVar4 = (DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4,
       piVar1 = (int *)(iVar4 + 0x590 + DAT_004b451c),
       *(int *)(iVar4 + 0x590 + DAT_004b451c) < 99999)) {
      *piVar1 = *piVar1 + 1;
    }
    DAT_004b0ccc = -(uint)((DAT_004b0ce0 & 8) != 0) & 0xfffffe00;
    DAT_004b0cd8 = 0;
  }
  if ((_DAT_004b0c8c & 1) == 0) {
    _DAT_004b0c8c = _DAT_004b0c8c | 1;
    _DAT_004b0c88 = &DAT_004b2ed0;
  }
  _DAT_004b0c84 = 0;
  _DAT_004b0c80 = 0;
  _DAT_004b0c7c = 0xffffffff;
  puVar6 = (undefined4 *)operator_new(0x24);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = puVar6[1] & 0xfffffffe;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *puVar6 = 0;
    puVar6[5] = puVar6;
    puVar6[6] = 0;
    puVar6[7] = 0;
  }
  puVar6[2] = &LAB_00422bd0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[8] = iVar2;
  puVar6[1] = puVar6[1] & 0xfffffffd | 1;
  FUN_00462380();
  *(undefined4 **)(iVar2 + 8) = puVar6;
  puVar6 = (undefined4 *)operator_new(0x24);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = puVar6[1] & 0xfffffffe;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *puVar6 = 0;
    puVar6[5] = puVar6;
    puVar6[6] = 0;
    puVar6[7] = 0;
  }
  puVar6[2] = &LAB_00422be0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[8] = iVar2;
  puVar6[1] = puVar6[1] & 0xfffffffd | 1;
  FUN_00462420();
  *(undefined4 **)(iVar2 + 0xc) = puVar6;
  puVar6 = &DAT_004ceab0;
  puVar9 = (undefined4 *)(iVar2 + 0x24);
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(iVar2 + 4) = *DAT_004b452c;
  if ((DAT_004b0ce0 & 2) == 0) {
    pvVar5 = FUN_0043b600(*(undefined4 *)(iVar2 + 0x74));
    param_1 = extraout_ECX_01;
    if ((((pvVar5 == (void *)0x0) ||
         (puVar7 = FUN_00402f40(DAT_004b452c[1]), param_1 = extraout_ECX_02, puVar7 == (uint *)0x0))
        || (puVar7 = FUN_0041df40(), param_1 = extraout_ECX_03, puVar7 == (uint *)0x0)) ||
       (((pvVar5 = FUN_004097f0(), param_1 = extraout_ECX_04, pvVar5 == (void *)0x0 ||
         (puVar7 = FUN_00425b10(), param_1 = extraout_ECX_05, puVar7 == (uint *)0x0)) ||
        ((pvVar5 = FUN_004281c0(), param_1 = extraout_ECX_06, pvVar5 == (void *)0x0 ||
         ((pvVar5 = FUN_00431fb0(), param_1 = extraout_ECX_07, pvVar5 == (void *)0x0 ||
          (puVar7 = FUN_0043dd50(), param_1 = extraout_ECX_08, puVar7 == (uint *)0x0))))))))
    goto LAB_00422180;
    puVar7 = FUN_0044a230();
    param_1 = extraout_ECX_09;
  }
  else {
    FUN_0043c730();
    FUN_0041d3b0(DAT_004b43e4);
    puVar7 = FUN_00402f40(DAT_004b452c[1]);
    param_1 = extraout_ECX_10;
  }
  if (puVar7 != (uint *)0x0) {
    if ((DAT_004b0ce0 & 9) == 0) {
      puVar7 = FUN_004130e0(DAT_004b452c[3]);
      param_1 = extraout_ECX_11;
      if (puVar7 == (uint *)0x0) goto LAB_00422180;
    }
    else {
      FUN_00421c60();
    }
    puVar7 = FUN_0040fb00();
    param_1 = extraout_ECX_12;
    if (((puVar7 != (uint *)0x0) &&
        (puVar7 = FUN_00406b20(), param_1 = extraout_ECX_13, puVar7 != (uint *)0x0)) &&
       (puVar7 = FUN_0040daa0(), param_1 = extraout_ECX_14, puVar7 != (uint *)0x0)) {
      if ((DAT_004b0ce0 & 0x20) == 0) {
        FUN_00430240();
        FUN_004300d0(0,(char *)DAT_004b452c[4]);
        FUN_004300d0(1,(char *)DAT_004b452c[5]);
      }
      iVar4 = DAT_004b43e0;
      *(undefined8 *)(DAT_004b43e0 + 0x2c) = 0;
      *(undefined8 *)(iVar4 + 0x24) = 0;
      FUN_004067e0(0);
      pvVar5 = extraout_ECX_15;
      while (DAT_004d14d4 != 0) {
        Sleep(0x10);
        pvVar5 = extraout_ECX_16;
      }
      if (DAT_004b0cb8 != 0) {
        DAT_004b0cc0 = 0;
      }
      DAT_004b0cb8 = 0;
      FUN_004306c0(pvVar5);
      *(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) & 0xfffffffb;
      DAT_004b0ce0 = DAT_004b0ce0 & 0xfffffff4;
      _DAT_004cf0e8 = 0;
      _DAT_004cf0e4 = 1;
      DAT_004ce55c = 0;
      DAT_004b450c = 0;
      DAT_004b4508 = 0;
      FUN_0040e810();
      return 0;
    }
  }
LAB_00422180:
  *(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) | 8;
  FUN_00430840(param_1);
  _DAT_004cf0e8 = 0;
  _DAT_004cf0e4 = 1;
  if (*(int *)(iVar2 + 8) != 0) {
    puVar7 = (uint *)(*(int *)(iVar2 + 8) + 4);
    *puVar7 = *puVar7 | 2;
  }
  if (*(int *)(iVar2 + 0xc) != 0) {
    puVar7 = (uint *)(*(int *)(iVar2 + 0xc) + 4);
    *puVar7 = *puVar7 | 2;
  }
  return 0xffffffff;
}


