/* int __cdecl _tolower(int _C) @ 0047ab27  44 bytes */
#include "th12.h"

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2008 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_004b40dc == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}


