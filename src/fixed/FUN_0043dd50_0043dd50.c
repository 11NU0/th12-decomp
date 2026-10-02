/* uint * __stdcall FUN_0043dd50(void) @ 0043dd50  117 bytes */
#include "th12.h"

uint * __stdcall FUN_0043dd50(void)

{
  uint *_Dst;
  uint *puVar1;
  int iVar2;
  
  _Dst = (uint *)operator_new(0x80c);
  if (_Dst == (uint *)0x0) {
    _Dst = (uint *)0x0;
  }
  else {
    FUN_004027e0(_Dst + 6);
    iVar2 = 0xc;
    puVar1 = _Dst + 0x13e;
    do {
      *puVar1 = *puVar1 & 0xfffffffe;
      puVar1 = puVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    _memset(_Dst,0,0x80c);
    *_Dst = *_Dst | 2;
    DAT_004b4524 = _Dst;
  }
  iVar2 = FUN_0043db40();
  if (iVar2 != 0) {
    if (_Dst != (uint *)0x0) {
      FUN_0043dc30((int)_Dst);
      FUN_0046ca4f(_Dst);
    }
    return (uint *)0x0;
  }
  return _Dst;
}


