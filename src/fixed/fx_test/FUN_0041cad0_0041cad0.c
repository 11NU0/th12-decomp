/* uint * __stdcall FUN_0041cad0(void) @ 0041cad0  90 bytes */

#include "th12.h"

uint * __stdcall FUN_0041cad0(void)

{
  uint *_Dst;
  int iVar1;
  
  _Dst = (uint *)operator_new(0x8c);
  if (_Dst == (uint *)0x0) {
    _Dst = (uint *)0x0;
  }
  else {
    _memset(_Dst,0,0x8c);
    *_Dst = *_Dst | 2;
    DAT_004b43e0 = _Dst;
  }
  iVar1 = FUN_0041ca10();
  if (iVar1 != 0) {
    if (_Dst != (uint *)0x0) {
      FUN_0041ca70();
      FUN_0046ca4f(_Dst);
    }
    return (uint *)0x0;
  }
  return _Dst;
}


