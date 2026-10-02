/* DName * __cdecl getVbTableType(DName * param_1, undefined4 * param_2) @ 0047f97b  23 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getVbTableType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getVbTableType(DName *param_1,undefined4 *param_2)

{
  getVfTableType(param_1,param_2);
  return param_1;
}


