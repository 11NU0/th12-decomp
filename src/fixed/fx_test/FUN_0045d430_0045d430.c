/* undefined4 __stdcall FUN_0045d430(float param_1, float param_2, float param_3, float param_4, int param_5, float param_6) @ 0045d430  413 bytes */

#include "th12.h"

undefined4
__stdcall FUN_0045d430(float param_1,float param_2,float param_3,float param_4,int param_5,float param_6)

{
  float *pfVar1;
  float in_EAX;
  int iVar2;
  float *this;
  int unaff_EDI;
  float10 fVar3;
  float local_4;
  
  local_4 = param_4;
  pfVar1 = *(float **)(unaff_EDI + 0x8856b0);
  *pfVar1 = param_1;
  pfVar1[4] = in_EAX;
  pfVar1[1] = param_2;
  iVar2 = param_5 + 1;
  pfVar1[2] = 0.0;
  pfVar1[3] = 1.0;
  if (0 < iVar2) {
    do {
      this = pfVar1 + 5;
      FUN_0045d890(this,local_4,param_3);
      pfVar1[9] = param_6;
      *this = *this + param_1;
      pfVar1[6] = param_2 + pfVar1[6];
      pfVar1[7] = 0.0;
      pfVar1[8] = 1.0;
      fVar3 = FUN_00464640(local_4,6.2831855 / (float)param_5);
      local_4 = (float)fVar3;
      iVar2 = iVar2 + -1;
      pfVar1 = this;
    } while (iVar2 != 0);
  }
  FUN_0045a3c0();
  (**(code **)(*DAT_004ce8f0 + 0xe4))(DAT_004ce8f0,0xe,0);
  if ((&DAT_004b5647)[DAT_004ce8cc] != '\0') {
    (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,4,3);
    (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,1,3);
    (&DAT_004b5647)[DAT_004ce8cc] = 0;
  }
  if ((&DAT_004b5642)[unaff_EDI] != '\x01') {
    (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,6,0);
    (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,3,0);
    (&DAT_004b5642)[unaff_EDI] = 1;
  }
  (**(code **)(*DAT_004ce8f0 + 0x164))(DAT_004ce8f0,0x44);
  (**(code **)(*DAT_004ce8f0 + 0x14c))
            (DAT_004ce8f0,6,param_5,*(undefined4 *)(unaff_EDI + 0x8856b0),0x14);
  *(int *)(unaff_EDI + 0xac) = *(int *)(unaff_EDI + 0xac) + 1;
  *(int *)(unaff_EDI + 0x8856b0) = *(int *)(unaff_EDI + 0x8856b0) + (param_5 * 5 + 10) * 4;
  return 0;
}


