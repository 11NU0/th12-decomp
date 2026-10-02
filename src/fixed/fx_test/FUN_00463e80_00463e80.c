/* undefined4 __stdcall FUN_00463e80(LPCVOID param_1) @ 00463e80  297 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00463e80(LPCVOID param_1)

{
  HANDLE hFile;
  DWORD dwMessageId;
  DWORD unaff_EBX;
  LPCSTR unaff_EDI;
  DWORD dwLanguageId;
  LPCVOID *lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  DWORD DStack_4;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
    DAT_004cf21a = DAT_004cf21a + '\x01';
  }
  hFile = CreateFileA(unaff_EDI,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  Arguments = (va_list *)0x0;
  if (hFile == (HANDLE)0xffffffff) {
    nSize = 0;
    lpBuffer = &param_1;
    dwLanguageId = 0x400;
    dwMessageId = GetLastError();
    FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,dwLanguageId,(LPSTR)lpBuffer,nSize,Arguments);
    FUN_004654b0();
    LocalFree(param_1);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
      DAT_004cf21a = DAT_004cf21a + -1;
    }
    return 0xffffffff;
  }
  WriteFile(hFile,param_1,unaff_EBX,&DStack_4,(LPOVERLAPPED)0x0);
  if (unaff_EBX != DStack_4) {
    CloseHandle(hFile);
    FUN_004654b0();
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
      DAT_004cf21a = DAT_004cf21a + -1;
    }
    return 0xfffffffe;
  }
  CloseHandle(hFile);
  FUN_004654b0();
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
    DAT_004cf21a = DAT_004cf21a + -1;
  }
  return 0;
}


