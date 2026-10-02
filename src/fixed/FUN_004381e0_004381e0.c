/* undefined __stdcall FUN_004381e0(void) @ 004381e0  384 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_004381e0(void)

{
  int iVar1;
  uint uVar2;
  void *this;
  int unaff_ESI;
  undefined4 *puVar3;
  int local_4;
  
  _DAT_004b0c98 = _DAT_004b0c98 - 1;
  if (-1 < (int)_DAT_004b0c98) {
    FUN_0041ce60(DAT_004b43e4,_DAT_004b0c98,(short)_DAT_004b0c9c);
  }
  *(undefined4 *)((int)unaff_ESI + 0xa28) = 2;
  if ((*(uint *)((int)unaff_ESI + 0xa40) & 1) == 0) {
    *(undefined4 *)((int)unaff_ESI + 0xa38) = 0;
    *(undefined4 *)((int)unaff_ESI + 0xa34) = 0;
    *(undefined4 *)((int)unaff_ESI + 0xa30) = 0xfff0bdc1;
    *(undefined4 **)((int)unaff_ESI + 0xa3c) = &DAT_004b2ed0;
    *(uint *)((int)unaff_ESI + 0xa40) = *(uint *)((int)unaff_ESI + 0xa40) | 1;
  }
  *(undefined4 *)((int)unaff_ESI + 0xa38) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xa34) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xa30) = 0xffffffff;
  if ((*(uint *)((int)unaff_ESI + 0xc410) & 1) == 0) {
    *(undefined4 *)((int)unaff_ESI + 0xc408) = 0;
    *(undefined4 *)((int)unaff_ESI + 0xc404) = 0;
    *(undefined4 *)((int)unaff_ESI + 0xc400) = 0xfff0bdc1;
    *(undefined4 **)((int)unaff_ESI + 0xc40c) = &DAT_004b2ed0;
    *(uint *)((int)unaff_ESI + 0xc410) = *(uint *)((int)unaff_ESI + 0xc410) | 1;
  }
  *(undefined4 *)((int)unaff_ESI + 0xc408) = 0x43340000;
  *(undefined4 *)((int)unaff_ESI + 0xc404) = 0xb4;
  *(undefined4 *)((int)unaff_ESI + 0xc400) = 0xb3;
  FUN_00454d10(*(void **)((int)unaff_ESI + 0x10),(void *)((int)unaff_ESI + 0x14),0);
  puVar3 = (undefined4 *)((int)unaff_ESI + 0x8310);
  local_4 = 8;
  do {
    puVar3[-0x2c] = 0;
    FUN_00461970((void *)*puVar3,(int)*puVar3);
    FUN_00461970(this,puVar3[1]);
    iVar1 = DAT_004b43cc;
    puVar3 = puVar3 + 0x39;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)((int)unaff_ESI + 0xc41c) = 0;
  uVar2 = *(uint *)((int)iVar1 + 0x7c);
  if ((uVar2 & 1) != 0) {
    if (*(int *)((int)iVar1 + 0x28) < 0x3c) {
      if (*(int *)((int)DAT_004b43c4 + 0x3c) == 0) goto LAB_00438328;
      uVar2 = uVar2 | 0x20;
    }
    else {
      *(undefined4 *)((int)iVar1 + 0x80) = 0;
      uVar2 = uVar2 & 0xffffffdd;
    }
    *(uint *)((int)iVar1 + 0x7c) = uVar2;
  }
LAB_00438328:
  DAT_004b0ccc = DAT_004b0ccc + -0x400;
  if (DAT_004b0ccc < 0x401) {
    if (DAT_004b0ccc < -0x400) {
      DAT_004b0ccc = -0x400;
    }
    return;
  }
  DAT_004b0ccc = 0x400;
  return;
}


