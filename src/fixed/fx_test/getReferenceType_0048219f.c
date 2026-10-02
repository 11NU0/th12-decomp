/* DName * __cdecl getReferenceType(DName * param_1, DName * param_2, DName * param_3) @ 0048219f  29 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getReferenceType(class DName const &,class
   DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getReferenceType(DName *param_1,DName *param_2,DName *param_3)

{
  getPtrRefType(param_1,param_2,param_3,0x26);
  return param_1;
}


