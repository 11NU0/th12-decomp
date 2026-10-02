/* undefined __stdcall FUN_00464900(void) @ 00464900  61 bytes */

#include "th12.h"

void __stdcall FUN_00464900(void)

{
  undefined4 *in_EAX;
  
  in_EAX[in_EAX[0x23] + 3] = *in_EAX;
  in_EAX[in_EAX[0x23] + 0x13] = in_EAX[2];
  in_EAX[0x23] = in_EAX[0x23] + 1;
  in_EAX[0x35] = 0;
  if (0xf < (int)in_EAX[0x23]) {
    in_EAX[0x23] = 0xf;
  }
  return;
}


