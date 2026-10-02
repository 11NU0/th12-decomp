/* ulonglong __cdecl __strtoui64_l(char * _String, char * * _EndPtr, int _Radix, _locale_t _Locale) @ 00473762  29 bytes */

#include "th12.h"

/* Library Function - Single Match
    __strtoui64_l
   
   Library: Visual Studio 2008 Release */

ulonglong __cdecl __strtoui64_l(char *_String,char **_EndPtr,int _Radix,_locale_t _Locale)

{
  __uint64 _Var1;
  
  _Var1 = strtoxq(_Locale,_String,_EndPtr,_Radix,1);
  return _Var1;
}


