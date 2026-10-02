/* undefined __stdcall FUN_00465320(void) @ 00465320  99 bytes */

#include "th12.h"

void __stdcall FUN_00465320(void)

{
  float *unaff_ESI;
  float10 fVar1;
  undefined2 in_stack_ffffff80;
  
  fVar1 = FUN_00493290((double)(*unaff_ESI * 100.0),in_stack_ffffff80);
  *unaff_ESI = (float)fVar1 / 100.0;
  fVar1 = FUN_00493290((double)(unaff_ESI[1] * 100.0),in_stack_ffffff80);
  unaff_ESI[1] = (float)fVar1 / 100.0;
  return;
}


