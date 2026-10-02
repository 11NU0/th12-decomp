/* undefined __stdcall FUN_00464cb0(void * param_1) @ 00464cb0  56 bytes */

#include "th12.h"

void __stdcall FUN_00464cb0(void *param_1)

{
  int in_EAX;
  uintptr_t uVar1;
  _StartAddress *unaff_EDI;
  
  FUN_00464c40();
  *(_StartAddress **)(in_EAX + 0x18) = unaff_EDI;
  *(undefined4 *)(in_EAX + 0x10) = 1;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  uVar1 = __beginthreadex((void *)0x0,0,unaff_EDI,param_1,0,(uint *)(in_EAX + 8));
  *(uintptr_t *)(in_EAX + 4) = uVar1;
  return;
}


