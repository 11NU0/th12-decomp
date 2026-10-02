/* int __cdecl __ismbbpunct(uint _C) @ 0048c7a6  24 bytes */
#include "th12.h"

/* Library Function - Single Match
    __ismbbpunct
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbpunct(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0x10,2);
  return iVar1;
}


