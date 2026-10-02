/* undefined __fastcall FUN_0044c130(char * param_1) @ 0044c130  200 bytes */

#include "th12.h"

void __fastcall FUN_0044c130(char *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  byte local_108 [260];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)local_108;
  pcVar3 = _strchr(param_1,0x2f);
  pcVar4 = param_1;
  if (pcVar3 != (char *)0x0) {
    pcVar4 = pcVar3 + 1;
  }
  pcVar4 = pcVar4 + (-1 - (int)param_1);
  iVar9 = -(int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(local_108 + iVar9)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  if (-1 < (int)pcVar4) {
    pbVar8 = local_108 + (int)pcVar4;
    pbVar8[0] = 0x2e;
    pbVar8[1] = 100;
    pbVar8[2] = 0x61;
    pbVar8[3] = 0x74;
    local_108[(int)(pcVar4 + 4)] = 0;
  }
  iVar9 = 0;
  puVar5 = &DAT_004cf2b0;
  if (0 < DAT_004b4538) {
    do {
      pbVar6 = *(byte **)(puVar5 + 8);
      pbVar8 = local_108;
      do {
        bVar2 = *pbVar6;
        bVar10 = bVar2 < *pbVar8;
        if (bVar2 != *pbVar8) {
LAB_0044c1d0:
          iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0044c1d5;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar10 = bVar2 < pbVar8[1];
        if (bVar2 != pbVar8[1]) goto LAB_0044c1d0;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar2 != 0);
      iVar7 = 0;
LAB_0044c1d5:
      if (iVar7 == 0) break;
      iVar9 = iVar9 + 1;
      puVar5 = puVar5 + 0x10;
    } while (iVar9 < DAT_004b4538);
  }
  ___security_check_cookie_4(local_4 ^ (uint)local_108);
  return;
}


