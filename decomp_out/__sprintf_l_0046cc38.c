/* int __cdecl __sprintf_l(char * _DstBuf, char * _Format, _locale_t _Locale, ...) @ 0046cc38  28 bytes */
#include "th12.h"

/* Library Function - Single Match
    __sprintf_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __sprintf_l(char *_DstBuf,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = __vsprintf_l(_DstBuf,_Format,_Locale,&stack0x00000010);
  return iVar1;
}


