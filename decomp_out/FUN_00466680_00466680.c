/* undefined4 * __thiscall FUN_00466680(void * this, byte param_1) @ 00466680  36 bytes */
#include "th12.h"

undefined4 * __thiscall FUN_00466680(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004a3b24;
  FUN_00465f50((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (undefined4 *)this;
}


