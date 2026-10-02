/* undefined4 * __thiscall FUN_004917d8(void * this, exception * param_1) @ 004917d8  29 bytes */

#include "th12.h"

undefined4 * __thiscall FUN_004917d8(void *this,exception *param_1)

{
  FID_conflict_runtime_error(this,param_1);
  *(undefined ***)this = &PTR_FUN_0049f390;
  return (undefined4 *)this;
}


