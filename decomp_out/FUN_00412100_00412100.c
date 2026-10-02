/* undefined __fastcall FUN_00412100(undefined4 param_1, undefined4 param_2) @ 00412100  52 bytes */
#include "th12.h"

void __fastcall FUN_00412100(undefined4 param_1,undefined4 param_2)

{
  float *in_EAX;
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    FUN_004273f0(param_1,param_2,*unaff_ESI,in_EAX,-1.5707964,2.2);
  }
  FUN_00412140(unaff_ESI);
  *unaff_ESI = 0;
  return;
}


