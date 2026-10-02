/* int __cdecl __configthreadlocale(int _Flag) @ 004741f7  106 bytes */

#include "th12.h"

/* Library Function - Single Match
    __configthreadlocale
   
   Library: Visual Studio 2008 Release */

int __cdecl __configthreadlocale(int _Flag)

{
  uint uVar1;
  _ptiddata p_Var2;
  int *piVar3;
  uint uVar4;
  
  p_Var2 = __getptd();
  uVar1 = p_Var2->_ownlocale;
  if (_Flag == -1) {
    DAT_004ad9d4 = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (_Flag != 2) {
        piVar3 = __errno();
        *piVar3 = 0x16;
        __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    p_Var2->_ownlocale = uVar4;
  }
  return ((uVar1 & 2) == 0) + 1;
}


