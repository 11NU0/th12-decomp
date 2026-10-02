/* undefined __stdcall FUN_004061e0(void * param_1, int param_2) @ 004061e0  41 bytes */
#include "th12.h"

void FUN_004061e0(void *param_1,int param_2)

{
  void *in_EAX;
  
  FUN_00402520();
  *(undefined *)((int)in_EAX + 0x49d) = 0x10;
  *(undefined *)((int)in_EAX + 0x49c) = 0x10;
  FUN_00454d10(param_1,in_EAX,param_2);
  return;
}


