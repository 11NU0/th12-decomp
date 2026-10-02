/* DName __cdecl getZName(DName * param_1, char param_2, char param_3) @ 0048023a  502 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getZName(bool,bool)
   
   Library: Visual Studio 2008 Release */

void __cdecl UnDecorator_getZName(DName *param_1,char param_2,char param_3)

{
  undefined4 stack0xfffffffc;
  char cVar1;
  DName *pDVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  DName *pDVar6;
  undefined4 *puVar7;
  uint unaff_ESI;
  char *unaff_EDI;
  char *pcVar8;
  DName local_3c [8];
  DName *local_34;
  DName local_30 [4];
  uint local_2c;
  DName local_28 [8];
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  cVar1 = *DAT_004b4318;
  local_34 = param_1;
  if ((int)cVar1 - 0x30U < 10) {
    DAT_004b4318 = DAT_004b4318 + 1;
    Replicator_operator_index(DAT_004b4310,param_1,(int)cVar1 - 0x30U);
    goto LAB_00480422;
  }
  local_20 = 0;
  local_1c = local_1c & 0xffff0000;
  if (cVar1 == '?') {
    pDVar2 = getTemplateName(local_28,'\0');
    local_20 = *(undefined4 *)pDVar2;
    local_1c = *(uint *)((int)pDVar2 + 4);
    pcVar8 = DAT_004b4318 + 1;
    if (*DAT_004b4318 != '@') {
      DName_operator_assign((DName *)&local_20,(*DAT_004b4318 != '\0') + 1);
      pcVar8 = DAT_004b4318;
    }
  }
  else {
    pcVar8 = "template-parameter-";
    uVar3 = und_strncmp((char *)0x13,unaff_EDI,unaff_ESI);
    if (uVar3 == 0) {
      DAT_004b4318 = DAT_004b4318 + 0x13;
    }
    else {
      pcVar8 = "generic-type-";
      uVar3 = und_strncmp((char *)0xd,unaff_EDI,unaff_ESI);
      if (uVar3 != 0) {
        if ((param_3 == '\0') || (cVar1 != '@')) {
          puVar7 = (undefined4 *)DName_DName(local_30,&DAT_004b4318,'@');
          local_20 = *puVar7;
          local_1c = puVar7[1];
          pcVar8 = DAT_004b4318;
        }
        else {
          local_1c = local_2c & 0xffff0000;
          DAT_004b4318 = DAT_004b4318 + 1;
          local_20 = 0;
          pcVar8 = DAT_004b4318;
        }
        goto LAB_004803fa;
      }
      DAT_004b4318 = DAT_004b4318 + 0xd;
    }
    getSignedDimension(local_28);
    if ((DAT_004b4328 & 0x4000) == 0) {
      DName_operator_assign((DName *)&local_20,"`");
      pDVar2 = local_30;
      pDVar6 = local_3c;
    }
    else {
      DName_getString(local_28,local_18,0x10);
      lVar4 = _atol(local_18);
      pcVar5 = (char *)(*DAT_004b432c)(lVar4);
      if (pcVar5 != (char *)0x0) {
        DName_operator_assign((DName *)&local_20,pcVar5);
        pcVar8 = DAT_004b4318;
        goto LAB_004803fa;
      }
      DName_operator_assign((DName *)&local_20,"`");
      pDVar2 = local_3c;
      pDVar6 = local_30;
    }
    pcVar5 = "\'";
    pDVar6 = DName_operator_add(pDVar6,pcVar8,local_28);
    pDVar2 = DName_operator_add(pDVar6,pDVar2,pcVar5);
    DName_operator_add_assign((DName *)&local_20,pDVar2);
    pcVar8 = DAT_004b4318;
  }
LAB_004803fa:
  DAT_004b4318 = pcVar8;
  if ((param_2 != '\0') && (*(int *)DAT_004b4310 != 9)) {
    Replicator_operator_add_assign(DAT_004b4310,(DName *)&local_20);
  }
  *(undefined4 *)local_34 = local_20;
  *(uint *)((int)local_34 + 4) = local_1c;
LAB_00480422:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


