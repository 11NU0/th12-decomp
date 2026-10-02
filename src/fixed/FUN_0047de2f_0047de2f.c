/* undefined * __thiscall FUN_0047de2f(void * this, undefined * param_1, undefined * param_2) @ 0047de2f  23 bytes */
#include "th12.h"

undefined * __fastcall FUN_0047de2f(void *this,undefined *param_1,undefined *param_2)

{
  if (param_1 < param_2) {
    *param_1 = *(undefined *)((int)this + 4);
    param_1 = param_1 + 1;
  }
  return param_1;
}


