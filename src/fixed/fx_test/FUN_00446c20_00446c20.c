/* undefined4 __stdcall FUN_00446c20(void) @ 00446c20  1179 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_00446c20(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  char *pcVar4;
  int local_18;
  
  iVar2 = DAT_004b43b8;
  if (*(int *)(unaff_EDI + 0x24) == 2) {
    *(undefined4 *)(DAT_004b43b8 + 0x18f94) = 1;
    iVar3 = *(int *)(unaff_EDI + 0x1d8) * 0x19;
    if (iVar3 < iVar3 + 0x19) {
      piVar1 = (int *)(unaff_EDI + 0x5a80 + *(int *)(unaff_EDI + 0x1d8) * 100);
      do {
        *(uint *)(iVar2 + 0x18f80) =
             (-(uint)(*(int *)(unaff_EDI + 0x28) != iVar3 % 0x19) & 0xff808180) - 0x100;
        if (*piVar1 == 0) {
          FUN_004015c0((&PTR_s_No___2d__s___2d___2d___2d___2d___004b33b0)
                       [(uint)(*(int *)(unaff_EDI + 0x1d8) != 0) * 2 + 1]);
        }
        else {
          __localtime64((__time64_t *)(*(int *)(*piVar1 + 0x1c) + 0xc));
          pcVar4 = PTR_s_No___2d__s___2d___2d___2d___2d___004b33b0;
          if (*(int *)(unaff_EDI + 0x1d8) != 0) {
            _DAT_004d4f30 = *(undefined4 *)(*piVar1 + 0x1e7);
            DAT_004d4f34 = 0;
            pcVar4 = PTR_s__s__s___2d___2d___2d___2d___2d___004b33b8;
          }
          FUN_004015c0(pcVar4);
        }
        piVar1 = piVar1 + 1;
        iVar3 = iVar3 + 1;
        iVar2 = DAT_004b43b8;
      } while (iVar3 < (*(int *)(unaff_EDI + 0x1d8) + 1) * 0x19);
    }
    *(undefined4 *)(iVar2 + 0x18f80) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x18f94) = 0;
  }
  else if (*(int *)(unaff_EDI + 0x24) == 4) {
    iVar2 = *(int *)(*(int *)(unaff_EDI + 0x5a80 + *(int *)(unaff_EDI + 0x5a78) * 4) + 0x1c);
    *(undefined4 *)(DAT_004b43b8 + 0x18f94) = 1;
    __localtime64((__time64_t *)(iVar2 + 0xc));
    pcVar4 = PTR_s_No___2d__s___2d___2d___2d___2d___004b33b0;
    if (*(int *)(unaff_EDI + 0x1d8) != 0) {
      _DAT_004d4f30 =
           *(undefined4 *)(*(int *)(unaff_EDI + 0x5a80 + *(int *)(unaff_EDI + 0x5a78) * 4) + 0x1e7);
      DAT_004d4f34 = 0;
      pcVar4 = PTR_s__s__s___2d___2d___2d___2d___2d___004b33b8;
    }
    FUN_004015c0(pcVar4);
    if (9 < *(int *)(unaff_EDI + 0x2b8)) {
      iVar2 = 1;
      local_18 = 0x24;
      do {
        *(uint *)(DAT_004b43b8 + 0x18f80) =
             (-(uint)(*(int *)(unaff_EDI + 0x28) != iVar2 + -1) & 0xff808180) - 0x100;
        if (*(int *)(*(int *)(unaff_EDI + 0x5a80 + *(int *)(unaff_EDI + 0x5a78) * 4) + local_18 +
                    0xb8) == 0) {
          FUN_004015c0("%s  ---------");
        }
        else {
          FUN_004015c0("%s  %.8d%d");
        }
        local_18 = local_18 + 0x24;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
    }
    iVar2 = DAT_004b43b8;
    *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x18f94) = 0;
    return 1;
  }
  return 1;
}


