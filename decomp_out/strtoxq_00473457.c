/* __uint64 __cdecl strtoxq(localeinfo_struct * param_1, char * param_2, char * * param_3, int param_4, int param_5) @ 00473457  663 bytes */
#include "th12.h"

/* Library Function - Single Match
    unsigned __int64 __cdecl strtoxq(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2008 Release */

__uint64 __cdecl
strtoxq(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint extraout_ECX;
  pthreadlocinfo ptVar6;
  byte *pbVar7;
  byte *pbVar8;
  localeinfo_struct local_3c;
  int local_34;
  char local_30;
  uint local_28;
  uint local_24;
  int local_20;
  undefined8 local_1c;
  undefined8 local_14;
  byte *local_c;
  byte local_5;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_3c,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_30 != '\0') {
      *(uint *)(local_34 + 0x70) = *(uint *)(local_34 + 0x70) & 0xfffffffd;
    }
    local_14._0_4_ = 0;
    local_14._4_4_ = 0;
    goto LAB_004736ea;
  }
  local_14 = 0;
  ptVar6 = local_3c.locinfo;
  pbVar8 = (byte *)param_2;
  do {
    pbVar7 = pbVar8;
    local_5 = *pbVar7;
    pbVar8 = pbVar7 + 1;
    if ((int)ptVar6->locale_name[3] < 2) {
      uVar4 = *(ushort *)(ptVar6[1].lc_category[0].locale + (uint)local_5 * 2) & 8;
    }
    else {
      uVar4 = __isctype_l((uint)local_5,8,&local_3c);
      ptVar6 = local_3c.locinfo;
    }
  } while (uVar4 != 0);
  if (local_5 == 0x2d) {
    param_5 = param_5 | 2;
LAB_00473517:
    local_5 = *pbVar8;
    pbVar8 = pbVar7 + 2;
  }
  else if (local_5 == 0x2b) goto LAB_00473517;
  local_c = pbVar8;
  if (param_4 == 0) {
    if (local_5 != 0x30) {
      param_4 = 10;
      goto LAB_0047356c;
    }
    if ((*pbVar8 != 0x78) && (*pbVar8 != 0x58)) {
      param_4 = 8;
      goto LAB_0047356c;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (local_5 == 0x30)) && ((*pbVar8 == 0x78 || (*pbVar8 == 0x58)))) {
    local_5 = pbVar8[1];
    local_c = pbVar8 + 2;
  }
LAB_0047356c:
  local_28 = param_4 >> 0x1f;
  local_1c = __aulldvrm(0xffffffff,0xffffffff,param_4,local_28);
  local_20 = 0;
  pcVar2 = ptVar6[1].lc_category[0].locale;
  local_24 = extraout_ECX;
  do {
    uVar1 = *(ushort *)(pcVar2 + (uint)local_5 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) break;
      iVar5 = (int)(char)local_5;
      if ((byte)(local_5 + 0x9f) < 0x1a) {
        iVar5 = iVar5 + -0x20;
      }
      uVar4 = iVar5 - 0x37;
    }
    else {
      uVar4 = (int)(char)local_5 - 0x30;
    }
    if ((uint)param_4 <= uVar4) break;
    if (((local_14._4_4_ < local_1c._4_4_) ||
        ((local_14._4_4_ <= local_1c._4_4_ && ((uint)local_14 < (uint)local_1c)))) ||
       (((uint)local_14 == (uint)local_1c &&
        ((local_14._4_4_ == local_1c._4_4_ && ((local_20 != 0 || (uVar4 <= local_24)))))))) {
      local_14 = __allmul(param_4,local_28,(uint)local_14,local_14._4_4_);
      local_14 = local_14 + (ulonglong)uVar4;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) break;
    }
    local_5 = *local_c;
    local_c = local_c + 1;
  } while( true );
  local_c = local_c + -1;
  if ((param_5 & 8U) == 0) {
    if (param_3 != (char **)0x0) {
      local_c = (byte *)param_2;
    }
    local_14 = 0;
  }
  else if (((param_5 & 4U) != 0) ||
          (((param_5 & 1U) == 0 &&
           ((((param_5 & 2U) != 0 &&
             ((0x80000000 < local_14._4_4_ ||
              ((0x7fffffff < local_14._4_4_ && ((uint)local_14 != 0)))))) ||
            (((param_5 & 2U) == 0 &&
             ((0x7ffffffe < local_14._4_4_ && (0x7fffffff < local_14._4_4_)))))))))) {
    piVar3 = __errno();
    *piVar3 = 0x22;
    if ((param_5 & 1U) == 0) {
      if ((param_5 & 2U) == 0) {
        local_14 = 0x7fffffffffffffff;
      }
      else {
        local_14 = -0x8000000000000000;
      }
    }
    else {
      local_14 = -1;
    }
  }
  if (param_3 != (char **)0x0) {
    *param_3 = (char *)local_c;
  }
  if ((param_5 & 2U) != 0) {
    local_14 = CONCAT44(-(local_14._4_4_ + ((uint)local_14 != 0)),-(uint)local_14);
  }
  if (local_30 != '\0') {
    *(uint *)(local_34 + 0x70) = *(uint *)(local_34 + 0x70) & 0xfffffffd;
  }
LAB_004736ea:
  return CONCAT44(local_14._4_4_,(uint)local_14);
}


