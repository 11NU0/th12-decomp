/* bool __stdcall FUN_0040d710(void) @ 0040d710  82 bytes */
#include "th12.h"

bool __stdcall FUN_0040d710(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)((int)in_EAX + 0xa8);
  return iVar1 / 100000 + -0x16 !=
         ((iVar1 / 100) % 1000 + 0x3a6) % 1000 + (iVar1 % 100 + 0x43) % 100;
}


