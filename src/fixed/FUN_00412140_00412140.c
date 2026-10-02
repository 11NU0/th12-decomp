/* undefined __stdcall FUN_00412140(int * param_1) @ 00412140  451 bytes */
#include "th12.h"

void __stdcall FUN_00412140(int *param_1)

{
  int *_Dst;
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_EDX;
  float *unaff_EDI;
  float10 fVar5;
  float local_1c;
  int local_18;
  float local_c;
  float local_8;
  float local_4;
  
  piVar2 = param_1;
  iVar3 = FUN_00464440();
  fVar1 = (float)iVar3;
  if (iVar3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  _Dst = param_1 + 1;
  local_18 = 0;
  local_1c = (fVar1 * 4.656613e-10 - 1.0) * 3.1415927;
  param_1 = _Dst;
  do {
    iVar3 = 0;
    if (0 < *param_1) {
      do {
        FUN_0041c9d0(&local_c,local_1c,(float)piVar2[0x14],(float)piVar2[0x15]);
        iVar4 = FUN_00464440();
        fVar1 = (float)iVar4;
        if (iVar4 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar1 = fVar1 * 2.3283064e-10 * 0.5 + 0.5;
        local_c = *unaff_EDI + fVar1 * local_c;
        local_8 = unaff_EDI[1] + fVar1 * local_8;
        local_4 = unaff_EDI[2] + 0.0;
        FUN_004273f0(&local_c,extraout_EDX,local_18 + 1,&local_c,-1.5707964,2.2);
        iVar4 = FUN_00464440();
        fVar1 = (float)iVar4;
        if (iVar4 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar5 = FUN_004646e0(local_1c + 1.5707964 + (fVar1 * 4.656613e-10 - 1.0) * 3.1415927 * 0.25)
        ;
        local_1c = (float)fVar5;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *param_1);
    }
    param_1 = param_1 + 1;
    local_18 = local_18 + 1;
  } while (local_18 < 0x12);
  _memset(_Dst,0,0x4c);
  return;
}


