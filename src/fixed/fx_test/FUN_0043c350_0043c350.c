/* undefined __stdcall FUN_0043c350(int param_1, char * param_2) @ 0043c350  441 bytes */

#include "th12.h"

void __stdcall FUN_0043c350(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  void *pvVar6;
  short *psVar7;
  char *pcVar8;
  int iVar9;
  size_t local_108;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)&local_108;
  pcVar8 = param_2;
  do {
    cVar1 = *pcVar8;
    pcVar8[(param_1 - (int)param_2) + 0x1e0] = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (((byte)DAT_004b0ce0 & 0x20) == 0) {
    _sprintf(local_104,"replay/%s",param_2);
    iVar3 = FUN_00463df0(local_104);
    if ((iVar3 == 0) || (iVar3 = FUN_00464070(), iVar3 != 0)) goto LAB_0043c4ef;
    piVar4 = (int *)FUN_00464190();
    *(int **)(param_1 + 0x18) = piVar4;
    if ((*piVar4 != 0x72323174) || (*(short *)(piVar4 + 1) != 4)) {
      FUN_004641e0();
      goto LAB_0043c4ef;
    }
    pbVar5 = (byte *)FUN_00464190();
    FUN_004641e0();
  }
  else {
    pbVar5 = FUN_00463c10(&local_108,0);
    *(byte **)(param_1 + 0x18) = pbVar5;
    pbVar5 = pbVar5 + 0x24;
  }
  pvVar6 = _malloc(*(size_t *)(*(int *)(param_1 + 0x18) + 0x20));
  *(void **)(param_1 + 0x1c8) = pvVar6;
  uVar2 = *(uint *)(*(int *)(param_1 + 0x18) + 0x1c);
  FUN_004639d0(pbVar5,uVar2,-0x1f,0x800,uVar2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x18) + 0x1c);
  FUN_004639d0(pbVar5,uVar2,':',0x40,uVar2);
  FUN_0044c710(pbVar5,*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c),
               *(undefined4 *)(param_1 + 0x1c8));
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c8);
  psVar7 = (short *)(*(int *)(param_1 + 0x1c8) + 0x70);
  iVar3 = 0;
  while( true ) {
    iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0x58);
    if (7 < iVar9) {
      iVar9 = 6;
    }
    if (iVar9 <= iVar3) break;
    *(short **)(param_1 + 0xb8 + *psVar7 * 0x24) = psVar7;
    *(short **)(param_1 + 0xa8 + *psVar7 * 0x24) = psVar7 + 0x50;
    *(int *)(param_1 + *psVar7 * 0x24 + 0xb0) =
         *(int *)(param_1 + 0xa8 + *psVar7 * 0x24) + *(int *)(psVar7 + 2) * 6;
    psVar7 = (short *)((int)psVar7 + *(int *)(psVar7 + 4) + 0xa0);
    iVar3 = iVar3 + 1;
  }
  if ((((byte)DAT_004b0ce0 & 0x20) == 0) && (pbVar5 != (byte *)0x0)) {
    _free(pbVar5);
  }
LAB_0043c4ef:
  ___security_check_cookie_4(local_4 ^ (uint)&local_108);
  return;
}


