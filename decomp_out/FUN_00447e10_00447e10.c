/* undefined4 __stdcall FUN_00447e10(int param_1) @ 00447e10  673 bytes */
#include "th12.h"

undefined4 FUN_00447e10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_18;
  int local_14;
  
  iVar2 = DAT_004b43b8;
  if (*(int *)(param_1 + 0x24) == 2) {
    iVar3 = *(int *)(param_1 + 0x100);
    *(undefined4 *)(DAT_004b43b8 + 0x18f94) = 1;
    if (*(int *)(param_1 + 0x1d8) == 0) {
      iVar3 = iVar3 * 0x118;
      local_18 = 0xff;
      local_14 = 10;
      do {
        *(uint *)(iVar2 + 0x18f80) = (local_18 << 8 | local_18) << 8 | 0xff0000ff;
        iVar1 = *(int *)(param_1 + 0x28) * 0x45f4;
        iVar2 = iVar3 + iVar1;
        if (*(int *)(iVar2 + 0x28 + DAT_004b451c) == 0 && *(int *)(iVar2 + 0x2c + DAT_004b451c) == 0
           ) {
          FUN_004015c0("%2d  %s  %9ld%d  ----/--/-- --:--  Stage -  ---%%");
        }
        else {
          __localtime64((__time64_t *)(iVar3 + iVar1 + 0x28 + DAT_004b451c));
          FUN_004015c0("%2d  %s  %9ld%d  %.4d/%.2d/%.2d %.2d:%.2d  %s  %2.1f%%");
        }
        local_18 = local_18 - 0x10;
        iVar3 = iVar3 + 0x1c;
        local_14 = local_14 + -1;
        iVar2 = DAT_004b43b8;
      } while (local_14 != 0);
    }
    *(undefined4 *)(iVar2 + 0x18f80) = 0xffffffff;
    FUN_004015c0("    %5d");
    FUN_004015c0("%3d:%.2d:%.2d");
    FUN_004015c0("    %5d");
    iVar2 = DAT_004b43b8;
    *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x18f94) = 0;
  }
  return 1;
}


