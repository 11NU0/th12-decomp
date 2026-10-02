/* undefined4 __stdcall FUN_004641e0(void) @ 004641e0  49 bytes */
#include "th12.h"

undefined4 FUN_004641e0(void)

{
  if (DAT_004ae590 != (HANDLE)0xffffffff) {
    CloseHandle(DAT_004ae590);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
      DAT_004cf21a = DAT_004cf21a + -1;
    }
  }
  return 0;
}


