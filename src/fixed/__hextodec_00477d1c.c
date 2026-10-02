/* uint __cdecl __hextodec(byte param_1) @ 00477d1c  32 bytes */
#include "th12.h"

/* Library Function - Single Match
    __hextodec
   
   Library: Visual Studio 2008 Release */

uint __cdecl __hextodec(byte param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _isdigit((uint)param_1);
  uVar2 = (uint)(char)param_1;
  if (iVar1 == 0) {
    uVar2 = (uVar2 & 0xffffffdf) - 7;
  }
  return uVar2;
}


