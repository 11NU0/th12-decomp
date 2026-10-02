/* undefined __thiscall FUN_0040e730(void * this, int param_1) @ 0040e730  41 bytes */
#include "th12.h"

void __thiscall FUN_0040e730(void *this,int param_1)

{
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1 / 10;
  if (999999999 < *(int *)((int)this + 4)) {
    *(undefined4 *)((int)this + 4) = 999999999;
  }
  return;
}


