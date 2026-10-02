/* int __cdecl __vsprintf_p_l(char * _DstBuf, size_t _MaxCount, char * _Format, _locale_t _Locale, va_list _ArgList) @ 00472728  42 bytes */
#include "th12.h"

/* Library Function - Single Match
    __vsprintf_p_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__vsprintf_p_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_helper(__output_p_l,_DstBuf,_MaxCount,(int)_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


