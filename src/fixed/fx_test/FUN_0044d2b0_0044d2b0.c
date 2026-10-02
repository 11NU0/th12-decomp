/* exception * __thiscall FUN_0044d2b0(void * this, byte param_1) @ 0044d2b0  36 bytes */

#include "th12.h"

exception * __thiscall FUN_0044d2b0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0049cd00;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (exception *)this;
}


