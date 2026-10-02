/* noreturn void __cdecl _exit(int _Code) @ 00472ef5  22 bytes */
#include "th12.h"

/* Library Function - Single Match
    _exit
   
   Library: Visual Studio 2008 Release */

void __cdecl _exit(int _Code)

{
  _doexit(_Code,0,0);
  return;
}


