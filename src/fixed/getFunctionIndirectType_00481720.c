/* DName * __cdecl getFunctionIndirectType(DName * param_1, DName * param_2) @ 00481720  852 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getFunctionIndirectType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getFunctionIndirectType(DName *param_1,DName *param_2)

{
  int iVar1;
  char *pcVar2;
  DName *pDVar3;
  DName *pDVar4;
  undefined4 *puVar5;
  DName *pDVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  DNameStatus DVar11;
  DName local_34 [8];
  DName local_2c [8];
  DName local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar10 = *DAT_004b4318;
  if (cVar10 == '\0') {
    DName_operator_add(param_1,1,param_2);
    return param_1;
  }
  if (((cVar10 < '6') || ('9' < cVar10)) && (cVar10 != '_')) {
    DName_DName(param_1,2);
    return param_1;
  }
  uVar7 = (int)cVar10 - 0x36;
  pcVar2 = DAT_004b4318 + 1;
  if (uVar7 == 0x29) {
    cVar10 = *pcVar2;
    if (cVar10 == '\0') {
      DAT_004b4318 = pcVar2;
      DName_operator_add(param_1,1,param_2);
      return param_1;
    }
    uVar7 = (int)cVar10 - 0x3d;
    DAT_004b4318 = DAT_004b4318 + 2;
    if ((int)uVar7 < 4) goto LAB_004817ac;
    bVar9 = SBORROW4(uVar7,7);
    iVar1 = cVar10 + -0x44;
    bVar8 = uVar7 == 7;
LAB_004817aa:
    if (!bVar8 && bVar9 == iVar1 < 0) goto LAB_004817ac;
  }
  else {
    DAT_004b4318 = pcVar2;
    if (-1 < (int)uVar7) {
      bVar9 = SBORROW4(uVar7,3);
      iVar1 = cVar10 + -0x39;
      bVar8 = uVar7 == 3;
      goto LAB_004817aa;
    }
LAB_004817ac:
    uVar7 = 0xffffffff;
  }
  if (uVar7 == 0xffffffff) {
    DName_DName(param_1,2);
    return param_1;
  }
  local_14 = 0;
  local_10 = local_10 & 0xffff0000;
  local_c = *(undefined4 *)param_2;
  local_8 = *(undefined4 *)((int)param_2 + 4);
  if ((uVar7 & 2) != 0) {
    pDVar3 = DName_operator_add(local_24,"::",(DName *)&local_c);
    local_c = *(undefined4 *)pDVar3;
    local_8 = *(undefined4 *)((int)pDVar3 + 4);
    pDVar3 = (DName *)&local_c;
    if (*DAT_004b4318 == '\0') {
      pDVar3 = DName_operator_add(local_34,1,pDVar3);
    }
    else {
      pDVar6 = local_24;
      pDVar4 = getScope(local_2c);
      pDVar4 = DName_operator_add(local_34,' ',pDVar4);
      pDVar3 = DName_operator_add(pDVar4,pDVar6,pDVar3);
    }
    local_c = *(undefined4 *)pDVar3;
    local_8 = *(undefined4 *)((int)pDVar3 + 4);
    if (*DAT_004b4318 == '\0') {
      DName_operator_add(param_1,1,(DName *)&local_c);
      return param_1;
    }
    if (*DAT_004b4318 != '@') {
      DVar11 = 2;
      goto LAB_00481a64;
    }
    DAT_004b4318 = DAT_004b4318 + 1;
    if (((byte)DAT_004b4328 & 0x60) == 0x60) {
      pDVar3 = (DName *)getThisType(local_34);
      DName_operator_or_assign((DName *)&local_14,pDVar3);
    }
    else {
      puVar5 = (undefined4 *)getThisType(local_34);
      local_14 = *puVar5;
      local_10 = puVar5[1];
    }
  }
  if ((uVar7 & 4) != 0) {
    if ((~(DAT_004b4328 >> 1) & 1) == 0) {
      pDVar3 = getBasedType(local_34);
      DName_operator_or_assign((DName *)&local_c,pDVar3);
    }
    else {
      pDVar3 = (DName *)&local_c;
      pDVar6 = local_34;
      pDVar4 = getBasedType(local_2c);
      pDVar4 = DName_operator_add(local_24,' ',pDVar4);
      pDVar3 = DName_operator_add(pDVar4,pDVar6,pDVar3);
      local_c = *(undefined4 *)pDVar3;
      local_8 = *(undefined4 *)((int)pDVar3 + 4);
    }
  }
  if ((~(DAT_004b4328 >> 1) & 1) == 0) {
    pDVar3 = getCallingConvention(local_34);
    DName_operator_or_assign((DName *)&local_c,pDVar3);
  }
  else {
    pDVar3 = (DName *)&local_c;
    pDVar6 = local_34;
    pDVar4 = getCallingConvention(local_2c);
    pDVar3 = DName_operator_add(pDVar4,pDVar6,pDVar3);
    local_c = *(undefined4 *)pDVar3;
    local_8 = *(undefined4 *)((int)pDVar3 + 4);
  }
  if (*(int *)param_2 != 0) {
    cVar10 = ')';
    pDVar3 = local_34;
    pDVar6 = DName_operator_add(local_2c,'(',(DName *)&local_c);
    pDVar3 = DName_operator_add(pDVar6,pDVar3,cVar10);
    local_c = *(undefined4 *)pDVar3;
    local_8 = *(undefined4 *)((int)pDVar3 + 4);
  }
  pDVar3 = (DName *)HeapManager_getMemory((HeapManager *)&DAT_004b42f8,8,0);
  if (pDVar3 == (DName *)0x0) {
    pDVar3 = (DName *)0x0;
  }
  else {
    pDVar3[4] = (DName)0x0;
    *(uint *)((int)pDVar3 + 4) = *(uint *)((int)pDVar3 + 4) & 0xffff00ff;
    *(undefined4 *)pDVar3 = 0;
  }
  getReturnType((DName *)&local_1c,pDVar3);
  cVar10 = ')';
  pDVar6 = local_34;
  pDVar4 = getArgumentTypes(local_2c);
  pDVar4 = DName_operator_add(local_24,'(',pDVar4);
  pDVar6 = DName_operator_add(pDVar4,pDVar6,cVar10);
  DName_operator_add_assign((DName *)&local_c,pDVar6);
  if ((((byte)DAT_004b4328 & 0x60) != 0x60) && ((uVar7 & 2) != 0)) {
    DName_operator_add_assign((DName *)&local_c,(DName *)&local_14);
  }
  if ((~(DAT_004b4328 >> 8) & 1) == 0) {
    pDVar6 = getThrowTypes(local_34);
    DName_operator_or_assign((DName *)&local_c,pDVar6);
  }
  else {
    pDVar6 = getThrowTypes(local_34);
    DName_operator_add_assign((DName *)&local_c,pDVar6);
  }
  if (pDVar3 != (DName *)0x0) {
    *(undefined4 *)pDVar3 = local_c;
    *(undefined4 *)((int)pDVar3 + 4) = local_8;
    *(undefined4 *)param_1 = local_1c;
    *(undefined4 *)((int)param_1 + 4) = local_18;
    return param_1;
  }
  DVar11 = 3;
LAB_00481a64:
  DName_DName(param_1,DVar11);
  return param_1;
}


