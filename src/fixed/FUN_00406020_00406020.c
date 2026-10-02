/* float10 __stdcall FUN_00406020(void) @ 00406020  39 bytes */
#include "th12.h"

float10 __stdcall FUN_00406020(void)

{
  int in_EAX;
  float10 fVar1;
  
  fVar1 = (float10)(*(float *)((int)in_EAX + 0x38) / (float)*(int *)((int)in_EAX + 0x44));
  if (*(int *)((int)in_EAX + 0x48) - 1U < 0x10) {
    fVar1 = (( float10 (__stdcall *)())FUN_00464f80)();
  }
  return (float10)(float)fVar1;
}


