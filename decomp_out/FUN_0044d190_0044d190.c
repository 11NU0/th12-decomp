/* undefined __stdcall FUN_0044d190(void) @ 0044d190  173 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d190(void)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = _DAT_004b0d18;
  _DAT_004b0d18 = _DAT_004b0d18 | 2;
  uVar1 = uVar1 & 1;
  while (uVar1 == 0) {
    do {
      fVar2 = FUN_004508b0();
      _DAT_004b0d1c = (double)fVar2;
      if (fVar2 < (float10)_DAT_004b0d24 == (NAN(fVar2) || NAN((float10)_DAT_004b0d24))) {
        fVar3 = (float10)_DAT_004b0d2c;
      }
      else {
        _DAT_004b0d2c = (double)fVar2;
        fVar3 = fVar2;
      }
      _DAT_004b0d24 = (double)fVar2;
    } while (fVar2 <= fVar3);
    if (fVar3 < fVar2) {
      do {
        fVar3 = fVar3 + (float10)0.016666666666666666;
      } while (fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2)));
      _DAT_004b0d2c = (double)fVar3;
    }
    _DAT_004b0d44 = _DAT_004b0d44 + 1;
    Sleep(0xd);
    uVar1 = _DAT_004b0d18 & 1;
  }
  return;
}


