/* undefined __fastcall FUN_00464a20(undefined4 param_1, undefined4 param_2, float param_3) @ 00464a20  96 bytes */

#include "th12.h"

void __fastcall FUN_00464a20(undefined4 param_1,undefined4 param_2,float param_3)

{
  float *pfVar1;
  undefined4 *unaff_ESI;
  ulonglong uVar2;
  
  pfVar1 = (float *)unaff_ESI[3];
  *unaff_ESI = unaff_ESI[1];
  if ((0.99 < *pfVar1) && (*pfVar1 < 1.01)) {
    unaff_ESI[2] = (float)unaff_ESI[2] + param_3;
    uVar2 = FUN_004931e0(pfVar1,param_2);
    unaff_ESI[1] = (int)uVar2;
    return;
  }
  unaff_ESI[2] = *pfVar1 * param_3 + (float)unaff_ESI[2];
  uVar2 = FUN_004931e0(pfVar1,param_2);
  unaff_ESI[1] = (int)uVar2;
  return;
}


