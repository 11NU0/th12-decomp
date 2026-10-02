/* uint * __stdcall FUN_0042ede0(void) @ 0042ede0  117 bytes */

#include "th12.h"

uint * __stdcall FUN_0042ede0(void)

{
  uint *_Dst;
  int iVar1;
  
  _Dst = (uint *)operator_new(0x4f8);
  if (_Dst == (uint *)0x0) {
    _Dst = (uint *)0x0;
  }
  else {
    _Dst[4] = (uint)&PTR_FUN_004a3738;
    _Dst[5] = 0;
    _Dst[6] = 0;
    _Dst[7] = 0;
    _Dst[8] = 0;
    FUN_004027e0(_Dst + 0xc);
    _memset(_Dst,0,0x4f8);
    *_Dst = *_Dst | 2;
    DAT_004b44f8 = _Dst;
  }
  iVar1 = FUN_0042eb10(_Dst);
  if (iVar1 != 0) {
    if (_Dst != (uint *)0x0) {
      FUN_0042ec00((int)_Dst);
      FUN_0046ca4f(_Dst);
    }
    return (uint *)0x0;
  }
  return _Dst;
}


