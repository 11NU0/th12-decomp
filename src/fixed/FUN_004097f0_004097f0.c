/* void * __stdcall FUN_004097f0(void) @ 004097f0  199 bytes */
#include "th12.h"

void * __stdcall FUN_004097f0(void)

{
  void *_Dst;
  int iVar1;
  void *this;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = ((void *)0x0049770b);
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  _Dst = operator_new(0x4debe0);
  local_4 = 0;
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    _eh_vector_constructor_iterator_
              ((void *)((int)_Dst + 100),0x9f8,0x7d1,FUN_004094b0,FUN_004094f0);
    _memset(_Dst,0,0x4debe0);
    DAT_004b43c8 = _Dst;
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00409530();
  if (iVar1 != 0) {
    if (_Dst != (void *)0x0) {
      FUN_004096d0(this,(int)_Dst);
      FUN_0046ca4f(_Dst);
    }
    *unaff_FS_OFFSET = local_c;
    return (void *)0x0;
  }
  *unaff_FS_OFFSET = local_c;
  return _Dst;
}


