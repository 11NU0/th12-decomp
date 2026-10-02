/* undefined4 __stdcall FUN_0041cc80(int param_1) @ 0041cc80  215 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0041cc80(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  if ((DAT_004cee40 != 0xf) && (DAT_004cee40 != 4)) {
    fVar1 = *(float *)((int)param_1 + 0x34);
    if (DAT_004b43b8 != 0) {
      if (fVar1 < 30.0 == NANP(fVar1)) {
        if (40.0 <= fVar1) {
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
      FUN_00401720("%2.1ffps");
      *(undefined4 *)((int)DAT_004b43b8 + 0x18f80) = 0xffffffff;
      return 1;
    }
    return 1;
  }
  return 1;
}


