/* undefined4 __stdcall FUN_00448690(int param_1) @ 00448690  830 bytes */
#include "th12.h"

undefined4 FUN_00448690(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_10;
  
  iVar3 = DAT_004b43b8;
  if (*(int *)(param_1 + 0x24) == 2) {
    iVar4 = 0;
    iVar2 = DAT_004b0ca8 * 0x118;
    *(undefined4 *)(DAT_004b43b8 + 0x18f94) = 1;
    local_10 = 0xff;
    do {
      if (*(int *)(param_1 + 0x5988) == 0) {
        *(uint *)(iVar3 + 0x18f80) = (-(uint)(*(int *)(param_1 + 0x28) != iVar4) & 0xff404041) - 1;
      }
      else {
        *(uint *)(iVar3 + 0x18f80) = (local_10 << 8 | local_10) << 8 | 0xff0000ff;
      }
      iVar1 = (DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4;
      iVar3 = iVar1 + iVar2;
      if (*(int *)(iVar3 + 0x28 + DAT_004b451c) == 0 && *(int *)(iVar3 + DAT_004b451c + 0x2c) == 0)
      {
        FUN_004015c0("%2d  %s  %9ld%d  ----/--/-- --:--  Stage -  ---%%");
      }
      else {
        __localtime64((__time64_t *)(iVar1 + DAT_004b451c + 0x28 + iVar2));
        FUN_004015c0("%2d  %s  %9ld%d  %.4d/%.2d/%.2d %.2d:%.2d  %s  %2.1f%%");
      }
      iVar4 = iVar4 + 1;
      local_10 = local_10 - 0x10;
      iVar2 = iVar2 + 0x1c;
      iVar3 = DAT_004b43b8;
    } while (0x5f < (int)local_10);
    if (*(int *)(param_1 + 0x5988) == 0) {
      *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
      FUN_004015c0("%s");
      *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffff00;
      FUN_004015c0("_");
      iVar3 = DAT_004b43b8;
      *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
      iVar2 = 0;
      do {
        *(uint *)(iVar3 + 0x18f80) =
             (-(uint)(*(int *)(param_1 + 0x5990) != iVar2) & 0xff808180) - 0x100;
        FUN_004015c0("%c");
        iVar2 = iVar2 + 1;
        iVar3 = DAT_004b43b8;
      } while (iVar2 < 0x5b);
      *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
      return 1;
    }
  }
  return 1;
}


