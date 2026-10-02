/* undefined __stdcall FUN_00464940(void) @ 00464940  48 bytes */
#include "th12.h"

void __stdcall FUN_00464940(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  
  piVar1 = in_EAX + 0x23;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    in_EAX[0x23] = 0;
  }
  *in_EAX = in_EAX[in_EAX[0x23] + 3];
  in_EAX[2] = in_EAX[in_EAX[0x23] + 0x13];
  in_EAX[0x35] = 0;
  return;
}


