/* exception * __thiscall FUN_00491660(void * this, byte param_1) @ 00491660  39 bytes */
#include "th12.h"

exception * __thiscall FUN_00491660(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0049f3a8;
  FID_conflict__logic_error((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (exception *)this;
}


