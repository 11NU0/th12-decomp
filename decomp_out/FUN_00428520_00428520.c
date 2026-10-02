/* undefined __stdcall FUN_00428520(void) @ 00428520  62 bytes */
#include "th12.h"

void FUN_00428520(void)

{
  undefined4 *in_EAX;
  
  FUN_00427ec0();
  *in_EAX = &PTR_FUN_004a0654;
  _memset(in_EAX + 0x115,0,0x1e8);
  FUN_004027e0(in_EAX + 399);
  FUN_004027e0(in_EAX + 700);
  return;
}


