/* void * __stdcall FUN_00422700(void) @ 00422700  99 bytes */
#include "th12.h"

void * __stdcall FUN_00422700(void)

{
  void *_Dst;
  undefined4 unaff_retaddr;
  
  _Dst = operator_new(0x78);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    *(uint *)((int)_Dst + 0x20) = *(uint *)((int)_Dst + 0x20) & 0xfffffffe;
    FUN_00423250();
    _memset(_Dst,0,0x78);
  }
  DAT_004cf468 = 0;
  (**(code **)(*DAT_004ce8f0 + 0x14))(DAT_004ce8f0);
  *(uint *)((int)_Dst + 0x60) = *(uint *)((int)_Dst + 0x60) | 4;
  DAT_004b44e8 = _Dst;
  *(undefined4 *)((int)_Dst + 0x74) = unaff_retaddr;
  FUN_00430500();
  return _Dst;
}


