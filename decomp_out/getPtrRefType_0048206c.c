/* DName * __cdecl getPtrRefType(DName * param_1, DName * param_2, DName * param_3, undefined4 param_4) @ 0048206c  249 bytes */
#include "th12.h"

/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefType(class DName const &,class DName
   const &,char)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl
UnDecorator::getPtrRefType(DName *param_1,DName *param_2,DName *param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = *DAT_004b4318;
  cVar2 = (char)param_4;
  if (cVar1 == '\0') {
    DName::DName((DName *)&local_c,1);
    DName::operator+=((DName *)&local_c,cVar2);
    if (*(int *)param_2 != 0) {
      DName::operator+=((DName *)&local_c,param_2);
    }
    if (*(int *)param_3 != 0) {
      if (*(int *)param_2 != 0) {
        DName::operator+=((DName *)&local_c,' ');
      }
      DName::operator+=((DName *)&local_c,param_3);
    }
    *(undefined4 *)param_1 = local_c;
    *(undefined4 *)(param_1 + 4) = local_8;
  }
  else if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    getDataIndirectType((DName *)&local_c,param_3,param_4,param_2,0);
    getPtrRefDataType(param_1,(DName *)&local_c,(uint)(cVar2 == '*'));
  }
  else {
    DName::DName((DName *)&local_c,cVar2);
    if ((*(int *)param_2 != 0) &&
       ((*(int *)param_3 == 0 || ((*(uint *)(param_3 + 4) & 0x100) == 0)))) {
      DName::operator+=((DName *)&local_c,param_2);
    }
    if (*(int *)param_3 != 0) {
      DName::operator+=((DName *)&local_c,param_3);
    }
    getFunctionIndirectType(param_1,(DName *)&local_c);
  }
  return param_1;
}


