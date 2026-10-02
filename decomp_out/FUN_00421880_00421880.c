/* int __stdcall FUN_00421880(void) @ 00421880  37 bytes */
#include "th12.h"

int FUN_00421880(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x38) / 100;
  return iVar1 - iVar1 % 10;
}


