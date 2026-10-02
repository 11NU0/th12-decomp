/* undefined4 __stdcall FUN_0044a5d0(void) @ 0044a5d0  649 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0044a5d0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  int unaff_EBX;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = DAT_004b43b8;
  if (0 < *(int *)(unaff_EBX + 100)) {
    *(undefined4 *)(DAT_004b43b8 + 0x18f84) = 0x40000000;
    *(undefined4 *)(iVar3 + 0x18f88) = 0x40000000;
    *(undefined4 *)(iVar3 + 0x18f98) = 4;
    *(undefined4 *)(iVar3 + 0x18f9c) = 1;
    iVar1 = *(int *)(unaff_EBX + 100);
    *(undefined4 *)(iVar3 + 0x18fa4) = 0;
    *(undefined4 *)(iVar3 + 0x18fa8) = 0;
    *(uint *)(iVar3 + 0x18f80) = ((4 < iVar1 % 10) - 1 & 0x7f7e80) - 0x7f7f80;
    FUN_004020a0("*%1.1f");
    iVar3 = DAT_004b43b8;
    *(undefined4 *)(DAT_004b43b8 + 0x18f84) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x18f88) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x18f80) = 0xffffffff;
    if (0 < *(int *)(unaff_EBX + 0x68)) {
      FUN_004021a0(*(int *)(unaff_EBX + 0x68));
      iVar3 = DAT_004b43b8;
    }
    *(undefined4 *)(iVar3 + 0x18f84) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x18f88) = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x18f80) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x18f9c) = 0;
    *(undefined4 *)(iVar3 + 0x18fa4) = 1;
    *(undefined4 *)(iVar3 + 0x18fa8) = 1;
  }
  if (((*(int *)(unaff_EBX + 0x38) != 0) && (0x3b < *(int *)(unaff_EBX + 0x14))) &&
     (piVar2 = *(int **)(DAT_004b43dc + 0x68), piVar2 != (int *)0x0)) {
    while (*(int *)(*piVar2 + 0x27b4) != *(int *)(unaff_EBX + 0x38)) {
      piVar2 = (int *)piVar2[1];
      if (piVar2 == (int *)0x0) {
        return 1;
      }
    }
    *(undefined4 *)(iVar3 + 0x18f98) = 2;
    *(undefined4 *)(iVar3 + 0x18f9c) = 1;
    iVar1 = FUN_00412530(*(int *)(unaff_EBX + 0x38));
    *(undefined4 *)(iVar3 + 0x18f80) = 0xc080ffc0;
    uVar4 = FUN_004931e0(extraout_ECX,extraout_EDX);
    FUN_004931e0(100,(int)((longlong)
                           ((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) %
                          100));
    FUN_004020a0("%2d:%.2d");
    iVar3 = DAT_004b43b8;
    *(undefined4 *)(DAT_004b43b8 + 0x18f9c) = 0;
    *(undefined4 *)(iVar3 + 0x18f80) = 0xffffffff;
    iVar3 = *(int *)(iVar1 + 0x2648);
    iVar1 = *(int *)(iVar1 + 0x264c);
    piVar2 = FUN_00461920(extraout_ECX_00,DAT_004ce8cc,*(int *)(unaff_EBX + 0x44));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)(unaff_EBX + 0x44) = 0;
    }
    piVar2[0x11f] = piVar2[0x11f] | 8;
    piVar2[0x10] = (int)((float)iVar3 / (float)iVar1);
    FUN_00461e30(extraout_ECX_01);
  }
  return 1;
}


