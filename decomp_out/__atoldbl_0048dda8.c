/* int __cdecl __atoldbl(_LDOUBLE * _Result, char * _Str) @ 0048dda8  23 bytes */
#include "th12.h"

/* Library Function - Single Match
    __atoldbl
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __atoldbl(_LDOUBLE *_Result,char *_Str)

{
  int iVar1;
  
  iVar1 = __atoldbl_l(_Result,_Str,(_locale_t)0x0);
  return iVar1;
}


