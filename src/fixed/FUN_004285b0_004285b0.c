/* undefined __stdcall FUN_004285b0(void) @ 004285b0  62 bytes */
#include "th12.h"

void __stdcall FUN_004285b0(void)

{
  undefined4 *in_EAX;
  
  FUN_00427ec0();
  *in_EAX = &PTR_FUN_004a06ac;
  _memset(in_EAX + 0x115,0,0x1e0);
  FUN_004027e0(in_EAX + 0x18d);
  FUN_004027e0(in_EAX + 0x2ba);
  return;
}


