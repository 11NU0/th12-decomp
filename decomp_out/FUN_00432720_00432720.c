/* undefined __stdcall FUN_00432720(void) @ 00432720  299 bytes */
#include "th12.h"

void FUN_00432720(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *this;
  undefined4 extraout_ECX;
  int unaff_ESI;
  undefined4 local_4;
  
  *(undefined4 *)(unaff_ESI + 4) = 1;
  if ((*(uint *)(unaff_ESI + 0x20) & 1) == 0) {
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
    *(undefined4 *)(unaff_ESI + 0x10) = 0xfff0bdc1;
    *(undefined4 **)(unaff_ESI + 0x1c) = &DAT_004b2ed0;
    *(uint *)(unaff_ESI + 0x20) = *(uint *)(unaff_ESI + 0x20) | 1;
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0xffffffff;
  if ((*(uint *)(unaff_ESI + 0x34) & 1) == 0) {
    *(undefined4 *)(unaff_ESI + 0x2c) = 0;
    *(undefined4 *)(unaff_ESI + 0x28) = 0;
    *(undefined4 *)(unaff_ESI + 0x24) = 0xfff0bdc1;
    *(undefined4 **)(unaff_ESI + 0x30) = &DAT_004b2ed0;
    *(uint *)(unaff_ESI + 0x34) = *(uint *)(unaff_ESI + 0x34) | 1;
  }
  iVar1 = DAT_004b44e8;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0xffffffff;
  *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 0x10;
  piVar2 = FUN_004357c0(&local_4,0x4b);
  iVar1 = *piVar2;
  *(int *)(unaff_ESI + 0x1ec) = iVar1;
  FUN_00435750(this,iVar1);
  iVar1 = DAT_004b44e8;
  *(undefined4 *)(unaff_ESI + 0x2dc) = *(undefined4 *)(DAT_004b43e4 + 0x6d44);
  if (*(int *)(iVar1 + 0x74) == 0) {
    puVar3 = FUN_004357c0(&local_4,0x66);
    *(undefined4 *)(unaff_ESI + 0x1e8) = *puVar3;
  }
  else {
    puVar3 = FUN_004357c0(&local_4,0x67);
    *(undefined4 *)(unaff_ESI + 0x1e8) = *puVar3;
  }
  FUN_00461970(*(void **)(unaff_ESI + 0x1e8),(int)*(void **)(unaff_ESI + 0x1e8));
  FUN_00423020();
  FUN_00453d90(extraout_ECX,0xe);
  FUN_00454960(6,0);
  *(undefined4 *)(unaff_ESI + 0x2d8) = DAT_004b2ed0;
  DAT_004b2ed0 = 0x3f800000;
  *(undefined4 *)(unaff_ESI + 0x200) = DAT_004cf468;
  DAT_004cf468 = 0;
  return;
}


