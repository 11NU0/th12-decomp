/* DName * __cdecl getDataType(DName * param_1, DName * param_2) @ 004827df  192 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getDataType(class DName *)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getDataType(DName *param_1,DName *param_2)

{
  char cVar1;
  DName *pDVar2;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  DName_DName((DName *)&local_c,param_2);
  cVar1 = *DAT_004b4318;
  if (cVar1 == '\0') {
    operator_add(param_1,1,(DName *)&local_c);
  }
  else if (cVar1 == '?') {
    DAT_004b4318 = DAT_004b4318 + 1;
    local_10 = local_10 & 0xffff0000;
    local_14 = 0;
    pDVar2 = local_1c;
    getDataIndirectType(pDVar2,(DName *)&local_c,0,(DName *)&local_14,0);
    local_c = *(int *)pDVar2;
    local_8 = *(undefined4 *)(pDVar2 + 4);
    getPrimaryDataType(param_1,(DName *)&local_c);
  }
  else if (cVar1 == 'X') {
    DAT_004b4318 = DAT_004b4318 + 1;
    if (local_c == 0) {
      DName_DName(param_1,"void");
    }
    else {
      operator_add(param_1,"void ",(DName *)&local_c);
    }
  }
  else {
    getPrimaryDataType(param_1,(DName *)&local_c);
  }
  return param_1;
}


