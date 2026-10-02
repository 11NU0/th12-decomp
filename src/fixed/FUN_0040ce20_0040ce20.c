/* undefined4 __fastcall FUN_0040ce20(undefined4 param_1, int param_2, float param_3, int param_4, int param_5) @ 0040ce20  310 bytes */
#include "th12.h"

undefined4 __fastcall
FUN_0040ce20(undefined4 param_1,int param_2,float param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  float *unaff_EBX;
  int iVar5;
  int iVar6;
  
  iVar6 = in_EAX + 100;
  if ((((*(byte *)((int)DAT_004b43cc + 0x7c) & 1) != 0) && (0x5f < *(int *)((int)DAT_004b43cc + 0x78))) &&
     (*(int *)((int)DAT_004b43cc + 0x78) < 100)) {
    param_3 = param_3 / 3.0;
  }
  iVar5 = 2000;
  do {
    if (((*(short *)((int)iVar6 + 0x532) != 0) && (*(short *)((int)iVar6 + 0x532) != 3)) &&
       ((param_5 == 0 || (*(int *)((int)iVar6 + 4) == 0)))) {
      fVar1 = *(float *)((int)iVar6 + 0x4bc) - *unaff_EBX;
      fVar2 = *(float *)((int)iVar6 + 0x4c0) - unaff_EBX[1];
      fVar3 = *(float *)((int)iVar6 + 0x4dc) * 0.5 + param_3;
      if (fVar1 * fVar1 + fVar2 * fVar2 <= fVar3 * fVar3) {
        FUN_0040c8b0();
        iVar4 = FUN_0040d560((float *)((int)iVar6 + 0x4bc),2.0,2.0);
        param_1 = extraout_ECX;
        param_2 = extraout_EDX;
        if ((iVar4 == 0) && (param_4 != 0)) {
          FUN_004273f0(extraout_ECX,extraout_EDX,9,(float *)((int)iVar6 + 0x4bc),-1.5707964,0.6);
          param_1 = extraout_ECX_00;
          param_2 = extraout_EDX_00;
        }
      }
    }
    iVar6 = iVar6 + 0x9f8;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00415340(param_1,param_2,unaff_EBX,param_3,param_4);
  return 0;
}


