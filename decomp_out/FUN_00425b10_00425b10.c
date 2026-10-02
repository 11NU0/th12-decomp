/* uint * __stdcall FUN_00425b10(void) @ 00425b10  198 bytes */
#include "th12.h"

uint * FUN_00425b10(void)

{
  uint *_Dst;
  int iVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004977ab;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  _Dst = (uint *)operator_new(0x666fe4);
  local_4 = 0;
  if (_Dst == (uint *)0x0) {
    _Dst = (uint *)0x0;
  }
  else {
    _eh_vector_constructor_iterator_(_Dst + 5,0x9d8,0xa68,FUN_004258d0,FUN_00425900);
    _memset(_Dst,0,0x666fe4);
    *_Dst = *_Dst | 2;
    DAT_004b44f0 = _Dst;
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00425940((int)_Dst);
  if (iVar1 != 0) {
    if (_Dst != (uint *)0x0) {
      FUN_00425a00((int)_Dst);
      FUN_0046ca4f(_Dst);
    }
    *unaff_FS_OFFSET = local_c;
    return (uint *)0x0;
  }
  *unaff_FS_OFFSET = local_c;
  return _Dst;
}


