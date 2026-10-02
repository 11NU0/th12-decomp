/* errno_t __cdecl __ultoa_s(ulong _Val, char * _DstBuf, size_t _Size, int _Radix) @ 0048dada  26 bytes */

#include "th12.h"

/* Library Function - Single Match
    __ultoa_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __ultoa_s(ulong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  int iVar1;
  
  iVar1 = _xtoa_s_20(_DstBuf,_Size,_Radix,0);
  return iVar1;
}


