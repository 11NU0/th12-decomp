/* exception * __thiscall FUN_00493047(void * this, exception * param_1) @ 00493047  29 bytes */

#include "th12.h"

exception * __thiscall FUN_00493047(void *this,exception *param_1)

{
  std_exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_0049f3f8;
  return (exception *)this;
}


