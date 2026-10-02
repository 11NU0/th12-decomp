/* int __cdecl FID_conflict:__vwprintf_s_l(wchar_t * _Format, _locale_t _Locale, va_list _ArgList) @ 0048d4b3  29 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __vprintf_p_l
    __vprintf_s_l
    __vwprintf_p_l
    __vwprintf_s_l
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___vwprintf_s_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(__output_p_l,(int)_Format,_Locale,_ArgList);
  return iVar1;
}


