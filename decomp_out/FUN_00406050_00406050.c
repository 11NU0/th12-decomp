/* float10 __stdcall FUN_00406050(void) @ 00406050  45 bytes */
#include "th12.h"

float10 FUN_00406050(void)

{
  int in_EAX;
  float10 fVar1;
  
  fVar1 = (float10)(*(float *)(in_EAX + 0x78) / (float)*(int *)(in_EAX + 0x84));
  if (*(int *)(in_EAX + 0x88) - 1U < 0x10) {
    fVar1 = (float10)FUN_00464f80();
  }
  return (float10)(float)fVar1;
}


