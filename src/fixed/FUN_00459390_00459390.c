/* float10 __stdcall FUN_00459390(void) @ 00459390  39 bytes */
#include "th12.h"

float10 __stdcall FUN_00459390(void)

{
  int in_EAX;
  float10 fVar1;
  
  fVar1 = (float10)(*(float *)((int)in_EAX + 0x18) / (float)*(int *)((int)in_EAX + 0x24));
  if (*(int *)((int)in_EAX + 0x28) - 1U < 0x10) {
    fVar1 = (( float10 (__stdcall *)())FUN_00464f80)();
  }
  return (float10)(float)fVar1;
}


