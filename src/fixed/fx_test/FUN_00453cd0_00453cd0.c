/* undefined4 __stdcall FUN_00453cd0(void) @ 00453cd0  187 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00453cd0(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *unaff_ESI;
  ulonglong uVar2;
  
  unaff_ESI[8] = -1;
  unaff_ESI[9] = -1;
  unaff_ESI[10] = -1;
  unaff_ESI[0xb] = -1;
  unaff_ESI[0xc] = -1;
  unaff_ESI[0xd] = -1;
  unaff_ESI[0xe] = -1;
  unaff_ESI[0xf] = -1;
  unaff_ESI[0x10] = -1;
  unaff_ESI[0x11] = -1;
  unaff_ESI[0x12] = -1;
  unaff_ESI[0x13] = -1;
  FUN_00453030();
  if (unaff_ESI[4] == 0) {
    return 0xffffffff;
  }
  if (*unaff_ESI != 0) {
    unaff_ESI[0x14a5] = (int)DAT_004cead0;
    iVar1 = (int)DAT_004cead1;
    unaff_ESI[0x14a6] = iVar1;
    if (iVar1 != 0) {
      uVar2 = FUN_004931e0(extraout_ECX,extraout_EDX);
      unaff_ESI[0x14a7] = -5000 - (int)uVar2;
      return 0;
    }
    unaff_ESI[0x14a7] = -10000;
  }
  return 0;
}


