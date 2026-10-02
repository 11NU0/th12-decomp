/* undefined __thiscall FUN_00461a70(void * this, int param_1) @ 00461a70  66 bytes */
#include "th12.h"

void __thiscall FUN_00461a70(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00461920(this,DAT_004ce8cc,param_1);
  if ((piVar1 != (int *)0x0) && (piVar1[0x11f] = piVar1[0x11f] | 0x10000000, piVar1[6] == 0)) {
    for (piVar1 = (int *)piVar1[5]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      *(uint *)(*piVar1 + 0x47c) = *(uint *)(*piVar1 + 0x47c) | 0x10000000;
    }
  }
  return;
}


