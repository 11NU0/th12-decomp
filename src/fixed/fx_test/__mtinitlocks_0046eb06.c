/* int __cdecl __mtinitlocks(void) @ 0046eb06  75 bytes */

#include "th12.h"

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinitlocks(void)

{
  BOOL BVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_004b3c08;
  do {
    if ((&DAT_004ad2bc)[iVar2 * 2] == 1) {
      (&DAT_004ad2b8)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      BVar1 = ___crtInitCritSecAndSpinCount((LPCRITICAL_SECTION)(&DAT_004ad2b8)[iVar2 * 2],4000);
      if (BVar1 == 0) {
        (&DAT_004ad2b8)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}


