/* DName * __cdecl getSignedDimension(DName * param_1) @ 0047f57e  82 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getSignedDimension(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getSignedDimension(DName *param_1)

{
  DName *pDVar1;
  DName local_c [8];
  
  if (*DAT_004b4318 == '\0') {
    DName_DName(param_1,1);
  }
  else if (*DAT_004b4318 == '?') {
    DAT_004b4318 = DAT_004b4318 + 1;
    pDVar1 = getDimension(local_c,'\0');
    operator_add(param_1,'-',pDVar1);
  }
  else {
    getDimension(param_1,'\0');
  }
  return param_1;
}


