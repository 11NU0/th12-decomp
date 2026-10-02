/* exception * __thiscall FUN_0046e0c7(void * this, exception * param_1) @ 0046e0c7  29 bytes */
#include "th12.h"

exception * __thiscall FUN_0046e0c7(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_0049cd48;
  return (exception *)this;
}


