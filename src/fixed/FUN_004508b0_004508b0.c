/* float10 __stdcall FUN_004508b0(void) @ 004508b0  260 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

typedef struct LStack_c__u { undefined4 _; undefined4 s; } LStack_c__u;
float10 __stdcall FUN_004508b0(void)

{
  double dVar1;
  double dVar2;
  DWORD DVar3;
  float10 fVar4;
  undefined8 uStack_14;
  LARGE_INTEGER LStack_c;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf170);
    DAT_004cf21d = DAT_004cf21d + '\x01';
  }
  if (DAT_004cf408 != 0 || _DAT_004cf40c != 0) {
    QueryPerformanceCounter(&LStack_c);
    uStack_14 = CONCAT44((((LStack_c__u *)&LStack_c)->s.HighPart - _DAT_004cf414) -
                         (uint)(((LStack_c__u *)&LStack_c)->s.LowPart < _DAT_004cf410),
                         ((LStack_c__u *)&LStack_c)->s.LowPart - _DAT_004cf410);
    fVar4 = (float10)uStack_14 / (float10)CONCAT44(_DAT_004cf40c,DAT_004cf408);
    if (fVar4 < (float10)_DAT_004cf448 != (NANP(fVar4) || NANP((float10)_DAT_004cf448))) {
      _DAT_004cf448 = (double)fVar4;
    }
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf170);
      fVar4 = (float10)(double)fVar4;
      DAT_004cf21d = DAT_004cf21d + -1;
    }
    return fVar4 - (float10)_DAT_004cf448;
  }
  DVar3 = timeGetTime();
  dVar1 = (double)DVar3;
  if ((int)DVar3 < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  if (dVar1 < _DAT_004cf448) {
    _DAT_004cf448 = dVar1;
  }
  dVar2 = _DAT_004cf448 * 1000.0;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf170);
    DAT_004cf21d = DAT_004cf21d + -1;
  }
  return (float10)((dVar1 - dVar2) / 1000.0);
}


