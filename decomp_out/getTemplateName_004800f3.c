/* DName * __cdecl getTemplateName(DName * param_1, char param_2) @ 004800f3  327 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateName(bool)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getTemplateName(DName *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  DName *pDVar5;
  undefined4 local_a4 [11];
  undefined4 local_78 [11];
  undefined4 local_4c [11];
  DName local_20 [8];
  DName local_18 [8];
  int *local_10;
  undefined4 local_c;
  char local_5;
  
  uVar3 = DAT_004b4314;
  uVar2 = DAT_004b4310;
  uVar1 = DAT_004b430c;
  if ((*DAT_004b4318 == '?') && (DAT_004b4318[1] == '$')) {
    local_78[0] = 0xffffffff;
    local_4c[0] = 0xffffffff;
    local_a4[0] = 0xffffffff;
    DAT_004b430c = local_78;
    DAT_004b4310 = local_4c;
    DAT_004b4314 = local_a4;
    local_5 = '\0';
    if (DAT_004b4318[2] == '?') {
      DAT_004b4318 = DAT_004b4318 + 3;
      pDVar5 = local_18;
      getOperatorName(pDVar5,'\x01',&local_5);
    }
    else {
      DAT_004b4318 = DAT_004b4318 + 2;
      pDVar5 = (DName *)getZName(local_18,1,1);
    }
    local_10 = *(int **)pDVar5;
    local_c = *(undefined4 *)(pDVar5 + 4);
    if (local_10 == (int *)0x0) {
      DAT_004b4330 = 1;
    }
    if (local_5 == '\0') {
      pDVar5 = (DName *)getTemplateArgumentList(local_18);
      pDVar5 = operator+(local_20,'<',pDVar5);
      DName::operator+=((DName *)&local_10,pDVar5);
      if (local_10 != (int *)0x0) {
        cVar4 = (**(code **)(*local_10 + 4))();
        if (cVar4 == '>') {
          DName::operator+=((DName *)&local_10,' ');
        }
      }
      DName::operator+=((DName *)&local_10,'>');
      if ((param_2 != '\0') && (*DAT_004b4318 != '\0')) {
        DAT_004b4318 = DAT_004b4318 + 1;
      }
    }
    DAT_004b430c = (undefined4 *)uVar1;
    DAT_004b4310 = (undefined4 *)uVar2;
    DAT_004b4314 = (undefined4 *)uVar3;
    *(int **)param_1 = local_10;
    *(undefined4 *)(param_1 + 4) = local_c;
    return param_1;
  }
  DName::DName(param_1,2);
  return param_1;
}


