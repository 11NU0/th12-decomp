/* undefined __stdcall FUN_004516a0(void) @ 004516a0  246 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_004516a0(void)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t sStack_114;
  byte *pbStack_110;
  CHAR local_10c [264];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&sStack_114;
  DVar1 = GetModuleFileNameA((HMODULE)0x0,local_10c,0x105);
  if (DVar1 == 0) {
    ___security_check_cookie_4(local_4 ^ (uint)&sStack_114);
    return;
  }
  iVar5 = 0;
  pbStack_110 = FUN_00463c10(&sStack_114,1);
  if (pbStack_110 == (byte *)0x0) {
    ___security_check_cookie_4(local_4 ^ (uint)&sStack_114);
    return;
  }
  iVar2 = (int)(sStack_114 + ((int)sStack_114 >> 0x1f & 3U)) >> 2;
  iVar3 = iVar2 + -1;
  iVar7 = 0;
  iVar8 = 0;
  iVar6 = 0;
  pbVar4 = pbStack_110;
  if (1 < iVar3) {
    iVar2 = (iVar2 - 3U >> 1) + 1;
    iVar6 = iVar2 * 2;
    do {
      iVar7 = iVar7 + *(int *)pbVar4;
      iVar8 = iVar8 + *(int *)((int)pbVar4 + 4);
      pbVar4 = pbVar4 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (iVar6 < iVar3) {
    iVar5 = *(int *)pbVar4;
  }
  _free(pbStack_110);
  _DAT_004cf284 = sStack_114;
  _DAT_004cf280 = iVar5 + iVar8 + iVar7;
  ___security_check_cookie_4(local_4 ^ (uint)&sStack_114);
  return;
}


