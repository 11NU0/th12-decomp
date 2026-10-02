/* undefined __stdcall FUN_004151f0(float * param_1, int param_2) @ 004151f0  331 bytes */
#include "th12.h"

void FUN_004151f0(float *param_1,int param_2)

{
  float *this;
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float *unaff_EBX;
  
  piVar1 = *(int **)(DAT_004b43dc + 0x68);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[1];
    if ((*(uint *)(iVar2 + 0x26f8) & 0x800) != 0) {
      this = (float *)(iVar2 + 0x1074);
      if ((((*this < *unaff_EBX - *param_1 * 0.5) && (*unaff_EBX + *param_1 * 0.5 < *this)) &&
          (*(float *)(iVar2 + 0x1078) < unaff_EBX[1] - param_1[1] * 0.5)) &&
         (unaff_EBX[1] + param_1[1] * 0.5 < *(float *)(iVar2 + 0x1078))) {
        if ((*(byte *)(iVar2 + 0x265c) & 1) == 0) {
          *(int *)(iVar2 + 0x2648) = *(int *)(iVar2 + 0x2648) + -99999;
        }
        else {
          *(int *)(iVar2 + 0x2654) = *(int *)(iVar2 + 0x2654) + -99999;
          *(int *)(iVar2 + 0x2648) =
               (*(int *)(iVar2 + 0x2654) + *(int *)(iVar2 + 0x2658) * -7) / 7 +
               *(int *)(iVar2 + 0x2658);
        }
        iVar2 = FUN_0041c780(this,2.0,2.0);
        if ((iVar2 == 0) && (param_2 != 0)) {
          FUN_004273f0(extraout_ECX,extraout_EDX,9,(float *)extraout_ECX,-1.5707964,0.6);
        }
      }
    }
  }
  return;
}


