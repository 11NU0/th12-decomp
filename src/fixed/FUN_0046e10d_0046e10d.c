/* exception * __thiscall FUN_0046e10d(void * this, exception * param_1) @ 0046e10d  29 bytes */
#include "th12.h"

exception * __fastcall FUN_0046e10d(void *this,exception *param_1)

{
  std_exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_0049cd54;
  return (exception *)this;
}


