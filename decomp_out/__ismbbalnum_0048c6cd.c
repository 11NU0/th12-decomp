/* int __cdecl __ismbbalnum(uint _C) @ 0048c6cd  27 bytes */
#include "th12.h"

/* Library Function - Single Match
    __ismbbalnum
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbalnum(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0x107,1);
  return iVar1;
}


