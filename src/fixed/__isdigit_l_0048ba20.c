/* int __cdecl __isdigit_l(int _C, _locale_t _Locale) @ 0048ba20  81 bytes */
#include "th12.h"

/* Library Function - Single Match
    __isdigit_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

typedef struct local_14__u { undefined4 _; pthreadlocinfo locinfo; } local_14__u;
int __cdecl __isdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(((local_14__u *)&local_14)->locinfo)->mb_cur_max < 2) {
    uVar1 = *(ushort *)(((local_14__u *)&local_14)->locinfo->pctype + _C * 2) & 4;
  }
  else {
    uVar1 = __isctype_l(_C,4,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)((int)local_c + 0x70) = *(uint *)((int)local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


