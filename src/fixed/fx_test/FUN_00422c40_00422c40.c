/* undefined * __stdcall FUN_00422c40(void) @ 00422c40  69 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_00422c40(void)

{
  float *in_EAX;
  
  if ((_DAT_004d50cc & 1) == 0) {
    _DAT_004d50cc = _DAT_004d50cc | 1;
  }
  _DAT_004d50c0 = *in_EAX + 32.0 + 192.0;
  _DAT_004d50c4 = in_EAX[1] + 16.0;
  _DAT_004d50c8 = in_EAX[2];
  return &DAT_004d50c0;
}


