/* undefined4 * __thiscall FUN_004917bb(void * this, exception * param_1) @ 004917bb  29 bytes */
#include "th12.h"

undefined4 * __fastcall FUN_004917bb(void *this,exception *param_1)

{
  FID_conflict_runtime_error(this,param_1);
  *(undefined ***)this = &PTR_FUN_0049f39c;
  return (undefined4 *)this;
}


