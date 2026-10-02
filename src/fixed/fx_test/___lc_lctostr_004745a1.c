/* undefined __cdecl ___lc_lctostr(char * param_1, rsize_t param_2, char * param_3) @ 004745a1  106 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2008 Release */

void __cdecl ___lc_lctostr(char *param_1,rsize_t param_2,char *param_3)

{
  errno_t eVar1;
  
  eVar1 = _strcpy_s(param_1,param_2,param_3);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_3[0x40] != '\0') {
    __strcats(param_1,param_2,2);
  }
  if (param_3[0x80] != '\0') {
    __strcats(param_1,param_2,2);
  }
  return;
}


