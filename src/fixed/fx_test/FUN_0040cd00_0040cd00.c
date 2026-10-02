/* undefined4 __stdcall FUN_0040cd00(float * param_1, int param_2) @ 0040cd00  270 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0040cd00(float *param_1,int param_2)

{
  float *this;
  float *pfVar1;
  float *in_EAX;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int iVar3;
  
  pfVar1 = param_1;
  iVar3 = DAT_004b43c8 + 100;
  param_1 = (float *)0x7d0;
  do {
    if (((*(short *)(iVar3 + 0x532) != 0) && (*(short *)(iVar3 + 0x532) != 3)) &&
       (*(int *)(iVar3 + 4) == 0)) {
      this = (float *)(iVar3 + 0x4bc);
      if (((*in_EAX - *pfVar1 * 0.5 <= *this) && (*this <= *in_EAX + *pfVar1 * 0.5)) &&
         ((in_EAX[1] - pfVar1[1] * 0.5 <= *(float *)(iVar3 + 0x4c0) &&
          (*(float *)(iVar3 + 0x4c0) <= in_EAX[1] + pfVar1[1] * 0.5)))) {
        FUN_0040c8b0();
        iVar2 = FUN_0040d560(this,2.0,2.0);
        if ((iVar2 == 0) && (param_2 != 0)) {
          FUN_004273f0(extraout_ECX,extraout_EDX,9,this,-1.5707964,0.6);
        }
      }
    }
    iVar3 = iVar3 + 0x9f8;
    param_1 = (float *)((int)param_1 + -1);
  } while (param_1 != (float *)0x0);
  FUN_004151f0(pfVar1,param_2);
  return 0;
}


