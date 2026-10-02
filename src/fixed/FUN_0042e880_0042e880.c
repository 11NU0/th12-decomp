/* undefined __thiscall FUN_0042e880(void * this, float param_1, float param_2) @ 0042e880  30 bytes */
#include "th12.h"

void __fastcall FUN_0042e880(void *this,float param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar2 = (float10)fsin((float10)param_1);
  *(float *)this = (float)(fVar1 * (float10)param_2);
  *(float *)((int)this + 4) = (float)(fVar2 * (float10)param_2);
  return;
}


