/* float10 __stdcall FUN_00459360(void) @ 00459360  39 bytes */

#include "th12.h"

float10 __stdcall FUN_00459360(void)

{
  int in_EAX;
  float10 fVar1;
  
  fVar1 = (float10)(*(float *)(in_EAX + 0x28) / (float)*(int *)(in_EAX + 0x34));
  if (*(int *)(in_EAX + 0x38) - 1U < 0x10) {
    fVar1 = (float10)FUN_00464f80();
  }
  return (float10)(float)fVar1;
}


