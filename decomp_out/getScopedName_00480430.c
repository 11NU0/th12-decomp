/* DName * __cdecl getScopedName(DName * param_1) @ 00480430  209 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScopedName(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getScopedName(DName *param_1)

{
  undefined4 *puVar1;
  DName *pDVar2;
  DName *pDVar3;
  DName *pDVar4;
  char *pcVar5;
  DName *pDVar6;
  DNameStatus DVar7;
  DName local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  param_1[4] = (DName)0x0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
  *(undefined4 *)param_1 = 0;
  puVar1 = (undefined4 *)getZName(local_c,1,0);
  FUN_0047dde0(param_1,puVar1);
  if ((param_1[4] == (DName)0x0) && (*DAT_004b4318 != '\0')) {
    if (*DAT_004b4318 == '@') goto LAB_004804b1;
    pDVar4 = local_c;
    pcVar5 = "::";
    pDVar3 = local_14;
    pDVar6 = param_1;
    pDVar2 = getScope(local_1c);
    pDVar3 = DName::operator+(pDVar2,pDVar3,pcVar5);
    pDVar4 = DName::operator+(pDVar3,pDVar4,pDVar6);
    FUN_0047dde0(param_1,(undefined4 *)pDVar4);
  }
  if (*DAT_004b4318 != '@') {
    if (*DAT_004b4318 == '\0') {
      if (*(int *)param_1 != 0) {
        pDVar4 = local_1c;
        pcVar5 = "::";
        pDVar3 = local_14;
        pDVar6 = param_1;
        pDVar2 = (DName *)DName::DName(local_c,1);
        pDVar3 = DName::operator+(pDVar2,pDVar3,pcVar5);
        pDVar4 = DName::operator+(pDVar3,pDVar4,pDVar6);
        FUN_0047dde0(param_1,(undefined4 *)pDVar4);
        return param_1;
      }
      DVar7 = 1;
    }
    else {
      DVar7 = 2;
    }
    DName::operator=(param_1,DVar7);
    return param_1;
  }
LAB_004804b1:
  DAT_004b4318 = DAT_004b4318 + 1;
  return param_1;
}


