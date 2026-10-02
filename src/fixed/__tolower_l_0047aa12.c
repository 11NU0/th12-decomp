/* int __cdecl __tolower_l(int _C, _locale_t _Locale) @ 0047aa12  277 bytes */
#include "th12.h"

/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2008 Release */

typedef struct local_1c__u { undefined4 _; pthreadlocinfo locinfo; } local_1c__u;
int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined local_b;
  CHAR local_8;
  CHAR local_7;
  undefined local_6;
  
  iVar1 = _C;
  _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(((local_1c__u *)&local_1c)->locinfo)->mb_cur_max < 2) {
      uVar2 = *(ushort *)(((local_1c__u *)&local_1c)->locinfo->pctype + _C * 2) & 1;
    }
    else {
      uVar2 = __isctype_l(_C,1,&local_1c);
    }
    if (uVar2 == 0) {
LAB_0047aa73:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)((int)local_14 + 0x70) = *(uint *)((int)local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)((local_1c__u *)&local_1c)->locinfo->pctype + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(((local_1c__u *)&local_1c)->locinfo)->mb_cur_max < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      piVar4 = __errno();
      *piVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(((local_1c__u *)&local_1c)->locinfo)->lc_category[0].wlocale,0x100,&local_8,
                               iVar3,(LPSTR)&local_c,3,(((local_1c__u *)&local_1c)->locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_0047aa73;
    uVar2 = (uint)local_c;
    if (iVar3 != 1) {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)((int)local_14 + 0x70) = *(uint *)((int)local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}


