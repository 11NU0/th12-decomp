/* undefined4 __thiscall FUN_00407700(void * this, int param_1) @ 00407700  29 bytes */

#include "th12.h"

undefined4 __thiscall FUN_00407700(void *this,int param_1)

{
                    /* WARNING: Load size is inaccurate */
  if ((*(int *)((int)this + 4) != *this) && (*(int *)((int)this + 4) % param_1 == 0)) {
    return 1;
  }
  return 0;
}


