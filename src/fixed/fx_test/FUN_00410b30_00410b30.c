/* byte * __stdcall FUN_00410b30(void) @ 00410b30  105 bytes */

#include "th12.h"

byte * __stdcall FUN_00410b30(void)

{
  char cVar1;
  int iVar2;
  char *in_EAX;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = DAT_004b43d8;
  DAT_004d4f38 = 0;
  pcVar3 = in_EAX;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar7 = (char *)0x4d4f37;
  do {
    pcVar6 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = in_EAX;
  for (uVar5 = (uint)((int)pcVar3 - (int)in_EAX) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = (int)pcVar3 - (int)in_EAX & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pbVar4 = FUN_00463c10((size_t *)0x0,0);
  if (*(void **)(iVar2 + 0x14) != (void *)0x0) {
    _free(*(void **)(iVar2 + 0x14));
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  *(byte **)(iVar2 + 0x14) = pbVar4;
  return pbVar4;
}


