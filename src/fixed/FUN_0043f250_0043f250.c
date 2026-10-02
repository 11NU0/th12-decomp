/* undefined __stdcall FUN_0043f250(void) @ 0043f250  201 bytes */
#include "th12.h"

void __stdcall FUN_0043f250(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_LAB_004a20cc;
  unaff_ESI[0x2d] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0x3f] = 0;
  unaff_ESI[0x3e] = 1;
  unaff_ESI[0xc] = 999;
  unaff_ESI[99] = 0;
  unaff_ESI[0x40] = 0;
  unaff_ESI[0x75] = 0;
  unaff_ESI[0x74] = 1;
  unaff_ESI[0x42] = 999;
  unaff_ESI[0x99] = 0;
  unaff_ESI[0x76] = 0;
  unaff_ESI[0xab] = 0;
  unaff_ESI[0xaa] = 1;
  unaff_ESI[0x78] = 999;
  unaff_ESI[0xb1] = unaff_ESI[0xb1] & 0xfffffffe;
  unaff_ESI[0x1687] = 0;
  unaff_ESI[0x1664] = 0;
  unaff_ESI[0x1699] = 0;
  unaff_ESI[0x1698] = 1;
  unaff_ESI[0x1666] = 999;
  unaff_ESI[0x1707] = &PTR_FUN_004a3738;
  unaff_ESI[0x1708] = 0;
  unaff_ESI[0x1709] = 0;
  unaff_ESI[0x170a] = 0;
  unaff_ESI[0x170b] = 0;
  _memset(unaff_ESI,0,0x5c38);
  unaff_ESI[1] = unaff_ESI[1] | 2;
  DAT_004b4530 = unaff_ESI;
  return;
}


