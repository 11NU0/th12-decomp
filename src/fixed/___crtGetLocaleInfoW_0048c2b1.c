/* undefined __cdecl ___crtGetLocaleInfoW(localeinfo_struct * param_1, LCID param_2, LCTYPE param_3, LPWSTR param_4, int param_5) @ 0048c2b1  52 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___crtGetLocaleInfoW
   
   Library: Visual Studio 2008 Release */

void __cdecl
___crtGetLocaleInfoW
          (localeinfo_struct *param_1,LCID param_2,LCTYPE param_3,LPWSTR param_4,int param_5)

{
  _LocaleUpdate local_14 [8];
  int local_c;
  char local_8;
  
  _LocaleUpdate__LocaleUpdate(local_14,param_1);
  GetLocaleInfoW(param_2,param_3,param_4,param_5);
  if (local_8 != '\0') {
    *(uint *)((int)local_c + 0x70) = *(uint *)((int)local_c + 0x70) & 0xfffffffd;
  }
  return;
}


