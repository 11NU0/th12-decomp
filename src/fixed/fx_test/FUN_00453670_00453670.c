/* undefined __thiscall FUN_00453670(void * this, int param_1) @ 00453670  215 bytes */

#include "th12.h"

void __thiscall FUN_00453670(void *this,int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  byte local_84 [128];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)local_84;
  iVar8 = 0;
  pcVar4 = _strrchr((char *)this,0x2f);
  if ((pcVar4 == (char *)0x0) && (pcVar4 = _strrchr((char *)this,0x5c), pcVar4 == (char *)0x0)) {
    iVar6 = -(int)this;
    do {
                    /* WARNING: Load size is inaccurate */
      cVar1 = *this;
      *(char *)((int)this + (int)(local_84 + iVar6)) = cVar1;
      this = (void *)((int)this + 1);
    } while (cVar1 != '\0');
  }
  else {
    pcVar4 = pcVar4 + 1;
    iVar6 = -(int)pcVar4;
    do {
      cVar1 = *pcVar4;
      pcVar4[(int)(local_84 + iVar6)] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
  }
  pbVar3 = *(byte **)(param_1 + 0x1984);
  bVar2 = *pbVar3;
  pbVar5 = pbVar3;
  while (bVar2 != 0) {
    pbVar7 = local_84;
    do {
      bVar2 = *pbVar5;
      bVar9 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_00453705:
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0045370a;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar9 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_00453705;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_0045370a:
    if (iVar6 == 0) break;
    iVar8 = iVar8 + 1;
    pbVar5 = pbVar3 + iVar8 * 0x34;
    bVar2 = pbVar3[iVar8 * 0x34];
  }
  ___security_check_cookie_4(local_4 ^ (uint)local_84);
  return;
}


