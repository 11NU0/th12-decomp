/* undefined4 __stdcall FUN_00466c90(void) @ 00466c90  223 bytes */
#include "th12.h"

undefined4 FUN_00466c90(void)

{
  int iVar1;
  HANDLE hFile;
  char unaff_BL;
  int unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_ESI + 0x7c) == 0) {
    hFile = *(HANDLE *)(unaff_ESI + 0x8c);
    if (hFile == (HANDLE)0x0) {
      return 0x800401f0;
    }
    if (unaff_BL != '\0') {
      iVar1 = *(int *)(*(int *)(unaff_ESI + 0x90) + 0x18);
      if (0 < iVar1) {
        SetFilePointer(hFile,*(int *)(*(int *)(unaff_ESI + 0x90) + 0x10) + iVar1 + DAT_004d4760,
                       (PLONG)0x0,0);
        *(int *)(unaff_ESI + 8) =
             *(int *)(*(int *)(unaff_ESI + 0x90) + 0x1c) -
             *(int *)(*(int *)(unaff_ESI + 0x90) + 0x18);
        return 0;
      }
    }
    if (unaff_EDI == 0) {
      SetFilePointer(hFile,*(int *)(*(int *)(unaff_ESI + 0x90) + 0x10) + DAT_004d4760,(PLONG)0x0,0);
      *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(*(int *)(unaff_ESI + 0x90) + 0x1c);
      return 0;
    }
    SetFilePointer(hFile,DAT_004d4760 + unaff_EDI,(PLONG)0x0,0);
    *(int *)(unaff_ESI + 8) =
         (*(int *)(*(int *)(unaff_ESI + 0x90) + 0x1c) + *(int *)(*(int *)(unaff_ESI + 0x90) + 0x10))
         - unaff_EDI;
  }
  else {
    *(int *)(unaff_ESI + 0x84) = *(int *)(unaff_ESI + 0x80);
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x90) + 0x1c);
    if (0 < iVar1) {
      *(int *)(unaff_ESI + 0x88) = iVar1;
    }
    if ((unaff_BL != '\0') && (iVar1 = *(int *)(*(int *)(unaff_ESI + 0x90) + 0x18), 0 < iVar1)) {
      *(int *)(unaff_ESI + 0x84) = iVar1 + *(int *)(unaff_ESI + 0x80);
      return 0;
    }
  }
  return 0;
}


