/* undefined4 __stdcall FUN_0044d5b0(void) @ 0044d5b0  105 bytes */
#include "th12.h"

undefined4 FUN_0044d5b0(void)

{
  BOOL BVar1;
  
  if (DAT_004b0e5c != (HDC)0x0) {
    SelectObject(DAT_004b0e5c,DAT_004b0e60);
    DeleteDC(DAT_004b0e5c);
    BVar1 = DeleteObject(DAT_004b0e64);
    DAT_004b0e4c = 0;
    DAT_004b0e50 = 0;
    DAT_004b0e5c = (HDC)0x0;
    DAT_004b0e64 = (HGDIOBJ)0x0;
    DAT_004b0e60 = (HGDIOBJ)0x0;
    DAT_004b0e68 = 0;
    DAT_004b0e48 = 0xffffffff;
    return CONCAT31((int3)((uint)BVar1 >> 8),1);
  }
  return 0;
}


