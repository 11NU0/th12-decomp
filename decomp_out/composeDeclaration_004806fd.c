/* DName * __cdecl composeDeclaration(DName * param_1, DName * param_2) @ 004806fd  2971 bytes */
#include "th12.h"

/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::composeDeclaration(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::composeDeclaration(DName *param_1,DName *param_2)

{
  uint uVar1;
  uint uVar2;
  DName *pDVar3;
  DName *pDVar4;
  DName *pDVar5;
  DName *pDVar6;
  undefined4 *puVar7;
  uint uVar8;
  DName *this;
  DName *pDVar9;
  DName *pDVar10;
  DName *pDVar11;
  bool bVar12;
  char cVar13;
  DName *pDVar14;
  char cVar15;
  char cVar16;
  char *pcVar17;
  DName local_70 [8];
  DName local_68 [8];
  DName local_60 [8];
  DName local_58 [8];
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  DName local_20 [4];
  int local_1c;
  undefined4 local_18;
  uint local_14;
  DName local_10 [4];
  uint local_c;
  uint local_8;
  
  local_24 = local_24 & 0xffff0000;
  local_28 = 0;
  uVar1 = getTypeEncoding();
  if ((*(int *)param_2 == 0) || (local_1c = 1, (*(uint *)(param_2 + 4) & 0x200) == 0)) {
    local_1c = 0;
  }
  if (uVar1 == 0xffff) {
    DName::DName(param_1,2);
    return param_1;
  }
  if (uVar1 == 0xfffe) {
    operator+(param_1,1,param_2);
    return param_1;
  }
  if (uVar1 == 0xfffd) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    local_24 = *(uint *)(param_2 + 4);
    goto LAB_00481290;
  }
  local_8 = uVar1 & 0x8000;
  if (local_8 == 0) {
LAB_00480d33:
    DName::operator+=((DName *)&local_28,param_2);
    if (local_8 == 0) {
      if (((uVar1 & 0x7c00) == 0x6800) || ((uVar1 & 0x7c00) == 0x7000)) {
        getVfTableType(param_1,&local_28);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x6000) {
        pcVar17 = "}\'";
        pDVar4 = param_1;
        pDVar5 = FID_conflict_getGuardNumber(local_70);
        pDVar3 = local_68;
        pDVar6 = DName::operator+((DName *)&local_28,local_60,'{');
        pDVar3 = DName::operator+(pDVar6,pDVar3,pDVar5);
        DName::operator+(pDVar3,pDVar4,pcVar17);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x7c00) {
        getVdispMapType(param_1,&local_28);
        return param_1;
      }
      uVar2 = uVar1 & 0x6000;
    }
    else {
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) || ((uVar1 & 0x1b00) != 0x1000 || local_8 == 0)) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1100 && local_8 != 0)) {
        pcVar17 = "`template static data member constructor helper\'";
        goto LAB_00480eda;
      }
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1200 && local_8 != 0)) {
        pcVar17 = "`template static data member destructor helper\'";
        goto LAB_00480eda;
      }
      if (local_8 == 0) {
        if ((uVar1 & 0x7c00) == 0x7800) goto LAB_00480b48;
        goto LAB_00480ef9;
      }
LAB_00480eff:
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    else {
      pcVar17 = "`local static destructor helper\'";
LAB_00480eda:
      DName::operator+=((DName *)&local_28,pcVar17);
LAB_00480ef9:
      if (local_8 != 0) goto LAB_00480eff;
      uVar2 = uVar1 & 0x6000;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) ||
       (((uVar1 & 0x1b00) != 0x1100 || local_8 == 0 && ((uVar1 & 0x1b00) != 0x1200 || local_8 == 0))
       )) {
      pDVar3 = getExternalDataType(local_70,(DName *)&local_28);
    }
    else {
      pDVar3 = operator+(local_70," ",(DName *)&local_28);
    }
