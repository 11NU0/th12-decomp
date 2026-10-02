/* undefined __stdcall FUN_00428560(void) @ 00428560  73 bytes */
#include "th12.h"

void __stdcall FUN_00428560(void)

{
  undefined4 *in_EAX;
  
  FUN_00427ec0();
  *in_EAX = &PTR_LAB_004a0704;
  _memset(in_EAX + 0x115,0,0x208);
  in_EAX[0x120] = 0x41000000;
  FUN_004027e0(in_EAX + 0x198);
  FUN_004027e0(in_EAX + 0x2c5);
  return;
}


