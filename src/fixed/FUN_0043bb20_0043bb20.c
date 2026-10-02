/* undefined4 __fastcall FUN_0043bb20(int param_1) @ 0043bb20  188 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0043bb20(int param_1)

{
  double dVar1;
  undefined4 uVar2;
  
  if (((DAT_004b44e8 != 0) && (*(int *)((int)param_1 + 0x10) != 0)) && (*(int *)((int)param_1 + 0x10) == 1)) {
    dVar1 = (double)(uint)*(byte *)((int)param_1 + 0x1cc);
    if (30.0 <= dVar1) {
      if (dVar1 < 50.0 == NANP(dVar1)) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 0xffa0a0ff;
      }
    }
    else {
      uVar2 = 0xff5050ff;
    }
    *(undefined4 *)((int)DAT_004b43b8 + 0x18f80) = uVar2;
    FUN_004015c0("%3d");
    *(undefined4 *)((int)DAT_004b43b8 + 0x18f80) = 0xffffffff;
  }
  return 1;
}


