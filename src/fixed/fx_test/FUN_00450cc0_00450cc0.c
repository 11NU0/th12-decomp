/* undefined4 __stdcall FUN_00450cc0(void) @ 00450cc0  1335 bytes */

#include "th12.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_00450cc0(void)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar3;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined uVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  char cVar8;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int local_4c [4];
  undefined local_3c [12];
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  uStack_78 = CONCAT13(1,(undefined3)uStack_78);
  _memset(local_3c,0,0x38);
  (**(code **)(*DAT_004ce8ec + 0x20))(DAT_004ce8ec,0,local_4c);
  _DAT_004cea84 = uStack_58;
  _DAT_004cea88 = uStack_54;
  DAT_004cea8c = iStack_50;
  DAT_004cea90 = local_4c[0];
  if (DAT_004ceacd != '\0') {
    if (iStack_50 != 0x3c) {
      FUN_00464220(&DAT_004b0ec8,&DAT_004a26d4);
      DAT_004cf428 = DAT_004cf428 & 0xffffffef;
    }
    if (DAT_004ceacd != '\0') {
      local_4c[3] = local_4c[0];
      uStack_30 = 1;
      if ((((DAT_004cf428 & 0x10) != 0) || (DAT_004cead3 == '\x03')) ||
         (iStack_14 = 1, iStack_50 != 0x3c)) {
        iStack_14 = -0x80000000;
      }
      uStack_28 = 1;
      goto LAB_00450e8c;
    }
  }
  if ((_DAT_004ceae8 & 1) == 0) {
    if (DAT_004ceaca == -1) {
      local_4c[3] = 0x16;
      DAT_004ceaca = '\0';
      FUN_00464220(&DAT_004b0ec8,&DAT_004a2700);
    }
    else {
      local_4c[3] = (DAT_004ceaca != '\0') + 0x16;
    }
  }
  else {
    local_4c[3] = 0x17;
    DAT_004ceaca = '\x01';
  }
  if (DAT_004cf418 == '\0') {
    if (DAT_004cee64 == 0) {
      uStack_18 = 0x3c;
      if ((DAT_004cf428 & 0x10) == 0) {
        iStack_14 = ((DAT_004cead3 != '\x03') - 1 & 0x7fffffff) + 1;
      }
      else {
        iStack_14 = -0x80000000;
      }
      FUN_00464220(&DAT_004b0ec8,&DAT_004a272c);
      uStack_30 = 1;
      goto LAB_00450e8c;
    }
  }
  else {
    DAT_004cee64 = 1;
  }
  uStack_18 = 0;
  uStack_30 = 1;
  iStack_14 = -0x80000000;
  FUN_00464220(&DAT_004b0ec8,&DAT_004a2758);
LAB_00450e8c:
  DAT_004cee78 = DAT_004cee78 | 2;
  local_4c[1] = 0x280;
  local_4c[2] = 0x1e0;
  uStack_24 = 1;
  uStack_20 = 0x50;
  uStack_1c = 1;
  _DAT_004cee68 = 1;
  bVar1 = false;
  while( true ) {
    if ((_DAT_004ceae8 & 2) == 0) {
      iVar2 = (**(code **)(*DAT_004ce8ec + 0x40))
                        (DAT_004ce8ec,0,1,DAT_004cf3f0,0x40,local_4c + 1,&DAT_004ce8f0);
      if (-1 < iVar2) {
        FUN_00464220(&DAT_004b0ec8,&DAT_004a2870);
        DAT_004cee78 = DAT_004cee78 | 1;
        uVar4 = extraout_DL_01;
        goto LAB_0045103c;
      }
      if (bVar1) {
        FUN_00464220(&DAT_004b0ec8,&DAT_004a277c);
      }
      iVar2 = (**(code **)(*DAT_004ce8ec + 0x40))
                        (DAT_004ce8ec,0,1,DAT_004cf3f0,0x20,local_4c + 1,&DAT_004ce8f0);
      if (-1 < iVar2) {
        FUN_00464220(&DAT_004b0ec8,&DAT_004a285c);
        DAT_004cee78 = DAT_004cee78 & 0xfffffffe;
        uVar4 = extraout_DL_00;
        goto LAB_0045103c;
      }
      if (bVar1) {
        FUN_00464220(&DAT_004b0ec8,&DAT_004a27a0);
      }
    }
    iVar2 = (**(code **)(*DAT_004ce8ec + 0x40))
                      (DAT_004ce8ec,0,2,DAT_004cf3f0,0x20,local_4c + 1,&DAT_004ce8f0);
    if (-1 < iVar2) break;
    if (DAT_004cee64 == 0) {
      FUN_00464220(&DAT_004b0ec8,&DAT_004a27c0);
      uStack_18 = 0;
      _DAT_004cee68 = 0;
      bVar1 = true;
    }
    else {
      if (iStack_14 != 1) {
        FUN_00464300(&DAT_004a27e8);
        if (DAT_004ce8ec != (int *)0x0) {
          (**(code **)(*DAT_004ce8ec + 8))(DAT_004ce8ec);
          DAT_004ce8ec = (int *)0x0;
        }
        return 1;
      }
      iStack_14 = -0x80000000;
    }
  }
  FUN_00464220(&DAT_004b0ec8,&DAT_004a2820);
  DAT_004cee78 = DAT_004cee78 & 0xfffffffe;
  uVar4 = extraout_DL;
