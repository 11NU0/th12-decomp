/* exception * __thiscall FUN_00491579(void * this, byte param_1) @ 00491579  33 bytes */
#include "th12.h"

exception * __fastcall FUN_00491579(void *this,byte param_1)

{
  FID_conflict__logic_error((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (exception *)this;
}


