/* int __cdecl __ismbbkpunct(uint _C) @ 0048c699  24 bytes */
#include "th12.h"

/* Library Function - Single Match
    __ismbbkpunct
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkpunct(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,2);
  return iVar1;
}


