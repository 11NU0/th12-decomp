/* double __cdecl __atof_l(char * _String, _locale_t _Locale) @ 0046d44c  171 bytes */
#include "th12.h"

/* Library Function - Single Match
    __atof_l
   
   Library: Visual Studio 2008 Release */

typedef struct local_14__u { undefined4 _; pthreadlocinfo locinfo; } local_14__u;
double __cdecl __atof_l(char *_String,_locale_t _Locale)

{
  double dVar1;
  int *piVar2;
  uint uVar3;
  _locale_t _Locale_00;
  FLT p_Var4;
  _flt local_2c;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_String == (char *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)((int)local_c + 0x70) = *(uint *)((int)local_c + 0x70) & 0xfffffffd;
    }
    dVar1 = 0.0;
  }
  else {
    while( true ) {
      if ((int)(((local_14__u *)&local_14)->locinfo)->mb_cur_max < 2) {
        uVar3 = *(ushort *)(((local_14__u *)&local_14)->locinfo->pctype + (uint)(byte)*_String * 2) &
                8;
      }
      else {
        uVar3 = __isctype_l((uint)(byte)*_String,8,&local_14);
      }
      if (uVar3 == 0) break;
      _String = (char *)((byte *)_String + 1);
    }
    _Locale_00 = (_locale_t)_strlen(_String);
    p_Var4 = __fltin2(&local_2c,_String,_Locale_00);
    dVar1 = p_Var4->dval;
    if (local_8 != '\0') {
      *(uint *)((int)local_c + 0x70) = *(uint *)((int)local_c + 0x70) & 0xfffffffd;
    }
  }
  return dVar1;
}


