/* errno_t __cdecl __itoa_s(int _Value, char * _DstBuf, size_t _Size, int _Radix) @ 0048da89  42 bytes */
#include "th12.h"

/* Library Function - Single Match
    __itoa_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix)

{
  int iVar1;
  
  if ((_Radix == 10) && (_Value < 0)) {
    iVar1 = 1;
    _Radix = 10;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = _xtoa_s_20(_DstBuf,_Size,_Radix,iVar1);
  return iVar1;
}


