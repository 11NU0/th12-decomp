/* undefined4 __stdcall FUN_00463df0(LPCSTR param_1) @ 00463df0  141 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00463df0(LPCSTR param_1)

{
  HANDLE hObject;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
    DAT_004cf21a = DAT_004cf21a + '\x01';
  }
  hObject = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    CloseHandle(hObject);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
      DAT_004cf21a = DAT_004cf21a + -1;
    }
    return 1;
  }
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
    DAT_004cf21a = DAT_004cf21a + -1;
  }
  return 0;
}


