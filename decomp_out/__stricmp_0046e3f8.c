/* int __cdecl __stricmp(char * _Str1, char * _Str2) @ 0046e3f8  82 bytes */
#include "th12.h"

/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2008 Release */

int __cdecl __stricmp(char *_Str1,char *_Str2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_004b40dc == 0) {
    if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
      return iVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __stricmp_l(_Str1,_Str2,(_locale_t)0x0);
  }
  return iVar2;
}


