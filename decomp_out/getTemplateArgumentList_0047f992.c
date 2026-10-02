/* DName __cdecl getTemplateArgumentList(DName * param_1) @ 0047f992  452 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateArgumentList(void)
   
   Library: Visual Studio 2008 Release */

void __cdecl UnDecorator::getTemplateArgumentList(DName *param_1)

{
  DName DVar1;
  char cVar2;
  DName *pDVar3;
  long lVar4;
  DName *pDVar5;
  char *pcVar6;
  DName local_70 [8];
  DName local_68 [8];
  DName local_60 [8];
  DName local_58 [8];
  DName local_50 [8];
  DName local_48 [8];
  undefined local_40 [8];
  char *local_38;
  undefined4 local_34;
  uint local_30;
  DName local_2c [8];
  int local_24;
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  param_1[4] = (DName)0x0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
  *(undefined4 *)param_1 = 0;
  DAT_004b4331 = 1;
  local_24 = 1;
  DVar1 = param_1[4];
  do {
    if (((DVar1 != (DName)0x0) || (*DAT_004b4318 == '\0')) || (*DAT_004b4318 == '@')) {
      DAT_004b4331 = 0;
      ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_24 == 0) {
      DName::operator+=(param_1,',');
    }
    else {
      local_24 = 0;
    }
    cVar2 = *DAT_004b4318;
    if ((int)cVar2 - 0x30U < 10) {
      DAT_004b4318 = DAT_004b4318 + 1;
      pDVar3 = Replicator::operator[](DAT_004b4314,local_70,(int)cVar2 - 0x30U);
    }
    else {
      local_1c = local_1c & 0xffff0000;
      local_38 = DAT_004b4318;
      local_20 = 0;
      if (cVar2 == 'X') {
        DAT_004b4318 = DAT_004b4318 + 1;
        pcVar6 = "void";
LAB_0047fa45:
        DName::operator=((DName *)&local_20,pcVar6);
      }
      else {
        if ((cVar2 == '$') && (DAT_004b4318[1] != '$')) {
          DAT_004b4318 = DAT_004b4318 + 1;
          pDVar3 = (DName *)getTemplateConstant(local_40);
        }
        else if (cVar2 == '?') {
          getSignedDimension(local_2c);
          if ((DAT_004b4328 & 0x4000) == 0) {
            pDVar3 = local_48;
            pDVar5 = local_50;
          }
          else {
            DName::getString(local_2c,local_18,0x10);
            lVar4 = _atol(local_18);
            pcVar6 = (char *)(*DAT_004b432c)(lVar4);
            if (pcVar6 != (char *)0x0) goto LAB_0047fa45;
            pDVar3 = local_68;
            pDVar5 = local_58;
          }
          pcVar6 = "\'";
          pDVar5 = operator+(pDVar5,"`template-parameter",local_2c);
          pDVar3 = DName::operator+(pDVar5,pDVar3,pcVar6);
        }
        else {
          local_30 = local_30 & 0xffff0000;
          local_34 = 0;
          pDVar3 = getPrimaryDataType(local_60,(DName *)&local_34);
        }
        local_20 = *(undefined4 *)pDVar3;
        local_1c = *(uint *)(pDVar3 + 4);
      }
      if ((1 < (int)DAT_004b4318 - (int)local_38) && (*(int *)DAT_004b4314 != 9)) {
        Replicator::operator+=(DAT_004b4314,(DName *)&local_20);
      }
      pDVar3 = (DName *)&local_20;
    }
    DName::operator+=(param_1,pDVar3);
    DVar1 = param_1[4];
  } while( true );
}


