/* undefined4 __thiscall FUN_004086b0(void * this, float param_1, float param_2, float param_3, float param_4) @ 004086b0  123 bytes */
#include "th12.h"

undefined4 __thiscall
FUN_004086b0(void *this,float param_1,float param_2,float param_3,float param_4)

{
                    /* WARNING: Load size is inaccurate */
  if (*(float *)this < param_1 - param_3 * 0.5) {
    return 1;
  }
                    /* WARNING: Load size is inaccurate */
  if (((*(float *)this <= param_1 + param_3 * 0.5) && (param_2 - param_4 * 0.5 <= *(float *)((int)this + 4)))
     && (*(float *)((int)this + 4) <= param_2 + param_4 * 0.5)) {
    return 0;
  }
  return 1;
}


