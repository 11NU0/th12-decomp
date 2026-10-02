/* int __cdecl _store_winword(localeinfo_struct * param_1, int param_2, tm * param_3, char * * param_4, uint * param_5, __lc_time_data * param_6) @ 00485336  1121 bytes */
#include "th12.h"

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _store_winword(struct localeinfo_struct *,int,struct tm const *,char * *,unsigned
   int *,struct __lc_time_data *)
   
   Library: Visual Studio 2008 Release */

int __cdecl
_store_winword(localeinfo_struct *param_1,int param_2,tm *param_3,char **param_4,uint *param_5,
              __lc_time_data *param_6)

{
  code cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_EBX;
  char **ppcVar5;
  __lc_time_data *unaff_ESI;
  uint *unaff_EDI;
  code *_Str1;
  code *pcVar6;
  char *pcVar7;
  char *pcVar8;
  short local_24;
  short local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  code *local_10;
  char **local_c;
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    _Str1 = (code *)param_6->ww_sdatefmt;
  }
  else if (param_2 == 1) {
    _Str1 = (code *)param_6->ww_ldatefmt;
  }
  else {
    _Str1 = (code *)param_6->ww_timefmt;
  }
  if (param_6->refcount != 1) {
    local_10 = GetDateFormatA_exref;
    if (param_2 == 2) {
      local_10 = GetTimeFormatA_exref;
    }
    local_24 = *(short *)&param_3->tm_year + 0x76c;
    local_22 = *(short *)&param_3->tm_mon + 1;
    local_1e = *(undefined2 *)&param_3->tm_mday;
    local_1c = *(undefined2 *)&param_3->tm_hour;
    local_1a = *(undefined2 *)&param_3->tm_min;
    local_18 = *(undefined2 *)&param_3->tm_sec;
    local_16 = 0;
    local_14 = (*local_10)(param_6->ww_caltype,0,&local_24,_Str1,0,0);
    if (local_14 != 0) {
      if ((int)(local_14 + 8U) < 0x401) {
        ppcVar5 = (char **)&stack0xffffffd0;
        if (&stack0x00000000 != (undefined *)0x30) {
          unaff_EDI = (uint *)0xcccc;
          ppcVar5 = (char **)&stack0xffffffd0;
LAB_0048541a:
          ppcVar5 = ppcVar5 + 2;
        }
      }
      else {
        ppcVar5 = (char **)_malloc(local_14 + 8U);
        if (ppcVar5 != (char **)0x0) {
          *ppcVar5 = (char *)0xdddd;
          goto LAB_0048541a;
        }
      }
      local_c = ppcVar5;
      if (ppcVar5 != (char **)0x0) {
        iVar2 = (*local_10)(param_6->ww_caltype,0,&local_24,_Str1,ppcVar5,local_14);
        while ((iVar2 = iVar2 + -1, 0 < iVar2 && (*param_5 != 0))) {
          local_14 = iVar2;
          **param_4 = *(char *)ppcVar5;
          *param_4 = *param_4 + 1;
          ppcVar5 = (char **)((int)ppcVar5 + 1);
          *param_5 = *param_5 - 1;
        }
        __freea(local_c);
LAB_0048546c:
        iVar2 = ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
        return iVar2;
      }
    }
  }
  cVar1 = *_Str1;
