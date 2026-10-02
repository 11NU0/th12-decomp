/* undefined4 __fastcall FUN_0041a6f0(int param_1) @ 0041a6f0  525 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0041a6f0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x2648);
  *(int *)(param_1 + 0x2650) = iVar1;
  *(undefined4 *)(param_1 + 0x2658) = 0;
  uVar2 = 0;
  piVar3 = (int *)(param_1 + 0x270c);
  do {
    if (-1 < *piVar3) {
      iVar4 = uVar2 * 0x10 + param_1;
      *(int *)(param_1 + 0x2650) = iVar1 - *(int *)(iVar4 + 0x270c);
      *(undefined4 *)(param_1 + 0x2658) = *(undefined4 *)(iVar4 + 0x270c);
      if (iVar1 <= *(int *)(iVar4 + 0x270c)) {
        *(int *)(param_1 + 0x2648) = *(int *)(iVar4 + 0x270c);
        *(undefined4 *)(iVar4 + 0x270c) = 0xffffffff;
        if ((*(uint *)(param_1 + 0x12bc) & 1) == 0) {
          *(undefined4 *)(param_1 + 0x12b4) = 0;
          *(undefined4 *)(param_1 + 0x12b0) = 0;
          *(undefined4 *)(param_1 + 0x12ac) = 0xfff0bdc1;
          *(undefined4 **)(param_1 + 0x12b8) = &DAT_004b2ed0;
          *(uint *)(param_1 + 0x12bc) = *(uint *)(param_1 + 0x12bc) | 1;
        }
        *(undefined4 *)(param_1 + 0x12b0) = 0;
        *(undefined4 *)(param_1 + 0x12b4) = 0;
        *(undefined4 *)(param_1 + 0x12ac) = 0xffffffff;
        *(uint *)(param_1 + 0x26f8) = *(uint *)(param_1 + 0x26f8) & 0xff7fffff;
        return *(undefined4 *)(iVar4 + 0x2714);
      }
      break;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 4;
  } while (uVar2 < 8);
  iVar1 = DAT_004b43e4;
  uVar2 = 0;
  piVar3 = (int *)(param_1 + 10000);
  while ((piVar3[-1] < 0 || (*piVar3 < 1))) {
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 4;
    if (7 < uVar2) {
      return 0;
    }
  }
  piVar3 = (int *)((uVar2 + 0x271) * 0x10 + param_1);
  iVar4 = *piVar3 - *(int *)(param_1 + 0x12b0);
  iVar5 = iVar4 / 0x3c;
  iVar4 = ((iVar4 % 0x3c) * 100) / 0x3c;
  iVar6 = 99;
  if (iVar5 < 100) {
    iVar6 = iVar5;
  }
  *(int *)(DAT_004b43e4 + 0x6d38) = iVar6;
  if (99 < iVar5) {
    iVar4 = 99;
  }
  *(int *)(iVar1 + 0x6d3c) = iVar4;
  if (*(int *)(param_1 + 0x12b0) < *piVar3) {
    return 0;
  }
  iVar1 = uVar2 * 0x10 + param_1;
  *(undefined4 *)(param_1 + 0x2648) = *(undefined4 *)(uVar2 * 0x10 + 0x270c + param_1);
  *(undefined4 *)(iVar1 + 0x270c) = 0xffffffff;
  if ((*(uint *)(param_1 + 0x12bc) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x12b4) = 0;
    *(undefined4 *)(param_1 + 0x12b0) = 0;
    *(undefined4 *)(param_1 + 0x12ac) = 0xfff0bdc1;
    *(undefined4 **)(param_1 + 0x12b8) = &DAT_004b2ed0;
    *(uint *)(param_1 + 0x12bc) = *(uint *)(param_1 + 0x12bc) | 1;
  }
  *(undefined4 *)(param_1 + 0x12b4) = 0;
  *(undefined4 *)(param_1 + 0x12b0) = 0;
  *(undefined4 *)(param_1 + 0x12ac) = 0xffffffff;
  *(uint *)(param_1 + 0x26f8) = *(uint *)(param_1 + 0x26f8) | 0x800000;
  iVar4 = DAT_004b43cc;
  uVar2 = *(uint *)(DAT_004b43cc + 0x7c);
  if ((uVar2 & 8) != 0) goto LAB_0041a8f4;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_004b43cc + 0x28) < 0x3c) {
      if (*(int *)(DAT_004b43c4 + 0x3c) == 0) goto LAB_0041a8eb;
      uVar2 = uVar2 | 0x20;
    }
    else {
      *(undefined4 *)(DAT_004b43cc + 0x80) = 0;
      uVar2 = uVar2 & 0xffffffdd;
    }
    *(uint *)(iVar4 + 0x7c) = uVar2;
  }
LAB_0041a8eb:
  *(undefined4 *)(DAT_004b43dc + 0x18) = 0;
LAB_0041a8f4:
  return *(undefined4 *)(iVar1 + 0x2718);
}


