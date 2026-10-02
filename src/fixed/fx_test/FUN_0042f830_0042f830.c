/* undefined __fastcall FUN_0042f830(undefined4 param_1) @ 0042f830  141 bytes */

#include "th12.h"

void __fastcall FUN_0042f830(undefined4 param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  
  pvVar1 = DAT_004b44e8;
  DAT_004cf468 = 0;
  if (DAT_004b44e8 != (void *)0x0) {
    FUN_00422290((int)DAT_004b44e8);
    FUN_0046ca4f(pvVar1);
    param_1 = extraout_ECX;
  }
  puVar2 = DAT_004b4530;
  if (DAT_004b4530 != (undefined4 *)0x0) {
    FUN_0043f4f0(DAT_004b4530);
    FUN_0046ca4f(puVar2);
    param_1 = extraout_ECX_00;
  }
  pvVar1 = DAT_004b44f8;
  if (DAT_004b44f8 != (void *)0x0) {
    FUN_0042ec00((int)DAT_004b44f8);
    FUN_0046ca4f(pvVar1);
    param_1 = extraout_ECX_01;
  }
  pvVar1 = DAT_004b43d8;
  if (DAT_004b43d8 != (void *)0x0) {
    FUN_00410ea0(param_1);
    FUN_0046ca4f(pvVar1);
  }
  pvVar1 = DAT_004b4518;
  if (DAT_004b4518 != (void *)0x0) {
    FUN_0043b450((int)DAT_004b4518);
    FUN_0046ca4f(pvVar1);
  }
  return;
}


