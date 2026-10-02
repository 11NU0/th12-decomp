/* errno_t __cdecl __get_timezone(long * _Timezone) @ 00477324  57 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __get_daylight
    __get_dstbias
    __get_timezone
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __get_timezone(long *_Timezone)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_Timezone == (long *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    eVar2 = 0x16;
  }
  else {
    *_Timezone = DAT_004adaf8;
    eVar2 = 0;
  }
  return eVar2;
}


