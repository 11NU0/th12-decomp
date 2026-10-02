/* undefined __stdcall FUN_00451dc0(void) @ 00451dc0  157 bytes */
#include "th12.h"

void __stdcall FUN_00451dc0(void)

{
  int iVar1;
  
  (**(code **)(*DAT_004ce8f0 + 0xac))(DAT_004ce8f0,0,0,3,0xff000000,0x3f800000,0);
  iVar1 = (**(code **)(*DAT_004ce8f0 + 0x44))(DAT_004ce8f0,0,0,0,0);
  if (iVar1 < 0) {
    (**(code **)(*DAT_004ce8f0 + 0x40))(DAT_004ce8f0,&DAT_004ce9dc);
  }
  (**(code **)(*DAT_004ce8f0 + 0xac))(DAT_004ce8f0,0,0,3,0xff000000,0x3f800000,0);
  iVar1 = (**(code **)(*DAT_004ce8f0 + 0x44))(DAT_004ce8f0,0,0,0,0);
  if (iVar1 < 0) {
    (**(code **)(*DAT_004ce8f0 + 0x40))(DAT_004ce8f0,&DAT_004ce9dc);
  }
  return;
}


