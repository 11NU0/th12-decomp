/* int __cdecl __ismbbkprint(uint _C) @ 0048c668  24 bytes */
#include "th12.h"

/* Library Function - Single Match
    __ismbbkprint
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkprint(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,3);
  return iVar1;
}


