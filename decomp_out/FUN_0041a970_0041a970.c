/* ulonglong __thiscall FUN_0041a970(void * this, byte param_1) @ 0041a970  49 bytes */
#include "th12.h"

ulonglong __thiscall FUN_0041a970(void *this,byte param_1)

{
  void *this_00;
  int in_EAX;
  ulonglong uVar1;
  
  this_00 = *(void **)(*(int *)((int)this + 0x174c) + 4);
  if ((1 << (param_1 & 0x1f) & (uint)*(ushort *)(*(int *)((int)this_00 + 4) + 8)) != 0) {
    uVar1 = FUN_00468f70(this_00,in_EAX);
    return uVar1;
  }
  return CONCAT44(this_00,in_EAX);
}


