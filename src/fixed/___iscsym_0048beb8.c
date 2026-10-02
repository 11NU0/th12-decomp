/* int __cdecl ___iscsym(int _C) @ 0048beb8  33 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___iscsym
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl ___iscsym(int _C)

{
  int iVar1;
  
  iVar1 = _isalnum(_C & 0xff);
  if ((iVar1 == 0) && ((char)_C != '_')) {
    return 0;
  }
  return 1;
}


