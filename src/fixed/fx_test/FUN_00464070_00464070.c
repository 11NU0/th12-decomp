/* undefined4 __stdcall FUN_00464070(void) @ 00464070  180 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00464070(void)

{
  DWORD dwMessageId;
  LPCSTR unaff_ESI;
  DWORD dwLanguageId;
  HLOCAL *lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  HLOCAL pvStack_4;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
    DAT_004cf21a = DAT_004cf21a + '\x01';
  }
  lpBuffer = &pvStack_4;
  DAT_004ae590 = CreateFileA(unaff_ESI,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,
                             (HANDLE)0x0);
  if (DAT_004ae590 == (HANDLE)0xffffffff) {
    Arguments = (va_list *)0x0;
    nSize = 0;
    dwLanguageId = 0x400;
    dwMessageId = GetLastError();
    FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,dwLanguageId,(LPSTR)lpBuffer,nSize,Arguments);
    FUN_004654b0();
    LocalFree(pvStack_4);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
      DAT_004cf21a = DAT_004cf21a + -1;
    }
    return 0xffffffff;
  }
  FUN_004654b0();
  return 0;
}


