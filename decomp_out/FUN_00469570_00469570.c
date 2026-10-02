/* undefined4 * __stdcall FUN_00469570(byte * param_1) @ 00469570  77 bytes */
#include "th12.h"

undefined4 * FUN_00469570(byte *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_EDI;
  
  puVar1 = (undefined4 *)operator_new(0x103c);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_LAB_0049fc34;
    puVar1[0x404] = 0;
    puVar1[0x405] = 0;
    puVar3 = puVar1;
  }
  puVar3[0x40b] = unaff_EDI;
  iVar2 = FUN_004694f0(param_1);
  *(int *)(puVar3[1] + 4) = iVar2;
  *(undefined4 *)puVar3[1] = 0;
  return puVar3;
}


