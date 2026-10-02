/* exception * __thiscall FUN_0044f180(void * this, exception * param_1) @ 0044f180  25 bytes */
#include "th12.h"

exception * __thiscall FUN_0044f180(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_0049cd00;
  return (exception *)this;
}


