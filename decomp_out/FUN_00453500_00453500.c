/* undefined4 __stdcall FUN_00453500(void) @ 00453500  275 bytes */
#include "th12.h"

undefined4 FUN_00453500(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (DAT_004d0e6c != (void *)0x0) {
    _free(DAT_004d0e6c);
    DAT_004d0e6c = (void *)0x0;
  }
  piVar2 = &DAT_004d0e70;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 6;
  } while ((int)piVar2 < 0x4d1410);
  puVar3 = &DAT_004d1410;
  do {
    if ((void *)*puVar3 != (void *)0x0) {
      _free((void *)*puVar3);
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  } while ((int)puVar3 < 0x4d14d4);
  if (DAT_004cf4f8 != (int *)0x0) {
    KillTimer(DAT_004cf4f4,1);
    FUN_00453c30();
    DAT_004cf4e8 = 0;
    (**(code **)(*DAT_004cf4f0 + 0x48))(DAT_004cf4f0);
    if (DAT_004cf4f0 != (int *)0x0) {
      (**(code **)(*DAT_004cf4f0 + 8))(DAT_004cf4f0);
      DAT_004cf4f0 = (int *)0x0;
    }
    if (DAT_004d4754 != (undefined4 *)0x0) {
      (**(code **)*DAT_004d4754)(1);
      DAT_004d4754 = (undefined4 *)0x0;
    }
    piVar2 = DAT_004cf4f8;
    if (DAT_004cf4f8 != (int *)0x0) {
      piVar1 = (int *)*DAT_004cf4f8;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar2 = 0;
      }
      FUN_0046ca4f(piVar2);
      DAT_004cf4f8 = (int *)0x0;
    }
    puVar3 = &DAT_004d0da8;
    do {
      if ((void *)*puVar3 != (void *)0x0) {
        _free((void *)*puVar3);
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
    } while ((int)puVar3 < 0x4d0de8);
  }
  return 0;
}


