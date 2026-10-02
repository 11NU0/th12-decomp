/* int __stdcall FUN_0041a9f0(float param_1) @ 0041a9f0  123 bytes */
#include "th12.h"

int __stdcall FUN_0041a9f0(float param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float *unaff_EDI;
  
  piVar1 = *(int **)((int)DAT_004b43dc + 0x68);
  iVar5 = 0;
  fVar6 = param_1 * param_1;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[1];
    if ((((*(uint *)((int)iVar2 + 0x26f8) & 0x21) == 0) && ((*(uint *)((int)iVar2 + 0x26f8) & 0x6000000) == 0)
        ) && (fVar3 = unaff_EDI[1] - *(float *)((int)iVar2 + 0x1078),
             fVar4 = *unaff_EDI - *(float *)((int)iVar2 + 0x1074), fVar3 = fVar4 * fVar4 + fVar3 * fVar3,
             fVar3 < fVar6)) {
      iVar5 = iVar2;
      fVar6 = fVar3;
    }
  }
  return iVar5;
}


