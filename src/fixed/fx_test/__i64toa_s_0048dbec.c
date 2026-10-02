/* errno_t __cdecl __i64toa_s(longlong _Val, char * _DstBuf, size_t _Size, int _Radix) @ 0048dbec  53 bytes */

#include "th12.h"

/* Library Function - Single Match
    __i64toa_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __i64toa_s(longlong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)0x0;
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    pcVar1 = (char *)0x1;
  }
  iVar2 = _x64toa_s_24((uint)_Val,_Val._4_4_,_Size,_Radix,pcVar1);
  return iVar2;
}


