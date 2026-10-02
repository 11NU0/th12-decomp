/* void __cdecl __mtterm(void) @ 004752ca  61 bytes */
#include "th12.h"

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2008 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_004adac8 != -1) {
    iVar2 = DAT_004adac8;
    pcVar1 = (code *)__decode_pointer(DAT_004b410c);
    (*pcVar1)(iVar2);
    DAT_004adac8 = -1;
  }
  if (DAT_004adacc != 0xffffffff) {
    TlsFree(DAT_004adacc);
    DAT_004adacc = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}


