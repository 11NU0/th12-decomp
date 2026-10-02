/* undefined __fastcall FUN_0045cdf0(float * param_1) @ 0045cdf0  89 bytes */
#include "th12.h"

void __fastcall FUN_0045cdf0(float *param_1)

{
  float in_EAX;
  
  switch(*(uint *)((int)in_EAX + 0x47c) >> 0x17 & 0x1f) {
  case 0:
    FUN_0045a570(param_1,param_1 + 3);
    return;
  case 1:
    FUN_0045af10(param_1);
    return;
  case 2:
  case 3:
    FUN_0045aa30(param_1,param_1 + 9,in_EAX);
  }
  return;
}


