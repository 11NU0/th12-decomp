/* undefined __fastcall FUN_0041d020(void * param_1) @ 0041d020  73 bytes */
#include "th12.h"

void __fastcall FUN_0041d020(void *param_1)

{
  int iVar1;
  void *extraout_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = DAT_004b4514;
  iVar3 = 8;
  *(uint *)(DAT_004b4514 + 0xc414) = *(uint *)(DAT_004b4514 + 0xc414) | 8;
  puVar2 = (undefined4 *)(iVar1 + 0x8314);
  do {
    FUN_00461970(param_1,puVar2[-1]);
    FUN_00461970((void *)*puVar2,(int)*puVar2);
    puVar2 = puVar2 + 0x39;
    iVar3 = iVar3 + -1;
    param_1 = extraout_ECX;
  } while (iVar3 != 0);
  *(undefined4 *)(iVar1 + 0xc418) = 0;
  return;
}


