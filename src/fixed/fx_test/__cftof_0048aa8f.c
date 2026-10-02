/* errno_t __cdecl __cftof(double * _Value, char * _Buf, size_t _SizeInBytes, int _Dec) @ 0048aa8f  29 bytes */

#include "th12.h"

/* Library Function - Single Match
    __cftof
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __cftof(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec)

{
  errno_t eVar1;
  
  eVar1 = __cftof_l(_Value,_Buf,_SizeInBytes,_Dec,(localeinfo_struct *)0x0);
  return eVar1;
}


