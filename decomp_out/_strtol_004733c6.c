/* long __cdecl _strtol(char * _Str, char * * _EndPtr, int _Radix) @ 004733c6  43 bytes */
#include "th12.h"

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2008 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_004b40dc == 0) {
    ppuVar2 = &PTR_DAT_004adac0;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}


