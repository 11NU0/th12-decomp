/* undefined4 * __stdcall ___sbh_alloc_new_region(void) @ 0046f10e  176 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2008 Release */

undefined4 * __stdcall ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_004d6440 == DAT_004d6450) {
    pvVar1 = HeapReAlloc(DAT_004b3c04,0,DAT_004d6444,(DAT_004d6450 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_004d6450 = DAT_004d6450 + 0x10;
    DAT_004d6444 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_004d6440 * 0x14 + (int)DAT_004d6444);
  pvVar1 = HeapAlloc(DAT_004b3c04,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_004d6440 = DAT_004d6440 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_004b3c04,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}


