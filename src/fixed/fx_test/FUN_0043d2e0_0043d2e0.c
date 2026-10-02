/* undefined4 __stdcall FUN_0043d2e0(void) @ 0043d2e0  636 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0043d2e0(void)

{
  undefined4 *puVar1;
  DWORD nNumberOfBytesToWrite;
  int *piVar2;
  undefined4 *_Memory;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int local_10;
  int local_c;
  DWORD local_8;
  byte *local_4;
  
  piVar2 = DAT_004b451c;
  if (*DAT_004b451c == 0) {
    return 0xffffffff;
  }
  _Memory = (undefined4 *)_malloc(0x200000);
  puVar1 = (undefined4 *)*piVar2;
  *_Memory = *puVar1;
  _Memory[1] = puVar1[1];
  _Memory[2] = puVar1[2];
  _Memory[3] = puVar1[3];
  _Memory[4] = puVar1[4];
  _Memory[5] = puVar1[5];
  local_10 = 0x18;
  uVar7 = 0;
  piVar6 = piVar2 + 2;
  do {
    if (*(short *)piVar6 == 0x5243) {
      piVar6[3] = uVar7;
      iVar3 = FUN_0043cdb0(piVar6,0x45f4);
      piVar6[1] = iVar3;
      _memcpy((void *)(local_10 + (int)_Memory),piVar6,0x45f4);
      local_10 = local_10 + 0x45f4;
    }
    uVar7 = uVar7 + 1;
    piVar6 = piVar6 + 0x117d;
  } while (uVar7 < 7);
  iVar5 = 0;
  iVar3 = 0;
  local_8 = 0;
  local_c = 0;
  pbVar4 = (byte *)((int)piVar2 + 0x1e9bd);
  local_4 = (byte *)0x110;
  do {
    iVar3 = iVar3 + (uint)pbVar4[-1];
    iVar5 = iVar5 + (uint)*pbVar4;
    local_c = local_c + (uint)pbVar4[1];
    local_8 = local_8 + pbVar4[2];
    pbVar4 = pbVar4 + 4;
    local_4 = local_4 + -1;
  } while (local_4 != (byte *)0x0);
  piVar2[0x7a6e] = iVar3 + iVar5 + local_c + local_8;
  piVar6 = piVar2 + 0x7a6d;
  piVar8 = (int *)(local_10 + (int)_Memory);
  for (iVar3 = 0x112; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
  }
  *(int *)(*piVar2 + 0x14) = local_10 + 0x430;
  pbVar4 = (byte *)FUN_0044c3f0((byte *)(_Memory + 6),*(int *)(*piVar2 + 0x14),
                                (int *)(*piVar2 + 0x10));
  *(int *)(*piVar2 + 4) = *(int *)(*piVar2 + 0x10) + 0x18;
  local_4 = pbVar4;
  FUN_00463af0(pbVar4,*(uint *)(*piVar2 + 0x10),'5',0x10,*(uint *)(*piVar2 + 0x10));
  iVar3 = FUN_00463fb0();
  if (iVar3 == 0) {
    if (((DAT_004ae590 != (HANDLE)0xffffffff) &&
        (WriteFile(DAT_004ae590,(LPCVOID)*piVar2,0x18,(LPDWORD)&local_4,(LPOVERLAPPED)0x0),
        local_4 != (byte *)0x18)) && (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
      DAT_004cf21a = DAT_004cf21a + -1;
    }
    nNumberOfBytesToWrite = *(DWORD *)(*piVar2 + 0x10);
    if (DAT_004ae590 != (HANDLE)0xffffffff) {
      WriteFile(DAT_004ae590,pbVar4,nNumberOfBytesToWrite,&local_8,(LPOVERLAPPED)0x0);
      if ((nNumberOfBytesToWrite != local_8) &&
         (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
        DAT_004cf21a = DAT_004cf21a + -1;
      }
      if ((DAT_004ae590 != (HANDLE)0xffffffff) &&
         (CloseHandle(DAT_004ae590), (DAT_004cee78 & 0x8000) != 0)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf128);
        DAT_004cf21a = DAT_004cf21a + -1;
      }
    }
    if (pbVar4 != (byte *)0x0) {
      _free(pbVar4);
    }
    _free(_Memory);
    return 0;
  }
  FUN_00464300(&DAT_004a15a4);
  if (local_4 != (byte *)0x0) {
    _free(local_4);
  }
  _free(_Memory);
  return 0xffffffff;
}


