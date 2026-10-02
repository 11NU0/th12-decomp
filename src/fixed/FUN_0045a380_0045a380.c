/* undefined __stdcall FUN_0045a380(void) @ 0045a380  56 bytes */
#include "th12.h"

void __stdcall FUN_0045a380(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = DAT_004ce8cc;
  puVar1 = &DAT_004b56a4 + DAT_004ce8cc;
  *(undefined **)((int)DAT_004ce8cc + 0x8356a4) = puVar1;
  *(undefined **)((int)iVar2 + 0x8356a8) = puVar1;
  *(undefined4 *)(&DAT_004b56a0 + iVar2) = 0;
  *(undefined4 *)((int)iVar2 + 0x8356ac) = 0;
  *(int *)((int)iVar2 + 0x8856b0) = iVar2 + 0x8356b0;
  *(int *)((int)iVar2 + 0x8856b4) = iVar2 + 0x8356b0;
  return;
}


