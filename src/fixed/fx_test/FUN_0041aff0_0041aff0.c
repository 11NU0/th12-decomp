/* undefined4 __stdcall FUN_0041aff0(int param_1) @ 0041aff0  186 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0041aff0(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30 [12];
  
  _memset(&local_50,0,0x50);
  pbVar2 = (byte *)(DAT_004b43c8 + 100);
  local_3c = 10;
  local_44 = 10;
  local_40 = 0xfffffffe;
  puVar3 = (undefined4 *)(param_1 + 0x23c);
  puVar4 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = 2000;
  do {
    if ((((*pbVar2 & 1) != 0) && (*(short *)(pbVar2 + 0x532) == 1)) &&
       (*(int *)(&DAT_004af280 + *(short *)(pbVar2 + 0x9f4) * 0xd0) == 0x47)) {
      local_50 = *(undefined4 *)(pbVar2 + 0x4bc);
      local_4c = *(undefined4 *)(pbVar2 + 0x4c0);
      local_48 = *(undefined4 *)(pbVar2 + 0x4c4);
      FUN_00412990((byte *)"MBossCard2_at2",&local_50);
    }
    pbVar2 = pbVar2 + 0x9f8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}


