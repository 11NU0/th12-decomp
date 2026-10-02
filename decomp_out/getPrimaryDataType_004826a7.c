/* DName * __cdecl getPrimaryDataType(DName * param_1, DName * param_2) @ 004826a7  312 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPrimaryDataType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getPrimaryDataType(DName *param_1,DName *param_2)

{
  char cVar1;
  DName *pDVar2;
  char *pcVar3;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  cVar1 = *DAT_004b4318;
  local_8 = local_8 & 0xffff0000;
  local_c = 0;
  pcVar3 = DAT_004b4318;
  if (cVar1 != '\0') {
    if (cVar1 != '$') {
      if (cVar1 != 'A') {
        if (cVar1 != 'B') {
          getBasicDataType(param_1,param_2);
          return param_1;
        }
        DName::operator=((DName *)&local_c,"volatile");
        if (*(int *)param_2 != 0) {
          DName::operator+=((DName *)&local_c,' ');
        }
      }
      local_14 = *(undefined4 *)param_2;
      DAT_004b4318 = DAT_004b4318 + 1;
      local_10 = *(uint *)(param_2 + 4) | 0x100;
      getReferenceType(param_1,(DName *)&local_c,(DName *)&local_14);
      return param_1;
    }
    if (DAT_004b4318[1] == '$') {
      pcVar3 = DAT_004b4318 + 2;
      cVar1 = *pcVar3;
      if (cVar1 != '\0') {
        if (cVar1 == 'A') {
          DAT_004b4318 = DAT_004b4318 + 3;
          getFunctionIndirectType(param_1,param_2);
          return param_1;
        }
        if (cVar1 == 'B') {
          DAT_004b4318 = DAT_004b4318 + 3;
          getPtrRefDataType(param_1,param_2,1);
          return param_1;
        }
        if (cVar1 == 'C') {
          pDVar2 = local_1c;
          DAT_004b4318 = DAT_004b4318 + 3;
          local_c = 0;
          getDataIndirectType(pDVar2,param_2,0,(DName *)&local_c,0);
          getBasicDataType(param_1,pDVar2);
          return param_1;
        }
        goto LAB_00482745;
      }
    }
    else if (DAT_004b4318[1] != '\0') {
LAB_00482745:
      DAT_004b4318 = pcVar3;
      DName::DName(param_1,2);
      return param_1;
    }
  }
  DAT_004b4318 = pcVar3;
  operator+(param_1,1,param_2);
  return param_1;
}


