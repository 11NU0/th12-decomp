/* ushort __stdcall FUN_004643d0(void) @ 004643d0  105 bytes */
#include "th12.h"

ushort FUN_004643d0(void)

{
  ushort uVar1;
  ushort *unaff_ESI;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1e8);
    DAT_004cf222 = DAT_004cf222 + '\x01';
  }
  *(int *)(unaff_ESI + 2) = *(int *)(unaff_ESI + 2) + 1;
  uVar1 = (*unaff_ESI ^ 0x9630) + 0x9aad;
  uVar1 = (uVar1 >> 0xe) + uVar1 * 4;
  *unaff_ESI = uVar1;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1e8);
    DAT_004cf222 = DAT_004cf222 + -1;
    return *unaff_ESI;
  }
  return uVar1;
}


