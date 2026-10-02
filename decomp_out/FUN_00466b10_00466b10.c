/* undefined4 __stdcall FUN_00466b10(void) @ 00466b10  164 bytes */
#include "th12.h"

undefined4 FUN_00466b10(void)

{
  HANDLE hFile;
  int unaff_EBX;
  int unaff_ESI;
  LPCSTR unaff_EDI;
  
  if (unaff_EDI == (LPCSTR)0x0) {
    return 0x80070057;
  }
  FUN_00466e90();
  hFile = CreateFileA(unaff_EDI,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0);
  *(HANDLE *)(unaff_ESI + 0x8c) = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    return 0x80004005;
  }
  *(int *)(unaff_ESI + 0x90) = unaff_EBX;
  *(LPCSTR *)(unaff_ESI + 0x94) = unaff_EDI;
  if (*(int *)(unaff_ESI + 0x7c) == 0) {
    if (hFile != (HANDLE)0x0) {
      SetFilePointer(hFile,*(int *)(unaff_EBX + 0x10) + DAT_004d4760,(PLONG)0x0,0);
      *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(*(int *)(unaff_ESI + 0x90) + 0x1c);
    }
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x84) = *(undefined4 *)(unaff_ESI + 0x80);
    if (0 < *(int *)(unaff_EBX + 0x1c)) {
      *(int *)(unaff_ESI + 0x88) = *(int *)(unaff_EBX + 0x1c);
      *(undefined4 *)(unaff_ESI + 0x2c) = *(undefined4 *)(unaff_ESI + 8);
      return 0;
    }
  }
  *(undefined4 *)(unaff_ESI + 0x2c) = *(undefined4 *)(unaff_ESI + 8);
  return 0;
}


