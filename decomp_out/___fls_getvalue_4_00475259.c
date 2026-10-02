/* undefined __stdcall ___fls_getvalue@4(undefined4 param_1) @ 00475259  26 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___fls_getvalue@4
   
   Library: Visual Studio 2008 Release */

void ___fls_getvalue_4(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)TlsGetValue(DAT_004adacc);
  (*pcVar1)(param_1);
  return;
}


