/* undefined4 __fastcall FUN_0041b5f0(int param_1) @ 0041b5f0  325 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0041b5f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_004b43b8;
  *(undefined4 *)(DAT_004b43b8 + 0x18f98) = 5;
  iVar2 = DAT_004b43dc;
  if (*(int *)(param_1 + 0x23c) == 1) {
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(*(int *)(DAT_004b43dc + 0x1c) + 0x1288);
    piVar1 = (int *)(*(int *)(iVar2 + 0x1c) + 0x1288);
    *piVar1 = *piVar1 + 1;
    iVar2 = *(int *)(iVar2 + 0x1c);
    if (0xe < *(int *)(iVar2 + 0x1288)) {
      *(undefined4 *)(iVar2 + 0x1288) = 0;
    }
    DAT_004b0c44 = DAT_004b0c44 + *(int *)(&DAT_004b2f48 + *(int *)(param_1 + 0x240) * 4) / 10;
    if (999999999 < DAT_004b0c44) {
      DAT_004b0c44 = 999999999;
    }
  }
  *(undefined4 *)(iVar3 + 0x18f80) = 0xd0ffffff;
  *(undefined4 *)(iVar3 + 0x18fa4) = 0;
  *(undefined4 *)(iVar3 + 0x18fa8) = 0;
  *(undefined4 *)(iVar3 + 0x18f84) = 0x40000000;
  *(undefined4 *)(iVar3 + 0x18f9c) = 1;
  *(undefined4 *)(iVar3 + 0x18f88) = 0x40000000;
  FUN_004015c0("%d");
  iVar3 = DAT_004b43b8;
  *(undefined4 *)(DAT_004b43b8 + 0x18f84) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x18f88) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x18fa4) = 1;
  *(undefined4 *)(iVar3 + 0x18fa8) = 1;
  *(undefined4 *)(iVar3 + 0x18f98) = 0;
  *(undefined4 *)(iVar3 + 0x18f9c) = 0;
  *(undefined4 *)(iVar3 + 0x18f80) = 0xffffffff;
  return 0;
}


