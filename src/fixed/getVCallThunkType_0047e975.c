/* DName * __cdecl getVCallThunkType(DName * param_1) @ 0047e975  57 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getVCallThunkType(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getVCallThunkType(DName *param_1)

{
  DNameStatus DVar1;
  
  if (*DAT_004b4318 == '\0') {
    DVar1 = 1;
  }
  else {
    if (*DAT_004b4318 == 'A') {
      DAT_004b4318 = DAT_004b4318 + 1;
      DName_DName(param_1,"{flat}");
      return param_1;
    }
    DVar1 = 2;
  }
  DName_DName(param_1,DVar1);
  return param_1;
}


