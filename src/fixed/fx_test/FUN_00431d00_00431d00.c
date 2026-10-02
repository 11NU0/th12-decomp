/* undefined __stdcall FUN_00431d00(void) @ 00431d00  104 bytes */

#include "th12.h"

void __stdcall FUN_00431d00(void)

{
  uint *unaff_ESI;
  
  unaff_ESI[8] = unaff_ESI[8] & 0xfffffffe;
  unaff_ESI[0xd] = unaff_ESI[0xd] & 0xfffffffe;
  unaff_ESI[0x31] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0x43] = 0;
  unaff_ESI[0x42] = 1;
  unaff_ESI[0x10] = 999;
  unaff_ESI[0x67] = 0;
  unaff_ESI[0x44] = 0;
  unaff_ESI[0x79] = 0;
  unaff_ESI[0x78] = 1;
  unaff_ESI[0x46] = 999;
  _memset(unaff_ESI,0,0x2e0);
  *unaff_ESI = *unaff_ESI | 2;
  DAT_004b4510 = unaff_ESI;
  return;
}


