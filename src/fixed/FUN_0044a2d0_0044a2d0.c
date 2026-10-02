/* undefined8 __stdcall FUN_0044a2d0(void) @ 0044a2d0  537 bytes */
#include "th12.h"

undefined8 __stdcall FUN_0044a2d0(void)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int in_EAX;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 extraout_ECX;
  void *this;
  void *this_00;
  undefined4 extraout_ECX_00;
  short *extraout_EDX;
  int extraout_EDX_00;
  ulonglong uVar9;
  
  if (*(int *)((int)in_EAX + 0x38) == 0) {
    if ((DAT_004b0c5c == 3) && (-1 < DAT_004b0c60)) {
      FUN_0044a8a0();
    }
    goto LAB_0044a4cd;
  }
  uVar5 = *(uint *)((int)in_EAX + 0x14) & 0x8000000f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
  }
  if (uVar5 == 1) {
    iVar8 = 1;
  }
  else {
    if (uVar5 != 9) goto LAB_0044a302;
    iVar8 = 0;
  }
  FUN_00421690(iVar8);
LAB_0044a302:
  if (*(int *)((int)in_EAX + 0x38) != 0) {
    for (piVar7 = *(int **)((int)DAT_004b43dc + 0x68); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
      iVar8 = *piVar7;
      if (*(int *)((int)iVar8 + 0x27b4) == *(int *)((int)in_EAX + 0x38)) {
        if (*(int *)((int)DAT_004b43e4 + 0x6d30) != 0) {
          puVar1 = (uint *)(*(int *)((int)in_EAX + 0x34) + 0x265c);
          *puVar1 = *puVar1 | 2;
        }
        iVar4 = *(int *)((int)in_EAX + 0x14);
        iVar2 = *(int *)((int)in_EAX + 0x28) + -300;
        if ((iVar4 == iVar2) || (iVar6 = FUN_00449f20(), iVar8 = extraout_EDX_00, iVar6 != 0)) {
          *(undefined4 *)(*(int *)((int)in_EAX + 0x34) + 0x127c) = 999;
        }
        else if (iVar4 < iVar2) {
          iVar8 = *(int *)((int)in_EAX + 0x34);
          *(undefined4 *)((int)iVar8 + 0x127c) = 0xfffffc19;
        }
        piVar7 = DAT_004d1380;
        iVar2 = *DAT_004d1380;
        uVar9 = FUN_004931e0(*(undefined4 *)((int)in_EAX + 0x34),iVar8);
        (**(code **)((int)iVar2 + 0x40))(piVar7,(int)uVar9);
        iVar8 = DAT_004ce8cc;
        piVar7 = FUN_00461920(extraout_ECX_00,DAT_004ce8cc,*(int *)((int)in_EAX + 0x3c));
        if (piVar7 == (int *)0x0) {
          *(undefined4 *)((int)in_EAX + 0x3c) = 0;
        }
        iVar2 = *(int *)((int)in_EAX + 0x34);
        piVar7[0x10c] = (int)(*(float *)((int)iVar2 + 0x1074) + 32.0 + 192.0);
        piVar7[0x10d] = (int)(*(float *)((int)iVar2 + 0x1078) + 16.0);
        piVar7[0x10e] = *(int *)((int)iVar2 + 0x107c);
        piVar7 = FUN_00461920(*(undefined4 *)((int)in_EAX + 0x3c),iVar8,*(undefined4 *)((int)in_EAX + 0x3c));
        if (piVar7 == (int *)0x0) {
          *(undefined4 *)((int)in_EAX + 0x3c) = 0;
        }
        piVar7 = piVar7 + 4;
        goto joined_r0x0044a47b;
      }
    }
  }
  *(undefined4 *)((int)in_EAX + 0x38) = 0;
  *(undefined4 *)((int)in_EAX + 0x34) = 0;
  DAT_004b0c54 = 0;
  DAT_004b0c50 = 0;
  DAT_004b0c4c = 0;
  DAT_004b0c58 = 0;
  DAT_004b0c5c = 0;
  *(undefined4 *)((int)in_EAX + 0x2c) = 0;
  FUN_00453f10();
  FUN_004214b0(extraout_ECX,extraout_EDX,DAT_004b43e4,-1);
  FUN_00461a70(*(void **)((int)in_EAX + 0x3c),(int)*(void **)((int)in_EAX + 0x3c));
  *(undefined4 *)((int)in_EAX + 0x3c) = 0;
  FUN_00461970(this,*(int *)((int)in_EAX + 0x40));
  FUN_00461970(this_00,*(int *)((int)in_EAX + 0x44));
  uVar9 = FUN_00464a80();
  return CONCAT44((int)(uVar9 >> 0x20),1);
joined_r0x0044a47b:
  if (piVar7 == (int *)0x0) goto LAB_0044a497;
  iVar8 = *piVar7;
  if (*(short *)((int)iVar8 + 0x3ea) == 0xce) goto LAB_0044a499;
  piVar7 = (int *)piVar7[1];
  goto joined_r0x0044a47b;
LAB_0044a497:
  iVar8 = 0;
LAB_0044a499:
  fVar3 = *(float *)((int)in_EAX + 0x50);
  *(uint *)((int)iVar8 + 0x47c) = *(uint *)((int)iVar8 + 0x47c) | 4;
  *(float *)((int)iVar8 + 0x24) = fVar3 * 6.2831855;
LAB_0044a4cd:
  if (0 < *(int *)((int)in_EAX + 100)) {
    *(int *)((int)in_EAX + 100) = *(int *)((int)in_EAX + 100) + -1;
  }
  uVar9 = FUN_00464a80();
  return CONCAT44((int)(uVar9 >> 0x20),1);
}


