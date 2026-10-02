/* undefined __stdcall FUN_004314d0(void) @ 004314d0  171 bytes */
#include "th12.h"

void FUN_004314d0(void)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *unaff_EBX;
  int unaff_EDI;
  
  FUN_004615a0((void *)0x0,DAT_004cee70,unaff_EBX,0x51,0);
  piVar1 = FUN_00461920(*unaff_EBX,DAT_004ce8cc,*unaff_EBX);
  if (piVar1 == (int *)0x0) {
    *unaff_EBX = 0;
  }
  pvVar2 = _malloc(unaff_EDI * 0x38);
  piVar1[0x11e] = (int)pvVar2;
  if (unaff_EDI < 3) {
    piVar1[0x11f] = piVar1[0x11f] & 0xf07fffff;
  }
  else {
    piVar1[0x11f] = piVar1[0x11f] & 0xf67fffffU | 0x6000000;
    iVar4 = unaff_EDI * 2;
    piVar1[0xff] = unaff_EDI;
    if (0 < iVar4) {
      puVar3 = (undefined4 *)((int)pvVar2 + 0xc);
      do {
        puVar3[1] = 0xffffffff;
        puVar3[-1] = 0;
        iVar4 = iVar4 + -1;
        *puVar3 = 0x3f800000;
        puVar3 = puVar3 + 7;
      } while (iVar4 != 0);
      return;
    }
  }
  return;
}


