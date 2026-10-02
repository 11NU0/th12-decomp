/* undefined __stdcall FUN_00464c40(void) @ 00464c40  101 bytes */
#include "th12.h"

void __stdcall FUN_00464c40(void)

{
  DWORD DVar1;
  int unaff_ESI;
  
  if (*(HANDLE *)((int)unaff_ESI + 4) != (HANDLE)0x0) {
    *(undefined4 *)((int)unaff_ESI + 0xc) = 1;
    *(undefined4 *)((int)unaff_ESI + 0x10) = 0;
    DVar1 = WaitForSingleObject(*(HANDLE *)((int)unaff_ESI + 4),200);
    while (DVar1 == 0x102) {
      *(undefined4 *)((int)unaff_ESI + 0xc) = 1;
      *(undefined4 *)((int)unaff_ESI + 0x10) = 0;
      Sleep(1);
      DVar1 = WaitForSingleObject(*(HANDLE *)((int)unaff_ESI + 4),200);
    }
    CloseHandle(*(HANDLE *)((int)unaff_ESI + 4));
    *(undefined4 *)((int)unaff_ESI + 4) = 0;
    *(undefined4 *)((int)unaff_ESI + 0x18) = 0;
  }
  return;
}


