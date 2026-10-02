/* undefined4 __fastcall FUN_00408580(void * param_1, undefined4 param_2, int param_3) @ 00408580  138 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00408580(void *param_1,undefined4 param_2,int param_3)

{
  uint *_Dst;
  void *this;
  undefined4 extraout_EDX;
  int iVar1;
  
  iVar1 = 8;
  do {
    FUN_00408030(param_1,param_2);
    iVar1 = iVar1 + -1;
    param_1 = this;
    param_2 = extraout_EDX;
  } while (iVar1 != 0);
  FUN_00461970(this,*(int *)((int)param_3 + 0x48));
  if (*(void **)((int)param_3 + 0x500) != (void *)0x0) {
    _free(*(void **)((int)param_3 + 0x500));
    *(undefined4 *)((int)param_3 + 0x500) = 0;
  }
  _Dst = (uint *)operator_new(0x44);
  if (_Dst != (uint *)0x0) {
    _Dst[0x10] = _Dst[0x10] & 0xfffffffe;
    _memset(_Dst,0,0x44);
    *_Dst = *_Dst | 2;
    FUN_00452a60((int)_Dst,1,8,6,6,0);
  }
  *(undefined4 *)((int)param_3 + 0x3c) = 0;
  return 0;
}


