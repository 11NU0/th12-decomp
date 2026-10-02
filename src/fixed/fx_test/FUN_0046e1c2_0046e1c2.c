/* exception * __thiscall FUN_0046e1c2(void * this, byte param_1) @ 0046e1c2  39 bytes */

#include "th12.h"

exception * __thiscall FUN_0046e1c2(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0049cd54;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (exception *)this;
}


