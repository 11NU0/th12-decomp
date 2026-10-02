/* _locale_t __cdecl __create_locale(int _Category, char * _Locale) @ 00474ed9  245 bytes */
#include "th12.h"

/* Library Function - Single Match
    __create_locale
   
   Library: Visual Studio 2008 Release */

_locale_t __cdecl __create_locale(int _Category,char *_Locale)

{
  _locale_t _Memory;
  int *piVar1;
  pthreadlocinfo ptVar2;
  pthreadmbcinfo ptVar3;
  int iVar4;
  
  if (((uint)_Category < 6) && (_Locale != (char *)0x0)) {
    _Memory = (_locale_t)__calloc_crt(8,1);
    if (_Memory != (_locale_t)0x0) {
      ptVar2 = (pthreadlocinfo)__calloc_crt(0xd8,1);
      _Memory->locinfo = ptVar2;
      if (ptVar2 == (pthreadlocinfo)0x0) {
        _free(_Memory);
      }
      else {
        ptVar3 = (pthreadmbcinfo)__calloc_crt(0x220,1);
        _Memory->mbcinfo = ptVar3;
        if (ptVar3 != (pthreadmbcinfo)0x0) {
          __copytlocinfo_nolock((LONG *)&DAT_004ad9e0);
          iVar4 = __setlocale_nolock(_Locale,(int)_Memory->locinfo,_Category);
          if (iVar4 == 0) {
            ___removelocaleref(&_Memory->locinfo->refcount);
            ___freetlocinfo(_Memory->locinfo);
            _free(_Memory);
          }
          else {
            iVar4 = __setmbcp_nolock(_Memory->locinfo->lc_codepage,(int)_Memory->mbcinfo);
            if (iVar4 == 0) {
              _Memory->mbcinfo->refcount = 1;
              _Memory->mbcinfo->refcount = 1;
              return _Memory;
            }
            _free(_Memory->mbcinfo);
            ___removelocaleref(&_Memory->locinfo->refcount);
            ___freetlocinfo(_Memory->locinfo);
            _free(_Memory);
          }
          return (_locale_t)0x0;
        }
        _free(_Memory->locinfo);
        _free(_Memory);
      }
    }
    piVar1 = __errno();
    *piVar1 = 0xc;
  }
  return (_locale_t)0x0;
}


