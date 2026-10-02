/* undefined __thiscall FUN_00435900(void * this, int param_1) @ 00435900  78 bytes */

#include "th12.h"

void __thiscall FUN_00435900(void *this,int param_1)

{
  void *extraout_ECX;
  undefined4 *puVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0xc414) = *(uint *)(param_1 + 0xc414) & 0xfffffff7;
  puVar1 = (undefined4 *)(param_1 + 0x8314);
  iVar2 = 8;
  do {
    FUN_00461970(this,puVar1[-1]);
    FUN_00461970((void *)*puVar1,(int)*puVar1);
    puVar1 = puVar1 + 0x39;
    iVar2 = iVar2 + -1;
    this = extraout_ECX;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0xc418) = 0;
  return;
}