LAB_00480961:
    local_28 = *(int *)pDVar3;
    local_24 = *(uint *)(pDVar3 + 4);
  }
  else {
    local_14 = uVar1 & 0x1800;
    local_c = (uint)(local_14 == 0x800);
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1000)) goto LAB_00480d33;
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && (((uVar1 & 0x1b00) == 0x1100 || ((uVar1 & 0x1b00) == 0x1200))))
    goto LAB_00480d33;
    if ((uVar1 & 0x4000) != 0) {
      if (((~(DAT_004b4328 >> 1) & 1) == 0) || ((~(DAT_004b4328 >> 3) & 1) == 0)) {
        pDVar3 = getBasedType((DName *)&local_50);
        DName::operator|=((DName *)&local_28,pDVar3);
      }
      else {
        pDVar3 = getBasedType((DName *)&local_50);
        pDVar3 = operator+((DName *)&local_48,' ',pDVar3);
        local_28 = *(int *)pDVar3;
        local_24 = *(uint *)(pDVar3 + 4);
      }
    }
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 == 0) || (local_14 != 0x1800)) {
      local_44 = local_44 & 0xffff0000;
      local_3c = local_3c & 0xffff0000;
      local_14 = local_14 & 0xffff0000;
      local_4c = local_4c & 0xffff0000;
      local_2c = local_2c & 0xffff0000;
      local_48 = 0;
      local_40 = 0;
      local_18 = 0;
      local_50 = 0;
      local_30 = 0;
      if (local_c == 0) {
        uVar2 = uVar1 & 0x1000;
      }
      else {
        uVar2 = uVar1 & 0x400;
      }
      if (uVar2 != 0) {
        if (local_c != 0) {
          if ((uVar1 & 0x700) == 0x600) {
            pDVar3 = getDisplacement((DName *)&local_38);
            local_48 = *(undefined4 *)pDVar3;
            local_44 = *(uint *)(pDVar3 + 4);
            pDVar3 = getDisplacement((DName *)&local_38);
            local_40 = *(undefined4 *)pDVar3;
            local_3c = *(uint *)(pDVar3 + 4);
            pDVar3 = getDisplacement((DName *)&local_38);
          }
          else {
            if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_00480a17;
            pDVar3 = getDisplacement((DName *)&local_38);
          }
          local_18 = *(undefined4 *)pDVar3;
          local_14 = *(uint *)(pDVar3 + 4);
        }
LAB_00480a17:
        pDVar3 = getDisplacement((DName *)&local_38);
        local_50 = *(undefined4 *)pDVar3;
        local_4c = *(uint *)(pDVar3 + 4);
      }
      if ((local_c != 0) && ((local_c == 0 || ((uVar1 & 0x700) != 0x200)))) {
        if (((byte)DAT_004b4328 & 0x60) == 0x60) {
          pDVar3 = (DName *)getThisType(&local_38);
          DName::operator|=((DName *)&local_30,pDVar3);
        }
        else {
          puVar7 = (undefined4 *)getThisType(&local_38);
          local_30 = *puVar7;
          local_2c = puVar7[1];
        }
      }
      if (((~(DAT_004b4328 >> 1) & 1) == 0) || ((~(DAT_004b4328 >> 4) & 1) == 0)) {
        pDVar3 = getCallingConvention(local_58);
        DName::operator|=((DName *)&local_28,pDVar3);
      }
      else {
        pDVar3 = (DName *)&local_28;
        pDVar4 = (DName *)&local_38;
        pDVar5 = getCallingConvention(local_58);
        pDVar3 = DName::operator+(pDVar5,pDVar4,pDVar3);
        local_28 = *(int *)pDVar3;
        local_24 = *(uint *)(pDVar3 + 4);
      }
      if (*(int *)param_2 != 0) {
        if ((local_28 == 0) || ((DAT_004b4328 & 0x1000) != 0)) {
          local_28 = *(int *)param_2;
          local_24 = *(uint *)(param_2 + 4);
        }
        else {
          pDVar3 = operator+(local_58,' ',param_2);
          DName::operator+=((DName *)&local_28,pDVar3);
        }
      }
      local_34 = local_34 & 0xffff0000;
      pDVar3 = (DName *)0x0;
      local_38 = 0;
      if (local_1c == 0) {
        pDVar4 = (DName *)HeapManager::getMemory((HeapManager *)&DAT_004b42f8,8,0);
        pDVar3 = (DName *)0x0;
        if (pDVar4 != (DName *)0x0) {
          *(undefined4 *)pDVar4 = 0;
          pDVar4[4] = (DName)0x0;
          *(uint *)(pDVar4 + 4) = *(uint *)(pDVar4 + 4) & 0xffff00ff;
          pDVar3 = pDVar4;
        }
        pDVar4 = getReturnType(local_58,pDVar3);
        local_38 = *(int *)pDVar4;
        local_34 = *(uint *)(pDVar4 + 4);
LAB_00480b91:
        uVar2 = local_c;
        if (local_c == 0) {
          uVar8 = uVar1 & 0x1000;
        }
        else {
          uVar8 = uVar1 & 0x400;
        }
        if (uVar8 != 0) {
          if (local_c == 0) {
LAB_00480c58:
            DName::operator+=((DName *)&local_28,"`adjustor{");
          }
          else {
            if ((uVar1 & 0x700) == 0x600) {
              cVar16 = ',';
              pDVar4 = local_58;
              pDVar5 = (DName *)&local_18;
              pDVar6 = local_20;
              cVar15 = ',';
              pDVar11 = local_10;
              pDVar10 = (DName *)&local_40;
              pDVar14 = local_60;
              cVar13 = ',';
              pDVar9 = local_68;
              this = operator+(local_70,"`vtordispex{",(DName *)&local_48);
              pDVar9 = DName::operator+(this,pDVar9,cVar13);
              pDVar10 = DName::operator+(pDVar9,pDVar14,pDVar10);
              pDVar11 = DName::operator+(pDVar10,pDVar11,cVar15);
              pDVar5 = DName::operator+(pDVar11,pDVar6,pDVar5);
            }
            else {
              if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_00480c58;
              cVar16 = ',';
              pDVar4 = local_70;
              pDVar5 = operator+(local_68,"`vtordisp{",(DName *)&local_18);
            }
            pDVar4 = DName::operator+(pDVar5,pDVar4,cVar16);
            DName::operator+=((DName *)&local_28,pDVar4);
          }
          pDVar4 = DName::operator+((DName *)&local_50,local_70,"}\' ");
          DName::operator+=((DName *)&local_28,pDVar4);
        }
        cVar16 = ')';
        pDVar4 = local_70;
        pDVar5 = getArgumentTypes(local_68);
        pDVar5 = operator+(local_60,'(',pDVar5);
        pDVar4 = DName::operator+(pDVar5,pDVar4,cVar16);
        DName::operator+=((DName *)&local_28,pDVar4);
        if ((uVar2 != 0) && ((uVar1 & 0x700) != 0x200)) {
          DName::operator+=((DName *)&local_28,(DName *)&local_30);
        }
        if ((~(DAT_004b4328 >> 8) & 1) == 0) {
          pDVar4 = getThrowTypes(local_70);
          DName::operator|=((DName *)&local_28,pDVar4);
        }
        else {
          pDVar4 = getThrowTypes(local_70);
          DName::operator+=((DName *)&local_28,pDVar4);
        }
        if (((~(DAT_004b4328 >> 2) & 1) != 0) && (pDVar3 != (DName *)0x0)) {
          *(int *)pDVar3 = local_28;
          *(uint *)(pDVar3 + 4) = local_24;
          local_28 = local_38;
          local_24 = local_34;
        }
        goto LAB_00480f90;
      }
      pDVar4 = getReturnType(local_58,(DName *)0x0);
      pDVar4 = operator+(local_20," ",pDVar4);
      DName::operator+=((DName *)&local_28,pDVar4);
      if ((DAT_004b4328 & 0x1000) == 0) goto LAB_00480b91;
LAB_00480b48:
      *(int *)param_1 = local_28;
      goto LAB_00481290;
    }
    pDVar4 = FID_conflict_getGuardNumber((DName *)&local_50);
    pDVar3 = (DName *)&local_48;
    pDVar5 = DName::operator+(param_2,(DName *)&local_40,'{');
    pDVar3 = DName::operator+(pDVar5,pDVar3,pDVar4);
    DName::operator+=((DName *)&local_28,pDVar3);
    getVCallThunkType((DName *)&local_50);
    if ((DAT_004b4328 & 0x1000) == 0) {
      pcVar17 = "}\' ";
      pDVar3 = (DName *)&local_48;
      pDVar4 = operator+((DName *)&local_40,',',(DName *)&local_50);
      pDVar3 = DName::operator+(pDVar4,pDVar3,pcVar17);
      DName::operator+=((DName *)&local_28,pDVar3);
    }
    DName::operator+=((DName *)&local_28,"}\'");
    getCallingConvention((DName *)&local_50);
    if ((((~(DAT_004b4328 >> 1) & 1) != 0) && ((~(DAT_004b4328 >> 4) & 1) != 0)) &&
       ((DAT_004b4328 & 0x1000) == 0)) {
      pDVar3 = (DName *)&local_28;
      pDVar4 = (DName *)&local_48;
      cVar16 = ' ';
      pDVar5 = (DName *)&local_40;
      pDVar6 = operator+((DName *)&local_38,' ',(DName *)&local_50);
      pDVar5 = DName::operator+(pDVar6,pDVar5,cVar16);
      pDVar3 = DName::operator+(pDVar5,pDVar4,pDVar3);
      goto LAB_00480961;
    }
  }
