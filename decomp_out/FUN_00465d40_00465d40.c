/* undefined __stdcall FUN_00465d40(undefined4 * param_1, undefined4 param_2, undefined4 param_3) @ 00465d40  119 bytes */
#include "th12.h"

void FUN_00465d40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_004a3b1c;
  puVar1 = (undefined4 *)operator_new(4);
  unaff_ESI[1] = puVar1;
  *puVar1 = *param_1;
  unaff_ESI[2] = param_2;
  unaff_ESI[4] = 1;
  unaff_ESI[3] = param_3;
  FUN_00465fe0(*(int **)unaff_ESI[1]);
  (**(code **)(**(int **)unaff_ESI[1] + 0x34))(*(int **)unaff_ESI[1],0);
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  return;
}


