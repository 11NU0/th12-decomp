/* int __cdecl FID_conflict:__vscprintf_p(wchar_t * _Format, va_list _ArgList) @ 0046cb49  28 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __vscprintf
    __vscprintf_p
    __vscwprintf
    __vscwprintf_p
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___vscprintf_p(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict___vscprintf_helper(__output_l,(int)_Format,0,_ArgList);
  return iVar1;
}


