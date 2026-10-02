/* undefined __fastcall FUN_00422c10(float * param_1) @ 00422c10  35 bytes */

#include "th12.h"

void __fastcall FUN_00422c10(float *param_1)

{
  float *in_EAX;
  
  *in_EAX = *param_1 + 32.0 + 192.0;
  in_EAX[1] = param_1[1] + 16.0;
  in_EAX[2] = param_1[2];
  return;
}


