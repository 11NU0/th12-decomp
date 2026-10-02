/* undefined4 __stdcall FUN_00430500(void) @ 00430500  134 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_00430500(void)

{
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf188);
    DAT_004cf21e = DAT_004cf21e + '\x01';
  }
  FUN_00464c40();
  _DAT_004cf0f0 = ((void *)0x00422280);
  _DAT_004cf0e8 = 1;
  _DAT_004cf0e4 = 0;
  _DAT_004cf0dc =
       __beginthreadex((void *)0x0,0,(_StartAddress *)((void *)0x00422280),(void *)0x0,0,
                       (uint *)&DAT_004cf0e0);
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf188);
    DAT_004cf21e = DAT_004cf21e + -1;
  }
  return 0;
}


