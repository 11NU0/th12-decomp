/* undefined __fastcall FUN_004555f0(float * param_1) @ 004555f0  52 bytes */
#include "th12.h"

void __fastcall FUN_004555f0(float *param_1)

{
  float *in_EAX;
  
  *param_1 = *in_EAX / 640.0;
  param_1[1] = in_EAX[1] / 480.0;
  if (*param_1 < 0.0) {
    *param_1 = 0.0;
  }
  if (param_1[1] < 0.0) {
    param_1[1] = 0.0;
    return;
  }
  return;
}


