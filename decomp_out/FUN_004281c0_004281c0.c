/* void * __stdcall FUN_004281c0(void) @ 004281c0  106 bytes */
#include "th12.h"

void * FUN_004281c0(void)

{
  void *_Dst;
  int iVar1;
  
  _Dst = operator_new(0x490);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    FUN_00427ec0();
    _memset(_Dst,0,0x490);
    *(undefined4 *)((int)_Dst + 0x46c) = 0x10000;
    DAT_004b44f4 = _Dst;
  }
  iVar1 = FUN_00427fd0((int)_Dst);
  if (iVar1 != 0) {
    if (_Dst != (void *)0x0) {
      FUN_004280d0();
      FUN_0046ca4f(_Dst);
    }
    return (void *)0x0;
  }
  return _Dst;
}


