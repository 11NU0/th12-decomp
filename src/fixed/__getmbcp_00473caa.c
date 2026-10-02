/* int __cdecl __getmbcp(void) @ 00473caa  62 bytes */
#include "th12.h"

/* Library Function - Single Match
    __getmbcp
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __getmbcp(void)

{
  int iVar1;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate__LocaleUpdate(local_14,(localeinfo_struct *)0x0);
  if (*(int *)((int)local_10 + 8) == 0) {
    if (local_8 != '\0') {
      *(uint *)((int)local_c + 0x70) = *(uint *)((int)local_c + 0x70) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)local_10 + 4);
    if (local_8 != '\0') {
      *(uint *)((int)local_c + 0x70) = *(uint *)((int)local_c + 0x70) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}


