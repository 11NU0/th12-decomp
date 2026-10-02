/* exception * __thiscall FUN_00491611(void * this, byte param_1) @ 00491611  39 bytes */

#include "th12.h"

exception * __thiscall FUN_00491611(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0049f39c;
  FID_conflict__logic_error((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (exception *)this;
}


