/* undefined4 __cdecl _TestDefaultCountry(short param_1) @ 00485b20  36 bytes */
#include "th12.h"

/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_0049f2d8 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}


