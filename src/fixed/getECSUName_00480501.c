/* DName * __cdecl getECSUName(DName * param_1) @ 00480501  19 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getECSUName(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getECSUName(DName *param_1)

{
  getScopedName(param_1);
  return param_1;
}


