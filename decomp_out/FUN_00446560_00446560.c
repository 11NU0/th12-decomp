/* undefined __stdcall FUN_00446560(void) @ 00446560  304 bytes */
#include "th12.h"

void FUN_00446560(void)

{
  int iVar1;
  void *pvVar2;
  BOOL BVar3;
  int iVar4;
  undefined4 *puVar5;
  HANDLE pvStack_194;
  _WIN32_FIND_DATAA local_190;
  char local_50 [68];
  uint local_c;
  
  iVar1 = DAT_004b4530;
  local_c = DAT_004ad138 ^ (uint)&pvStack_194;
  iVar4 = 1;
  puVar5 = (undefined4 *)(DAT_004b4530 + 0x5a80);
  do {
    _sprintf(local_50,"th12_%.2d.rpy",iVar4);
    pvVar2 = FUN_0043b6f0(local_50);
    *puVar5 = pvVar2;
    if ((*(byte *)(iVar1 + 0x5c18) & 4) != 0) break;
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 0x1a);
  FUN_0046d585("replay");
  __chdir("replay");
  pvStack_194 = FindFirstFileA("th12_ud????.rpy",&local_190);
  if (pvStack_194 != (HANDLE)0xffffffff) {
    iVar4 = 0x19;
    puVar5 = (undefined4 *)(iVar1 + 0x5ae4);
    do {
      __chdir("../");
      pvVar2 = FUN_0043b6f0(local_190.cFileName);
      *puVar5 = pvVar2;
      __chdir("replay");
      if (((*(byte *)(iVar1 + 0x5c18) & 4) != 0) ||
         (BVar3 = FindNextFileA(pvStack_194,&local_190), BVar3 == 0)) break;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < 0x4b);
  }
  FindClose(pvStack_194);
  __chdir("../");
  *(uint *)(iVar1 + 0x5c18) = *(uint *)(iVar1 + 0x5c18) & 0xfffffffb | 8;
  ___security_check_cookie_4(local_c ^ (uint)&pvStack_194);
  return;
}