LAB_00480f90:
  if (local_8 == 0) {
    uVar2 = uVar1 & 0x6000;
  }
  else {
    uVar2 = (uVar1 & 0x1800) - 0x800;
  }
  if (uVar2 == 0) {
    if ((~(DAT_004b4328 >> 9) & 1) != 0) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        if (local_8 == 0) {
          bVar12 = true;
        }
        else {
          bVar12 = (uVar1 & 0x700) == 0x200;
        }
        if (bVar12) {
          pDVar3 = operator+(local_70,"static ",(DName *)&local_28);
          local_28 = *(int *)pDVar3;
          local_24 = *(uint *)(pDVar3 + 4);
        }
      }
      if (local_8 == 0) {
LAB_00481047:
        uVar2 = uVar1 & 0x6000;
LAB_0048104e:
        if (uVar2 == 0) {
          uVar2 = uVar1 & 0x400;
        }
        else {
          uVar2 = uVar1 & 0x1000;
        }
        if (uVar2 == 0) goto LAB_00481105;
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x500)) {
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x6000;
          }
          else {
            uVar2 = (uVar1 & 0x1800) - 0x800;
          }
          if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x600)) {
            if (local_8 == 0) {
              uVar2 = uVar1 & 0x6000;
            }
            else {
              uVar2 = (uVar1 & 0x1800) - 0x800;
            }
            if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x400)) goto LAB_00481105;
          }
        }
      }
      else if ((uVar1 & 0x700) != 0x100) {
        if (local_8 == 0) goto LAB_00481047;
        uVar2 = (uVar1 & 0x1800) - 0x800;
        goto LAB_0048104e;
      }
      pDVar3 = operator+(local_70,"virtual ",(DName *)&local_28);
      local_28 = *(int *)pDVar3;
      local_24 = *(uint *)(pDVar3 + 4);
    }
