/* longlong __cdecl __strtoi64_l(char * _String, char * * _EndPtr, int _Radix, _locale_t _Locale) @ 00473719  29 bytes */
#include "th12.h"

/* Library Function - Single Match
    __strtoi64_l
   
   Library: Visual Studio 2008 Release */

longlong __cdecl __strtoi64_l(char *_String,char **_EndPtr,int _Radix,_locale_t _Locale)

{
  __uint64 _Var1;
  
  _Var1 = strtoxq(_Locale,_String,_EndPtr,_Radix,0);
  return _Var1;
}


