/* undefined4 __stdcall FUN_004463c0(int param_1) @ 004463c0  404 bytes */
#include "th12.h"

undefined4 FUN_004463c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_004b43b8;
  if (*(int *)(param_1 + 0x24) == 2 || *(int *)(param_1 + 0x24) == 3) {
    *(undefined4 *)(DAT_004b43b8 + 0x18f94) = 1;
    if ((9 < *(int *)(param_1 + 0x2b8)) || (*(int *)(param_1 + 0x24) == 3)) {
      iVar4 = 1;
      do {
        iVar1 = DAT_004b451c;
        if (*(int *)(param_1 + 0x28) == iVar4 + -1) {
          if (*(char *)((DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + DAT_004b451c + 0x5a9 +
                       (iVar4 + DAT_004b0ca8 * 6) * 8) == '\0') {
            *(undefined4 *)(iVar3 + 0x18f80) = 0xffdfdfdf;
          }
          else {
            if (*(int *)(param_1 + 0x24) == 3) {
              uVar2 = *(uint *)(param_1 + 0x2b8) & 0x80000003;
              if ((int)uVar2 < 0) {
                uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
              }
              if (1 < (int)uVar2) {
                *(undefined4 *)(iVar3 + 0x18f80) = 0xff000000;
                goto LAB_004464b5;
              }
            }
            *(undefined4 *)(iVar3 + 0x18f80) = 0xffffff00;
          }
        }
        else {
          *(undefined4 *)(iVar3 + 0x18f80) = 0xff808080;
        }
LAB_004464b5:
        if (*(char *)((DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + iVar1 + 0x5a9 +
                     (iVar4 + DAT_004b0ca8 * 6) * 8) == '\0') {
          FUN_004015c0("%s  ---------");
        }
        else {
          FUN_004015c0("%s  %.8d0");
        }
        iVar4 = iVar4 + 1;
        iVar3 = DAT_004b43b8;
      } while (iVar4 < 7);
    }
    *(undefined4 *)(iVar3 + 0x18f80) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x18f94) = 0;
  }
  return 1;
}


