/* exception * __thiscall FUN_00491f8c(void * this, byte param_1) @ 00491f8c  39 bytes */
#include "th12.h"

exception * __fastcall FUN_00491f8c(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0049f3f8;
  exception::~exception((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (exception *)this;
}


