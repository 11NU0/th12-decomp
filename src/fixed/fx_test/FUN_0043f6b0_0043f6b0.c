/* void * __stdcall FUN_0043f6b0(void) @ 0043f6b0  106 bytes */

#include "th12.h"

void * __stdcall FUN_0043f6b0(void)

{
  void *pvVar1;
  uintptr_t uVar2;
  
  pvVar1 = operator_new(0x5c38);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_0043f250();
  }
  DAT_004cf468 = 0;
  FUN_00464c40();
  *(undefined **)((int)pvVar1 + 0x5c34) = &LAB_0043f320;
  *(undefined4 *)((int)pvVar1 + 0x5c2c) = 1;
  *(undefined4 *)((int)pvVar1 + 0x5c28) = 0;
  uVar2 = __beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_0043f320,pvVar1,0,
                          (uint *)((int)pvVar1 + 0x5c24));
  *(uintptr_t *)((int)pvVar1 + 0x5c20) = uVar2;
  return pvVar1;
}


