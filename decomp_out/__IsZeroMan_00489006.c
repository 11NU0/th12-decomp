/* undefined4 __cdecl __IsZeroMan(int param_1) @ 00489006  31 bytes */
#include "th12.h"

/* Library Function - Single Match
    __IsZeroMan
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl __IsZeroMan(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}


