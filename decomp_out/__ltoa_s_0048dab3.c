/* errno_t __cdecl __ltoa_s(long _Val, char * _DstBuf, size_t _Size, int _Radix) @ 0048dab3  39 bytes */
#include "th12.h"

/* Library Function - Single Match
    __ltoa_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __ltoa_s(long _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  int iVar1;
  
  iVar1 = 0;
  if ((_Radix == 10) && (_Val < 0)) {
    iVar1 = 1;
  }
  iVar1 = _xtoa_s_20(_DstBuf,_Size,_Radix,iVar1);
  return iVar1;
}


