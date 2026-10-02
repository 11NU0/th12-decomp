/* undefined4 * __thiscall FUN_0044d110(void * this, byte param_1) @ 0044d110  36 bytes */
#include "th12.h"

undefined4 * __thiscall FUN_0044d110(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004a3738;
  FUN_00464c40();
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (undefined4 *)this;
}


