/* undefined __stdcall FUN_00469110(undefined4 param_1, float * param_2) @ 00469110  147 bytes */
#include "th12.h"

void FUN_00469110(undefined4 param_1,float *param_2)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)operator_new(0x1024);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[0x402] = 0;
    puVar1[0x403] = 0;
  }
  puVar2 = (undefined4 *)operator_new(0xc);
  *puVar1 = 0;
  puVar1[0x404] = param_1;
  puVar1[0x405] = in_EAX;
  puVar1[1] = 0;
  *(undefined *)(puVar1 + 0x407) = *(undefined *)(*(int *)(in_EAX + 4) + 0x101c);
  *puVar2 = puVar1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (*(int *)(in_EAX + 0x1034) != 0) {
    puVar2[1] = *(int *)(in_EAX + 0x1034);
    *(undefined4 **)(*(int *)(in_EAX + 0x1034) + 8) = puVar2;
  }
  *(undefined4 **)(in_EAX + 0x1034) = puVar2;
  puVar2[2] = in_EAX + 0x1030;
  FUN_00466f00(param_2);
  return;
}


