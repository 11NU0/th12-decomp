/* undefined __fastcall FUN_0043add0(undefined4 * param_1) @ 0043add0  110 bytes */
#include "th12.h"

void __fastcall FUN_0043add0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004b4514;
  *(undefined4 *)(DAT_004b4514 + 0x988) = *param_1;
  *(undefined4 *)(iVar1 + 0x98c) = param_1[1];
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


