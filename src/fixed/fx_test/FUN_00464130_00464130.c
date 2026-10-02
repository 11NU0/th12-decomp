/* undefined4 __fastcall FUN_00464130(undefined4 param_1, LPCVOID param_2) @ 00464130  88 bytes */

#include "th12.h"

undefined4 __fastcall FUN_00464130(DWORD param_1,LPCVOID param_2)

{
  DWORD unaff_ESI;
  DWORD local_4;
  
  if (DAT_004ae590 == (HANDLE)0xffffffff) {
    return 0xffffffff;
  }
  local_4 = param_1;
  WriteFile(DAT_004ae590,param_2,unaff_ESI,&local_4,(LPOVERLAPPED)0x0);
  if (unaff_ESI != local_4) {
    CloseHandle(DAT_004ae590);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
      DAT_004cf21a = DAT_004cf21a + -1;
    }
    return 0xfffffffe;
  }
  return 0;
}


