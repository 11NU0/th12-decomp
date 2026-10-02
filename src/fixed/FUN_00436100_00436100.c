/* undefined __stdcall FUN_00436100(void) @ 00436100  324 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00436100(void)

{
  int iVar1;
  int iVar2;
  void *this;
  
  iVar2 = DAT_004b4514;
  *(undefined4 *)((int)DAT_004b4514 + 0xa28) = 1;
  if ((*(uint *)((int)iVar2 + 0xc430) & 1) == 0) {
    *(undefined4 *)((int)iVar2 + 0xc428) = 0;
    *(undefined4 *)((int)iVar2 + 0xc424) = 0;
    *(undefined4 *)((int)iVar2 + 0xc420) = 0xfff0bdc1;
    *(undefined4 **)((int)iVar2 + 0xc42c) = &DAT_004b2ed0;
    *(uint *)((int)iVar2 + 0xc430) = *(uint *)((int)iVar2 + 0xc430) | 1;
  }
  *(undefined4 *)((int)iVar2 + 0xc424) = 0xffffffff;
  *(undefined4 *)((int)iVar2 + 0xc428) = 0xbf800000;
  *(undefined4 *)((int)iVar2 + 0xc420) = 0xfffffffe;
  if ((*(uint *)((int)iVar2 + 0xa40) & 1) == 0) {
    *(undefined4 *)((int)iVar2 + 0xa38) = 0;
    *(undefined4 *)((int)iVar2 + 0xa34) = 0;
    *(undefined4 *)((int)iVar2 + 0xa30) = 0xfff0bdc1;
    *(undefined4 **)((int)iVar2 + 0xa3c) = &DAT_004b2ed0;
    *(uint *)((int)iVar2 + 0xa40) = *(uint *)((int)iVar2 + 0xa40) | 1;
  }
  *(undefined4 *)((int)iVar2 + 0xa38) = 0;
  *(undefined4 *)((int)iVar2 + 0xa34) = 0;
  *(undefined4 *)((int)iVar2 + 0xa30) = 0xffffffff;
  if ((*(uint *)((int)iVar2 + 0xa54) & 1) == 0) {
    *(undefined4 *)((int)iVar2 + 0xa4c) = 0;
    *(undefined4 *)((int)iVar2 + 0xa48) = 0;
    *(undefined4 *)((int)iVar2 + 0xa44) = 0xfff0bdc1;
    *(undefined4 **)((int)iVar2 + 0xa50) = &DAT_004b2ed0;
    *(uint *)((int)iVar2 + 0xa54) = *(uint *)((int)iVar2 + 0xa54) | 1;
  }
  *(undefined4 *)((int)iVar2 + 0xa4c) = 0;
  *(undefined4 *)((int)iVar2 + 0xa48) = 0;
  *(undefined4 *)((int)iVar2 + 0xa44) = 0xffffffff;
  *(uint *)((int)iVar2 + 0xc414) = *(uint *)((int)iVar2 + 0xc414) & 0xfffffff8;
  *(undefined4 *)((int)iVar2 + 0xa20) = 0;
  *(undefined4 *)((int)iVar2 + 0xa24) = 0;
  FUN_00461a70(&DAT_004b2ed0,*(int *)((int)iVar2 + 0x8258));
  iVar1 = DAT_004b43e4;
  *(undefined4 *)((int)iVar2 + 0x8258) = 0;
  FUN_0041ce60(iVar1,_DAT_004b0c98,(short)_DAT_004b0c9c);
  FUN_00435900(this,iVar2);
  FUN_004385b0(iVar2);
  *(undefined4 *)((int)iVar2 + 0x825c) = 0x3f800000;
  return;
}


