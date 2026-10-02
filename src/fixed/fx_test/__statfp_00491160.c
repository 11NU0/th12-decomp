/* int __stdcall __statfp(void) @ 00491160  16 bytes */

#include "th12.h"

/* Library Function - Single Match
    __statfp
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __stdcall __statfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}


