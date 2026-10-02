/* undefined __stdcall FUN_00453c30(void) @ 00453c30  154 bytes */
#include "th12.h"

void FUN_00453c30(void)

{
  DWORD DVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x526c) != 0) {
    FUN_00466460(1);
    if (*(int *)(unaff_ESI + 0x18) != 0) {
      PostThreadMessageA(*(DWORD *)(unaff_ESI + 0x14),0x12,0,0);
      DVar1 = WaitForSingleObject(*(HANDLE *)(unaff_ESI + 0x18),0x100);
      while (DVar1 != 0) {
        PostThreadMessageA(*(DWORD *)(unaff_ESI + 0x14),0x12,0,0);
        DVar1 = WaitForSingleObject(*(HANDLE *)(unaff_ESI + 0x18),0x100);
      }
      CloseHandle(*(HANDLE *)(unaff_ESI + 0x18));
      CloseHandle(*(HANDLE *)(unaff_ESI + 0x5270));
      *(undefined4 *)(unaff_ESI + 0x18) = 0;
    }
    if (*(undefined4 **)(unaff_ESI + 0x526c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(unaff_ESI + 0x526c))(1);
      *(undefined4 *)(unaff_ESI + 0x526c) = 0;
    }
  }
  return;
}


