/* int __cdecl __positive(double * arg) @ 0048a22e  28 bytes */

#include "th12.h"

/* Library Function - Single Match
    __positive
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __positive(double *arg)

{
  if (0.0 < *arg != (*arg == 0.0)) {
    return 1;
  }
  return 0;
}


