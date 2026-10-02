/* undefined __thiscall FUN_0047dde0(void * this, undefined4 * param_1) @ 0047dde0  24 bytes */
#include "th12.h"

void __fastcall FUN_0047dde0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return;
}


