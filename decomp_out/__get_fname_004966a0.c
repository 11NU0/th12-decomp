/* undefined * __cdecl __get_fname(int param_1) @ 004966a0  38 bytes */
#include "th12.h"

/* Library Function - Single Match
    __get_fname
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined * __cdecl __get_fname(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_004b37a8)[iVar1 * 2] == param_1) {
      return (&PTR_DAT_004b37ac)[iVar1 * 2];
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  return (undefined *)0x0;
}


