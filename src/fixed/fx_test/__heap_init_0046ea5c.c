/* int __cdecl __heap_init(void) @ 0046ea5c  48 bytes */

#include "th12.h"

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2008 Release */

int __cdecl __heap_init(void)

{
  int in_stack_00000004;
  
  DAT_004b3c04 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_004b3c04 == (HANDLE)0x0) {
    return 0;
  }
  DAT_004d6458 = 1;
  return 1;
}


