/* undefined __stdcall FUN_0041d560(void) @ 0041d560  1092 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_0041d560(void)

{
  uint *puVar1;
  int *piVar2;
  code *pcVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  void *pvVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int iVar8;
  int extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 uVar9;
  void *this;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *psVar10;
  short *extraout_EDX_01;
  short *extraout_EDX_02;
  short *extraout_EDX_03;
  void *pvVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int local_10 [4];
  
  iVar6 = DAT_004b43e4;
  if (*(int *)(DAT_004b43e4 + 8) != 0) {
    puVar1 = (uint *)(*(int *)(DAT_004b43e4 + 8) + 4);
    *puVar1 = *puVar1 | 2;
  }
  if (*(int *)(iVar6 + 0xc) != 0) {
    puVar1 = (uint *)(*(int *)(iVar6 + 0xc) + 4);
    *puVar1 = *puVar1 | 2;
  }
  if (*(int *)(iVar6 + 0x6cd4) != 0) {
    puVar1 = (uint *)(*(int *)(iVar6 + 0x6cd4) + 4);
    *puVar1 = *puVar1 | 2;
  }
  if (*(int *)(iVar6 + 0x6cbc) == 0) {
    FUN_004615a0((void *)0x0,*(void **)(iVar6 + 0x6d44),local_10,0,0);
    *(int *)(iVar6 + 0x6cbc) = local_10[0];
  }
  if ((*(byte *)(iVar6 + 0x48c) & 1) == 0) {
    uVar12 = 0;
    pvVar11 = (void *)(iVar6 + 0x10);
    do {
      FUN_00454d10(*(void **)(iVar6 + 0x6d44),pvVar11,uVar12 + 0xd);
      uVar12 = uVar12 + 1;
      pvVar11 = (void *)((int)pvVar11 + 0x4b4);
    } while (uVar12 < 8);
    uVar12 = 0;
    pvVar11 = (void *)(iVar6 + 0x25b0);
    do {
      FUN_00454d10(*(void **)(iVar6 + 0x6d44),pvVar11,uVar12 + 0x15);
      uVar12 = uVar12 + 1;
      pvVar11 = (void *)((int)pvVar11 + 0x4b4);
    } while (uVar12 < 8);
    iVar13 = 0;
    pvVar11 = (void *)(iVar6 + 0x4b50);
    do {
      FUN_00454d10(*(void **)(DAT_004b43b8 + 0x18fb4),pvVar11,iVar13 + 3);
      iVar13 = iVar13 + 1;
      pvVar11 = (void *)((int)pvVar11 + 0x4b4);
    } while (iVar13 < 2);
    FUN_00454d10(*(void **)(iVar6 + 0x6d44),(void *)(iVar6 + 0x54b8),0x4f);
    FUN_00454d10(*(void **)(iVar6 + 0x6d44),(void *)(iVar6 + 0x596c),0x50);
    FUN_00454d10(*(void **)(iVar6 + 0x6d44),(void *)(iVar6 + 0x5e20),0x50);
    FUN_00454d10(*(void **)(iVar6 + 0x6d44),(void *)(iVar6 + 0x62d4),0x50);
    uVar9 = extraout_ECX;
    if (*(code **)(iVar6 + 0x5e00) != (code *)0x0) {
      (**(code **)(iVar6 + 0x5e00))();
      uVar9 = extraout_ECX_00;
    }
    *(undefined2 *)(iVar6 + 0x5d30) = 7;
    lVar14 = FUN_00455630(uVar9,(short *)0x7,(uint)(iVar6 + 0x596c));
    psVar10 = (short *)((ulonglong)lVar14 >> 0x20);
    uVar9 = extraout_ECX_01;
    if (*(code **)(iVar6 + 0x62b4) != (code *)0x0) {
      (**(code **)(iVar6 + 0x62b4))();
      uVar9 = extraout_ECX_02;
      psVar10 = extraout_EDX;
    }
    *(undefined2 *)(iVar6 + 0x61e4) = 8;
    lVar14 = FUN_00455630(uVar9,psVar10,(uint)(iVar6 + 0x5e20));
    psVar10 = (short *)((ulonglong)lVar14 >> 0x20);
    if (*(code **)(iVar6 + 0x6768) != (code *)0x0) {
      (**(code **)(iVar6 + 0x6768))();
      psVar10 = extraout_EDX_00;
    }
    *(undefined2 *)(iVar6 + 0x6698) = 9;
    FUN_00455630(9,psVar10,(uint)(iVar6 + 0x62d4));
    iVar13 = *(int *)(iVar6 + 0x6788);
    uVar12 = (iVar13 + 1) * 0x4b4 + 0x54b8 + iVar6;
    psVar10 = (short *)(DAT_004b0c4c + 10);
    uVar4 = SUB42(psVar10,0);
    uVar9 = extraout_ECX_03;
    if (*(code **)(uVar12 + 0x494) != (code *)0x0) {
      (**(code **)(uVar12 + 0x494))();
      uVar9 = extraout_ECX_04;
      psVar10 = extraout_EDX_01;
    }
    *(undefined2 *)(uVar12 + 0x3c4) = uVar4;
    FUN_00455630(uVar9,psVar10,uVar12);
    iVar13 = iVar13 + 2;
    if (3 < iVar13) {
      iVar13 = 1;
    }
    psVar10 = (short *)(iVar13 * 0x4b4);
    pcVar3 = *(code **)((int)psVar10 + iVar6 + 0x594c);
    uVar12 = (int)psVar10 + iVar6 + 0x54b8;
    iVar8 = DAT_004b0c50 + 10;
    uVar4 = (undefined2)iVar8;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)();
      iVar8 = extraout_ECX_05;
      psVar10 = extraout_EDX_02;
    }
    *(undefined2 *)(uVar12 + 0x3c4) = uVar4;
    lVar14 = FUN_00455630(iVar8,psVar10,uVar12);
    psVar10 = (short *)((ulonglong)lVar14 >> 0x20);
    iVar13 = iVar13 + 1;
    if (3 < iVar13) {
      iVar13 = 1;
    }
    sVar5 = (short)DAT_004b0c54;
    uVar12 = iVar13 * 0x4b4 + 0x54b8 + iVar6;
    uVar9 = extraout_ECX_06;
    if (*(code **)(uVar12 + 0x494) != (code *)0x0) {
      (**(code **)(uVar12 + 0x494))();
      uVar9 = extraout_ECX_07;
      psVar10 = extraout_EDX_03;
    }
    *(short *)(uVar12 + 0x3c4) = sVar5 + 10;
    FUN_00455630(uVar9,psVar10,uVar12);
  }
  FUN_0041ce60(iVar6,_DAT_004b0c98,(short)_DAT_004b0c9c);
  FUN_0041cf40(iVar6,_DAT_004b0ca0,(short)_DAT_004b0ca4);
  if (DAT_004cee40 == 8) {
LAB_0041d82b:
    if (((byte)DAT_004b0ce0 & 0x20) == 0) goto LAB_0041d8d0;
  }
  else if (((byte)DAT_004b0ce0 & 0x20) == 0) {
    FUN_004615a0((void *)0x0,*(void **)(iVar6 + 0x6ce4),local_10,1,0);
    goto LAB_0041d82b;
  }
  pvVar11 = *(void **)(iVar6 + 0x6d44);
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  piVar2 = (int *)((int)pvVar11 + 0x130);
  *piVar2 = *piVar2 + 1;
  pvVar7 = FUN_004621c0();
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  *(uint *)((int)pvVar7 + 0x480) = *(uint *)((int)pvVar7 + 0x480) | 1;
  *(undefined4 *)((int)pvVar7 + 0x430) = 0;
  *(undefined4 *)((int)pvVar7 + 0x434) = 0;
  *(undefined4 *)((int)pvVar7 + 0x20) = 0x17;
  *(undefined4 *)((int)pvVar7 + 0x438) = 0;
  FUN_00454d10(pvVar11,pvVar7,0x4d);
  FUN_00461250();
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
LAB_0041d8d0:
  FUN_00454d10(*(void **)(DAT_004b43b8 + 0x18fb4),(void *)(iVar6 + 0x678c),0);
  if (((DAT_004b0cb0 == 1) && (*(int *)(DAT_004b44e8 + 0x74) == 0)) && (DAT_004b0cc4 == 0)) {
    FUN_004615a0((void *)0x0,*(void **)(iVar6 + 0x6d44),local_10,0x33,0);
  }
  if (DAT_004cee4c != 0) {
    FUN_004615a0((void *)0x0,*(void **)(iVar6 + 0x6d44),local_10,DAT_004b0ca8 + 0x40,0);
    *(int *)(iVar6 + 0x6ca4) = local_10[0];
    FUN_00461970(this,local_10[0]);
  }
  FUN_004615a0((void *)0x0,*(void **)(iVar6 + 0x6d44),local_10,DAT_004b0ca8 + 0x45,0);
  *(int *)(iVar6 + 0x6ca8) = local_10[0];
  FUN_00461970(*(void **)(iVar6 + 0x6ca4),(int)*(void **)(iVar6 + 0x6ca4));
  *(undefined4 *)(iVar6 + 0x6cf4) = 0;
  return;
}


