/* float10 __stdcall FUN_00410920(float param_1) @ 00410920  56 bytes */
#include "th12.h"

float10 FUN_00410920(float param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_00464440();
  fVar1 = (float)iVar2;
  if (iVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  return (float10)((fVar1 * 4.656613e-10 - 1.0) * param_1);
}


