/* undefined __stdcall FUN_004319f0(void) @ 004319f0  255 bytes */
#include "th12.h"

void __stdcall FUN_004319f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_004d4754;
  if (DAT_004d4754 != 0) {
    puVar1 = (undefined4 *)((int)DAT_004d4754 + 0x1c);
    if (*(int *)((int)DAT_004d4754 + 0x1c) == 1) {
      iVar5 = *(int *)((int)DAT_004d4754 + 0x14) + -1;
      *(int *)((int)DAT_004d4754 + 0x14) = iVar5;
      if (iVar5 < 1) {
        puVar2 = *(undefined4 **)((int)iVar4 + 4);
        *puVar1 = 0;
        piVar3 = (int *)*puVar2;
        (**(code **)(*piVar3 + 0x48))(piVar3);
      }
      else {
        iVar4 = *(int *)((int)iVar4 + 0x18);
        FUN_004663e0((iVar5 * 5000) / iVar4 + -5000,(iVar5 * 5000) % iVar4);
      }
    }
    iVar4 = DAT_004d4754;
    puVar1 = (undefined4 *)((int)DAT_004d4754 + 0x1c);
    if (*(int *)((int)DAT_004d4754 + 0x1c) == 2) {
      iVar5 = *(int *)((int)DAT_004d4754 + 0x14) + -1;
      *(int *)((int)DAT_004d4754 + 0x14) = iVar5;
      if (iVar5 < 1) {
        *puVar1 = 0;
      }
      else {
        FUN_004663e0((iVar5 * -5000) / *(int *)((int)iVar4 + 0x18),
                     (iVar5 * -5000) % *(int *)((int)iVar4 + 0x18));
      }
    }
    iVar4 = DAT_004d4754;
    puVar1 = (undefined4 *)((int)DAT_004d4754 + 0x1c);
    if (*(int *)((int)DAT_004d4754 + 0x1c) == 4) {
      iVar5 = *(int *)((int)DAT_004d4754 + 0x14) + -1;
      *(int *)((int)DAT_004d4754 + 0x14) = iVar5;
      if (iVar5 < 1) {
        *puVar1 = 0;
      }
      else {
        FUN_004663e0((iVar5 * 1000) / *(int *)((int)iVar4 + 0x18) + -1000,
                     (iVar5 * 1000) % *(int *)((int)iVar4 + 0x18));
      }
    }
    iVar4 = DAT_004d4754;
    puVar1 = (undefined4 *)((int)DAT_004d4754 + 0x1c);
    if (*(int *)((int)DAT_004d4754 + 0x1c) == 3) {
      iVar5 = *(int *)((int)DAT_004d4754 + 0x14) + -1;
      *(int *)((int)DAT_004d4754 + 0x14) = iVar5;
      if (0 < iVar5) {
        FUN_004663e0((iVar5 * -1000) / *(int *)((int)iVar4 + 0x18),
                     (iVar5 * -1000) % *(int *)((int)iVar4 + 0x18));
        return;
      }
      *puVar1 = 0;
    }
  }
  return;
}


