/* undefined4 * __thiscall FUN_0044bd20(void * this, byte param_1) @ 0044bd20  66 bytes */
#include "th12.h"

undefined4 * __thiscall FUN_0044bd20(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_004a22dc;
  if (*(HANDLE *)((int)this + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0xffffffff;
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined ***)this = &PTR_LAB_004a2304;
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return (undefined4 *)this;
}


