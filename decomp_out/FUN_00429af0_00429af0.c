/* undefined4 __fastcall FUN_00429af0(int param_1) @ 00429af0  182 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00429af0(int param_1)

{
  void *pvVar1;
  void *this;
  float10 fVar2;
  
  *(float *)(param_1 + 0xa60) = *(float *)(param_1 + 0x50) + 32.0 + 192.0;
  *(float *)(param_1 + 0xa64) = *(float *)(param_1 + 0x54) + 16.0;
  *(undefined4 *)(param_1 + 0xa68) = *(undefined4 *)(param_1 + 0x58);
  fVar2 = FUN_00464640(*(float *)(param_1 + 0x68),1.5707964);
  pvVar1 = DAT_004ce8cc;
  *(float *)(param_1 + 0x668) = (float)fVar2;
  *(uint *)(param_1 + 0xab8) = *(uint *)(param_1 + 0xab8) | 4;
  FUN_0045c900(this,pvVar1);
  pvVar1 = DAT_004ce8cc;
  if (NAN(*(float *)(param_1 + 0x78)) != (*(float *)(param_1 + 0x78) == 0.0)) {
    *(float *)(param_1 + 0xf14) = *(float *)(param_1 + 0x50) + 32.0 + 192.0;
    *(float *)(param_1 + 0xf18) = *(float *)(param_1 + 0x54) + 16.0;
    *(undefined4 *)(param_1 + 0xf1c) = *(undefined4 *)(param_1 + 0x58);
    FUN_0045c900(pvVar1,pvVar1);
  }
  return 0;
}


