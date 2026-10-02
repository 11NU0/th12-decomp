/* void * __stdcall FUN_00431fb0(void) @ 00431fb0  70 bytes */
#include "th12.h"

void * __stdcall FUN_00431fb0(void)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = operator_new(0x2e0);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (( void * (__stdcall *)())FUN_00431d00)();
  }
  iVar2 = FUN_00431d70();
  if (iVar2 != 0) {
    if (pvVar1 != (void *)0x0) {
      FUN_00431ed0();
      FUN_0046ca4f(pvVar1);
    }
    return (void *)0x0;
  }
  return pvVar1;
}


