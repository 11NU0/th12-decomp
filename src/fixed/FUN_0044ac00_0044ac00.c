/* float10 __stdcall FUN_0044ac00(void) @ 0044ac00  158 bytes */
#include "th12.h"

float10 __stdcall FUN_0044ac00(void)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float *unaff_ESI;
  float10 fVar5;
  
  iVar1 = *(int *)((int)DAT_004b4534 + 0x38);
  if (iVar1 != 0) {
    for (piVar2 = *(int **)((int)DAT_004b43dc + 0x68); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if (*(int *)(*piVar2 + 0x27b4) == iVar1) {
        fVar3 = *(float *)(*(int *)((int)DAT_004b4534 + 0x34) + 0x1074) - *unaff_ESI;
        fVar4 = *(float *)(*(int *)((int)DAT_004b4534 + 0x34) + 0x1078) - unaff_ESI[1];
        if ((NANP(fVar4) != (fVar4 == 0.0)) && (NANP(fVar3) != (fVar3 == 0.0))) {
          return (float10)1.5707964;
        }
        fVar5 = (( float10 (__fastcall *)())FUN_004937aa)(iVar1);
        return (float10)(float)fVar5;
      }
    }
  }
  return (float10)0;
}


