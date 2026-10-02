/* uint __cdecl __mbctoupper(uint _Ch) @ 00479fe0  19 bytes */

#include "th12.h"

/* Library Function - Single Match
    __mbctoupper
   
   Library: Visual Studio 2008 Release */

uint __cdecl __mbctoupper(uint _Ch)

{
  uint uVar1;
  
  uVar1 = __mbctoupper_l(_Ch,(_locale_t)0x0);
  return uVar1;
}


