/* void * __cdecl operator_new(uint param_1) @ 0046c9ea  101 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2008 Release */

void * __cdecl operator_new(uint param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  undefined local_10 [12];
  
  do {
    pvVar3 = _malloc(param_1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
    iVar2 = __callnewh(param_1);
  } while (iVar2 != 0);
  if ((_DAT_004b38cc & 1) == 0) {
    _DAT_004b38cc = _DAT_004b38cc | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_004b38c0);
    _atexit((_func_4879 *)&LAB_00497ac1);
  }
  FUN_0044f180(local_10,(exception *)&DAT_004b38c0);
  __CxxThrowException_8(local_10,&DAT_004ab5d0);
  pcVar1 = (code *)swi(3);
  pvVar3 = (void *)(*pcVar1)();
  return pvVar3;
}


