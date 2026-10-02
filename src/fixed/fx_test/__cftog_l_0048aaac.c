/* undefined __cdecl __cftog_l(double * param_1, undefined * param_2, uint param_3, size_t param_4, int param_5, localeinfo_struct * param_6) @ 0048aaac  250 bytes */

#include "th12.h"

/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2008 Release */

void __cdecl
__cftog_l(double *param_1,undefined *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  char *pcVar1;
  int *piVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  char *pcVar4;
  _strflt local_34;
  int local_24;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined *)0x0) || (param_3 == 0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
  local_34__u_alias = (local_34__u *)&local_34;
    local_24 = local_34__u_alias->decpt + -1;
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
  local_34__u_alias = (local_34__u *)&local_34;
      _SizeInBytes = param_3 - (local_34__u_alias->sign == 0x2d);
    }
  local_34__u_alias = (local_34__u *)&local_34;
    eVar3 = __fptostr(param_2 + (local_34__u_alias->sign == 0x2d),_SizeInBytes,param_4,&local_34);
    if (eVar3 == 0) {
  local_34__u_alias = (local_34__u *)&local_34;
      local_34__u_alias->decpt = local_34__u_alias->decpt + -1;
  local_34__u_alias = (local_34__u *)&local_34;
      if ((local_34__u_alias->decpt < -4) || ((int)param_4 <= local_34__u_alias->decpt)) {
  local_34__u_alias = (local_34__u *)&local_34;
        __cftoe2_l(param_3,param_4,param_5,&local_34__u_alias->sign,'\x01',param_6);
      }
      else {
  local_34__u_alias = (local_34__u *)&local_34;
        pcVar1 = param_2 + (local_34__u_alias->sign == 0x2d);
  local_34__u_alias = (local_34__u *)&local_34;
        if (local_24 < local_34__u_alias->decpt) {
          do {
            pcVar4 = pcVar1;
            pcVar1 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
          pcVar4[-1] = '\0';
        }
        __cftof2_l(param_2,param_3,param_4,'\x01',param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


