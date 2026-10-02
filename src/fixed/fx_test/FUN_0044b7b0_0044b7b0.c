/* byte * __stdcall FUN_0044b7b0(int param_1, byte * param_2) @ 0044b7b0  300 bytes */

#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x0044b872) */

byte * __stdcall FUN_0044b7b0(int param_1,byte *param_2)

{
  size_t sVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  char *pcVar9;
  byte *_Memory;
  size_t _Size;
  
  _Memory = (byte *)0x0;
  if (*(int *)(param_1 + 0xc) == 0) {
    return (byte *)0x0;
  }
  puVar3 = FUN_0044b920();
  if (puVar3 != (undefined4 *)0x0) {
    _Size = puVar3[5] - puVar3[1];
    sVar1 = puVar3[2];
    if ((((_Size == sVar1) && (_Memory = param_2, param_2 != (byte *)0x0)) ||
        (_Memory = (byte *)_malloc(_Size), _Memory != (byte *)0x0)) &&
       ((cVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(puVar3[1],0), cVar2 != '\0' &&
        (iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 8))(_Memory,_Size), iVar4 != 0)))) {
      pcVar9 = (char *)*puVar3;
      pcVar5 = pcVar9;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      iVar4 = (int)pcVar5 - (int)(pcVar9 + 1);
      bVar8 = 0;
      if (iVar4 != 0) {
        bVar8 = 0;
        do {
          bVar8 = bVar8 + *pcVar9;
          iVar4 = iVar4 + -1;
          pcVar9 = pcVar9 + 1;
        } while (iVar4 != 0);
      }
      uVar6 = bVar8 & 0x80000007;
      FUN_004639d0(_Memory,_Size,(&DAT_004ae531)[uVar6 * 0xc],*(uint *)(&DAT_004ae534 + uVar6 * 0xc)
                   ,*(size_t *)(&DAT_004ae538 + uVar6 * 0xc));
      pbVar7 = _Memory;
      if (_Size != sVar1) {
        pbVar7 = (byte *)FUN_0044c710(_Memory,_Size,param_2);
      }
      if ((_Memory != param_2) && (_Memory != (byte *)0x0)) {
        _free(_Memory);
      }
      return pbVar7;
    }
  }
  FUN_0044bcd0();
  if (_Memory != (byte *)0x0) {
    _free(_Memory);
  }
  return (byte *)0x0;
}


