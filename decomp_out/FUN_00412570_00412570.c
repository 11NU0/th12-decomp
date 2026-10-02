/* undefined __fastcall FUN_00412570(undefined4 param_1, undefined4 param_2) @ 00412570  133 bytes */
#include "th12.h"

void __fastcall FUN_00412570(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  ulonglong uVar2;
  
  iVar1 = DAT_004b4514;
  uVar2 = FUN_004931e0(param_1,param_2);
  *(int *)(iVar1 + 0x988) = (int)uVar2;
  uVar2 = FUN_004931e0(extraout_ECX,(int)(uVar2 >> 0x20));
  *(int *)(iVar1 + 0x98c) = (int)uVar2;
  *(float *)(iVar1 + 0x97c) = (float)*(int *)(iVar1 + 0x988) * 0.0078125;
  *(float *)(iVar1 + 0x980) = (float)*(int *)(iVar1 + 0x98c) * 0.0078125;
  *(undefined4 *)(iVar1 + 0x8334) = 1;
  *(undefined4 *)(iVar1 + 0x8418) = 1;
  *(undefined4 *)(iVar1 + 0x84fc) = 1;
  *(undefined4 *)(iVar1 + 0x85e0) = 1;
  *(undefined4 *)(iVar1 + 0x86c4) = 1;
  *(undefined4 *)(iVar1 + 0x87a8) = 1;
  *(undefined4 *)(iVar1 + 0x888c) = 1;
  *(undefined4 *)(iVar1 + 0x8970) = 1;
  return;
}


