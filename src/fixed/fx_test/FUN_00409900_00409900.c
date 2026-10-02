/* undefined4 __thiscall FUN_00409900(void * this, float param_1, float param_2) @ 00409900  103 bytes */

#include "th12.h"

undefined4 __thiscall FUN_00409900(void *this,float param_1,float param_2)

{
  float fVar1;
  
                    /* WARNING: Load size is inaccurate */
  fVar1 = *this + param_1 * 0.5;
                    /* WARNING: Load size is inaccurate */
  if ((((fVar1 < -192.0 == (fVar1 == -192.0)) && (*this - param_1 * 0.5 < 192.0)) &&
      (fVar1 = *(float *)((int)this + 4) + param_2 * 0.5, fVar1 < -64.0 == (fVar1 == -64.0))) &&
     (*(float *)((int)this + 4) - param_2 * 0.5 < 448.0)) {
    return 0;
  }
  return 1;
}


