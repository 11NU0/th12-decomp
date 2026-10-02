/* int __cdecl __set_error_mode(int _Mode) @ 004831b2  75 bytes */
#include "th12.h"

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2008 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar2 = DAT_004b38d8;
      DAT_004b38d8 = _Mode;
      return iVar2;
    }
    if (_Mode == 3) {
      return DAT_004b38d8;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


