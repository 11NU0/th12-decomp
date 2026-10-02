/* DName * __cdecl getReturnType(DName * param_1, DName * param_2) @ 0047e46b  49 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getReturnType(class DName *)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getReturnType(DName *param_1,DName *param_2)

{
  if (*DAT_004b4318 == '@') {
    DAT_004b4318 = DAT_004b4318 + 1;
    DName_DName(param_1,param_2);
  }
  else {
    getDataType(param_1,param_2);
  }
  return param_1;
}


