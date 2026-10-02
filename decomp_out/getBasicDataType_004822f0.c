/* DName * __cdecl getBasicDataType(DName * param_1, DName * param_2) @ 004822f0  916 bytes */
#include "th12.h"

/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getBasicDataType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getBasicDataType(DName *param_1,DName *param_2)

{
  byte bVar1;
  byte *pbVar2;
  DName *pDVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  DName local_28 [8];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  uint local_c;
  byte local_5;
  
  pbVar2 = DAT_004b4318;
  bVar1 = *DAT_004b4318;
  if (bVar1 == 0) {
    operator+(param_1,1,param_2);
    return param_1;
  }
  DAT_004b4318 = DAT_004b4318 + 1;
  local_10 = 0;
  uVar5 = (uint)bVar1;
  local_c = local_c & 0xffff0000;
  uVar4 = 0xffffffff;
  local_5 = 0;
  if (uVar5 < 0x4f) {
    if (uVar5 != 0x4e) {
      switch(uVar5) {
      case 0x43:
      case 0x44:
      case 0x45:
        pcVar6 = "char";
        break;
      case 0x46:
      case 0x47:
        pcVar6 = "short";
        break;
      case 0x48:
      case 0x49:
        pcVar6 = "int";
        break;
      case 0x4a:
      case 0x4b:
        pcVar6 = "long";
        break;
      default:
        goto switchD_00482346_caseD_4c;
      case 0x4d:
        pcVar6 = "float";
      }
      goto LAB_0048253e;
    }
LAB_00482564:
    DName::operator+=((DName *)&local_10,"double");
LAB_00482571:
    if (uVar4 != 0xffffffff) {
LAB_004824c6:
      local_18 = *(undefined4 *)param_2;
      local_c = local_c & 0xffff0000;
      local_14 = *(uint *)(param_2 + 4);
      local_10 = 0;
      if (uVar4 != 0xfffffffe) {
        if (*(int *)param_2 == 0) {
          if ((uVar4 & 1) == 0) {
            if ((uVar4 & 2) != 0) {
              DName::operator=((DName *)&local_10,"volatile");
            }
          }
          else {
            DName::operator=((DName *)&local_10,"const");
            if ((uVar4 & 2) != 0) {
              DName::operator+=((DName *)&local_10," volatile");
            }
          }
        }
        getPointerType(param_1,(DName *)&local_10,(DName *)&local_18);
        return param_1;
      }
      local_14 = local_14 | 0x800;
      getPtrRefType((DName *)&local_20,(DName *)&local_10,(DName *)&local_18,0);
      if ((local_1c & 0x800) == 0) {
        DName::operator+=((DName *)&local_20,"[]");
      }
      *(undefined4 *)param_1 = local_20;
      local_c = local_1c;
      goto LAB_00482619;
    }
  }
  else {
    if (uVar5 == 0x4f) {
      DName::operator=((DName *)&local_10,"long ");
      goto LAB_00482564;
    }
    if (0x4f < uVar5) {
      if (uVar5 < 0x54) {
        uVar4 = uVar5 & 3;
        goto LAB_00482571;
      }
      if (uVar5 == 0x58) {
        pcVar6 = "void";
        goto LAB_0048253e;
      }
      if (uVar5 != 0x5f) goto switchD_00482346_caseD_4c;
      local_5 = *DAT_004b4318;
      DAT_004b4318 = pbVar2 + 2;
      uVar4 = (uint)local_5;
      if (uVar4 < 0x4c) {
        if (uVar4 < 0x4a) {
          if (uVar4 < 0x46) {
            if (uVar4 < 0x44) {
              if (uVar4 != 0) {
                if (uVar4 == 0x24) {
                  pDVar3 = (DName *)&local_20;
                  getBasicDataType(pDVar3,param_2);
                  operator+(param_1,"__w64 ",pDVar3);
                  return param_1;
                }
                goto LAB_00482532;
              }
              DAT_004b4318 = pbVar2 + 1;
              DName::operator=((DName *)&local_10,1);
              goto LAB_0048257a;
            }
            pcVar6 = "__int8";
          }
          else if (uVar4 < 0x46) {
LAB_00482532:
            pcVar6 = "UNKNOWN";
          }
          else if (uVar4 < 0x48) {
            pcVar6 = "__int16";
          }
          else {
            if (0x49 < uVar4) goto LAB_00482532;
            pcVar6 = "__int32";
          }
        }
        else {
          pcVar6 = "__int64";
        }
        goto LAB_0048253e;
      }
      if (uVar4 < 0x4c) goto LAB_00482532;
      if (uVar4 < 0x4e) {
        pcVar6 = "__int128";
LAB_0048253e:
        DName::operator=((DName *)&local_10,pcVar6);
        goto LAB_0048257a;
      }
      if (uVar4 == 0x4e) {
        pcVar6 = "bool";
        goto LAB_0048253e;
      }
      if (uVar4 != 0x4f) {
        if (uVar4 != 0x57) {
          if (1 < uVar4 - 0x58) goto LAB_00482532;
          pDVar3 = (DName *)&local_18;
          goto LAB_0048248f;
        }
        pcVar6 = "wchar_t";
        goto LAB_0048253e;
      }
      uVar4 = 0xfffffffe;
      goto LAB_004824c6;
    }
switchD_00482346_caseD_4c:
    pDVar3 = local_28;
LAB_0048248f:
    DAT_004b4318 = DAT_004b4318 + -1;
    pDVar3 = getECSUDataType(pDVar3);
    local_c = *(uint *)(pDVar3 + 4);
    local_10 = *(int *)pDVar3;
    if (local_10 == 0) {
      *(undefined4 *)param_1 = 0;
      *(uint *)(param_1 + 4) = local_c;
      return param_1;
    }
  }
LAB_0048257a:
  if (uVar5 == 0x43) {
    pcVar6 = "signed ";
    pDVar3 = (DName *)&local_18;
LAB_004825da:
    pDVar3 = operator+(pDVar3,pcVar6,(DName *)&local_10);
    local_10 = *(int *)pDVar3;
    local_c = *(uint *)(pDVar3 + 4);
  }
  else {
    if ((((uVar5 == 0x45) || (uVar5 == 0x47)) || (uVar5 == 0x49)) || (uVar5 == 0x4b)) {
      pcVar6 = "unsigned ";
      pDVar3 = (DName *)&local_20;
      goto LAB_004825da;
    }
    if ((uVar5 == 0x5f) &&
       (((local_5 == 0x45 || (local_5 == 0x47)) ||
        ((local_5 == 0x49 || ((local_5 == 0x4b || (local_5 == 0x4d)))))))) {
      pcVar6 = "unsigned ";
      pDVar3 = local_28;
      goto LAB_004825da;
    }
  }
  if (*(int *)param_2 != 0) {
    pDVar3 = operator+(local_28,' ',param_2);
    DName::operator+=((DName *)&local_10,pDVar3);
  }
  *(int *)param_1 = local_10;
LAB_00482619:
  *(uint *)(param_1 + 4) = local_c;
  return param_1;
}


