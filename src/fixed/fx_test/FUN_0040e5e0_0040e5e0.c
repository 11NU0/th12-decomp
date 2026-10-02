/* undefined __fastcall FUN_0040e5e0(void * param_1) @ 0040e5e0  321 bytes */

#include "th12.h"

void __fastcall FUN_0040e5e0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this;
  void *this_00;
  int extraout_ECX;
  int iVar4;
  
  iVar3 = DAT_004b43cc;
  if ((*(byte *)(DAT_004b43cc + 0x7c) & 1) != 0) {
    *(uint *)(DAT_004b43c0 + 0x35bc) = *(uint *)(DAT_004b43c0 + 0x35bc) | 1;
    FUN_00461970(param_1,*(int *)(iVar3 + 0x14));
    FUN_00461970(*(void **)(iVar3 + 0x18),(int)*(void **)(iVar3 + 0x18));
    FUN_00461970(this,*(int *)(iVar3 + 0x1c));
    *(uint *)(iVar3 + 0x7c) = *(uint *)(iVar3 + 0x7c) & 0xfffffffe;
    FUN_00461a70(this_00,*(int *)(iVar3 + 0x10));
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(uint *)(iVar3 + 0x7c) = *(uint *)(iVar3 + 0x7c) & 0xffffffdf;
    FUN_00461a70(*(void **)(iVar3 + 0x20),(int)*(void **)(iVar3 + 0x20));
    *(undefined4 *)(iVar3 + 0x20) = 0;
    if ((*(byte *)(iVar3 + 0x7c) & 2) != 0) {
      DAT_004b0c44 = DAT_004b0c44 + *(int *)(iVar3 + 0x80) / 10;
      if (999999999 < DAT_004b0c44) {
        DAT_004b0c44 = 999999999;
      }
      FUN_00420f90();
      iVar1 = DAT_004b451c;
      iVar4 = extraout_ECX;
      if (*(int *)(DAT_004b4518 + 0x10) != 1) {
        iVar4 = *(int *)(iVar3 + 0x78) * 0x90 + 0x66c +
                (DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + DAT_004b451c;
        iVar2 = *(int *)(iVar4 + 0x80);
        if (iVar2 < 99999) {
          *(int *)(iVar4 + 0x80) = iVar2 + 1;
        }
        iVar1 = *(int *)(iVar3 + 0x78) * 0x90 + 0x1aa24 + iVar1;
        iVar4 = *(int *)(iVar1 + 0x80);
        if (iVar4 < 99999) {
          iVar4 = iVar4 + 1;
          *(int *)(iVar1 + 0x80) = iVar4;
        }
      }
      FUN_00453d90(iVar4,0x30);
      return;
    }
    FUN_00420f90();
  }
  return;
}


