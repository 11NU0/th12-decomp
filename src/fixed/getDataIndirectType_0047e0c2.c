/* DName * __cdecl getDataIndirectType(DName * param_1) @ 0047e0c2  53 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getDataIndirectType(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getDataIndirectType(DName *param_1)

{
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffff0000;
  local_10 = local_10 & 0xffff0000;
  local_c = 0;
  local_14 = 0;
  getDataIndirectType(param_1,(DName *)&local_14,0,(DName *)&local_c,0);
  return param_1;
}


