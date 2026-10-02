/* tm * __cdecl __gmtime64(__time64_t * _Time) @ 0047728b  39 bytes */

#include "th12.h"

/* Library Function - Single Match
    __gmtime64
   
   Library: Visual Studio 2008 Release */

tm * __cdecl __gmtime64(__time64_t *_Time)

{
  tm *_Tm;
  errno_t eVar1;
  
  _Tm = ___getgmtimebuf();
  if (_Tm != (tm *)0x0) {
    eVar1 = __gmtime64_s(_Tm,_Time);
    _Tm = (tm *)(~-(uint)(eVar1 != 0) & (uint)_Tm);
  }
  return _Tm;
}


