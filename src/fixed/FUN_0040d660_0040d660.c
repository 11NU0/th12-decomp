/* float10 __stdcall FUN_0040d660(float param_1) @ 0040d660  50 bytes */
#include "th12.h"

float10 __stdcall FUN_0040d660(float param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_00464440();
  fVar1 = (float)iVar2;
  if (iVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  return (float10)(fVar1 * 2.3283064e-10 * param_1);
}


