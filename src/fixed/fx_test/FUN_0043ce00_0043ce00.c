/* undefined __stdcall FUN_0043ce00(void) @ 0043ce00  153 bytes */

#include "th12.h"

void __stdcall FUN_0043ce00(void)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  undefined2 *unaff_ESI;
  int iVar4;
  
  _memset(unaff_ESI,0,0x45f4);
  *unaff_ESI = 0x5243;
  unaff_ESI[1] = 2;
  *(undefined4 *)(unaff_ESI + 4) = 0x45f4;
  puVar1 = unaff_ESI + 10;
  iVar4 = 5;
  do {
    iVar2 = 100000;
    do {
      *(int *)(puVar1 + -2) = iVar2;
      *(undefined *)puVar1 = 1;
      *(undefined4 *)(puVar1 + 1) = 0x2d2d2d2d;
      *(undefined4 *)(puVar1 + 3) = 0x2d2d2d2d;
      *(undefined *)(puVar1 + 5) = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined *)((int)puVar1 + 1) = 0;
      iVar2 = iVar2 + -10000;
      puVar1 = puVar1 + 0xe;
    } while (0 < iVar2);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = 0;
  piVar3 = (int *)(unaff_ESI + 0x378);
  do {
    piVar3[-1] = iVar4;
    *piVar3 = (int)(char)(&DAT_004af208)[iVar4];
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 0x24;
  } while (iVar4 < 0x71);
  return;
}


