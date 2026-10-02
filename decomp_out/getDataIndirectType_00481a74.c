/* DName * __cdecl getDataIndirectType(DName * param_1, DName * param_2, undefined4 param_3, DName * param_4, int param_5) @ 00481a74  1223 bytes */
#include "th12.h"

/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(class DName const
   &,char,class DName const &,int)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl
UnDecorator::getDataIndirectType
          (DName *param_1,DName *param_2,undefined4 param_3,DName *param_4,int param_5)

{
  char *pcVar1;
  DName *pDVar2;
  DName *pDVar3;
  DName *pDVar4;
  uint uVar5;
  char cVar6;
  DNameStatus DVar7;
  DName local_58 [8];
  DName local_50 [8];
  DName local_48 [8];
  DName local_40 [8];
  DName local_38 [8];
  DName local_30 [8];
  undefined4 local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  char local_5;
  
  local_24 = local_24 & 0xffff0000;
  local_28 = 0;
  local_5 = '\0';
  if (*DAT_004b4318 == '\0') {
    if (param_5 == 0) {
      if (*(int *)param_2 == 0) {
        param_2 = param_4;
        if (*(int *)param_4 == 0) goto LAB_00481f29;
      }
      else if (((*(uint *)(param_2 + 4) & 0x100) == 0) && (*(int *)param_4 != 0)) {
        pDVar3 = local_58;
        cVar6 = ' ';
        pDVar2 = param_1;
        pDVar4 = operator+(local_50,1,param_4);
        pDVar3 = DName::operator+(pDVar4,pDVar3,cVar6);
        DName::operator+(pDVar3,pDVar2,param_2);
        return param_1;
      }
      operator+(param_1,1,param_2);
      return param_1;
    }
LAB_00481f29:
    DVar7 = 1;
LAB_00481f2b:
    DName::DName(param_1,DVar7);
    return param_1;
  }
  if ((*DAT_004b4318 != '$') ||
     (getExtendedDataIndirectType((DName *)&local_20,(char *)&param_3,&local_5,param_5),
     local_20 == 0)) {
    local_14 = local_14 & 0xffff0000;
    local_18 = 0;
    uVar5 = (int)*DAT_004b4318 - (((*DAT_004b4318 < 'A') - 1 & 0x2b) + 0x16);
    local_1c = local_1c & 0xffff0000;
    local_20 = 0;
    do {
      if (uVar5 == 4) {
        if (((~(DAT_004b4328 >> 1) & 1) != 0) && ((~(DAT_004b4328 >> 0x11) & 1) != 0)) {
          pcVar1 = UScore(7);
          pDVar3 = (DName *)&local_18;
          if (local_18 == 0) goto LAB_00481bdc;
          pDVar3 = local_50;
          pDVar2 = local_58;
LAB_00481b42:
          pDVar2 = DName::operator+((DName *)&local_18,pDVar2,' ');
          pDVar3 = DName::operator+(pDVar2,pDVar3,pcVar1);
          local_18 = *(int *)pDVar3;
          local_14 = *(uint *)(pDVar3 + 4);
        }
      }
      else if (uVar5 == 5) {
        if ((~(DAT_004b4328 >> 1) & 1) != 0) {
          pcVar1 = UScore(9);
          pDVar3 = (DName *)&local_20;
          if (local_20 == 0) goto LAB_00481bdc;
          pDVar2 = local_40;
          pDVar3 = DName::operator+(pDVar3,local_48,' ');
          pDVar3 = DName::operator+(pDVar3,pDVar2,pcVar1);
          local_20 = *(int *)pDVar3;
          local_1c = *(uint *)(pDVar3 + 4);
        }
      }
      else {
        if (uVar5 != 8) {
          if (*DAT_004b4318 != '\0') {
            DAT_004b4318 = DAT_004b4318 + 1;
          }
          if (0x1f < uVar5) {
LAB_00481cdf:
            DVar7 = 2;
            goto LAB_00481f2b;
          }
          DName::DName((DName *)&local_10,(char)param_3);
          pDVar3 = DName::operator+((DName *)&local_28,local_58,(DName *)&local_10);
          local_10 = *(int *)pDVar3;
          local_c = *(uint *)(pDVar3 + 4);
          if (local_18 != 0) {
            pDVar3 = (DName *)&local_18;
            pDVar2 = local_58;
            pDVar4 = DName::operator+((DName *)&local_10,local_50,' ');
            pDVar3 = DName::operator+(pDVar4,pDVar2,pDVar3);
            local_10 = *(int *)pDVar3;
            local_c = *(uint *)(pDVar3 + 4);
          }
          if (local_20 != 0) {
            pDVar3 = (DName *)&local_10;
            pDVar2 = local_58;
            pDVar4 = DName::operator+((DName *)&local_20,local_50,' ');
            pDVar3 = DName::operator+(pDVar4,pDVar2,pDVar3);
            local_10 = *(int *)pDVar3;
            local_c = *(uint *)(pDVar3 + 4);
          }
          if ((uVar5 & 0x10) != 0) {
            if (param_5 != 0) goto LAB_00481cdf;
            if ((char)param_3 == '\0') {
              if (*DAT_004b4318 != '\0') {
                pDVar3 = getScope(local_58);
                DName::operator|=((DName *)&local_10,pDVar3);
                goto LAB_00481d66;
              }
            }
            else {
              pDVar3 = operator+(local_58,"::",(DName *)&local_10);
              local_10 = *(int *)pDVar3;
              local_c = *(uint *)(pDVar3 + 4);
              pDVar3 = (DName *)&local_10;
              pDVar2 = local_58;
              if (*DAT_004b4318 == '\0') {
                pDVar3 = operator+(pDVar2,1,pDVar3);
              }
              else {
                pDVar4 = getScope(local_50);
                pDVar3 = DName::operator+(pDVar4,pDVar2,pDVar3);
              }
              local_10 = *(int *)pDVar3;
              local_c = *(uint *)(pDVar3 + 4);
LAB_00481d66:
              cVar6 = *DAT_004b4318;
              if (cVar6 != '\0') {
                DAT_004b4318 = DAT_004b4318 + 1;
                if (cVar6 != '@') goto LAB_00481cdf;
                goto LAB_00481d8b;
              }
            }
            DName::operator+=((DName *)&local_10,1);
          }
LAB_00481d8b:
          if ((~(DAT_004b4328 >> 1) & 1) == 0) {
            if (((byte)uVar5 & 0xc) == 0xc) {
              pDVar3 = getBasedType(local_58);
              DName::operator|=((DName *)&local_10,pDVar3);
            }
          }
          else if (((byte)uVar5 & 0xc) == 0xc) {
            if (param_5 != 0) goto LAB_00481cdf;
            pDVar3 = (DName *)&local_10;
            pDVar2 = local_58;
            pDVar4 = getBasedType(local_50);
            pDVar3 = DName::operator+(pDVar4,pDVar2,pDVar3);
            local_10 = *(int *)pDVar3;
            local_c = *(uint *)(pDVar3 + 4);
          }
          if ((uVar5 & 2) != 0) {
            pDVar3 = operator+(local_58,"volatile ",(DName *)&local_10);
            local_10 = *(int *)pDVar3;
            local_c = *(uint *)(pDVar3 + 4);
          }
          if ((uVar5 & 1) != 0) {
            pDVar3 = operator+(local_58,"const ",(DName *)&local_10);
            local_10 = *(int *)pDVar3;
            local_c = *(uint *)(pDVar3 + 4);
          }
          if (param_5 == 0) {
            if (*(int *)param_2 == 0) {
              param_2 = param_4;
              if (*(int *)param_4 != 0) {
LAB_00481e98:
                pDVar3 = operator+(local_58,' ',param_2);
                goto LAB_00481ea6;
              }
            }
            else {
              uVar5 = *(uint *)(param_2 + 4);
              if (((uVar5 & 0x100) == 0) && (*(int *)param_4 != 0)) {
                pDVar3 = local_58;
                cVar6 = ' ';
                pDVar2 = local_50;
                pDVar4 = operator+(local_48,' ',param_4);
                pDVar2 = DName::operator+(pDVar4,pDVar2,cVar6);
                pDVar3 = DName::operator+(pDVar2,pDVar3,param_2);
LAB_00481ea6:
                DName::operator+=((DName *)&local_10,pDVar3);
              }
              else {
                if ((uVar5 & 0x800) == 0) goto LAB_00481e98;
                local_10 = *(int *)param_2;
                local_c = uVar5;
              }
            }
          }
          local_1c = local_c | 0x100;
          if (local_5 != '\0') {
            local_1c = local_c | 0x2100;
          }
          *(int *)param_1 = local_10;
          goto LAB_00481ac9;
        }
        if ((~(DAT_004b4328 >> 1) & 1) != 0) {
          pcVar1 = UScore(8);
          pDVar3 = (DName *)&local_18;
          if (local_18 != 0) {
            pDVar3 = local_30;
            pDVar2 = local_38;
            goto LAB_00481b42;
          }
LAB_00481bdc:
          DName::operator=(pDVar3,pcVar1);
        }
      }
      DAT_004b4318 = DAT_004b4318 + 1;
      if ((*DAT_004b4318 == '$') &&
         (getExtendedDataIndirectType((DName *)&local_10,(char *)&param_3,&local_5,param_5),
         local_10 != 0)) goto LAB_00481c2f;
      uVar5 = (int)*DAT_004b4318 - (((*DAT_004b4318 < 'A') - 1 & 0x2b) + 0x16);
    } while( true );
  }
  *(int *)param_1 = local_20;
  goto LAB_00481ac9;
LAB_00481c2f:
  *(int *)param_1 = local_10;
  local_1c = local_c;
LAB_00481ac9:
  *(uint *)(param_1 + 4) = local_1c;
  return param_1;
}


