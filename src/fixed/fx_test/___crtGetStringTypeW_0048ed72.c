/* BOOL __cdecl ___crtGetStringTypeW(localeinfo_struct * param_1, DWORD param_2, LPCWSTR param_3, int param_4, LPWORD param_5) @ 0048ed72  62 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___crtGetStringTypeW
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl
___crtGetStringTypeW
          (localeinfo_struct *param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWORD param_5)

{
  BOOL BVar1;
  _LocaleUpdate local_14 [8];
  int local_c;
  char local_8;
  
  _LocaleUpdate__LocaleUpdate(local_14,param_1);
  if (param_4 < -1) {
    BVar1 = 0;
  }
  else {
    BVar1 = GetStringTypeW(param_2,param_3,param_4,param_5);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return BVar1;
}


