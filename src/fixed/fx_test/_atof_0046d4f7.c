/* double __cdecl _atof(char * _String) @ 0046d4f7  19 bytes */

#include "th12.h"

/* Library Function - Single Match
    _atof
   
   Library: Visual Studio 2008 Release */

double __cdecl _atof(char *_String)

{
  double dVar1;
  
  dVar1 = __atof_l(_String,(_locale_t)0x0);
  return dVar1;
}


