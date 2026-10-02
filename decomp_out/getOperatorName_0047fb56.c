/* DName * __cdecl getOperatorName(DName * param_1, char param_2, undefined * param_3) @ 0047fb56  1437 bytes */
#include "th12.h"

/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getOperatorName(bool,bool *)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getOperatorName(DName *param_1,char param_2,undefined *param_3)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  DName *pDVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  DName *pDVar8;
  DName *this;
  DName *pDVar9;
  char *pcVar10;
  DName *pDVar11;
  DNameStatus DVar12;
  DName local_a4 [8];
  DName local_9c [8];
  DName local_94 [8];
  DName local_8c [8];
  DName local_84 [8];
  DName local_7c [8];
  DName local_74 [8];
  DName local_6c [8];
  DName local_64 [8];
  undefined local_5c [8];
  DName local_54 [8];
  DName local_4c [8];
  DName local_44 [8];
  undefined local_3c [8];
  DName local_34 [8];
  DName local_2c [8];
  DName local_24 [8];
  int *local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  cVar2 = *DAT_004b4318;
  local_8 = local_8 & 0xffff0000;
  local_18 = local_18 & 0xffff0000;
  bVar1 = false;
  pcVar3 = DAT_004b4318 + 1;
  local_c = 0;
  local_1c = (int *)0x0;
  if (cVar2 < 'B') {
    if (cVar2 == 'A') {
LAB_004800c3:
      cVar2 = *DAT_004b4318;
      DAT_004b4318 = pcVar3;
      DName::operator=((DName *)&local_c,*(char **)("operator" + cVar2 * 4 + 4));
      if (bVar1) {
        pcVar3 = DAT_004b4318;
        if (local_c != 0) {
          local_8 = local_8 | 0x200;
        }
      }
      else {
LAB_0047fbc7:
        pcVar3 = DAT_004b4318;
        if (local_c != 0) {
          pDVar4 = operator+(local_24,"operator",(DName *)&local_c);
          local_c = *(int *)pDVar4;
          local_8 = *(uint *)(pDVar4 + 4);
          pcVar3 = DAT_004b4318;
        }
      }
LAB_0047fbef:
      DAT_004b4318 = pcVar3;
      *(int *)param_1 = local_c;
LAB_0047fbf7:
      *(uint *)(param_1 + 4) = local_8;
      return param_1;
    }
    if (cVar2 == '\0') goto LAB_0047fcdc;
    if ('/' < cVar2) {
      if (cVar2 < '2') {
        local_1c = (int *)0x0;
        if (param_2 != '\0') {
          DAT_004b4318 = pcVar3;
          pDVar4 = (DName *)getTemplateArgumentList(local_5c);
          pDVar4 = operator+(local_a4,'<',pDVar4);
          DName::operator+=((DName *)&local_1c,pDVar4);
          if ((local_1c != (int *)0x0) && (cVar2 = (**(code **)(*local_1c + 4))(), cVar2 == '>')) {
            DName::operator+=((DName *)&local_1c,' ');
          }
          DName::operator+=((DName *)&local_1c,'>');
          if (param_3 != (undefined *)0x0) {
            *param_3 = 1;
          }
          if (*DAT_004b4318 == '\0') {
            *(int **)param_1 = local_1c;
            local_8 = local_18;
            goto LAB_0047fbf7;
          }
          pcVar3 = DAT_004b4318 + 1;
        }
        DAT_004b4318 = pcVar3;
        piVar5 = (int *)getZName(local_3c,0,0);
        local_c = *piVar5;
        local_8 = piVar5[1];
        DAT_004b4318 = pcVar3;
        if ((local_c != 0) && (pcVar3[-1] == '1')) {
          pDVar4 = operator+(local_8c,'~',(DName *)&local_c);
          local_c = *(int *)pDVar4;
          local_8 = *(uint *)(pDVar4 + 4);
        }
        pcVar3 = DAT_004b4318;
        if (local_1c != (int *)0x0) {
          DName::operator+=((DName *)&local_c,(DName *)&local_1c);
          pcVar3 = DAT_004b4318;
        }
        goto LAB_0047fbef;
      }
      if (cVar2 < ':') {
        pcVar10 = *(char **)(&DAT_0049dba8 + *DAT_004b4318 * 4);
        DAT_004b4318 = pcVar3;
        goto LAB_0047fbbf;
      }
    }
  }
  else {
    if (cVar2 == 'B') {
      bVar1 = true;
      goto LAB_004800c3;
    }
    if (cVar2 < 'C') goto LAB_0047ffc2;
    if (cVar2 < '[') goto LAB_004800c3;
    if (cVar2 == '_') {
      cVar2 = *pcVar3;
      pcVar3 = DAT_004b4318 + 2;
      if (cVar2 < 'P') {
        if ('C' < cVar2) {
LAB_004800a0:
          pcVar10 = *(char **)("__cdecl" + DAT_004b4318[1] * 4 + 4);
          DAT_004b4318 = pcVar3;
LAB_0047fd5d:
          DName::DName(param_1,pcVar10);
          return param_1;
        }
        if (cVar2 < ':') {
          if (cVar2 == '9') {
            pcVar10 = DAT_004b4318 + 1;
            DAT_004b4318 = pcVar3;
            DName::DName((DName *)&local_14,(&PTR_s___pascal_0049dc38)[*pcVar10]);
            local_8 = local_10 | 0x8000;
LAB_0047fd93:
            *(undefined4 *)param_1 = local_14;
            goto LAB_0047fbf7;
          }
          if (cVar2 == '\0') {
LAB_0047fcdc:
            pcVar3 = pcVar3 + -1;
LAB_0047fce2:
            DAT_004b4318 = pcVar3;
            DVar12 = 1;
            goto LAB_0047fce4;
          }
          if ('/' < cVar2) {
            if (cVar2 < '7') {
              pcVar10 = (&PTR_s___pascal_0049dc38)[DAT_004b4318[1]];
              DAT_004b4318 = pcVar3;
              goto LAB_0047fbbf;
            }
            if (cVar2 < '9') {
              pcVar10 = (&PTR_s___pascal_0049dc38)[DAT_004b4318[1]];
              DAT_004b4318 = pcVar3;
              goto LAB_0047fd5d;
            }
          }
        }
        else if (cVar2 == '?') {
          cVar2 = *pcVar3;
          pcVar3 = DAT_004b4318 + 3;
          if (cVar2 == '\0') goto LAB_0047fcdc;
          if (cVar2 == '0') {
            pcVar10 = "`anonymous namespace\'";
            DAT_004b4318 = pcVar3;
LAB_0047fdc7:
            getStringEncoding((DName *)&local_14,pcVar10);
            local_8 = local_10 | 0x1000;
            goto LAB_0047fd93;
          }
        }
        else if ('@' < cVar2) {
          if (cVar2 < 'C') goto LAB_004800a0;
          if (cVar2 == 'C') {
            pcVar10 = "`string\'";
            DAT_004b4318 = pcVar3;
            goto LAB_0047fdc7;
          }
        }
      }
      else if (cVar2 < 'U') {
        if ('R' < cVar2) goto LAB_004800a0;
        pDVar4 = param_1;
        if (cVar2 == 'P') {
          pcVar10 = DAT_004b4318 + 1;
          DAT_004b4318 = pcVar3;
          DName::operator=((DName *)&local_c,*(char **)("__cdecl" + *pcVar10 * 4 + 4));
          pDVar8 = local_84;
          getOperatorName(pDVar8,'\0',(undefined *)0x0);
          local_1c = *(int **)pDVar8;
          local_18 = *(uint *)(pDVar8 + 4);
          if ((local_1c == (int *)0x0) || (pcVar3 = DAT_004b4318, (local_18 & 0x400) == 0)) {
LAB_0047ffc9:
            pDVar11 = (DName *)&local_1c;
            pDVar8 = (DName *)&local_c;
LAB_0047ffd3:
            DName::operator+(pDVar8,pDVar4,pDVar11);
            return param_1;
          }
        }
        else {
          if (cVar2 == 'Q') goto LAB_0047fbef;
          if (cVar2 == 'R') {
            pcVar10 = DAT_004b4318 + 1;
            DAT_004b4318 = pcVar3;
            DName::operator=((DName *)&local_c,*(char **)("__cdecl" + *pcVar10 * 4 + 4));
            if (*DAT_004b4318 == '\0') {
              DName::operator+((DName *)&local_c,param_1,1);
              return param_1;
            }
            uVar6 = (int)*DAT_004b4318 - 0x30;
            pcVar3 = DAT_004b4318;
            if ((-1 < (int)uVar6) && (uVar6 < 5)) {
              DName::operator=((DName *)&local_1c,(&PTR_s_Type_Descriptor__0049dc5c)[uVar6]);
              pcVar3 = DAT_004b4318;
              iVar7 = (int)*DAT_004b4318;
              DAT_004b4318 = DAT_004b4318 + 1;
              if (iVar7 == 0x30) {
                getDataType((DName *)&local_14,(DName *)0x0);
                pDVar11 = (DName *)&local_1c;
                pDVar8 = (DName *)&local_c;
                pDVar9 = local_64;
                this = DName::operator+((DName *)&local_14,local_74,' ');
                pDVar8 = DName::operator+(this,pDVar9,pDVar8);
                goto LAB_0047ffd3;
              }
              if (iVar7 == 0x31) {
                DName::operator+((DName *)&local_c,(DName *)&local_14,(DName *)&local_1c);
                cVar2 = ',';
                pDVar4 = local_4c;
                pDVar8 = getSignedDimension(local_7c);
                pDVar4 = DName::operator+(pDVar8,pDVar4,cVar2);
                DName::operator+=((DName *)&local_14,pDVar4);
                cVar2 = ',';
                pDVar4 = local_2c;
                pDVar8 = getSignedDimension(local_9c);
                pDVar4 = DName::operator+(pDVar8,pDVar4,cVar2);
                DName::operator+=((DName *)&local_14,pDVar4);
                cVar2 = ',';
                pDVar4 = local_6c;
                pDVar8 = getSignedDimension(local_34);
                pDVar4 = DName::operator+(pDVar8,pDVar4,cVar2);
                DName::operator+=((DName *)&local_14,pDVar4);
                cVar2 = ')';
                pDVar4 = local_44;
                pDVar8 = getDimension(local_54,'\0');
                pDVar4 = DName::operator+(pDVar8,pDVar4,cVar2);
                DName::operator+=((DName *)&local_14,pDVar4);
                DName::operator+((DName *)&local_14,param_1,'\'');
                return param_1;
              }
              if (iVar7 - 0x32U < 3) goto LAB_0047ffc9;
              goto LAB_0047fce2;
            }
          }
        }
      }
      else if ('T' < cVar2) {
        if (cVar2 < 'W') {
          pcVar10 = *(char **)("__cdecl" + DAT_004b4318[1] * 4 + 4);
          DAT_004b4318 = pcVar3;
LAB_0047fbbf:
          DName::operator=((DName *)&local_c,pcVar10);
          goto LAB_0047fbc7;
        }
        if ('W' < cVar2) {
          if (cVar2 < 'Z') goto LAB_004800a0;
          if (cVar2 == '_') {
            cVar2 = *pcVar3;
            pcVar3 = DAT_004b4318 + 3;
            if ('@' < cVar2) {
              if ('D' < cVar2) {
                if (cVar2 < 'G') {
                  pcVar10 = DAT_004b4318 + 2;
                  DAT_004b4318 = pcVar3;
                  DName::DName((DName *)&local_14,(&PTR_DAT_0049dc80)[*pcVar10]);
                  if (*DAT_004b4318 == '?') {
                    pDVar4 = local_94;
                    getDecoratedName(pDVar4);
                    DName::operator+=((DName *)&local_14,pDVar4);
                    if (*DAT_004b4318 == '@') {
                      DAT_004b4318 = DAT_004b4318 + 1;
                    }
                  }
                  else {
                    pDVar4 = (DName *)getSymbolName(local_24);
                    DName::operator+=((DName *)&local_14,pDVar4);
                  }
                  DName::operator+=((DName *)&local_14,"\'\'");
                  *(undefined4 *)param_1 = local_14;
                  local_8 = local_10;
                  goto LAB_0047fbf7;
                }
                if ('J' < cVar2) goto LAB_0047ffc2;
              }
              pcVar10 = (&PTR_DAT_0049dc80)[DAT_004b4318[2]];
              DAT_004b4318 = pcVar3;
              goto LAB_0047fd5d;
            }
          }
        }
      }
    }
  }
LAB_0047ffc2:
  DAT_004b4318 = pcVar3;
  DVar12 = 2;
LAB_0047fce4:
  DName::DName(param_1,DVar12);
  return param_1;
}


