/* DName * __cdecl getDisplacement(DName * param_1) @ 0047f361  22 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getDisplacement(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getDisplacement(DName *param_1)

{
  getDimension(param_1,'\x01');
  return param_1;
}


