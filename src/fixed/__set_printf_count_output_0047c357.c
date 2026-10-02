/* int __cdecl __set_printf_count_output(int _Value) @ 0047c357  42 bytes */
#include "th12.h"

/* Library Function - Single Match
    __set_printf_count_output
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __set_printf_count_output(int _Value)

{
  bool bVar1;
  
  bVar1 = DAT_004b42f4 == (DAT_004ad138 | 1);
  DAT_004b42f4 = -(uint)(_Value != 0) & (DAT_004ad138 | 1);
  return (uint)bVar1;
}


