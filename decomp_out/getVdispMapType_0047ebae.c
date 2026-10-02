/* DName * __cdecl getVdispMapType(DName * param_1, undefined4 * param_2) @ 0047ebae  84 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVdispMapType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getVdispMapType(DName *param_1,undefined4 *param_2)

{
  DName *pDVar1;
  DName local_c [8];
  
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = param_2[1];
  DName::operator+=(param_1,"{for ");
  pDVar1 = getScope(local_c);
  DName::operator+=(param_1,pDVar1);
  DName::operator+=(param_1,'}');
  if (*DAT_004b4318 == '@') {
    DAT_004b4318 = DAT_004b4318 + 1;
  }
  return param_1;
}