joined_r0x00485482:
  if ((cVar1 == (code)0x0) || (*param_5 == 0)) goto LAB_0048546c;
  local_c = (char **)0x0;
  local_10 = _Str1;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    local_10 = local_10 + 1;
    uVar4 = uVar3 + 1;
  } while (*local_10 == cVar1);
  iVar2 = (int)(char)cVar1;
  if (iVar2 < 0x65) {
    if (iVar2 == 100) {
      if (uVar3 == 0) {
        local_c = (char **)0x1;
      }
      else {
joined_r0x00485605:
        if ((uVar3 != 1) && (uVar3 != 2)) {
joined_r0x0048560b:
          if (uVar3 != 3) goto LAB_004854d6;
        }
      }
      goto LAB_0048576d;
    }
    if (iVar2 != 0x27) {
      if (iVar2 == 0x41) {
LAB_0048555e:
        iVar2 = ___ascii_stricmp((char *)_Str1,"am/pm");
        if (iVar2 == 0) {
          local_10 = _Str1 + 5;
        }
        else {
          iVar2 = ___ascii_stricmp((char *)_Str1,"a/p");
          if (iVar2 == 0) {
            local_10 = _Str1 + 3;
          }
        }
      }
      else if (iVar2 == 0x48) {
        if (uVar3 != 0) goto joined_r0x0048575d;
        local_c = (char **)0x1;
      }
      else {
        if (iVar2 != 0x4d) {
          if (iVar2 != 0x61) goto LAB_004854d6;
          goto LAB_0048555e;
        }
        if (uVar3 != 0) goto joined_r0x00485605;
        local_c = (char **)0x1;
      }
      goto LAB_0048576d;
    }
    _Str1 = _Str1 + uVar4;
    if ((uVar4 & 1) != 0) {
      cVar1 = *_Str1;
      if (cVar1 == (code)0x0) goto LAB_0048546c;
      do {
        if (*param_5 == 0) break;
        if (cVar1 == (code)0x27) {
          _Str1 = _Str1 + 1;
          break;
        }
        iVar2 = __isleadbyte_l((int)(char)cVar1,param_1);
        pcVar6 = _Str1;
        if ((iVar2 != 0) && (1 < *param_5)) {
          pcVar6 = _Str1 + 1;
          if (*pcVar6 == (code)0x0) goto LAB_0048546c;
          **param_4 = (char)*_Str1;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
        }
        **param_4 = (char)*pcVar6;
        *param_4 = *param_4 + 1;
        _Str1 = pcVar6 + 1;
        *param_5 = *param_5 - 1;
        cVar1 = *_Str1;
      } while (cVar1 != (code)0x0);
    }
  }
  else {
    if (iVar2 == 0x68) {
      if (uVar3 == 0) {
        local_c = (char **)0x1;
      }
      else {
joined_r0x0048575d:
        if (uVar4 != 2) {
LAB_004854d6:
          iVar2 = __isleadbyte_l(iVar2,param_1);
          pcVar6 = _Str1;
          if ((iVar2 != 0) && (1 < *param_5)) {
            pcVar6 = _Str1 + 1;
            if (*pcVar6 == (code)0x0) goto LAB_0048546c;
            **param_4 = (char)*_Str1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          **param_4 = (char)*pcVar6;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = pcVar6 + 1;
          goto LAB_0048550d;
        }
      }
    }
    else if (iVar2 == 0x6d) {
      if (uVar3 != 0) goto joined_r0x0048575d;
      local_c = (char **)0x1;
    }
    else if (iVar2 == 0x73) {
      if (uVar3 != 0) goto joined_r0x0048575d;
      local_c = (char **)0x1;
    }
    else {
      if (iVar2 == 0x74) {
        if (param_3->tm_hour < 0xc) {
          pcVar8 = param_6->ampm[0];
        }
        else {
          pcVar8 = param_6->ampm[1];
        }
        if ((uVar4 == 1) && (*param_5 != 0)) {
          iVar2 = __isleadbyte_l((int)*pcVar8,param_1);
          pcVar7 = pcVar8;
          if ((iVar2 != 0) && (1 < *param_5)) {
            pcVar7 = pcVar8 + 1;
            if (*pcVar7 == '\0') goto LAB_0048546c;
            **param_4 = *pcVar8;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          **param_4 = *pcVar7;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = local_10;
          goto LAB_0048550d;
        }
        while ((_Str1 = local_10, *pcVar8 != '\0' && (*param_5 != 0))) {
          iVar2 = __isleadbyte_l((int)*pcVar8,param_1);
          pcVar7 = pcVar8;
          if ((iVar2 != 0) && (1 < *param_5)) {
            pcVar7 = pcVar8 + 1;
            if (*pcVar7 == '\0') goto LAB_0048546c;
            **param_4 = *pcVar8;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          **param_4 = *pcVar7;
          *param_4 = *param_4 + 1;
          pcVar8 = pcVar7 + 1;
          *param_5 = *param_5 - 1;
        }
        goto LAB_0048550d;
      }
      if (iVar2 != 0x79) goto LAB_004854d6;
      if (uVar3 != 1) goto joined_r0x0048560b;
    }
LAB_0048576d:
    iVar2 = _expandtime(param_1,(char)param_5,(tm *)param_6,local_c,unaff_EDI,unaff_ESI,unaff_EBX);
    _Str1 = local_10;
    if (iVar2 == 0) goto LAB_0048546c;
  }
LAB_0048550d:
  cVar1 = *_Str1;
  goto joined_r0x00485482;
}


