/* undefined __stdcall FUN_0043f1e0(void) @ 0043f1e0  92 bytes */
#include "th12.h"

void __stdcall FUN_0043f1e0(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar5 = DAT_004b451c;
  *(undefined4 *)((int)DAT_004b451c + 0x1e9ca) = 0x11111111;
  *(undefined4 *)((int)iVar5 + 0x1e9ce) = 0x11111111;
  *(undefined4 *)((int)iVar5 + 0x1e9d2) = 0x11111111;
  *(undefined4 *)((int)iVar5 + 0x1e9d6) = 0x11111111;
  puVar4 = (undefined *)((int)iVar5 + 0x5b1);
  iVar5 = 6;
  do {
    iVar3 = 4;
    puVar1 = puVar4;
    do {
      iVar2 = 6;
      do {
        *puVar1 = 1;
        puVar1 = puVar1 + 8;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar4 = puVar4 + 0x45f4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


