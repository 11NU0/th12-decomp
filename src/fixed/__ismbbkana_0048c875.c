/* int __cdecl __ismbbkana(uint _C) @ 0048c875  19 bytes */
#include "th12.h"

/* Library Function - Single Match
    __ismbbkana
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkana(uint _C)

{
  int iVar1;
  
  iVar1 = __ismbbkana_l(_C,(_locale_t)0x0);
  return iVar1;
}


