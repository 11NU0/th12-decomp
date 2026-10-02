/* undefined __stdcall FUN_00438370(void) @ 00438370  561 bytes */
#include "th12.h"

void FUN_00438370(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 extraout_ECX;
  float fVar7;
  int unaff_ESI;
  float10 fVar8;
  int local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar3 = DAT_004b43c8;
  *(undefined4 *)(unaff_ESI + 0xa28) = 4;
  local_c = *(float *)(unaff_ESI + 0x97c) + 32.0 + 192.0;
  local_8 = *(float *)(unaff_ESI + 0x980) + 16.0;
  local_4 = *(float *)(unaff_ESI + 0x984);
  FUN_004615a0((void *)0x0,*(void **)(&DAT_004debdc + iVar3),&local_14,0x4f,0);
  piVar5 = FUN_00461920(extraout_ECX,DAT_004ce8cc,local_14);
  fVar4 = local_4;
  if (piVar5 != (int *)0x0) {
    piVar5[0x10c] = (int)local_c;
    piVar5[0x10d] = (int)local_8;
    piVar5[0x10e] = (int)local_4;
  }
  local_14 = 0x20;
LAB_00438410:
  FUN_004615a0((void *)0x0,*(void **)(&DAT_004debdc + DAT_004b43c8),&local_10,0x50,0);
  fVar7 = local_10;
  if (local_10 != 0.0) {
    for (puVar1 = *(undefined4 **)(DAT_004ce8cc + 0x8856b8); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[1]) {
      pfVar6 = (float *)*puVar1;
      if (*pfVar6 == local_10) goto LAB_00438475;
    }
    for (puVar1 = *(undefined4 **)(DAT_004ce8cc + 0x8856c0); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[1]) {
      pfVar6 = (float *)*puVar1;
      if (*pfVar6 == local_10) goto LAB_00438475;
    }
  }
  goto LAB_00438493;
LAB_00438475:
  if (pfVar6 != (float *)0x0) {
    pfVar6[0x10c] = local_c;
    pfVar6[0x10d] = local_8;
    pfVar6[0x10e] = fVar4;
    fVar7 = local_c;
  }
LAB_00438493:
  local_14 = local_14 + -1;
  if (local_14 == 0) {
    fVar8 = (float10)0;
    if ((*(uint *)(unaff_ESI + 0xa40) & 1) == 0) {
      *(float *)(unaff_ESI + 0xa38) = (float)fVar8;
      *(undefined4 *)(unaff_ESI + 0xa34) = 0;
      *(undefined4 *)(unaff_ESI + 0xa30) = 0xfff0bdc1;
      *(undefined4 **)(unaff_ESI + 0xa3c) = &DAT_004b2ed0;
      *(uint *)(unaff_ESI + 0xa40) = *(uint *)(unaff_ESI + 0xa40) | 1;
    }
    iVar3 = DAT_004b44e8;
    *(float *)(unaff_ESI + 0xa38) = (float)fVar8;
    *(undefined4 *)(unaff_ESI + 0xa34) = 0;
    *(undefined4 *)(unaff_ESI + 0xa30) = 0xffffffff;
    if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0x60) & 0x200) == 0)) {
      fVar8 = (float10)FUN_00453d90(fVar7,2);
    }
    if ((*(uint *)(unaff_ESI + 0xc410) & 1) == 0) {
      *(float *)(unaff_ESI + 0xc408) = (float)fVar8;
      *(undefined4 *)(unaff_ESI + 0xc404) = 0;
      *(undefined4 *)(unaff_ESI + 0xc400) = 0xfff0bdc1;
      *(undefined4 **)(unaff_ESI + 0xc40c) = &DAT_004b2ed0;
      *(uint *)(unaff_ESI + 0xc410) = *(uint *)(unaff_ESI + 0xc410) | 1;
    }
    *(undefined4 *)(unaff_ESI + 0xc408) = 0x40c00000;
    *(undefined4 *)(unaff_ESI + 0xc404) = 6;
    *(undefined4 *)(unaff_ESI + 0xc400) = 5;
    FUN_00454d10(*(void **)(unaff_ESI + 0x10),(void *)(unaff_ESI + 0x14),0);
    iVar3 = DAT_004b43cc;
    uVar2 = *(uint *)(DAT_004b43cc + 0x7c);
    if ((uVar2 & 1) != 0) {
      if (0x3b < *(int *)(DAT_004b43cc + 0x28)) {
        *(undefined4 *)(DAT_004b43cc + 0x80) = 0;
        *(uint *)(iVar3 + 0x7c) = uVar2 & 0xffffffdd;
        return;
      }
      if (*(int *)(DAT_004b43c4 + 0x3c) != 0) {
        *(uint *)(DAT_004b43cc + 0x7c) = uVar2 | 0x20;
      }
    }
    return;
  }
  goto LAB_00438410;
}


