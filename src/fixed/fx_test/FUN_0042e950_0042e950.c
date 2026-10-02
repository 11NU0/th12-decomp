/* undefined4 __fastcall FUN_0042e950(undefined4 param_1) @ 0042e950  91 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0042e950(undefined4 param_1)

{
  undefined4 extraout_ECX;
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)(&DAT_004b50d4 + DAT_004ce8cc);
  if (*piVar1 != 0) {
    FUN_004604e0(param_1);
    FUN_0046ca4f((void *)*piVar1);
    *piVar1 = 0;
    param_1 = extraout_ECX;
  }
  puVar2 = (undefined4 *)(&DAT_004b50d8 + DAT_004ce8cc);
  if (*(int *)(&DAT_004b50d8 + DAT_004ce8cc) != 0) {
    FUN_004604e0(param_1);
    FUN_0046ca4f((void *)*puVar2);
    *puVar2 = 0;
  }
  return 0;
}


