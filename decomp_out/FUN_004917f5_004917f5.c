/* undefined4 * __thiscall FUN_004917f5(void * this, exception * param_1) @ 004917f5  29 bytes */
#include "th12.h"

undefined4 * __thiscall FUN_004917f5(void *this,exception *param_1)

{
  FID_conflict_runtime_error(this,param_1);
  *(undefined ***)this = &PTR_FUN_0049f3a8;
  return (undefined4 *)this;
}


