/* undefined4 * __thiscall FUN_00464bf0(void * this, byte param_1) @ 00464bf0  36 bytes */

#include "th12.h"

undefined4 * __thiscall FUN_00464bf0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004a3738;
  FUN_00464c40();
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (undefined4 *)this;
}


