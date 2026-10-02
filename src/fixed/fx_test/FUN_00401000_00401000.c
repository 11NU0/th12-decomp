/* undefined __stdcall FUN_00401000(void) @ 00401000  115 bytes */

#include "th12.h"

void __stdcall FUN_00401000(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_LAB_0049f4b8;
  FUN_004027e0(unaff_ESI + 5);
  FUN_004027e0(unaff_ESI + 0x132);
  _memset(unaff_ESI,0,0x18fc4);
  unaff_ESI[1] = unaff_ESI[1] | 2;
  unaff_ESI[0x63e1] = 0x3f800000;
  unaff_ESI[0x63e2] = 0x3f800000;
  unaff_ESI[0x63e9] = 1;
  unaff_ESI[0x63ea] = 1;
  DAT_004b43b8 = unaff_ESI;
  unaff_ESI[0x63e0] = 0xffffffff;
  unaff_ESI[0x63e4] = 0;
  unaff_ESI[0x63eb] = 9;
  return;
}


