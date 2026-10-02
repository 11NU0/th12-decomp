/* DName * __cdecl getDecoratedName(DName * param_1) @ 00481298  536 bytes */
#include "th12.h"

/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDecoratedName(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getDecoratedName(DName *param_1)

{
  char *pcVar1;
  DName *pDVar2;
  DName *pDVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  DName *pDVar7;
  DNameStatus DVar8;
  DName local_28 [8];
  DName local_20 [8];
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if ((DAT_004b4328 & 0x2000) != 0) {
    DAT_004b4328 = DAT_004b4328 & 0xffffdfff;
    getDataType((DName *)&local_18,(DName *)0x0);
    DAT_004b4328 = DAT_004b4328 | 0x2000;
LAB_004812cd:
    *(int *)param_1 = local_18;
    *(uint *)(param_1 + 4) = local_14;
    return param_1;
  }
  if (*DAT_004b4318 == '?') {
    pcVar1 = DAT_004b4318 + 1;
    if ((*pcVar1 == '?') && (DAT_004b4318[2] == '?')) {
      DAT_004b4318 = pcVar1;
      getDecoratedName((DName *)&local_18);
      for (; *DAT_004b4318 != '\0'; DAT_004b4318 = DAT_004b4318 + 1) {
      }
      goto LAB_004812cd;
    }
    DAT_004b4318 = pcVar1;
    getSymbolName(&local_10);
    uVar4 = local_c;
    iVar5 = local_10;
    if ((local_10 == 0) || ((local_c & 0x200) == 0)) {
      local_8 = 0;
    }
    else {
      local_8 = 1;
    }
    uVar6 = local_c >> 0xf;
    if ('\x01' < (char)local_c) goto LAB_00481350;
    if (((*DAT_004b4318 != '\0') && (*DAT_004b4318 != '@')) &&
       (getScope((DName *)&local_18), local_18 != 0)) {
      if (DAT_004b4330 == '\0') {
        pDVar2 = local_28;
        pDVar3 = local_20;
      }
      else {
        DAT_004b4330 = '\0';
        pDVar2 = DName::operator+((DName *)&local_10,local_20,(DName *)&local_18);
        iVar5 = *(int *)pDVar2;
        uVar4 = *(uint *)(pDVar2 + 4);
        local_10 = iVar5;
        local_c = uVar4;
        if (*DAT_004b4318 == '@') goto LAB_0048140a;
        pDVar2 = getScope(local_20);
        local_18 = *(int *)pDVar2;
        local_14 = *(uint *)(pDVar2 + 4);
        pDVar2 = local_20;
        pDVar3 = local_28;
      }
      pDVar7 = (DName *)&local_10;
      pDVar3 = DName::operator+((DName *)&local_18,pDVar3,"::");
      pDVar2 = DName::operator+(pDVar3,pDVar2,pDVar7);
      uVar4 = *(uint *)(pDVar2 + 4);
      iVar5 = *(int *)pDVar2;
      local_10 = iVar5;
      local_c = uVar4;
    }
LAB_0048140a:
    if ((local_8 != 0) && (iVar5 != 0)) {
      uVar4 = uVar4 | 0x200;
      local_c = uVar4;
    }
    if ((uVar6 & 1) != 0) {
      uVar4 = uVar4 | 0x8000;
      local_c = uVar4;
    }
    if ((iVar5 == 0) || ((uVar4 & 0x1000) != 0)) goto LAB_00481350;
    if (*DAT_004b4318 != '\0') {
      if (*DAT_004b4318 != '@') goto LAB_0048144f;
      DAT_004b4318 = DAT_004b4318 + 1;
    }
    if ((((DAT_004b4328 & 0x1000) == 0) || (local_8 != 0)) || ((uVar4 & 0x8000) != 0)) {
      composeDeclaration(param_1,(DName *)&local_10);
      return param_1;
    }
    local_18 = 0;
    local_14 = local_14 & 0xffff0000;
    composeDeclaration(local_28,(DName *)&local_18);
LAB_00481350:
    *(int *)param_1 = iVar5;
    *(uint *)(param_1 + 4) = uVar4;
    return param_1;
  }
  if (*DAT_004b4318 == '\0') {
    DVar8 = 1;
    goto LAB_004814a0;
  }
LAB_0048144f:
  DVar8 = 2;
LAB_004814a0:
  DName::DName(param_1,DVar8);
  return param_1;
}


