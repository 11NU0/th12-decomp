/* undefined __stdcall FUN_0040d230(void) @ 0040d230  96 bytes */
#include "th12.h"

void __stdcall FUN_0040d230(void)

{
  int unaff_EBX;
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_004b43c8 + 100;
  if ((((*(byte *)((int)DAT_004b43cc + 0x7c) & 1) == 0) || (*(int *)((int)DAT_004b43cc + 0x78) < 0x60)) ||
     (99 < *(int *)((int)DAT_004b43cc + 0x78))) {
    iVar2 = 2000;
    do {
      if (((*(short *)((int)iVar1 + 0x532) != 0) && (*(short *)((int)iVar1 + 0x532) != 3)) &&
         ((unaff_EBX == 0 || (*(int *)((int)iVar1 + 4) == 0)))) {
        FUN_0040c8b0();
      }
      iVar1 = iVar1 + 0x9f8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


