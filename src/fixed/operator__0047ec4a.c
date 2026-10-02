/* DName * __cdecl operator+(DName * param_1, char * param_2, DName * param_3) @ 0047ec4a  36 bytes */
#include "th12.h"

/* Library Function - Single Match
    class DName __cdecl DName_operator_add(char const *,class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl DName_operator_add(DName *param_1,char *param_2,DName *param_3)

{
  DName *(float *)this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = param_1;
  this = (DName *)DName_DName(local_c,param_2);
  DName_operator_add(this,pDVar1,param_3);
  return param_1;
}


