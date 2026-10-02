/* uint __cdecl __set_output_format(uint _Format) @ 0048de7e  60 bytes */

#include "th12.h"

/* Library Function - Single Match
    __set_output_format
   
   Library: Visual Studio 2008 Release */

uint __cdecl __set_output_format(uint _Format)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = DAT_004b43ac;
  if ((_Format & 0xfffffffe) == 0) {
    DAT_004b43ac = _Format;
  }
  else {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return uVar1;
}


