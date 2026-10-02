/* exception * __thiscall FUN_004915c2(void * this, byte param_1) @ 004915c2  39 bytes */
#include "th12.h"

exception * __fastcall FUN_004915c2(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0049f390;
  FID_conflict__logic_error((exception *)this);
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (exception *)this;
}


