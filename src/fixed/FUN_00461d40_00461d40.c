/* undefined __stdcall FUN_00461d40(void) @ 00461d40  64 bytes */
#include "th12.h"

void __stdcall FUN_00461d40(void)

{
  undefined4 *in_EAX;
  int *piVar1;
  
  piVar1 = FUN_00461920(*in_EAX,DAT_004ce8cc,*in_EAX);
  if ((piVar1 != (int *)0x0) && (piVar1[0x11f] = piVar1[0x11f] | 2, piVar1[6] == 0)) {
    for (piVar1 = (int *)piVar1[5]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      *(uint *)(*piVar1 + 0x47c) = *(uint *)(*piVar1 + 0x47c) | 2;
    }
  }
  return;
}


