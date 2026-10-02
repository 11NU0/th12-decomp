/* void * __stdcall FUN_00464190(void) @ 00464190  69 bytes */
#include "th12.h"

void * FUN_00464190(void)

{
  HANDLE hFile;
  void *lpBuffer;
  size_t unaff_EDI;
  DWORD local_4;
  
  hFile = DAT_004ae590;
  if (DAT_004ae590 == (HANDLE)0xffffffff) {
    return (void *)0x0;
  }
  lpBuffer = _malloc(unaff_EDI);
  if (lpBuffer == (void *)0x0) {
    CloseHandle(hFile);
    return (void *)0x0;
  }
  ReadFile(hFile,lpBuffer,unaff_EDI,&local_4,(LPOVERLAPPED)0x0);
  return lpBuffer;
}


