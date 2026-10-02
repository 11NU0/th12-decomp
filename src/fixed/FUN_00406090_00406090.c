/* undefined __fastcall FUN_00406090(float * param_1) @ 00406090  61 bytes */
#include "th12.h"

void __fastcall FUN_00406090(float *param_1)

{
  float *in_EAX;
  float *unaff_ESI;
  
  *unaff_ESI = *param_1 - *in_EAX;
  unaff_ESI[1] = param_1[1] - in_EAX[1];
  unaff_ESI[2] = param_1[2] - in_EAX[2];
  unaff_ESI[3] = param_1[3] - in_EAX[3];
  unaff_ESI[4] = param_1[4] - in_EAX[4];
  unaff_ESI[5] = param_1[5] - in_EAX[5];
  FUN_00406250((int)unaff_ESI);
  return;
}


