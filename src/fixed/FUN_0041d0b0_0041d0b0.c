/* int __stdcall FUN_0041d0b0(int * param_1) @ 0041d0b0  158 bytes */
#include "th12.h"

int __stdcall FUN_0041d0b0(int *param_1)

{
  int iVar1;
  int *unaff_EBX;
  
  iVar1 = *(int *)((int)DAT_004b43cc + 0xa8);
  if (iVar1 / 100000 + -0x16 != ((iVar1 / 100) % 1000 + 0x3a6) % 1000 + (iVar1 % 100 + 0x43) % 100)
  {
    *param_1 = 999;
    *unaff_EBX = 99;
    return -(iVar1 >> 0x1f);
  }
  iVar1 = *(int *)((int)DAT_004b43cc + 0xa8);
  *param_1 = ((iVar1 / 100) % 1000 + 0x3a6) % 1000;
  iVar1 = iVar1 % 100 + 0x43;
  *unaff_EBX = iVar1 % 100;
  return iVar1 / 100;
}


