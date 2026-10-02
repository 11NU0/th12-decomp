/* DName * __cdecl getScope(DName * param_1) @ 004814b0  624 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getScope(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getScope(DName *param_1)

{
  bool bVar1;
  DName *pDVar2;
  DName *pDVar3;
  DName *pDVar4;
  DName *pDVar5;
  char cVar6;
  char *pcVar7;
  DNameStatus DVar8;
  DName local_9c [8];
  DName local_94 [8];
  DName local_8c [8];
  DName local_84 [8];
  DName local_7c [8];
  undefined local_74 [8];
  DName local_6c [8];
  DName local_64 [8];
  DName local_5c [8];
  DName local_54 [8];
  DName local_4c [8];
  DName local_44 [8];
  DName local_3c [8];
  DName local_34 [8];
  DName local_2c [8];
  DName local_24 [8];
  DName local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  param_1[4] = (DName)0x0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
  *(undefined4 *)param_1 = 0;
  bVar1 = false;
LAB_004816c4:
  do {
    while( true ) {
      if (((param_1[4] != (DName)0x0) || (*DAT_004b4318 == '\0')) || (*DAT_004b4318 == '@')) {
        if (*DAT_004b4318 == '\0') {
          if (*(int *)param_1 != 0) {
            pDVar5 = local_1c;
            pcVar7 = "::";
            pDVar4 = local_24;
            pDVar2 = param_1;
            pDVar3 = (DName *)DName_DName(local_14,1);
            pDVar4 = DName_operator_add(pDVar3,pDVar4,pcVar7);
            pDVar5 = DName_operator_add(pDVar4,pDVar5,pDVar2);
            FUN_0047dde0(param_1,(undefined4 *)pDVar5);
            return param_1;
          }
          DVar8 = 1;
        }
        else {
          if (*DAT_004b4318 == '@') {
            return param_1;
          }
          DVar8 = 2;
        }
        DName_operator_assign(param_1,DVar8);
        return param_1;
      }
      if ((DAT_004b4330 != '\0') && (DAT_004b4331 == '\0')) {
        return param_1;
      }
      if (*(int *)param_1 != 0) {
        pDVar5 = DName_operator_add(local_94,"::",param_1);
        FUN_0047dde0(param_1,(undefined4 *)pDVar5);
        if (bVar1) {
          pDVar5 = DName_operator_add(local_7c,'[',param_1);
          FUN_0047dde0(param_1,(undefined4 *)pDVar5);
          bVar1 = false;
        }
      }
      pDVar5 = param_1;
      if (*DAT_004b4318 == '?') break;
      pDVar4 = local_24;
      pDVar2 = local_1c;
LAB_004816a9:
      pDVar2 = (DName *)getZName(pDVar2,1,0);
LAB_004816b5:
      pDVar5 = DName_operator_add(pDVar2,pDVar4,pDVar5);
      FUN_0047dde0(param_1,(undefined4 *)pDVar5);
    }
    pcVar7 = DAT_004b4318 + 1;
    cVar6 = *pcVar7;
    if (cVar6 == '$') {
      pDVar4 = local_6c;
      pDVar2 = local_14;
      goto LAB_004816a9;
    }
    if (cVar6 != '%') {
      if (cVar6 == '?') {
        if ((DAT_004b4318[2] != '_') || (DAT_004b4318[3] != '?')) {
          pDVar4 = local_64;
          cVar6 = '\'';
          pDVar2 = local_34;
          pDVar3 = local_3c;
          DAT_004b4318 = pcVar7;
          getDecoratedName(pDVar3);
          pDVar3 = DName_operator_add(local_4c,'`',pDVar3);
          pDVar2 = DName_operator_add(pDVar3,pDVar2,cVar6);
          goto LAB_004816b5;
        }
        pDVar5 = local_54;
        pDVar4 = local_2c;
        DAT_004b4318 = DAT_004b4318 + 2;
        pDVar2 = param_1;
        getOperatorName(pDVar4,'\0',(undefined *)0x0);
        pDVar5 = DName_operator_add(pDVar4,pDVar5,pDVar2);
        FUN_0047dde0(param_1,(undefined4 *)pDVar5);
        if (*DAT_004b4318 == '@') {
          DAT_004b4318 = DAT_004b4318 + 1;
        }
      }
      else {
        if (cVar6 == 'A') goto LAB_00481651;
        if (cVar6 != 'I') {
          pDVar4 = local_8c;
          DAT_004b4318 = pcVar7;
          pDVar2 = getLexicalFrame(local_9c);
          goto LAB_004816b5;
        }
        pDVar5 = local_84;
        cVar6 = ']';
        pDVar4 = local_44;
        DAT_004b4318 = DAT_004b4318 + 2;
        pDVar2 = param_1;
        pDVar3 = (DName *)getZName(local_74,1,0);
        pDVar4 = DName_operator_add(pDVar3,pDVar4,cVar6);
        pDVar5 = DName_operator_add(pDVar4,pDVar5,pDVar2);
        FUN_0047dde0(param_1,(undefined4 *)pDVar5);
        bVar1 = true;
      }
      goto LAB_004816c4;
    }
LAB_00481651:
    DAT_004b4318 = pcVar7;
    DName_DName(local_c,&DAT_004b4318,'@');
    pDVar5 = DName_operator_add(local_5c,"`anonymous namespace\'",param_1);
    FUN_0047dde0(param_1,(undefined4 *)pDVar5);
    if (*(int *)DAT_004b4310 != 9) {
      Replicator_operator_add_assign(DAT_004b4310,local_c);
    }
  } while( true );
}


