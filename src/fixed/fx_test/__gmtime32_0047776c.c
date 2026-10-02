/* tm * __cdecl __gmtime32(__time32_t * _Time) @ 0047776c  39 bytes */

#include "th12.h"

/* Library Function - Single Match
    __gmtime32
   
   Library: Visual Studio 2008 Release */

tm * __cdecl __gmtime32(__time32_t *_Time)

{
  tm *_Tm;
  errno_t eVar1;
  
  _Tm = ___getgmtimebuf();
  if (_Tm != (tm *)0x0) {
    eVar1 = __gmtime32_s(_Tm,_Time);
    _Tm = (tm *)(~-(uint)(eVar1 != 0) & (uint)_Tm);
  }
  return _Tm;
}


