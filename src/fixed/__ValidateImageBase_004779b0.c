/* BOOL __cdecl __ValidateImageBase(PBYTE pImageBase) @ 004779b0  53 bytes */
#include "th12.h"

/* Library Function - Single Match
    __ValidateImageBase
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)((int)pImageBase + 0x3c)) == 0x4550)) {
    return (uint)(*(short *)((int)(pImageBase + *(int *)((int)pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}


