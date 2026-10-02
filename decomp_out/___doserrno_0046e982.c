/* ulong * __cdecl ___doserrno(void) @ 0046e982  19 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___doserrno
   
   Library: Visual Studio 2008 Release */

ulong * __cdecl ___doserrno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (ulong *)&DAT_004ad2ac;
  }
  return &p_Var1->_tdoserrno;
}


