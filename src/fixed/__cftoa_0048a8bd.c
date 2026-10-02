/* errno_t __cdecl __cftoa(double * _Value, char * _Buf, size_t _SizeInBytes, int _Dec, int _Caps) @ 0048a8bd  32 bytes */
#include "th12.h"

/* Library Function - Single Match
    __cftoa
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __cftoa(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t in_EAX;
  
  __cftoa_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,(localeinfo_struct *)0x0);
  return in_EAX;
}


