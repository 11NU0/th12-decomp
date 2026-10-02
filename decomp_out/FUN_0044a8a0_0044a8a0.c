/* undefined __stdcall FUN_0044a8a0(void) @ 0044a8a0  703 bytes */
#include "th12.h"

void FUN_0044a8a0(void)

{
  short *psVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar6;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  int unaff_ESI;
  short sVar7;
  void *local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if (*(int *)(unaff_ESI + 0x2c) == 0) {
    *(undefined4 *)(unaff_ESI + 0x2c) = 1;
    _memset(&local_58,0,0x50);
    local_58 = 0;
    local_54 = 0x43000000;
    local_48 = 0;
    local_4c = 0;
    local_44 = *(undefined4 *)(&DAT_004b33f0 + (DAT_004b0c48 / DAT_004b0cd4) * 4);
    iVar2 = 3;
    if (in_EAX != -1) {
      iVar2 = in_EAX + -1;
    }
    iVar2 = FUN_00412990((&PTR_s_UFO_Red_004b33e0)[iVar2],&local_58);
    psVar1 = DAT_004b43e4;
    *(int *)(unaff_ESI + 0x34) = iVar2;
    uVar6 = *(undefined4 *)(iVar2 + 0x27b4);
    *(undefined4 *)(unaff_ESI + 0x38) = uVar6;
    *(undefined **)(iVar2 + 0x103c) = &LAB_0044a890;
    *(int *)(unaff_ESI + 0x30) = in_EAX;
    FUN_004214b0(uVar6,psVar1,(int)psVar1,-1);
    FUN_0040fbe0((int *)&local_68,(void *)0x2);
    FUN_004615a0((void *)0x0,*(void **)(DAT_004b43e4 + 0x36a2),&local_68,0x52,0);
    piVar3 = FUN_00461920(extraout_ECX,DAT_004ce8cc,(int)local_68);
    if (in_EAX == -1) {
      sVar7 = 3;
    }
    else {
      sVar7 = (short)in_EAX + -1;
    }
    uVar6 = extraout_ECX_00;
    if ((code *)piVar3[0x125] != (code *)0x0) {
      (*(code *)piVar3[0x125])();
      uVar6 = extraout_ECX_01;
    }
    *(short *)(piVar3 + 0xf1) = sVar7 + 7;
    if ((*(uint *)(unaff_ESI + 0x20) & 1) == 0) {
      *(undefined4 *)(unaff_ESI + 0x18) = 0;
      *(undefined4 *)(unaff_ESI + 0x14) = 0;
      *(undefined4 *)(unaff_ESI + 0x10) = 0xfff0bdc1;
      *(undefined4 **)(unaff_ESI + 0x1c) = &DAT_004b2ed0;
      *(uint *)(unaff_ESI + 0x20) = *(uint *)(unaff_ESI + 0x20) | 1;
    }
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
    *(undefined4 *)(unaff_ESI + 0x10) = 0xffffffff;
    FUN_00453d90(uVar6,0x34);
    FUN_00453e20(extraout_ECX_02,extraout_EDX,*(undefined4 *)(*(int *)(unaff_ESI + 0x34) + 0x1074));
    iVar2 = *(int *)(unaff_ESI + 0x34);
    pvVar4 = *(void **)(&DAT_004debdc + DAT_004b43c8);
    local_68 = pvVar4;
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
      DAT_004cf221 = DAT_004cf221 + '\x01';
    }
    *(int *)((int)pvVar4 + 0x130) = *(int *)((int)pvVar4 + 0x130) + 1;
    pvVar4 = FUN_004621c0();
    *(uint *)((int)pvVar4 + 0x480) = *(uint *)((int)pvVar4 + 0x480) | 1;
    *(undefined4 *)((int)pvVar4 + 0x20) = 0x17;
    if ((float *)(iVar2 + 0x1074) == (float *)0x0) {
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      *(undefined4 *)((int)pvVar4 + 0x430) = 0;
      *(undefined4 *)((int)pvVar4 + 0x434) = 0;
      *(undefined4 *)((int)pvVar4 + 0x438) = 0;
    }
    else {
      *(float *)((int)pvVar4 + 0x430) = *(float *)(iVar2 + 0x1074) + 32.0 + 192.0;
      *(float *)((int)pvVar4 + 0x434) = *(float *)(iVar2 + 0x1078) + 16.0;
      *(undefined4 *)((int)pvVar4 + 0x438) = *(undefined4 *)(iVar2 + 0x107c);
    }
    FUN_00454d10(local_68,pvVar4,0xcf);
    puVar5 = (undefined4 *)FUN_00461250();
    uVar6 = *puVar5;
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
      DAT_004cf221 = DAT_004cf221 + -1;
    }
    psVar1 = DAT_004b43e4;
    *(undefined4 *)(unaff_ESI + 0x3c) = uVar6;
    *(undefined4 *)(unaff_ESI + 0x50) = 0;
    *(undefined4 *)(unaff_ESI + 0x48) = 0;
    *(undefined4 *)(unaff_ESI + 0x4c) = 0;
    FUN_004615a0((void *)0x0,*(void **)(psVar1 + 0x36a2),&local_68,0x86,0);
    psVar1 = DAT_004b43e4;
    *(void **)(unaff_ESI + 0x40) = local_68;
    FUN_004615a0((void *)0x0,*(void **)(psVar1 + 0x36a2),&local_68,0x88,0);
    *(void **)(unaff_ESI + 0x44) = local_68;
    *(undefined4 *)(unaff_ESI + 0x28) = 0x2d0;
  }
  return;
}


