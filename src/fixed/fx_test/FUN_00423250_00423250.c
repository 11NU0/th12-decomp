/* undefined __stdcall FUN_00423250(void) @ 00423250  137 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00423250(void)

{
  undefined4 *unaff_ESI;
  
  _memset(unaff_ESI,0,0x3c);
  unaff_ESI[0xe] = unaff_ESI[0xe] | 0x100;
  *(undefined2 *)((int)unaff_ESI + 0x16) = 600;
  *(undefined *)((int)unaff_ESI + 0x1a) = 0;
  *(undefined *)((int)unaff_ESI + 0x1d) = 0;
  *(undefined *)((int)unaff_ESI + 0x1e) = 0;
  *unaff_ESI = 0x120001;
  *(undefined2 *)(unaff_ESI + 6) = 600;
  *(undefined *)((int)unaff_ESI + 0x1b) = 1;
  *(undefined *)(unaff_ESI + 7) = 1;
  unaff_ESI[1] = _DAT_004d49ec;
  unaff_ESI[2] = _DAT_004d49f0;
  unaff_ESI[3] = DAT_004d49f4;
  unaff_ESI[4] = DAT_004d49f8;
  *(undefined2 *)(unaff_ESI + 5) = DAT_004d49fc;
  *(undefined *)((int)unaff_ESI + 0x1f) = 2;
  *(undefined *)((int)unaff_ESI + 0x23) = 2;
  *(undefined *)((int)unaff_ESI + 0x22) = 0;
  *(undefined *)(unaff_ESI + 8) = 100;
  *(undefined *)((int)unaff_ESI + 0x21) = 0x50;
  unaff_ESI[10] = 0x80000000;
  unaff_ESI[0xb] = 0x80000000;
  return;
}


