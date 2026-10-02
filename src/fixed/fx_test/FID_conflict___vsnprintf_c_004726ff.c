/* int __cdecl FID_conflict:__vsnprintf_c(char * _DstBuf, size_t _MaxCount, char * _Format, va_list _ArgList) @ 004726ff  41 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __vsnprintf_c
    __vsprintf_p
   
   Library: Visual Studio 2008 Release */

int __cdecl
__cdecl FID_conflict___vsnprintf_c(char *_DstBuf,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_helper(__output_p_l,_DstBuf,_MaxCount,(int)_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


