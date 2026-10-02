/* void __cdecl __free_locale(_locale_t _Locale) @ 004742b4  170 bytes */

#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __free_locale
   
   Library: Visual Studio 2008 Release */

void __cdecl __free_locale(_locale_t _Locale)

{
  pthreadlocinfo ptVar1;
  LONG LVar2;
  
  if (_Locale != (_locale_t)0x0) {
    __lock(0xd);
    if (_Locale->mbcinfo != (pthreadmbcinfo)0x0) {
      LVar2 = InterlockedDecrement(&_Locale->mbcinfo->refcount);
      if ((LVar2 == 0) && (_Locale->mbcinfo != (pthreadmbcinfo)&DAT_004ad4b0)) {
        _free(_Locale->mbcinfo);
      }
    }
    FUN_00474361();
    if (_Locale->locinfo != (pthreadlocinfo)0x0) {
      __lock(0xc);
      ___removelocaleref(&_Locale->locinfo->refcount);
      ptVar1 = _Locale->locinfo;
      if (((ptVar1 != (pthreadlocinfo)0x0) && (ptVar1->refcount == 0)) &&
         (ptVar1 != (pthreadlocinfo)&DAT_004ad9e0)) {
        ___freetlocinfo(ptVar1);
      }
      FUN_0047436d();
    }
    _Locale->locinfo = (pthreadlocinfo)0xbaadf00d;
    _Locale->mbcinfo = (pthreadmbcinfo)0xbaadf00d;
    _free(_Locale);
  }
  return;
}


