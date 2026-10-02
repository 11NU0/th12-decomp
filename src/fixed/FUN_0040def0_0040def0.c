/* undefined4 __fastcall FUN_0040def0(undefined4 param_1) @ 0040def0  320 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0040def0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  
  if ((*(byte *)((int)unaff_EDI + 0x7c) & 1) != 0) {
    piVar2 = FUN_00461920(param_1,DAT_004ce8cc,*(int *)((int)unaff_EDI + 0x1c));
    iVar1 = DAT_004b43b8;
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)((int)DAT_004b43b8 + 0x18f9c) = 1;
      *(undefined4 *)((int)iVar1 + 0x18f98) = 2;
      *(undefined *)((int)iVar1 + 0x18f83) = *(undefined *)((int)piVar2 + 0x3bf);
      if ((*(byte *)((int)unaff_EDI + 0x7c) & 2) == 0) {
        FUN_004015c0("$");
      }
      else {
        FUN_004015c0("%8d");
      }
      FUN_004015c0("%.2d/%.2d");
      iVar1 = DAT_004b43b8;
      *(undefined4 *)((int)DAT_004b43b8 + 0x18f98) = 0;
      *(undefined4 *)((int)iVar1 + 0x18f9c) = 0;
      *(undefined *)((int)iVar1 + 0x18f83) = 0xff;
      return 1;
    }
    *(undefined4 *)((int)unaff_EDI + 0x1c) = 0;
  }
  return 1;
}


