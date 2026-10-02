/* int __cdecl FID_conflict:__vwprintf_s_l(wchar_t * _Format, _locale_t _Locale, va_list _ArgList) @ 0048d479  29 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __vprintf_l
    __vprintf_p_l
    __vprintf_s_l
    __vwprintf_l
     6 names - too many to list
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___vwprintf_s_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(__output_l,(int)_Format,_Locale,_ArgList);
  return iVar1;
}


