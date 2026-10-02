/* undefined4 * __thiscall FUN_0044cf90(void * this, byte param_1) @ 0044cf90  69 bytes */
#include "th12.h"

undefined4 * __thiscall FUN_0044cf90(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_LAB_004a23d4;
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
    _free(*(void **)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_LAB_004a2304;
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (undefined4 *)this;
}


