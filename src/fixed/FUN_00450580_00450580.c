/* undefined __stdcall FUN_00450580(void) @ 00450580  119 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00450580(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  FUN_00450810();
  iVar1 = (**(code **)(*DAT_004ce8f0 + 0x44))(DAT_004ce8f0,0,0,0,0);
  if (iVar1 < 0) {
    FUN_00431700();
    FUN_0044f370();
    (**(code **)(*DAT_004ce8f0 + 0x40))(DAT_004ce8f0,&DAT_004ce9dc);
    FUN_0044f400();
    FUN_00431630();
    FUN_00451200(extraout_ECX);
    _DAT_004cee5c = 2;
  }
  if (DAT_004b43e0 != 0) {
    FUN_0041cb70();
  }
  if (DAT_004b43cc != 0) {
    FUN_0040dd50();
  }
  return;
}


