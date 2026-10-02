/* int __cdecl _iswgraph(wint_t _C) @ 0047c79a  22 bytes */

#include "th12.h"

/* Library Function - Single Match
    _iswgraph
   
   Library: Visual Studio 2008 Release */

int __cdecl _iswgraph(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x117);
  return iVar1;
}


