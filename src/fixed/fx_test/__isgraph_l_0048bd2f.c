/* int __cdecl __isgraph_l(int _C, _locale_t _Locale) @ 0048bd2f  86 bytes */

#include "th12.h"

/* Library Function - Single Match
    __isgraph_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

typedef struct local_14__u { undefined4 _; undefined4 locinfo; } local_14__u;
int __cdecl __isgraph_l(int _C,_locale_t _Locale)

{
  local_14__u *local_14__u_alias;
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  local_14__u_alias = (local_14__u *)&local_14;
  if ((int)(local_14__u_alias->locinfo)->locale_name[3] < 2) {
  local_14__u_alias = (local_14__u *)&local_14;
    uVar1 = *(ushort *)(local_14__u_alias->locinfo[1].lc_category[0].locale + _C * 2) & 0x117;
  }
  else {
    uVar1 = __isctype_l(_C,0x117,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


