/* int __cdecl __vsnprintf_c_l(char * _DstBuf, size_t _MaxCount, char * param_3, _locale_t _Locale, va_list _ArgList) @ 00472509  42 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __vsnprintf_c_l
    __vsprintf_p_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__cdecl __vsnprintf_c_l(char *_DstBuf,size_t _MaxCount,char *param_3,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_helper(__output_l,_DstBuf,_MaxCount,(int)param_3,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


