/* undefined4 __stdcall FUN_00407b60(void) @ 00407b60  26 bytes */
#include "th12.h"

undefined4 FUN_00407b60(void)

{
  int in_EAX;
  
  if (((*(uint *)(in_EAX + 0x26f8) & 0x21) == 0) && ((*(uint *)(in_EAX + 0x26f8) & 0x6000000) == 0))
  {
    return 0;
  }
  return 1;
}


