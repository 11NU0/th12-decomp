/* float10 __stdcall FUN_00464640(float param_1, float param_2) @ 00464640  157 bytes */

#include "th12.h"

float10 __stdcall FUN_00464640(float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar2 = 0;
  fVar4 = (float10)(param_1 + param_2);
  fVar5 = (float10)3.1415927410125732;
  iVar3 = iVar2;
  if (fVar5 < fVar4 != (NAN(fVar5) || NAN(fVar4))) {
    do {
      iVar2 = iVar3 + 1;
      fVar1 = (float)(fVar4 - (float10)6.2831854820251465);
      if (0x20 < iVar3) break;
      fVar4 = (float10)fVar1;
      iVar3 = iVar2;
    } while (fVar5 < fVar4);
    fVar4 = (float10)fVar1;
  }
  fVar5 = (float10)-3.1415927410125732;
  if (fVar5 <= fVar4) {
    return fVar4;
  }
  do {
    fVar1 = (float)(fVar4 + (float10)6.2831854820251465);
    if (0x20 < iVar2) {
      return (float10)fVar1;
    }
    fVar4 = (float10)fVar1;
    iVar2 = iVar2 + 1;
  } while (fVar4 < fVar5 != (NAN(fVar4) || NAN(fVar5)));
  return fVar4;
}


