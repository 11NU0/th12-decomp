/* int __cdecl __sprintf_s_l(char * _DstBuf, size_t _DstSize, char * _Format, _locale_t _Locale, ...) @ 0046cc72  31 bytes */
#include "th12.h"

/* Library Function - Single Match
    __sprintf_s_l
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __sprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,...)

{
  undefined4 stack0x00000014;
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_DstSize,_Format,_Locale,&stack0x00000014);
  return iVar1;
}


