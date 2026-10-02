/* float10 __fastcall FUN_0044ab60(undefined4 param_1, int param_2) @ 0044ab60  155 bytes */

#include "th12.h"

float10 __fastcall FUN_0044ab60(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float *unaff_ESI;
  float10 fVar5;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(DAT_004b43dc + 0x68); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if (*(int *)(*piVar2 + 0x27b4) == iVar1) {
        fVar3 = *unaff_ESI - *(float *)(*(int *)(param_2 + 0x34) + 0x1074);
        fVar4 = unaff_ESI[1] - *(float *)(*(int *)(param_2 + 0x34) + 0x1078);
        if ((NAN(fVar4) != (fVar4 == 0.0)) && (NAN(fVar3) != (fVar3 == 0.0))) {
          return (float10)1.5707964;
        }
        fVar5 = (float10)FUN_004937aa(iVar1);
        return (float10)(float)fVar5;
      }
    }
  }
  return (float10)0;
}


