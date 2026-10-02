/* float10 __stdcall FUN_00465280(float param_1, float param_2) @ 00465280  101 bytes */
#include "th12.h"

float10 FUN_00465280(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1 - param_2;
  if (3.1415927 < fVar1 != NAN(fVar1)) {
    return (float10)(param_1 - (param_2 + 6.2831855));
  }
  if (3.1415927 < param_2 - param_1) {
    return (float10)(param_1 - (param_2 - 6.2831855));
  }
  return (float10)fVar1;
}


