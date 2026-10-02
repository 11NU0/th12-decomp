/* exception * __thiscall FUN_0046e19b(void * this, byte param_1) @ 0046e19b  39 bytes */

#include "th12.h"

exception * __thiscall FUN_0046e19b(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0049cd48;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (exception *)this;
}


