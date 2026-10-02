/* errno_t __cdecl __ui64toa_s(ulonglong _Val, char * _DstBuf, size_t _Size, int _Radix) @ 0048dc21  31 bytes */
#include "th12.h"

/* Library Function - Single Match
    __ui64toa_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __ui64toa_s(ulonglong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  int iVar1;
  
  iVar1 = _x64toa_s_24((uint)_Val,_Val._4_4_,_Size,_Radix,(char *)0x0);
  return iVar1;
}


