/* int __cdecl FID_conflict:_vprintf_s(wchar_t * _Format, va_list _ArgList) @ 0048d4ec  28 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __vprintf_p
    __vwprintf_p
    _vprintf
    _vprintf_s
     6 names - too many to list
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict__vprintf_s(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(__output_s_l,(int)_Format,0,_ArgList);
  return iVar1;
}


