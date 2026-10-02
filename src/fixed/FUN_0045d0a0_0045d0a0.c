/* undefined4 __fastcall FUN_0045d0a0(undefined4 param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7) @ 0045d0a0  566 bytes */
#include "th12.h"

undefined4 __fastcall
FUN_0045d0a0(undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7)

{
  float *pfVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float in_EAX;
  int unaff_EDI;
  float10 fVar5;
  float local_8;
  
  pfVar1 = *(float **)((int)unaff_EDI + 0x8856b0);
  if (NANP(param_7) == (param_7 == 0.0)) {
    fVar2 = (float10)fcos((float10)param_7);
    fVar5 = (float10)fsin((float10)param_7);
    local_8 = (float)fVar2;
    param_7 = (float)fVar5;
  }
  else {
    param_7 = 0.0;
    local_8 = 1.0;
  }
  fVar3 = param_5 * 0.5;
  fVar4 = param_6 * 0.5;
  *pfVar1 = param_3 + (fVar3 * local_8 - fVar4 * param_7);
  pfVar1[1] = local_8 * fVar4 + param_7 * fVar3 + param_4;
  pfVar1[2] = 0.0;
  pfVar1[5] = param_3 - (param_7 * fVar4 + local_8 * fVar3);
  pfVar1[6] = param_4 + (local_8 * fVar4 - param_7 * fVar3);
  pfVar1[7] = 0.0;
  pfVar1[10] = param_7 * fVar4 + local_8 * fVar3 + param_3;
  pfVar1[0xb] = (param_7 * fVar3 - local_8 * fVar4) + param_4;
  pfVar1[0xc] = 0.0;
  pfVar1[0xf] = (param_7 * fVar4 - local_8 * fVar3) + param_3;
  pfVar1[0x10] = param_4 - (param_7 * fVar3 + local_8 * fVar4);
  pfVar1[0xe] = in_EAX;
  pfVar1[4] = in_EAX;
  pfVar1[0x11] = 0.0;
  pfVar1[0x13] = param_2;
  pfVar1[0x12] = 1.0;
  pfVar1[9] = param_2;
  pfVar1[0xd] = 1.0;
  pfVar1[8] = 1.0;
  pfVar1[3] = 1.0;
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
  (**(code **)(*DAT_004ce8f0 + 0x14c))(DAT_004ce8f0,5,2,*(undefined4 *)((int)unaff_EDI + 0x8856b0),0x14);
  *(int *)((int)unaff_EDI + 0x8856b0) = *(int *)((int)unaff_EDI + 0x8856b0) + 0x50;
  *(int *)((int)unaff_EDI + 0xac) = *(int *)((int)unaff_EDI + 0xac) + 1;
  return 0;
}


