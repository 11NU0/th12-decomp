/* undefined4 __stdcall FUN_00404620(int param_1) @ 00404620  153 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00404620(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  int local_4;
  
  iVar2 = param_1;
  psVar4 = (short *)0x0;
  local_4 = 0;
  if (0 < **(short **)(param_1 + 0x10)) {
    do {
      iVar3 = *(int *)(iVar2 + 0x14);
      iVar1 = *(int *)(iVar3 + local_4 * 4);
      if ((*(byte *)(iVar1 + 3) & 1) != 0) {
        psVar6 = (short *)(iVar1 + 0x1c);
        param_1 = 0;
        if (-1 < *(short *)(iVar1 + 0x1c)) {
          do {
            uVar5 = psVar6[3] * 0x4b4 + *(int *)(iVar2 + 0x1c8);
            FUN_00455630(iVar3,psVar4,uVar5);
            if (*(int *)(uVar5 + 0x3f0) != 0) {
              param_1 = param_1 + 1;
            }
            psVar4 = (short *)(int)psVar6[1];
            psVar6 = (short *)((int)psVar6 + (int)psVar4);
            iVar3 = extraout_ECX;
          } while (-1 < *psVar6);
          if (param_1 != 0) goto LAB_0040469a;
        }
        *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) & 0xfe;
      }
LAB_0040469a:
      psVar4 = (short *)(int)**(short **)(iVar2 + 0x10);
      local_4 = local_4 + 1;
    } while (local_4 < (int)psVar4);
  }
  return 0;
}


