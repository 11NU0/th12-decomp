/* undefined4 __fastcall FUN_00454b80(int param_1, int param_2) @ 00454b80  392 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00454b80(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_EAX;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  
  if ((*(int *)(param_2 + 0x108) != 0) && (*(int *)(param_2 + 0x124) == 0)) {
    *(short *)(in_EAX + 0x3e4) = (short)param_1;
    iVar5 = *(int *)(param_2 + 0x118) + param_1 * 0x48;
    *(int *)(in_EAX + 0x3f4) = iVar5;
    uVar1 = *(undefined4 *)(iVar5 + 0x24);
    *(undefined4 *)(in_EAX + 0x8c) = uVar1;
    pfVar6 = (float *)(in_EAX + 0x2fc);
    *(undefined4 *)(in_EAX + 0x7c) = uVar1;
    uVar1 = *(undefined4 *)(iVar5 + 0x2c);
    *(undefined4 *)(in_EAX + 0x94) = uVar1;
    *(undefined4 *)(in_EAX + 0x84) = uVar1;
    uVar1 = *(undefined4 *)(iVar5 + 0x28);
    *(undefined4 *)(in_EAX + 0x88) = uVar1;
    *(undefined4 *)(in_EAX + 0x80) = uVar1;
    uVar1 = *(undefined4 *)(iVar5 + 0x30);
    *(undefined4 *)(in_EAX + 0x98) = uVar1;
    *(undefined4 *)(in_EAX + 0x90) = uVar1;
    *(undefined4 *)(in_EAX + 0x58) = *(undefined4 *)(iVar5 + 0x38);
    *(undefined4 *)(in_EAX + 0x5c) = *(undefined4 *)(iVar5 + 0x34);
    *(undefined4 *)(in_EAX + 0x334) = 0;
    *(undefined4 *)(in_EAX + 0x330) = 0;
    *(undefined4 *)(in_EAX + 0x32c) = 0;
    *(undefined4 *)(in_EAX + 0x328) = 0;
    *(undefined4 *)(in_EAX + 800) = 0;
    *(undefined4 *)(in_EAX + 0x31c) = 0;
    *(undefined4 *)(in_EAX + 0x318) = 0;
    *(undefined4 *)(in_EAX + 0x314) = 0;
    *(undefined4 *)(in_EAX + 0x30c) = 0;
    *(undefined4 *)(in_EAX + 0x308) = 0;
    *(undefined4 *)(in_EAX + 0x304) = 0;
    *(undefined4 *)(in_EAX + 0x300) = 0;
    *(undefined4 *)(in_EAX + 0x338) = 0x3f800000;
    *(undefined4 *)(in_EAX + 0x324) = 0x3f800000;
    *(undefined4 *)(in_EAX + 0x310) = 0x3f800000;
    *pfVar6 = 1.0;
    *(undefined4 *)(in_EAX + 0x3b8) = 0x3f800000;
    *(undefined4 *)(in_EAX + 0x3a4) = 0x3f800000;
    *(undefined4 *)(in_EAX + 0x390) = 0x3f800000;
    *(undefined4 *)(in_EAX + 0x37c) = 0x3f800000;
    *(undefined4 *)(in_EAX + 0x3b4) = 0;
    *(undefined4 *)(in_EAX + 0x3b0) = 0;
    *(undefined4 *)(in_EAX + 0x3ac) = 0;
    *(undefined4 *)(in_EAX + 0x3a8) = 0;
    *(undefined4 *)(in_EAX + 0x3a0) = 0;
    *(undefined4 *)(in_EAX + 0x39c) = 0;
    *(undefined4 *)(in_EAX + 0x398) = 0;
    *(undefined4 *)(in_EAX + 0x394) = 0;
    *(undefined4 *)(in_EAX + 0x38c) = 0;
    *(undefined4 *)(in_EAX + 0x388) = 0;
    *(undefined4 *)(in_EAX + 900) = 0;
    *(undefined4 *)(in_EAX + 0x380) = 0;
    iVar5 = *(int *)(in_EAX + 0x3f4);
    *pfVar6 = *(float *)(in_EAX + 0x58) * 0.00390625;
    *(float *)(in_EAX + 0x310) = *(float *)(in_EAX + 0x5c) * 0.00390625;
    *(float *)(in_EAX + 0x37c) =
         (*(float *)(in_EAX + 0x58) / *(float *)(iVar5 + 0x20)) * *(float *)(iVar5 + 0x3c);
    fVar2 = *(float *)(in_EAX + 0x5c);
    fVar3 = *(float *)(iVar5 + 0x1c);
    fVar4 = *(float *)(iVar5 + 0x40);
    pfVar7 = (float *)(in_EAX + 0x33c);
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
    }
    *(float *)(in_EAX + 0x390) = (fVar2 / fVar3) * fVar4;
    return 0;
  }
  return 0xffffffff;
}


