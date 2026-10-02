/* size_t __cdecl __strftime_l(char * _Buf, size_t _Max_size, char * _Format, tm * _Tm, _locale_t _Locale) @ 0048593b  32 bytes */
#include "th12.h"

/* Library Function - Single Match
    __strftime_l
   
   Library: Visual Studio 2008 Release */

size_t __cdecl __strftime_l(char *_Buf,size_t _Max_size,char *_Format,tm *_Tm,_locale_t _Locale)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(_Buf,_Max_size,_Format,(int)_Tm,(tm *)0x0,_Locale);
  return sVar1;
}


