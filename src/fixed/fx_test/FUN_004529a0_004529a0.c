/* uint * __stdcall FUN_004529a0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6) @ 004529a0  85 bytes */

#include "th12.h"

uint * FUN_004529a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6)

{
  uint *_Dst;
  
  _Dst = (uint *)operator_new(0x44);
  if (_Dst != (uint *)0x0) {
    _Dst[0x10] = _Dst[0x10] & 0xfffffffe;
    _memset(_Dst,0,0x44);
    *_Dst = *_Dst | 2;
    FUN_00452a60((int)_Dst,param_1,param_2,param_3,param_4,param_5);
    return _Dst;
  }
  return (uint *)0x0;
}


