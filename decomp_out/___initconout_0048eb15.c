/* void __cdecl ___initconout(void) @ 0048eb15  31 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2008 Release */

void __cdecl ___initconout(void)

{
  DAT_004ae424 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}


