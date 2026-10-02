/* undefined4 __stdcall FUN_00453030(void) @ 00453030  173 bytes */
#include "th12.h"

undefined4 FUN_00453030(void)

{
  DWORD DVar1;
  
  if (DAT_004d4764 != (HANDLE)0x0) {
    if (DAT_004d4770 == 0) {
      DAT_004d4770 = 1;
    }
    DVar1 = WaitForSingleObject(DAT_004d4764,100);
    while (DVar1 == 0x102) {
      Sleep(1);
      DVar1 = WaitForSingleObject(DAT_004d4764,100);
    }
    DVar1 = WaitForSingleObject(DAT_004d4768,100);
    while (DVar1 == 0x102) {
      Sleep(1);
      DVar1 = WaitForSingleObject(DAT_004d4768,100);
    }
    CloseHandle(DAT_004d4764);
    CloseHandle(DAT_004d4768);
    DAT_004d4764 = (HANDLE)0x0;
    DAT_004d4768 = (HANDLE)0x0;
  }
  return 0;
}


