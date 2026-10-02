/* undefined __fastcall FUN_00464780(undefined4 param_1, undefined param_2, undefined4 param_3) @ 00464780  86 bytes */

#include "th12.h"

void __fastcall FUN_00464780(undefined4 param_1,undefined param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  float *unaff_ESI;
  float *unaff_EDI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_004938c0(param_1);
  fVar2 = (float10)FUN_004939f0(extraout_ECX);
  *unaff_EDI = (float)fVar2 * *unaff_ESI - (float)fVar1 * unaff_ESI[1];
  unaff_EDI[1] = (float)fVar2 * unaff_ESI[1] + *unaff_ESI * (float)fVar1;
  return;
}


