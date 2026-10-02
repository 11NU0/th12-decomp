/* DName * __cdecl getExtendedDataIndirectType(DName * param_1, char * param_2, undefined * param_3, int param_4) @ 0047f037  381 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExtendedDataIndirectType(char &,bool &,int)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl
UnDecorator::getExtendedDataIndirectType
          (DName *param_1,char *param_2,undefined *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  DName *pDVar3;
  char *pcVar4;
  DNameStatus DVar5;
  DName local_2c [8];
  DName local_24 [8];
  DName local_1c [8];
  DName local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffff0000;
  pcVar4 = (char *)((int)DAT_004b4318 + 1);
  iVar2 = (int)*pcVar4;
  local_c = 0;
  if (iVar2 == 0x41) {
    DAT_004b4318 = pcVar4;
    if (param_4 == 0) {
      *param_2 = ((*param_2 != '&') - 1U & 199) + 0x5e;
    }
LAB_0047f19b:
    DAT_004b4318 = DAT_004b4318 + 1;
    param_1[4] = (DName)0x0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
    *(undefined4 *)param_1 = 0;
  }
  else {
    if (iVar2 == 0x42) {
      if (param_4 == 0) {
        DAT_004b4318 = pcVar4;
        *param_3 = 1;
        DName::operator=((DName *)&local_c,'>');
        goto LAB_0047f19b;
      }
LAB_0047f162:
      DVar5 = 2;
    }
    else {
      if (iVar2 == 0x43) {
        DAT_004b4318 = pcVar4;
        *param_2 = '%';
        goto LAB_0047f19b;
      }
      if ((*pcVar4 != '\0') && (*(char *)((int)DAT_004b4318 + 2) != '\0')) {
        if (param_4 == 0) {
          uVar1 = (iVar2 + -0x30) * 0x10 + -0x30 + (int)*(char *)((int)DAT_004b4318 + 2);
          DAT_004b4318 = (char *)((int)DAT_004b4318 + 3);
          if (1 < uVar1) {
            DName::operator=((DName *)&local_c,',');
            pDVar3 = (DName *)DName::DName(local_14,(ulonglong)uVar1);
            pDVar3 = DName::operator+((DName *)&local_c,local_1c,pDVar3);
            local_c = *(undefined4 *)pDVar3;
            local_8 = *(uint *)(pDVar3 + 4);
          }
          pDVar3 = DName::operator+((DName *)&local_c,local_24,'>');
          local_c = *(undefined4 *)pDVar3;
          local_8 = *(uint *)(pDVar3 + 4);
          if (*DAT_004b4318 == '$') {
            DAT_004b4318 = DAT_004b4318 + 1;
          }
          else {
            pDVar3 = DName::operator+((DName *)&local_c,local_2c,'^');
            local_c = *(undefined4 *)pDVar3;
            local_8 = *(uint *)(pDVar3 + 4);
          }
          if (*DAT_004b4318 == '\0') {
            DName::operator+=((DName *)&local_c,1);
          }
          else {
            DAT_004b4318 = DAT_004b4318 + 1;
          }
          *(undefined4 *)param_1 = local_c;
          *(uint *)(param_1 + 4) = local_8 | 0x4000;
          return param_1;
        }
        goto LAB_0047f162;
      }
      DVar5 = 1;
    }
    DAT_004b4318 = pcVar4;
    DName::DName(param_1,DVar5);
  }
  return param_1;
}


