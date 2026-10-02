/* undefined __stdcall FUN_0044af00(void) @ 0044af00  1678 bytes */
#include "th12.h"

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __stdcall FUN_0044af00(void)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  void *pvVar4;
  float *pfVar5;
  void *pvVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar7;
  undefined4 extraout_ECX_04;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  int iVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar9;
  float10 extraout_ST0_01;
  ulonglong uVar10;
  int iVar11;
  int aiStack_78 [2];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  iVar3 = DAT_004b4534;
  _memset(&local_58,0,0x50);
  local_58 = *(undefined4 *)(*(int *)((int)iVar3 + 0x34) + 0x1074);
  local_54 = *(undefined4 *)(*(int *)((int)iVar3 + 0x34) + 0x1078);
  local_44 = 3000;
  local_48 = 0;
  local_4c = 0;
  FUN_00412990((byte *)"UFO_EtBreak2",&local_58);
  FUN_00453e20(extraout_ECX,*(int *)((int)iVar3 + 0x34),*(undefined4 *)(*(int *)((int)iVar3 + 0x34) + 0x1074))
  ;
  iVar11 = *(int *)((int)iVar3 + 0x34);
  pvVar6 = *(void **)(&DAT_004debdc + DAT_004b43c8);
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  piVar1 = (int *)((int)pvVar6 + 0x130);
  *piVar1 = *piVar1 + 1;
  pvVar4 = FUN_004621c0();
  *(uint *)((int)pvVar4 + 0x480) = *(uint *)((int)pvVar4 + 0x480) | 1;
  *(undefined4 *)((int)pvVar4 + 0x20) = 0x17;
  if ((float *)((int)iVar11 + 0x1074) == (float *)0x0) {
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    *(undefined4 *)((int)pvVar4 + 0x430) = 0;
    *(undefined4 *)((int)pvVar4 + 0x434) = 0;
    *(undefined4 *)((int)pvVar4 + 0x438) = 0;
  }
  else {
    *(float *)((int)pvVar4 + 0x430) = *(float *)((int)iVar11 + 0x1074) + 32.0 + 192.0;
    *(float *)((int)pvVar4 + 0x434) = *(float *)((int)iVar11 + 0x1078) + 16.0;
    *(undefined4 *)((int)pvVar4 + 0x438) = *(undefined4 *)((int)iVar11 + 0x107c);
  }
  FUN_00454d10(pvVar6,pvVar4,0xd0);
  FUN_00461250();
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  iVar11 = *(int *)((int)iVar3 + 0x34);
  iVar8 = 10;
  fStack_64 = *(float *)((int)iVar11 + 0x1074) + 32.0 + 192.0;
  fStack_60 = *(float *)((int)iVar11 + 0x1078) + 16.0;
  uStack_5c = *(undefined4 *)((int)iVar11 + 0x107c);
  do {
    FUN_0040fbe0(aiStack_78,(void *)0x1);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (*(int *)((int)iVar3 + 0x4c) == 0) {
    if (*(int *)((int)iVar3 + 0x48) == 0) goto LAB_0044b0e6;
    pfVar5 = (float *)(*(int *)((int)iVar3 + 0x34) + 0x1074);
    iVar11 = 0x10;
  }
  else if (*(int *)((int)iVar3 + 0x48) == 0) {
LAB_0044b0e6:
    pvVar6 = (void *)0x0;
    uVar7 = extraout_ECX_00;
    iVar11 = extraout_EDX;
    if (*(int *)((int)iVar3 + 0x4c) == 0) goto LAB_0044b12d;
    pfVar5 = (float *)(*(int *)((int)iVar3 + 0x34) + 0x1074);
    iVar11 = 0x11;
  }
  else {
    pfVar5 = (float *)(*(int *)((int)iVar3 + 0x34) + 0x1074);
    iVar11 = 0x12;
  }
  pvVar6 = FUN_004273f0(extraout_ECX_00,extraout_EDX,iVar11,pfVar5,-1.5707964,0.0);
  uVar7 = extraout_ECX_01;
  iVar11 = extraout_EDX_00;
  if (pvVar6 != (void *)0x0) {
    *(undefined4 *)((int)pvVar6 + 0x9cc) = *(undefined4 *)((int)iVar3 + 0x48);
    uVar7 = *(undefined4 *)((int)iVar3 + 0x4c);
    *(undefined4 *)((int)pvVar6 + 0x9d0) = uVar7;
    iVar11 = *(int *)((int)iVar3 + 0x30);
    *(int *)((int)pvVar6 + 0x9c8) = iVar11;
  }
LAB_0044b12d:
  fVar9 = (float10)-1.5707964;
  switch(*(undefined4 *)((int)iVar3 + 0x30)) {
  case 1:
    if (pvVar6 != (void *)0x0) {
      if (DAT_004b0c48 < DAT_004b0cd0) {
        uVar7 = 0x3f800000;
      }
      else {
        uVar7 = 0x40000000;
      }
      *(undefined4 *)((int)pvVar6 + 0x9d4) = uVar7;
      iVar11 = *(int *)((int)iVar3 + 0x34);
      *(float *)((int)iVar3 + 0x54) = *(float *)((int)iVar11 + 0x1074) + 32.0 + 192.0;
      *(float *)((int)iVar3 + 0x58) = *(float *)((int)iVar11 + 0x1078) + 16.0;
      *(undefined4 *)((int)iVar3 + 0x5c) = *(undefined4 *)((int)iVar11 + 0x107c);
      uVar7 = *(undefined4 *)((int)pvVar6 + 0x9d4);
      *(undefined4 *)((int)iVar3 + 100) = 0x78;
      *(undefined4 *)((int)iVar3 + 0x60) = uVar7;
      iVar8 = (DAT_004b0c78 / 100) % 10;
      iVar11 = DAT_004b0c78 / 100 - iVar8;
      aiStack_78[0] = *(int *)((int)iVar3 + 0x48) * iVar11;
      uVar10 = FUN_004931e0(aiStack_78[0],iVar8);
      iVar11 = *(int *)((int)iVar3 + 0x4c) * iVar11;
      *(int *)((int)iVar3 + 0x68) = (int)uVar10 + iVar11;
      uVar7 = extraout_ECX_02;
      fVar9 = extraout_ST0;
    }
    FUN_004273f0(uVar7,iVar11,4,(float *)(*(int *)((int)iVar3 + 0x34) + 0x1074),(float)fVar9,2.2);
    iVar11 = *(int *)((int)iVar3 + 0x34) + 0x1074;
    FUN_004273f0(iVar11,extraout_EDX_01,0xd,(float *)iVar11,-1.5707964,2.2);
    return;
  case 2:
    if (pvVar6 != (void *)0x0) {
      if (1.0 < *(float *)((int)iVar3 + 0x50) == (*(float *)((int)iVar3 + 0x50) == 1.0)) {
        if (0.5 < *(float *)((int)iVar3 + 0x50) == (*(float *)((int)iVar3 + 0x50) == 0.5)) {
          fVar2 = *(float *)((int)iVar3 + 0x50) * 4.0 * 2.0 + 2.0;
        }
        else {
          fVar2 = 6.0;
        }
      }
      else {
        fVar2 = 8.0;
      }
      *(float *)((int)pvVar6 + 0x9d4) = fVar2;
      iVar11 = *(int *)((int)iVar3 + 0x34);
      *(float *)((int)iVar3 + 0x54) = *(float *)((int)iVar11 + 0x1074) + 32.0 + 192.0;
      *(float *)((int)iVar3 + 0x58) = *(float *)((int)iVar11 + 0x1078) + 16.0;
      *(undefined4 *)((int)iVar3 + 0x5c) = *(undefined4 *)((int)iVar11 + 0x107c);
      uVar7 = *(undefined4 *)((int)pvVar6 + 0x9d4);
      *(undefined4 *)((int)iVar3 + 100) = 0x78;
      *(undefined4 *)((int)iVar3 + 0x60) = uVar7;
      iVar11 = (DAT_004b0c78 / 100) % 10;
      aiStack_78[0] = (DAT_004b0c78 / 100 - iVar11) * *(int *)((int)iVar3 + 0x4c);
      uVar10 = FUN_004931e0(aiStack_78[0],iVar11);
      *(int *)((int)iVar3 + 0x68) = (int)uVar10;
      uVar7 = extraout_ECX_03;
      fVar9 = extraout_ST0_00;
    }
    iVar11 = *(int *)((int)iVar3 + 0x34) + 0x1074;
    FUN_004273f0(uVar7,iVar11,0xe,(float *)iVar11,(float)fVar9,2.2);
    return;
  case 3:
    if (pvVar6 != (void *)0x0) {
      *(undefined4 *)((int)pvVar6 + 0x9d4) = 0x40000000;
      iVar11 = *(int *)((int)iVar3 + 0x34);
      *(float *)((int)iVar3 + 0x54) = *(float *)((int)iVar11 + 0x1074) + 32.0 + 192.0;
      *(float *)((int)iVar3 + 0x58) = *(float *)((int)iVar11 + 0x1078) + 16.0;
      *(undefined4 *)((int)iVar3 + 0x5c) = *(undefined4 *)((int)iVar11 + 0x107c);
      uVar7 = *(undefined4 *)((int)pvVar6 + 0x9d4);
      *(undefined4 *)((int)iVar3 + 100) = 0x78;
      *(undefined4 *)((int)iVar3 + 0x60) = uVar7;
      iVar11 = (DAT_004b0c78 / 100) % 10;
      aiStack_78[0] = (DAT_004b0c78 / 100 - iVar11) * *(int *)((int)iVar3 + 0x4c);
      uVar10 = FUN_004931e0(aiStack_78[0],iVar11);
      iVar11 = (int)(uVar10 >> 0x20);
      *(int *)((int)iVar3 + 0x68) = (int)uVar10;
      uVar7 = extraout_ECX_04;
      fVar9 = extraout_ST0_01;
    }
    FUN_004273f0(uVar7,iVar11,5,(float *)(*(int *)((int)iVar3 + 0x34) + 0x1074),(float)fVar9,2.2);
    iVar11 = *(int *)((int)iVar3 + 0x34) + 0x1074;
    FUN_004273f0(iVar11,extraout_EDX_02,0xf,(float *)iVar11,-1.5707964,2.2);
    return;
  case 0xffffffff:
    if (DAT_004b0c54 == 1) {
      iVar8 = *(int *)((int)iVar3 + 0x34) + 0x1074;
      FUN_004273f0(iVar8,iVar11,0xd,(float *)iVar8,(float)fVar9,2.2);
    }
    else if (DAT_004b0c54 == 2) {
      FUN_004273f0(uVar7,iVar11,0xe,(float *)(*(int *)((int)iVar3 + 0x34) + 0x1074),(float)fVar9,2.2);
    }
    else if (DAT_004b0c54 == 3) {
      iVar11 = *(int *)((int)iVar3 + 0x34) + 0x1074;
      FUN_004273f0(uVar7,iVar11,0xf,(float *)iVar11,(float)fVar9,2.2);
    }
    if (pvVar6 != (void *)0x0) {
      if (1.0 < *(float *)((int)iVar3 + 0x50) == (*(float *)((int)iVar3 + 0x50) == 1.0)) {
        if (0.5 < *(float *)((int)iVar3 + 0x50) == (*(float *)((int)iVar3 + 0x50) == 0.5)) {
          fVar2 = *(float *)((int)iVar3 + 0x50) * 2.0 + 2.0;
        }
        else {
          fVar2 = 3.0;
        }
      }
      else {
        fVar2 = 4.0;
      }
      *(float *)((int)pvVar6 + 0x9d4) = fVar2;
      *(undefined4 *)((int)pvVar6 + 0x9cc) = *(undefined4 *)((int)iVar3 + 0x48);
      *(undefined4 *)((int)pvVar6 + 0x9d0) = *(undefined4 *)((int)iVar3 + 0x4c);
      *(undefined4 *)((int)pvVar6 + 0x9c8) = *(undefined4 *)((int)iVar3 + 0x30);
      if (*(int *)((int)iVar3 + 0x4c) != 0) {
        iVar11 = *(int *)((int)iVar3 + 0x34);
        *(float *)((int)iVar3 + 0x54) = *(float *)((int)iVar11 + 0x1074) + 32.0 + 192.0;
        *(float *)((int)iVar3 + 0x58) = *(float *)((int)iVar11 + 0x1078) + 16.0;
        *(undefined4 *)((int)iVar3 + 0x5c) = *(undefined4 *)((int)iVar11 + 0x107c);
        uVar7 = *(undefined4 *)((int)pvVar6 + 0x9d4);
        *(undefined4 *)((int)iVar3 + 100) = 0x78;
        *(undefined4 *)((int)iVar3 + 0x60) = uVar7;
        iVar11 = (DAT_004b0c78 / 100) % 10;
        aiStack_78[0] = (DAT_004b0c78 / 100 - iVar11) * *(int *)((int)iVar3 + 0x4c);
        uVar10 = FUN_004931e0(aiStack_78[0],iVar11);
        *(int *)((int)iVar3 + 0x68) = (int)uVar10;
        return;
      }
    }
  }
  return;
}


