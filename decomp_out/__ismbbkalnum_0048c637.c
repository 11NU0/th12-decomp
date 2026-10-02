/* int __cdecl __ismbbkalnum(uint _C) @ 0048c637  24 bytes */
#include "th12.h"

/* Library Function - Single Match
    __ismbbkalnum
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkalnum(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,1);
  return iVar1;
}


