/* errno_t __cdecl __get_dstbias(long * _Daylight_savings_bias) @ 004772eb  57 bytes */
#include "th12.h"

/* Library Function - Single Match
    __get_dstbias
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __get_dstbias(long *_Daylight_savings_bias)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_Daylight_savings_bias == (long *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    eVar2 = 0x16;
  }
  else {
    *_Daylight_savings_bias = DAT_004adb00;
    eVar2 = 0;
  }
  return eVar2;
}


