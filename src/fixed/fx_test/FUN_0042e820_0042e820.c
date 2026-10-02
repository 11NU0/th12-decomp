/* undefined4 __thiscall FUN_0042e820(void * this, float param_1, float param_2) @ 0042e820  93 bytes */

#include "th12.h"

undefined4 __thiscall FUN_0042e820(void *this,float param_1,float param_2)

{
  float fVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  if ((((param_1 + *this < -192.0 == (param_1 + *this == -192.0)) && (*this - param_1 < 192.0)) &&
      (fVar1 = param_2 + *(float *)((int)this + 4), fVar1 < 0.0 == (fVar1 == 0.0))) &&
     (*(float *)((int)this + 4) - param_2 < 448.0)) {
    return 0;
  }
  return 1;
}


