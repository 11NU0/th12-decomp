/* int __stdcall FUN_00466220(void) @ 00466220  93 bytes */
#include "th12.h"

int __stdcall FUN_00466220(void)

{
  int iVar1;
  undefined4 *unaff_EBX;
  int *unaff_ESI;
  
  if (unaff_EBX != (undefined4 *)0x0) {
    *unaff_EBX = 0;
  }
  iVar1 = (**(code **)(*unaff_ESI + 0x24))();
  if (-1 < iVar1) {
    if (((uint)unaff_ESI & 2) != 0) {
      do {
        iVar1 = (**(code **)(*unaff_ESI + 0x50))();
        if (iVar1 == -0x7787ff6a) {
          Sleep(10);
        }
        iVar1 = (**(code **)(*unaff_ESI + 0x50))();
      } while (iVar1 != 0);
      if (unaff_EBX != (undefined4 *)0x0) {
        *unaff_EBX = 1;
      }
      return 0;
    }
    iVar1 = 1;
  }
  return iVar1;
}


