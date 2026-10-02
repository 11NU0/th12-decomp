/* undefined __cdecl __CopyMan(int param_1, undefined4 * param_2) @ 00488fd6  31 bytes */
#include "th12.h"

/* Library Function - Single Match
    __CopyMan
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __CopyMan(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 3;
  iVar1 = param_1 - (int)param_2;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


