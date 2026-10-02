/* DName * __cdecl getThrowTypes(DName * param_1) @ 0047efb8  127 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getThrowTypes(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getThrowTypes(DName *param_1)

{
  DName *pDVar1;
  DName *this;
  DNameStatus DVar2;
  DName *pDVar3;
  char cVar4;
  DName local_14 [8];
  DName local_c [4];
  uint local_8;
  
  pDVar3 = param_1;
  if (*DAT_004b4318 == '\0') {
    cVar4 = ')';
    pDVar1 = local_14;
    DVar2 = 1;
    this = (DName *)DName_DName(local_c," throw(");
    pDVar1 = DName_operator_add(this,pDVar1,DVar2);
  }
  else {
    if (*DAT_004b4318 == 'Z') {
      DAT_004b4318 = DAT_004b4318 + 1;
      *(undefined4 *)param_1 = 0;
      *(uint *)(param_1 + 4) = local_8 & 0xffff0000;
      return param_1;
    }
    cVar4 = ')';
    pDVar1 = getArgumentTypes(local_c);
    pDVar1 = DName_operator_add(local_14," throw(",pDVar1);
  }
  DName_operator_add(pDVar1,pDVar3,cVar4);
  return param_1;
}


