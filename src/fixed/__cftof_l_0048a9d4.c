/* undefined __cdecl __cftof_l(double * param_1, undefined * param_2, int param_3, size_t param_4, localeinfo_struct * param_5) @ 0048a9d4  187 bytes */
#include "th12.h"

/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2008 Release */

typedef struct local_30__u { undefined4 _; undefined4 sign; undefined4 decpt; } local_30__u;
void __cdecl
__cftof_l(double *param_1,undefined *param_2,int param_3,size_t param_4,localeinfo_struct *param_5)

{
  undefined4 stack0xfffffffc;
  int *piVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  __fltout2(*(_CRT_DOUBLE *)param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined *)0x0) || (param_3 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(((local_30__u *)&local_30)->sign == 0x2d);
    }
    eVar2 = __fptostr(param_2 + (((local_30__u *)&local_30)->sign == 0x2d),_SizeInBytes,((local_30__u *)&local_30)->decpt + param_4,
                      &local_30);
    if (eVar2 == 0) {
      __cftof2_l(param_2,param_3,param_4,'\0',param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


