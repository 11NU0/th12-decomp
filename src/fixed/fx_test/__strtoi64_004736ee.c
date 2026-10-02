/* longlong __cdecl __strtoi64(char * _String, char * * _EndPtr, int _Radix) @ 004736ee  43 bytes */

#include "th12.h"

/* Library Function - Single Match
    __strtoi64
   
   Library: Visual Studio 2008 Release */

longlong __cdecl __strtoi64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_004b40dc == 0) {
    ppuVar2 = &PTR_DAT_004adac0;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,0);
  return _Var1;
}


