/* undefined __fastcall FUN_00415340(undefined4 param_1, int param_2, float * param_3, float param_4, int param_5) @ 00415340  369 bytes */

#include "th12.h"

void __fastcall
__fastcall FUN_00415340(undefined4 param_1,int param_2,float *param_3,float param_4,int param_5)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int extraout_EDX;
  
  piVar2 = *(int **)(DAT_004b43dc + 0x68);
  while (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    piVar2 = (int *)piVar2[1];
    if (((*(uint *)(iVar3 + 0x26f8) & 0x800) != 0) &&
       (fVar4 = *(float *)(iVar3 + 0x1074) - *param_3, pfVar1 = (float *)(iVar3 + 0x1074),
       fVar5 = *(float *)(iVar3 + 0x1078) - param_3[1], fVar4 = fVar4 * fVar4 + fVar5 * fVar5,
       fVar5 = (param_4 + 16.0) * (param_4 + 16.0), fVar4 < fVar5 != (fVar4 == fVar5))) {
      if ((*(byte *)(iVar3 + 0x265c) & 1) == 0) {
        *(int *)(iVar3 + 0x2648) = *(int *)(iVar3 + 0x2648) + -99999;
      }
      else {
        *(int *)(iVar3 + 0x2654) = *(int *)(iVar3 + 0x2654) + -99999;
        iVar7 = *(int *)(iVar3 + 0x2654) + *(int *)(iVar3 + 0x2658) * -7;
        iVar6 = iVar7 >> 0x1f;
        param_2 = iVar7 / 7 + iVar6;
        *(int *)(iVar3 + 0x2648) = (param_2 - iVar6) + *(int *)(iVar3 + 0x2658);
      }
      if ((((*pfVar1 + 2.0 < -192.0 == (*pfVar1 + 2.0 == -192.0)) && (*pfVar1 - 2.0 < 192.0)) &&
          (fVar4 = *(float *)(iVar3 + 0x1078) + 2.0, fVar4 < 0.0 == (fVar4 == 0.0))) &&
         ((*(float *)(iVar3 + 0x1078) - 2.0 < 448.0 && (param_5 != 0)))) {
        FUN_004273f0(iVar3,param_2,9,pfVar1,-1.5707964,0.6);
        param_2 = extraout_EDX;
      }
    }
  }
  return;
}


