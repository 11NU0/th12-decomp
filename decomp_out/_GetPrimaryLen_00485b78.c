/* int __fastcall _GetPrimaryLen(undefined4 param_1, char * param_2) @ 00485b78  27 bytes */
#include "th12.h"

/* Library Function - Single Match
    _GetPrimaryLen
   
   Library: Visual Studio 2008 Release */

int __fastcall _GetPrimaryLen(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


