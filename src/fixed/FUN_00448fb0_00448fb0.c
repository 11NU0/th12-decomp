/* undefined4 __stdcall FUN_00448fb0(int param_1) @ 00448fb0  925 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00448fb0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = DAT_004b43b8;
  if (*(int *)((int)param_1 + 0x24) == 2) {
    *(undefined4 *)((int)DAT_004b43b8 + 0x18f94) = 1;
    iVar3 = 0;
    piVar2 = (int *)((int)param_1 + 0x5a80);
    do {
      *(uint *)((int)iVar1 + 0x18f80) = (-(uint)(*(int *)((int)param_1 + 0x28) != iVar3) & 0xff808180) - 0x100
      ;
      if (*piVar2 == 0) {
        FUN_004015c0("No.%.2d -------- --/--/-- --:-- ------- ------- --- ---%%");
      }
      else {
        __localtime64((__time64_t *)(*(int *)(*piVar2 + 0x1c) + 0xc));
        FUN_004015c0("No.%.2d %s %.2d/%.2d/%.2d %.2d:%.2d %s %s %s %2.1f%%");
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
      iVar1 = DAT_004b43b8;
    } while (iVar3 < 0x19);
  }
  else {
    if (*(int *)((int)param_1 + 0x24) != 3) {
      return 1;
    }
    __localtime64((__time64_t *)(*(int *)((int)DAT_004b4518 + 0x1c) + 0xc));
    FUN_004015c0("No.%.2d %s %.2d/%.2d/%.2d %.2d:%.2d %s %s %s %2.1f%%");
    iVar1 = DAT_004b43b8;
    if (9 < *(int *)((int)param_1 + 0x2b8)) {
      *(undefined4 *)((int)DAT_004b43b8 + 0x18f80) = 0xffffffff;
      FUN_004015c0("%s");
      *(undefined4 *)((int)DAT_004b43b8 + 0x18f80) = 0xffffff00;
      FUN_004015c0("_");
      iVar1 = DAT_004b43b8;
      *(undefined4 *)((int)DAT_004b43b8 + 0x18f80) = 0xffffffff;
      iVar3 = 0;
      do {
        *(uint *)((int)iVar1 + 0x18f80) =
             (-(uint)(*(int *)((int)param_1 + 0x5990) != iVar3) & 0xff808180) - 0x100;
        FUN_004015c0("%c");
        iVar1 = DAT_004b43b8;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x5b);
      *(undefined4 *)((int)DAT_004b43b8 + 0x18f80) = 0xffffffff;
    }
  }
  *(undefined4 *)((int)iVar1 + 0x18f94) = 0;
  *(undefined4 *)((int)iVar1 + 0x18f80) = 0xffffffff;
  return 1;
}


