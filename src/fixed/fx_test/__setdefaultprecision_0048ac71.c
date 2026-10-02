/* undefined __stdcall __setdefaultprecision(void) @ 0048ac71  40 bytes */

#include "th12.h"

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2008 Release */

void __stdcall __setdefaultprecision(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}


