/* int __thiscall FUN_00412450(void * this, char * param_1) @ 00412450  95 bytes */

#include "th12.h"

int __thiscall FUN_00412450(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  DAT_004d4f38 = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar7 = (char *)0x4d4f37;
  do {
    pcVar6 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = param_1;
  for (uVar5 = (uint)((int)pcVar2 - (int)param_1) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = (int)pcVar2 - (int)param_1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pbVar3 = FUN_00463c10((size_t *)0x0,0);
  iVar4 = FUN_004692e0(this,(int)pbVar3);
  return (-1 < iVar4) - 1;
}


