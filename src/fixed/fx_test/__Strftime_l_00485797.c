/* int __cdecl __Strftime_l(char * param_1, uint param_2, char * param_3, int param_4, tm * param_5, localeinfo_struct * param_6) @ 00485797  420 bytes */

#include "th12.h"

/* Library Function - Single Match
    __Strftime_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__Strftime_l(char *param_1,uint param_2,char *param_3,int param_4,tm *param_5,
            localeinfo_struct *param_6)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint unaff_EBX;
  uint *unaff_ESI;
  char *pcVar4;
  __lc_time_data *unaff_EDI;
  localeinfo_struct local_24;
  int local_1c;
  char local_18;
  char *local_14;
  tm *local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_14 = param_1;
  _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_24,param_6);
  if (param_1 == (char *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_2 == 0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  *param_1 = '\0';
  if (param_3 != (char *)0x0) {
    if (param_5 == (tm *)0x0) {
  local_24__u_alias = (local_24__u *)&local_24;
      param_5 = (tm *)local_24__u_alias->locinfo[1].lc_category[0].wrefcount;
    }
    local_8 = param_2;
    local_10 = param_5;
    if (param_2 != 0) {
      do {
        cVar1 = *param_3;
        if (cVar1 == '\0') break;
        if (cVar1 == '%') {
          if (param_4 == 0) goto LAB_00485910;
          pcVar4 = param_3 + 1;
          cVar1 = *pcVar4;
          if (cVar1 == '#') {
            pcVar4 = param_3 + 2;
          }
          iVar3 = _expandtime(&local_24,(char)&local_8,local_10,(char **)(uint)(cVar1 == '#'),
                              unaff_ESI,unaff_EDI,unaff_EBX);
          if (iVar3 == 0) {
            if (local_8 != 0) {
              local_c = 1;
            }
            goto LAB_004858e6;
          }
        }
        else {
          iVar3 = __isleadbyte_l((int)cVar1,&local_24);
          pcVar4 = param_3;
          if ((iVar3 != 0) && (1 < local_8)) {
            pcVar4 = param_3 + 1;
            if (*pcVar4 == '\0') {
              local_c = 1;
              goto LAB_004858e6;
            }
            *param_1 = *param_3;
            param_1 = param_1 + 1;
            local_8 = local_8 - 1;
          }
          *param_1 = *pcVar4;
          param_1 = param_1 + 1;
          local_8 = local_8 - 1;
        }
        param_3 = pcVar4 + 1;
      } while (local_8 != 0);
      if (local_8 != 0) {
        *param_1 = '\0';
        if (local_18 == '\0') {
          return param_2 - local_8;
        }
        *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
        return param_2 - local_8;
      }
    }
LAB_004858e6:
    *local_14 = '\0';
    if ((local_c == 0) && (local_8 == 0)) {
      piVar2 = __errno();
      *piVar2 = 0x22;
      goto LAB_00485928;
    }
  }
LAB_00485910:
  piVar2 = __errno();
  *piVar2 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_00485928:
  if (local_18 != '\0') {
    *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
  }
  return 0;
}


