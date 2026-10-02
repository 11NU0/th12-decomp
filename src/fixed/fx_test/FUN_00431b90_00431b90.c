/* int __stdcall FUN_00431b90(int param_1) @ 00431b90  365 bytes */

#include "th12.h"

int __stdcall FUN_00431b90(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar5 = 0;
  piVar2 = (int *)(DAT_004b0ca8 * 0x118 + 0x10 + param_1);
  do {
    if (*piVar2 <= DAT_004b0c44) {
      if (iVar5 < 10) {
        iVar4 = 9;
        if (iVar5 < 9) {
          do {
            iVar1 = param_1 + (iVar4 + DAT_004b0ca8 * 10) * 0x1c;
            iVar4 = iVar4 + -1;
            puVar6 = (undefined4 *)(iVar1 + -0xc);
            puVar7 = (undefined4 *)(iVar1 + 0x10);
            for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          } while (iVar5 < iVar4);
        }
        *(int *)(param_1 + 0x10 + (iVar5 + DAT_004b0ca8 * 10) * 0x1c) = DAT_004b0c44;
        *(undefined *)(param_1 + 0x15 + (iVar5 + DAT_004b0ca8 * 10) * 0x1c) =
             (undefined)DAT_004b0cc4;
        *(undefined *)(param_1 + 0x14 + (iVar5 + DAT_004b0ca8 * 10) * 0x1c) =
             (undefined)DAT_004b0cb0;
        __time64((__time64_t *)(param_1 + 0x20 + (iVar5 + DAT_004b0ca8 * 10) * 0x1c));
        iVar4 = iVar5 + DAT_004b0ca8 * 10;
        *(undefined4 *)(param_1 + 0x16 + iVar4 * 0x1c) = 0x20202020;
        iVar4 = param_1 + 0x16 + iVar4 * 0x1c;
        *(undefined4 *)(iVar4 + 4) = 0x20202020;
        *(undefined *)(iVar4 + 8) = 0;
        *(float *)(param_1 + 0x28 + (iVar5 + DAT_004b0ca8 * 10) * 0x1c) =
             100.0 - (float)((float10)*(double *)(DAT_004b43e0 + 0x24) /
                            (float10)*(double *)(DAT_004b43e0 + 0x2c)) * 100.0;
        return iVar5;
      }
      return -1;
    }
    iVar5 = iVar5 + 1;
    piVar2 = piVar2 + 7;
  } while (iVar5 < 10);
  return -1;
}


