/* undefined4 __stdcall FUN_0045c800(int param_1) @ 0045c800  246 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0045c800(int param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 unaff_EBP;
  int unaff_retaddr;
  
  if (*(int *)(&DAT_004b56a0 + param_1) != 0) {
    FUN_0045a3c0();
  }
  if ((&DAT_004b5642)[param_1] != '\x03') {
    (**(code **)(*DAT_004ce8f0 + 0x164))(DAT_004ce8f0,0x144);
    (&DAT_004b5642)[param_1] = 3;
  }
  FUN_00459cf0();
  puVar1 = *(undefined4 **)(*(int *)((int)in_EAX + 0x3f4) + 8);
  if (*(undefined4 **)(&DAT_004b563c + param_1) != puVar1) {
    *(undefined4 **)(&DAT_004b563c + param_1) = puVar1;
    (**(code **)(*DAT_004ce8f0 + 0x104))(DAT_004ce8f0,0,*puVar1);
  }
  FUN_0045a3c0();
  (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0xe,0);
  if ((&DAT_004b5642)[param_1] != '\x01') {
    (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,6,0);
    (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,3,0);
    (&DAT_004b5642)[param_1] = 1;
  }
  (**(code **)(*DAT_004ce8f0 + 0x14c))(DAT_004ce8f0,6,unaff_retaddr + -2,unaff_EBP,0x1c);
  return 0;
}


