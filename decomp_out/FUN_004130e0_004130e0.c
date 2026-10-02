/* uint * __stdcall FUN_004130e0(undefined4 param_1) @ 004130e0  97 bytes */
#include "th12.h"

uint * FUN_004130e0(undefined4 param_1)

{
  uint *_Dst;
  int iVar1;
  
  _Dst = (uint *)operator_new(0x7c);
  if (_Dst == (uint *)0x0) {
    _Dst = (uint *)0x0;
  }
  else {
    _Dst[0x18] = _Dst[0x18] & 0xfffffffe;
    _memset(_Dst,0,0x7c);
    *_Dst = *_Dst | 2;
    DAT_004b43dc = _Dst;
  }
  iVar1 = FUN_00412c60(param_1);
  if (iVar1 != 0) {
    if (_Dst != (uint *)0x0) {
      FUN_00412f10();
      FUN_0046ca4f(_Dst);
    }
    return (uint *)0x0;
  }
  return _Dst;
}


