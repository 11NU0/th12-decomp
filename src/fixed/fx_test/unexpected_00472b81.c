/* void __cdecl unexpected(void) @ 00472b81  19 bytes */

#include "th12.h"

/* Library Function - Single Match
    void __cdecl unexpected(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl unexpected(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if ((code *)p_Var1->_unexpected != (code *)0x0) {
    (*(code *)p_Var1->_unexpected)();
  }
  terminate();
  return;
}


