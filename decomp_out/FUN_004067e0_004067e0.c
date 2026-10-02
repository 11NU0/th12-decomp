/* undefined __stdcall FUN_004067e0(int param_1) @ 004067e0  59 bytes */
#include "th12.h"

void FUN_004067e0(int param_1)

{
  int *in_EAX;
  
  if ((in_EAX[4] & 1U) == 0) {
    in_EAX[2] = 0;
    in_EAX[1] = 0;
    *in_EAX = -999999;
    in_EAX[3] = (int)&DAT_004b2ed0;
    in_EAX[4] = in_EAX[4] | 1;
  }
  in_EAX[1] = param_1;
  *in_EAX = param_1 + -1;
  in_EAX[2] = (int)(float)param_1;
  return;
}


