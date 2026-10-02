/* uint * __stdcall FUN_0044a230(void) @ 0044a230  90 bytes */
#include "th12.h"

uint * __stdcall FUN_0044a230(void)

{
  uint *_Dst;
  int iVar1;
  void *extraout_ECX;
  
  _Dst = (uint *)operator_new(0x6c);
  if (_Dst == (uint *)0x0) {
    _Dst = (uint *)0x0;
  }
  else {
    _Dst[8] = _Dst[8] & 0xfffffffe;
    _memset(_Dst,0,0x6c);
    *_Dst = *_Dst | 2;
    DAT_004b4534 = _Dst;
  }
  iVar1 = FUN_00449fa0();
  if (iVar1 != 0) {
    if (_Dst != (uint *)0x0) {
      FUN_0044a120(extraout_ECX);
      FUN_0046ca4f(_Dst);
    }
    return (uint *)0x0;
  }
  return _Dst;
}


