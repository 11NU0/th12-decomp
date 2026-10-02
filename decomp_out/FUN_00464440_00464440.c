/* undefined4 __stdcall FUN_00464440(void) @ 00464440  153 bytes */
#include "th12.h"

undefined4 FUN_00464440(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *unaff_ESI;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1e8);
    DAT_004cf222 = DAT_004cf222 + '\x01';
  }
  *(int *)(unaff_ESI + 2) = *(int *)(unaff_ESI + 2) + 2;
  uVar1 = (*unaff_ESI ^ 0x9630) + 0x9aad;
  uVar2 = ((uVar1 >> 0xe) + uVar1 * 4 ^ 0x9630) + 0x9aad;
  *unaff_ESI = (uVar2 >> 0xe) + uVar2 * 4;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1e8);
    DAT_004cf222 = DAT_004cf222 + -1;
  }
  return CONCAT22(uVar1,uVar2);
}


