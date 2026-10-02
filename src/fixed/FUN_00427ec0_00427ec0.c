/* undefined __stdcall FUN_00427ec0(void) @ 00427ec0  123 bytes */
#include "th12.h"

void __stdcall FUN_00427ec0(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_LAB_004a05fc;
  unaff_ESI[9] = unaff_ESI[9] & 0xfffffffe;
  unaff_ESI[0xe] = unaff_ESI[0xe] & 0xfffffffe;
  unaff_ESI[0x13] = unaff_ESI[0x13] & 0xfffffffe;
  iVar2 = 0x11;
  puVar1 = unaff_ESI + 0x25;
  do {
    *puVar1 = *puVar1 & 0xfffffffe;
    puVar1 = puVar1 + 0xd;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  unaff_ESI[0x112] = unaff_ESI[0x112] & 0xfffffffe;
  _memset(unaff_ESI,0,0x454);
  if ((unaff_ESI[9] & 1) == 0) {
    unaff_ESI[7] = 0;
    unaff_ESI[6] = 0;
    unaff_ESI[5] = 0xfff0bdc1;
    unaff_ESI[8] = &DAT_004b2ed0;
    unaff_ESI[9] = unaff_ESI[9] | 1;
  }
  unaff_ESI[7] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[5] = 0xffffffff;
  return;
}


