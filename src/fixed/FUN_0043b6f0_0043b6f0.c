/* void * __stdcall FUN_0043b6f0(char * param_1) @ 0043b6f0  198 bytes */
#include "th12.h"

void * __stdcall FUN_0043b6f0(char *param_1)

{
  void *_Dst;
  int iVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = ((void *)0x0049760b);
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  _Dst = operator_new(0x2e0);
  local_4 = 0;
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    _eh_vector_constructor_iterator_
              ((void *)((int)_Dst + 0xa8),0x24,8,(_func_void_void_ptr *)((void *)0x0043cd40),
               (_func_void_void_ptr *)((void *)0x0043cd80));
    _memset(_Dst,0,0x2e0);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)_Dst + 0x10) = 2;
  iVar1 = FUN_0043c350((int)_Dst,param_1);
  if (iVar1 != 0) {
    FUN_0043b450((int)_Dst);
    FUN_0046ca4f(_Dst);
    *unaff_FS_OFFSET = local_c;
    return (void *)0x0;
  }
  *unaff_FS_OFFSET = local_c;
  return _Dst;
}


