/* int __cdecl __snprintf_s_l(char * _DstBuf, size_t _DstSize, size_t _MaxCount, char * _Format, _locale_t _Locale, ...) @ 0046ccb2  34 bytes */

#include "th12.h"

/* Library Function - Single Match
    __snprintf_s_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__cdecl __snprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_DstSize,_MaxCount,_Format,_Locale,&stack0x00000018);
  return iVar1;
}


