/* undefined __thiscall FUN_0044edf0(void * this, int param_1) @ 0044edf0  31 bytes */
#include "th12.h"

void __fastcall FUN_0044edf0(void *this,int param_1)

{
  *(int *)((int)this + 0x14) = param_1;
  if (0xf < *(uint *)((int)this + 0x18)) {
    *(undefined *)(*(int *)((int)this + 4) + param_1) = 0;
    return;
  }
  *(undefined *)((int)this + param_1 + 4) = 0;
  return;
}


