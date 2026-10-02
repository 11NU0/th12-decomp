/* undefined4 __fastcall FUN_00411100(undefined4 param_1, int param_2) @ 00411100  116 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00411100(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EDI;
  
  iVar2 = FUN_00411420(param_1,param_2,*(void **)((int)unaff_EDI + 0x18));
  if (iVar2 == 0) {
    FUN_00464a80();
    *(int *)((int)unaff_EDI + 0x24) = *(int *)((int)unaff_EDI + 0x24) + 1;
    uVar1 = *(uint *)(*(int *)((int)unaff_EDI + 0x18) + 0x74);
    if (((((uVar1 & 4) != 0) || ((*(byte *)((int)unaff_EDI + 0x20) & 2) != 0)) || ((uVar1 & 2) == 0)) ||
       (((_DAT_004d48b8 & 0x200) == 0 || (uVar3 = 6, *(int *)((int)unaff_EDI + 0x24) % 0xc == 0)))) {
      uVar3 = 1;
    }
    return uVar3;
  }
  DAT_004cee40 = (-(uint)((DAT_004cee78 & 0x2000) != 0) & 0xfffffff2) + 0x10;
  return 1;
}


