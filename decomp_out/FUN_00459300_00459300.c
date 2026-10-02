/* float10 __stdcall FUN_00459300(void) @ 00459300  39 bytes */
#include "th12.h"

float10 FUN_00459300(void)

{
  int in_EAX;
  float10 fVar1;
  
  fVar1 = (float10)(*(float *)(in_EAX + 0x38) / (float)*(int *)(in_EAX + 0x44));
  if (*(int *)(in_EAX + 0x48) - 1U < 0x10) {
    fVar1 = (float10)FUN_00464f80();
  }
  return (float10)(float)fVar1;
}


