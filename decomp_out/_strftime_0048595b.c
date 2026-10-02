/* size_t __cdecl _strftime(char * _Buf, size_t _SizeInBytes, char * _Format, tm * _Tm) @ 0048595b  31 bytes */
#include "th12.h"

/* Library Function - Single Match
    _strftime
   
   Library: Visual Studio 2008 Release */

size_t __cdecl _strftime(char *_Buf,size_t _SizeInBytes,char *_Format,tm *_Tm)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(_Buf,_SizeInBytes,_Format,(int)_Tm,(tm *)0x0,(localeinfo_struct *)0x0);
  return sVar1;
}


