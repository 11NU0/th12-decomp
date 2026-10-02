/* uint * __stdcall FUN_0040daa0(void) @ 0040daa0  94 bytes */
#include "th12.h"

uint * FUN_0040daa0(void)

{
  uint *_Dst;
  int iVar1;
  void *extraout_ECX;
  
  _Dst = (uint *)operator_new(0xc0);
  if (_Dst == (uint *)0x0) {
    _Dst = (uint *)0x0;
  }
  else {
    _Dst[0xd] = _Dst[0xd] & 0xfffffffe;
    _memset(_Dst,0,0xc0);
    *_Dst = *_Dst | 2;
    DAT_004b43cc = _Dst;
  }
  iVar1 = FUN_0040d880();
  if (iVar1 != 0) {
    if (_Dst != (uint *)0x0) {
      FUN_0040d9c0(extraout_ECX);
      FUN_0046ca4f(_Dst);
    }
    return (uint *)0x0;
  }
  return _Dst;
}


