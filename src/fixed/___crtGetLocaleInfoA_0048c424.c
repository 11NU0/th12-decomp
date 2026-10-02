/* int __cdecl ___crtGetLocaleInfoA(_locale_t _Plocinfo, LPCWSTR _LocaleName, LCTYPE _LCType, LPSTR _LpLCData, int _CchData) @ 0048c424  61 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___crtGetLocaleInfoA
   
   Library: Visual Studio 2008 Release */

int __cdecl
___crtGetLocaleInfoA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData)

{
  int iVar1;
  int in_stack_00000018;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_14,_Plocinfo);
  iVar1 = __crtGetLocaleInfoA_stat
                    (&local_14,(ulong)_LocaleName,_LCType,_LpLCData,_CchData,in_stack_00000018);
  if (local_8 != '\0') {
    *(uint *)((int)local_c + 0x70) = *(uint *)((int)local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


