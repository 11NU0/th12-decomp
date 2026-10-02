/* undefined __thiscall FUN_0047dcc2(void * this, undefined4 * param_1) @ 0047dcc2  24 bytes */
#include "th12.h"

void __thiscall FUN_0047dcc2(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return;
}


