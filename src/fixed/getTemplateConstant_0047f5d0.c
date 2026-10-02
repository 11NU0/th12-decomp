/* DName __cdecl getTemplateConstant(DName * param_1) @ 0047f5d0  717 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getTemplateConstant(void)
   
   Library: Visual Studio 2008 Release */

void __cdecl UnDecorator_getTemplateConstant(DName *param_1)

{
  undefined4 stack0xfffffffc;
  char *pcVar1;
  DName *(float *)this;
  DName *pDVar2;
  long lVar3;
  DName *pDVar4;
  char *pcVar5;
  char cVar6;
  DNameStatus DVar7;
  DName local_d4 [8];
  DName local_cc [8];
  DName local_c4 [8];
  DName local_bc [8];
  DName local_b4 [8];
  DName local_ac [8];
  DName local_a4 [8];
  DName local_9c [8];
  DName local_94 [8];
  DName local_8c [8];
  DName local_84 [4];
  char local_80;
  char local_7c;
  char local_7b;
  char local_7a;
  char local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  pcVar1 = DAT_004b4318;
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  cVar6 = *DAT_004b4318;
  DAT_004b4318 = DAT_004b4318 + 1;
  if (cVar6 < 'E') {
    if (cVar6 == 'D') {
LAB_0047f761:
      getSignedDimension(local_84);
      if ((DAT_004b4328 & 0x4000) != 0) {
        DName_getString(local_84,local_18,0x10);
        lVar3 = _atol(local_18);
        pcVar1 = (char *)(*DAT_004b432c)(lVar3);
        if (pcVar1 != (char *)0x0) {
LAB_0047f6cd:
          DName_DName(param_1,pcVar1);
          goto LAB_0047f88c;
        }
      }
      pcVar1 = "\'";
      if (cVar6 == 'D') {
        pcVar5 = "`template-parameter";
        pDVar4 = local_8c;
      }
      else {
        pcVar5 = "`non-type-template-parameter";
        pDVar4 = local_cc;
      }
      pDVar4 = DName_operator_add(pDVar4,pcVar5,local_84);
      DName_operator_add(pDVar4,param_1,pcVar1);
      goto LAB_0047f88c;
    }
    if (cVar6 != '\0') {
      if (cVar6 == '0') {
        getSignedDimension(param_1);
        goto LAB_0047f88c;
      }
      if (cVar6 == '1') {
        if (*DAT_004b4318 == '@') {
          DAT_004b4318 = pcVar1 + 2;
          pcVar1 = "NULL";
          goto LAB_0047f6cd;
        }
        pDVar4 = local_9c;
        getDecoratedName(pDVar4);
        pDVar2 = (DName *)DName_DName(local_bc,"&");
LAB_0047f6ac:
        DName_operator_add(pDVar2,param_1,pDVar4);
        goto LAB_0047f88c;
      }
      if (cVar6 == '2') {
        getSignedDimension(local_84);
        getSignedDimension((DName *)&local_10);
        pcVar1 = DAT_004b4318;
        if (('\x01' < local_80) || ('\x01' < (char)local_c)) goto LAB_0047f70b;
        pcVar1 = DName_getString(local_84,&local_7b,100);
        if (pcVar1 != (char *)0x0) {
          local_7c = local_7b;
          if (local_7b == '-') {
            local_7b = local_7a;
            local_7a = '.';
          }
          else {
            local_7b = '.';
          }
          pDVar4 = (DName *)&local_10;
          cVar6 = 'e';
          pDVar2 = local_ac;
          this = (DName *)DName_DName(local_d4,&local_7c);
          pDVar2 = DName_operator_add(this,pDVar2,cVar6);
          goto LAB_0047f6ac;
        }
      }
      goto LAB_0047f660;
    }
LAB_0047f70b:
    DAT_004b4318 = pcVar1;
    DVar7 = 1;
  }
  else {
    if (cVar6 == 'E') {
      getDecoratedName(param_1);
      goto LAB_0047f88c;
    }
    if ('E' < cVar6) {
      if (cVar6 < 'K') {
        DName_DName(local_84,'{');
        if (('G' < cVar6) && (cVar6 < 'K')) {
          pDVar4 = local_94;
          getDecoratedName(pDVar4);
          DName_operator_add_assign(local_84,pDVar4);
          DName_operator_add_assign(local_84,',');
        }
        if (cVar6 == 'F') {
LAB_0047f842:
          pDVar4 = getSignedDimension(local_b4);
          DName_operator_add_assign(local_84,pDVar4);
          DName_operator_add_assign(local_84,',');
LAB_0047f862:
          pDVar4 = getSignedDimension(local_c4);
          DName_operator_add_assign(local_84,pDVar4);
        }
        else {
          if (cVar6 == 'G') {
LAB_0047f822:
            pDVar4 = getSignedDimension(local_a4);
            DName_operator_add_assign(local_84,pDVar4);
            DName_operator_add_assign(local_84,',');
            goto LAB_0047f842;
          }
          if (cVar6 == 'H') goto LAB_0047f862;
          if (cVar6 == 'I') goto LAB_0047f842;
          if (cVar6 == 'J') goto LAB_0047f822;
        }
        DName_operator_add(local_84,param_1,'}');
        goto LAB_0047f88c;
      }
      if (cVar6 == 'Q') goto LAB_0047f761;
      if (cVar6 == 'R') {
        getZName(&local_10,0,0);
        getSignedDimension(local_84);
        *(undefined4 *)param_1 = local_10;
        *(undefined4 *)((int)param_1 + 4) = local_c;
        goto LAB_0047f88c;
      }
    }
LAB_0047f660:
    DVar7 = 2;
  }
  DName_DName(param_1,DVar7);
LAB_0047f88c:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


