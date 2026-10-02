/* errno_t __cdecl __get_daylight(int * _Daylight) @ 004772b2  57 bytes */
#include "th12.h"

/* Library Function - Single Match
    __get_daylight
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __get_daylight(int *_Daylight)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_Daylight == (int *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    eVar2 = 0x16;
  }
  else {
    *_Daylight = DAT_004adafc;
    eVar2 = 0;
  }
  return eVar2;
}


