/* int __stdcall FUN_004320f0(int param_1) @ 004320f0  360 bytes */

#include "th12.h"

int __stdcall FUN_004320f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004015c0("%s");
  *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffff00;
  FUN_004015c0("_");
  iVar2 = DAT_004b43b8;
  *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
  iVar3 = 0;
  do {
    *(uint *)(iVar2 + 0x18f80) = (-(uint)(*(int *)(param_1 + 0x110) != iVar3) & 0xff808180) - 0x100;
    FUN_004015c0("%c");
    iVar1 = iVar3 * 0x4ec4ec4f;
    iVar3 = iVar3 + 1;
    iVar2 = DAT_004b43b8;
  } while (iVar3 < 0x5b);
  *(undefined4 *)(DAT_004b43b8 + 0x18f80) = 0xffffffff;
  return iVar1;
}


