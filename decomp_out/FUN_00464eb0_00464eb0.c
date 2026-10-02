/* undefined __stdcall FUN_00464eb0(void) @ 00464eb0  202 bytes */
#include "th12.h"

void FUN_00464eb0(void)

{
  undefined4 extraout_ECX;
  undefined extraout_DL;
  float *unaff_EBX;
  float10 fVar1;
  float fVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (((uint)unaff_EBX[0xc] & 1) != 0) {
    fVar2 = unaff_EBX[8];
    if (((uint)unaff_EBX[0xc] & 2) == 0) {
      FUN_00465390(&local_c,unaff_EBX[7],fVar2);
    }
    else {
      fVar1 = FUN_00465280(unaff_EBX[7],unaff_EBX[10]);
      fVar1 = FUN_004646e0((float)fVar1);
      fVar1 = FUN_004646e0((float)fVar1);
      FUN_00465390(&local_18,(float)fVar1,fVar2);
      local_18 = unaff_EBX[0xb] * local_18;
      FUN_00464780(extraout_ECX,extraout_DL,unaff_EBX[10]);
    }
    local_18 = unaff_EBX[3] + local_c;
    local_14 = unaff_EBX[4] + local_8;
    *unaff_EBX = local_18;
    local_10 = unaff_EBX[5] + 0.0;
    unaff_EBX[1] = local_14;
    unaff_EBX[2] = local_10;
  }
  FUN_00465320();
  return;
}


