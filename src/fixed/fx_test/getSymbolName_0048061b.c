/* undefined4 __cdecl getSymbolName(undefined4 param_1) @ 0048061b  74 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getSymbolName(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getSymbolName(DName *param_1)

{
  if (*DAT_004b4318 == '?') {
    if (DAT_004b4318[1] == '$') {
      getTemplateName(param_1,'\x01');
    }
    else {
      DAT_004b4318 = DAT_004b4318 + 1;
      getOperatorName(param_1,'\0',(undefined *)0x0);
    }
  }
  else {
    getZName(param_1,1,0);
  }
  return param_1;
}


