/* undefined4 __stdcall FUN_00437680(void) @ 00437680  148 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00437680(void)

{
  int *piVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  
  pbVar3 = FUN_00463c10((size_t *)0x0,0);
  *(byte **)(unaff_ESI + 0xa2c) = pbVar3;
  if (pbVar3 == (byte *)0x0) {
    return 0xffffffff;
  }
  iVar6 = 0;
  if (*(short *)(pbVar3 + 2) != 0) {
    iVar5 = 0x268;
    do {
      piVar1 = (int *)(iVar5 + *(int *)(unaff_ESI + 0xa2c));
      *piVar1 = *piVar1 + *(int *)(unaff_ESI + 0xa2c);
      pcVar4 = *(char **)(iVar5 + *(int *)(unaff_ESI + 0xa2c));
      cVar2 = *pcVar4;
      while (-1 < cVar2) {
        *(undefined4 *)(pcVar4 + 0x24) =
             *(undefined4 *)(&DAT_004aedf0 + *(int *)(pcVar4 + 0x24) * 4);
        *(undefined4 *)(pcVar4 + 0x28) =
             *(undefined4 *)(&DAT_004aebd4 + *(int *)(pcVar4 + 0x28) * 4);
        *(undefined4 *)(pcVar4 + 0x2c) =
             *(undefined4 *)(&DAT_004ce8ac + *(int *)(pcVar4 + 0x2c) * 4);
        *(undefined4 *)(pcVar4 + 0x30) =
             *(undefined4 *)(&DAT_004aee10 + *(int *)(pcVar4 + 0x30) * 4);
        pcVar4 = pcVar4 + 0x34;
        cVar2 = *pcVar4;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 8;
    } while (iVar6 < (int)(uint)*(ushort *)(*(int *)(unaff_ESI + 0xa2c) + 2));
  }
  return 0;
}


