/* int __cdecl __vsnprintf_s(char * _DstBuf, size_t _SizeInBytes, size_t _MaxCount, char * _Format, va_list _ArgList) @ 004726df  32 bytes */

#include "th12.h"

/* Library Function - Single Match
    __vsnprintf_s
   
   Library: Visual Studio 2008 Release */

int __cdecl
__cdecl __vsnprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_SizeInBytes,_MaxCount,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}


