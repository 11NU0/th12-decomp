/* undefined __stdcall FUN_0043ceb0(void) @ 0043ceb0  215 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_0043ceb0(void)

{
  short sVar1;
  undefined2 *in_EAX;
  uint uVar2;
  short *psVar3;
  int iVar4;
  
  _memset(in_EAX,0,0x448);
  *in_EAX = 0x5453;
  in_EAX[1] = 2;
  *(undefined4 *)(in_EAX + 4) = 0x448;
  *(undefined4 *)(in_EAX + 6) = 0x20202020;
  *(undefined4 *)(in_EAX + 8) = 0x20202020;
  *(undefined *)(in_EAX + 10) = 0;
  psVar3 = in_EAX + 0x23;
  iVar4 = 0x200;
  do {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1e8);
      DAT_004cf222 = DAT_004cf222 + '\x01';
    }
    _DAT_004ce56c = _DAT_004ce56c + 1;
    uVar2 = (DAT_004ce568 ^ 0x9630) - 0x6553;
    sVar1 = ((ushort)(uVar2 >> 0xe) & 3) + (short)uVar2 * 4;
    DAT_004ce568 = CONCAT22(DAT_004ce568._2_2_,sVar1);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1e8);
      DAT_004cf222 = DAT_004cf222 + -1;
      sVar1 = (short)DAT_004ce568;
    }
    *psVar3 = sVar1;
    psVar3 = psVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


