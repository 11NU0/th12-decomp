/* int __cdecl __crtGetStringTypeW_stat(localeinfo_struct * param_1, ulong param_2, wchar_t * param_3, int param_4, ushort * param_5, int param_6, int param_7) @ 0048ed4f  35 bytes */
#include "th12.h"

/* Library Function - Single Match
    int __cdecl __crtGetStringTypeW_stat(struct localeinfo_struct *,unsigned long,wchar_t const
   *,int,unsigned short *,int,int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
__crtGetStringTypeW_stat
          (localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,
          int param_6,int param_7)

{
  BOOL BVar1;
  
  if ((int)param_3 < -1) {
    return 0;
  }
  BVar1 = GetStringTypeW((DWORD)param_1,(LPCWSTR)param_2,(int)param_3,(LPWORD)param_4);
  return BVar1;
}


