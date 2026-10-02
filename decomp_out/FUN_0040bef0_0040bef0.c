/* undefined4 __stdcall FUN_0040bef0(void) @ 0040bef0  258 bytes */
#include "th12.h"

undefined4 FUN_0040bef0(void)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  undefined4 extraout_ECX;
  
  iVar2 = FUN_0040d560((void *)(in_EAX + 0x4bc),0.0,0.0);
  if (iVar2 != 0) {
    bVar1 = false;
    if ((*(byte *)(in_EAX + 0x800) & 1) != 0) {
      iVar2 = FUN_0040be50(in_EAX);
      if (iVar2 != 0) {
        bVar1 = true;
      }
    }
    if ((*(byte *)(in_EAX + 0x800) & 2) != 0) {
      iVar2 = FUN_0040be90(in_EAX);
      if (iVar2 != 0) {
        bVar1 = true;
      }
    }
    if ((*(byte *)(in_EAX + 0x800) & 8) != 0) {
      iVar2 = FUN_0040bde0();
      if (iVar2 != 0) {
        bVar1 = true;
      }
    }
    if ((*(byte *)(in_EAX + 0x800) & 4) != 0) {
      iVar2 = FUN_0040bd70();
      if (iVar2 != 0) {
        bVar1 = true;
      }
    }
    if (-990.0 < *(float *)(in_EAX + 0x7e4)) {
      *(undefined4 *)(in_EAX + 0x4d4) = *(undefined4 *)(in_EAX + 0x7e4);
    }
    FUN_0040d640((void *)(in_EAX + 0x4c8),*(float *)(in_EAX + 0x4d8),*(float *)(in_EAX + 0x4d4));
    if (bVar1) {
      *(int *)(in_EAX + 0x7f8) = *(int *)(in_EAX + 0x7f8) + 1;
      if (-1 < *(int *)(in_EAX + 0x544)) {
        FUN_00453d90(extraout_ECX,*(int *)(in_EAX + 0x544));
      }
    }
    if (*(int *)(in_EAX + 0x7fc) <= *(int *)(in_EAX + 0x7f8)) {
      *(uint *)(in_EAX + 0x528) = *(uint *)(in_EAX + 0x528) & 0xfffffeff;
      return 1;
    }
  }
  return 0;
}


