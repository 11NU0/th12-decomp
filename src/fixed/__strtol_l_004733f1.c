/* long __cdecl __strtol_l(char * _Str, char * * _EndPtr, int _Radix, _locale_t _Locale) @ 004733f1  29 bytes */
#include "th12.h"

/* Library Function - Single Match
    __strtol_l
   
   Library: Visual Studio 2008 Release */

long __cdecl __strtol_l(char *_Str,char **_EndPtr,int _Radix,_locale_t _Locale)

{
  ulong uVar1;
  
  uVar1 = strtoxl(_Locale,_Str,_EndPtr,_Radix,0);
  return uVar1;
}


