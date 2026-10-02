/* ulong __cdecl __strtoul_l(char * _Str, char * * _EndPtr, int _Radix, _locale_t _Locale) @ 0047343a  29 bytes */

#include "th12.h"

/* Library Function - Single Match
    __strtoul_l
   
   Library: Visual Studio 2008 Release */

ulong __cdecl __strtoul_l(char *_Str,char **_EndPtr,int _Radix,_locale_t _Locale)

{
  ulong uVar1;
  
  uVar1 = strtoxl(_Locale,_Str,_EndPtr,_Radix,1);
  return uVar1;
}