LAB_00481105:
    if ((~(DAT_004b4328 >> 7) & 1) != 0) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        if (local_8 == 0) {
          bVar12 = (uVar1 & 0x1800) == 0x800;
        }
        else {
          bVar12 = ((byte)uVar1 & 0xc0) == 0x40;
        }
        if (!bVar12) goto LAB_00481163;
        pcVar17 = "private: ";
LAB_004811f2:
        pDVar3 = operator+(local_70,pcVar17,(DName *)&local_28);
        local_28 = *(int *)pDVar3;
        local_24 = *(uint *)(pDVar3 + 4);
      }
      else {
LAB_00481163:
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar2 == 0) {
          if (local_8 == 0) {
            bVar12 = (uVar1 & 0x1800) == 0x1000;
          }
          else {
            bVar12 = ((byte)uVar1 & 0xc0) == 0x80;
          }
          if (bVar12) {
            pcVar17 = "protected: ";
            goto LAB_004811f2;
          }
        }
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar2 == 0) {
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x1800;
          }
          else {
            uVar2 = uVar1 & 0xc0;
          }
          if (uVar2 == 0) {
            pcVar17 = "public: ";
            goto LAB_004811f2;
          }
        }
      }
    }
  }
  if (local_8 == 0) {
    uVar2 = uVar1 & 0x6000;
  }
  else {
    uVar2 = (uVar1 & 0x1800) - 0x800;
  }
  if (uVar2 == 0) {
    uVar2 = uVar1 & 0x400;
  }
  else {
    uVar2 = uVar1 & 0x1000;
  }
  if ((uVar2 != 0) && ((DAT_004b4328 & 0x1000) == 0)) {
    pDVar3 = operator+(local_70,"[thunk]:",(DName *)&local_28);
    local_28 = *(int *)pDVar3;
    local_24 = *(uint *)(pDVar3 + 4);
  }
  if ((uVar1 & 0x10000) != 0) {
    pDVar3 = operator+(local_70,"extern \"C\" ",(DName *)&local_28);
    local_28 = *(int *)pDVar3;
    local_24 = *(uint *)(pDVar3 + 4);
  }
  *(int *)param_1 = local_28;
LAB_00481290:
  *(uint *)(param_1 + 4) = local_24;
  return param_1;
}


