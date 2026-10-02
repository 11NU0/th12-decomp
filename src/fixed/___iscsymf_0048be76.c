/* int __cdecl ___iscsymf(int _C) @ 0048be76  31 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___iscsymf
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl ___iscsymf(int _C)

{
  int iVar1;
  
  iVar1 = _isalpha(_C);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}


