/* exception * __thiscall FUN_0046e17a(void * this, byte param_1) @ 0046e17a  33 bytes */
#include "th12.h"

exception * __thiscall FUN_0046e17a(void *this,byte param_1)

{
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (exception *)this;
}


