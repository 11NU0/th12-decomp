/* DName * __cdecl getDimension(DName * param_1, char param_2) @ 0047ecb6  338 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDimension(bool)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getDimension(DName *param_1,char param_2)

{
  __uint64 _Var1;
  char *pcVar2;
  char cVar3;
  DName *pDVar4;
  longlong lVar5;
  DNameStatus DVar6;
  DName local_20 [8];
  DName local_18 [8];
  DName local_10 [4];
  int local_c;
  char *local_8;
  
  local_8 = (char *)0x0;
  if (*DAT_004b4318 == 'Q') {
    DAT_004b4318 = DAT_004b4318 + 1;
    local_8 = "`non-type-template-parameter";
  }
  cVar3 = *DAT_004b4318;
  if (cVar3 == '\0') {
    DName::DName(param_1,1);
    return param_1;
  }
  if (('/' < cVar3) && (cVar3 < ':')) {
    cVar3 = *DAT_004b4318;
    DAT_004b4318 = DAT_004b4318 + 1;
    if (local_8 == (char *)0x0) {
      pDVar4 = (DName *)DName::DName(local_20,(longlong)(cVar3 + -0x2f));
    }
    else {
      pDVar4 = (DName *)DName::DName(local_10,(longlong)(cVar3 + -0x2f));
      pDVar4 = operator+(local_18,local_8,pDVar4);
    }
    *(undefined4 *)param_1 = *(undefined4 *)pDVar4;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(pDVar4 + 4);
    return param_1;
  }
  _Var1 = 0;
  while( true ) {
    pcVar2 = DAT_004b4318;
    if (cVar3 == '@') break;
    if (cVar3 == '\0') {
      DVar6 = 1;
      goto LAB_0047ed9a;
    }
    if ((cVar3 < 'A') || ('P' < cVar3)) goto LAB_0047ed98;
    local_c = cVar3 + -0x41 >> 0x1f;
    lVar5 = __allmul((uint)_Var1,(int)(_Var1 >> 0x20),0x10,0);
    _Var1 = lVar5 + CONCAT44(local_c,cVar3 + -0x41);
    DAT_004b4318 = pcVar2 + 1;
    cVar3 = *DAT_004b4318;
  }
  cVar3 = *DAT_004b4318;
  DAT_004b4318 = DAT_004b4318 + 1;
  if (cVar3 != '@') {
LAB_0047ed98:
    DVar6 = 2;
LAB_0047ed9a:
    DName::DName(param_1,DVar6);
    return param_1;
  }
  if (param_2 == '\0') {
    if (local_8 == (char *)0x0) {
      pDVar4 = (DName *)DName::DName(local_10,_Var1);
      goto LAB_0047edf4;
    }
    pDVar4 = (DName *)DName::DName(local_20,_Var1);
  }
  else {
    if (local_8 == (char *)0x0) {
      pDVar4 = (DName *)DName::DName(local_10,_Var1);
      goto LAB_0047edf4;
    }
    pDVar4 = (DName *)DName::DName(local_20,_Var1);
  }
  pDVar4 = operator+(local_18,local_8,pDVar4);
LAB_0047edf4:
  *(undefined4 *)param_1 = *(undefined4 *)pDVar4;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(pDVar4 + 4);
  return param_1;
}


