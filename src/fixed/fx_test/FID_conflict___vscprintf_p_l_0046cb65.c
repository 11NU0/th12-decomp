/* int __cdecl FID_conflict:__vscprintf_p_l(wchar_t * _Format, _locale_t _Locale, va_list _ArgList) @ 0046cb65  29 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __vscprintf_l
    __vscprintf_p_l
    __vscwprintf_l
    __vscwprintf_p_l
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___vscprintf_p_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict___vscprintf_helper(__output_l,(int)_Format,_Locale,_ArgList);
  return iVar1;
}


