/* uint * __stdcall FUN_00406b20(void) @ 00406b20  105 bytes */
#include "th12.h"

uint * __stdcall FUN_00406b20(void)

{
  uint *_Dst;
  int iVar1;
  
  _Dst = (uint *)operator_new(0x524);
  if (_Dst == (uint *)0x0) {
    _Dst = (uint *)0x0;
  }
  else {
    _Dst[9] = _Dst[9] & 0xfffffffe;
    _Dst[0xe] = _Dst[0xe] & 0xfffffffe;
    FUN_004027e0(_Dst + 0x13);
    _memset(_Dst,0,0x524);
    *_Dst = *_Dst | 2;
    DAT_004b43c4 = _Dst;
  }
  iVar1 = FUN_00406880((int)_Dst);
  if (iVar1 != 0) {
    if (_Dst != (uint *)0x0) {
      FUN_00406930((int)_Dst);
      FUN_0046ca4f(_Dst);
    }
    return (uint *)0x0;
  }
  return _Dst;
}