LAB_0045103c:
  piVar5 = local_4c;
  uStack_64 = 0x43a00000;
  piVar6 = &DAT_004ce9dc;
  for (iVar2 = 0xe; piVar5 = (int *)((int)piVar5 + 4), iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = *piVar5;
    piVar6 = piVar6 + 1;
  }
  uStack_60 = 0xc3700000;
  fVar7 = FUN_004317d0(0,uVar4,0x3e860a92);
  fStack_5c = -(float)((float10)240.0 / fVar7);
  uStack_70 = 0x43a00000;
  uStack_6c = 0xc3700000;
  uStack_68 = 0;
  uStack_7c = 0;
  uStack_78 = 0x3f800000;
  uStack_74 = 0;
  D3DXMatrixLookAtLH(&DAT_004ce944,&uStack_64,&uStack_70,&uStack_7c);
  D3DXMatrixPerspectiveFovLH(&DAT_004ce984,0x3f060a92,0x3faaaaab,0x42c80000,0x461c4000);
  (**(code **)(*DAT_004ce8f0 + 0xb0))(DAT_004ce8f0,2,&DAT_004ce944);
  cVar8 = '\0';
  (**(code **)(*DAT_004ce8f0 + 0xb0))(DAT_004ce8f0,3,&DAT_004ce984);
  (**(code **)(*DAT_004ce8f0 + 0xc0))(DAT_004ce8f0,&DAT_004ce9c4);
  (**(code **)(*DAT_004ce8f0 + 0x1c))(DAT_004ce8f0,&DAT_004cee84);
  uVar3 = extraout_ECX;
  if ((DAT_004cef14 & 0x40) == 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_004a2890);
    uVar3 = extraout_ECX_00;
  }
  if (DAT_004ceedc < 0x101) {
    FUN_00464220(&DAT_004b0ec8,&DAT_004a28e0);
    uVar3 = extraout_ECX_01;
  }
  if (((_DAT_004ceae8 & 1) == 0) && (cVar8 != '\0')) {
    iVar2 = (**(code **)(*DAT_004ce8ec + 0x28))(DAT_004ce8ec,0,1,uStack_68,0,3,0x15);
    if (iVar2 == 0) {
      DAT_004cee78 = DAT_004cee78 | 4;
      uVar3 = extraout_ECX_02;
    }
    else {
      DAT_004cee78 = DAT_004cee78 & 0xfffffffb;
      _DAT_004ceae8 = _DAT_004ceae8 | 1;
      FUN_00464220(&DAT_004b0ec8,&DAT_004a2930);
      uVar3 = extraout_ECX_03;
    }
  }
  FUN_00451200(uVar3);
  FUN_00451e60();
  DAT_004cf3f4 = 0;
  _DAT_004cee6c = 0;
  return 0;
}


