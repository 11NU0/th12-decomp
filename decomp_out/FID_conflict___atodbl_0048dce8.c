/* int __cdecl FID_conflict:__atodbl(_CRT_FLOAT * _Result, char * _Str) @ 0048dce8  23 bytes */
#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __atodbl
    __atoflt
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)

{
  int iVar1;
  
  iVar1 = FID_conflict___atoflt_l(_Result,_Str,(_locale_t)0x0);
  return iVar1;
}


