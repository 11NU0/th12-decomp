/* int __fastcall FUN_0045fe60(int param_1) @ 0045fe60  118 bytes */
#include "th12.h"

int __fastcall FUN_0045fe60(int param_1)

{
  int iVar1;
  int extraout_ECX;
  void *unaff_EBX;
  
  if (*(int *)(((char *)&DAT_004b50c0 + param_1 * 4) + DAT_004ce8cc) != 0) {
    iVar1 = FUN_004622e0();
    return *(int *)(((char *)&DAT_004b50c0 + extraout_ECX * 4) + iVar1);
  }
  iVar1 = FUN_0045fc90(unaff_EBX,DAT_004ce8cc,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)((int)iVar1 + 0x124) = 1;
  do {
    if ((DAT_004cee78 & 0x180) != 0) break;
    Sleep(1);
  } while (*(int *)((int)iVar1 + 0x124) != 0);
  FUN_004622e0();
  return iVar1;
}


