/* int __fastcall _LcidFromHexString(undefined4 param_1, char * param_2) @ 00485b44  52 bytes */
#include "th12.h"

/* Library Function - Single Match
    _LcidFromHexString
   
   Library: Visual Studio 2008 Release */

int __fastcall _LcidFromHexString(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while (cVar1 = *param_2, cVar1 != '\0') {
    param_2 = param_2 + 1;
    if ((byte)(cVar1 + 0x9fU) < 6) {
      cVar1 = cVar1 + -0x27;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      cVar1 = cVar1 + -7;
    }
    iVar2 = iVar2 * 0x10 + -0x30 + (int)cVar1;
  }
  return iVar2;
}


