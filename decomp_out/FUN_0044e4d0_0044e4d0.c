/* undefined __stdcall FUN_0044e4d0(void) @ 0044e4d0  346 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e4d0(void)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_0044d640((void *)0x1a);
  if ((char)uVar2 == '\0') {
    FUN_0044d640((void *)0x15);
  }
  uVar4 = 0;
  do {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1e8);
      DAT_004cf222 = DAT_004cf222 + '\x01';
    }
    _DAT_004ce56c = _DAT_004ce56c + 1;
    uVar3 = (DAT_004ce568 ^ 0x9630) - 0x6553;
    sVar1 = ((ushort)(uVar3 >> 0xe) & 3) + (short)uVar3 * 4;
    DAT_004ce568 = CONCAT22(DAT_004ce568._2_2_,sVar1);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1e8);
      DAT_004cf222 = DAT_004cf222 + -1;
      sVar1 = (short)DAT_004ce568;
    }
    (&DAT_004b0d48)[uVar4] = (byte)((ushort)sVar1 >> 9);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x100);
  DAT_004ce554 = CreateFontA(0x20,0,0,0,400,0,0,0,0x80,0,0,4,0x11,&DAT_004a245c);
  DAT_004ce550 = CreateFontA(0x20,0,0,0,600,0,0,0,0x80,0,0,4,0x11,&DAT_004a246c);
  DAT_004cc54c = CreateFontA(0xf,0,0,0,700,0,0,0,0x80,0,0,4,0x11,&DAT_004a245c);
  DAT_004b453c = CreateFontA(0xf,0,0,0,700,0,0,0,0x80,0,0,4,0x11,&DAT_004a246c);
  return;
}


