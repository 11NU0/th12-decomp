/* DName * __cdecl getPointerTypeArray(DName * param_1, DName * param_2, DName * param_3) @ 00482182  29 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getPointerTypeArray(class DName const &,class
   DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getPointerTypeArray(DName *param_1,DName *param_2,DName *param_3)

{
  getPtrRefType(param_1,param_2,param_3,0);
  return param_1;
}


