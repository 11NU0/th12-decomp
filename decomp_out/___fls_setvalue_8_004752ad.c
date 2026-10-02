/* undefined __stdcall ___fls_setvalue@8(undefined4 param_1, undefined4 param_2) @ 004752ad  29 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___fls_setvalue@8
   
   Library: Visual Studio 2008 Release */

void ___fls_setvalue_8(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)__decode_pointer(DAT_004b4108);
  (*pcVar1)(param_1,param_2);
  return;
}


