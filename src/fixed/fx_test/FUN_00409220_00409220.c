/* undefined4 __fastcall FUN_00409220(undefined4 param_1, int param_2) @ 00409220  157 bytes */

#include "th12.h"

undefined4 __fastcall FUN_00409220(undefined4 param_1,int param_2)

{
  float fVar1;
  int in_EAX;
  uint uVar2;
  
  if (*(int *)(in_EAX + 0x18) < 0xb4) {
    fVar1 = (*(float *)(in_EAX + 0x1c) * 48.0) / 180.0 + 16.0;
  }
  else if (*(int *)(in_EAX + 0x18) < 200) {
    fVar1 = ((*(float *)(in_EAX + 0x1c) - 180.0) * 416.0) / 20.0 + 64.0;
  }
  else {
    fVar1 = 480.0;
  }
  uVar2 = ~*(uint *)(DAT_004b43cc + 0x7c) & 1;
  FUN_0040caa0(uVar2,param_2,fVar1,uVar2,1);
  FUN_004286f0(fVar1,~*(uint *)(DAT_004b43cc + 0x7c) & 1,1);
  return 0;
}


