/* int __cdecl __snprintf_s(char * _DstBuf, size_t _SizeInBytes, size_t _MaxCount, char * _Format, ...) @ 0046cc91  33 bytes */
#include "th12.h"

/* Library Function - Single Match
    __snprintf_s
   
   Library: Visual Studio 2008 Release */

int __cdecl __snprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,...)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_SizeInBytes,_MaxCount,_Format,(_locale_t)0x0,&stack0x00000014);
  return iVar1;
}


