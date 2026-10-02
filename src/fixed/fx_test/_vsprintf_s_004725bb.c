/* int __cdecl _vsprintf_s(char * _DstBuf, size_t _SizeInBytes, char * _Format, va_list _ArgList) @ 004725bb  29 bytes */

#include "th12.h"

/* Library Function - Single Match
    _vsprintf_s
   
   Library: Visual Studio 2008 Release */

int __cdecl _vsprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}


