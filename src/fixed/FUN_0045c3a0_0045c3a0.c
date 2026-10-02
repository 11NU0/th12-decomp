/* undefined4 __thiscall FUN_0045c3a0(void * this, undefined4 param_1, int param_2) @ 0045c3a0  294 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0045c3a0(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int in_EAX;
  
  if ((((*(uint *)((int)in_EAX + 0x47c) & 1) != 0) && ((*(uint *)((int)in_EAX + 0x47c) & 2) != 0)) &&
     (*(char *)((int)in_EAX + 0x3bf) != '\0')) {
    if (*(int *)((int)this + 0x4b56a0) != 0) {
      FUN_0045a3c0();
    }
    puVar1 = *(undefined4 **)(*(int *)((int)in_EAX + 0x3f4) + 8);
    if (*(undefined4 **)((int)this + 0x4b563c) != puVar1) {
      *(undefined4 **)((int)this + 0x4b563c) = puVar1;
      (**(code **)(*DAT_004ce8f0 + 0x104))(DAT_004ce8f0,0,*puVar1);
    }
    if (*(char *)((int)this + 0x4b5642) != '\x03') {
      (**(code **)(*DAT_004ce8f0 + 0x164))(DAT_004ce8f0,0x144);
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,6,0);
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,3,0);
      *(undefined *)((int)this + 0x4b5642) = 3;
    }
    FUN_00459cf0();
    if ((&DAT_004b5647)[DAT_004ce8cc] != '\x01') {
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,4,4);
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,1,4);
      (&DAT_004b5647)[DAT_004ce8cc] = 1;
    }
    (**(code **)(*DAT_004ce8f0 + 0x14c))(DAT_004ce8f0,5,param_2 + -2,param_1,0x1c);
    return 0;
  }
  return 0xffffffff;
}


