/* undefined4 __stdcall FUN_0045b5e0(void * param_1) @ 0045b5e0  33 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0045b5e0(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0045b210();
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_00459e50(param_1,0);
  return uVar2;
}


