/* undefined4 __fastcall FUN_0042b100(int param_1) @ 0042b100  182 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0042b100(int param_1)

{
  void *pvVar1;
  void *this;
  float10 fVar2;
  
  *(float *)(param_1 + 0xa84) = *(float *)(param_1 + 0x50) + 32.0 + 192.0;
  *(float *)(param_1 + 0xa88) = *(float *)(param_1 + 0x54) + 16.0;
  *(undefined4 *)(param_1 + 0xa8c) = *(undefined4 *)(param_1 + 0x58);
  fVar2 = FUN_00464640(*(float *)(param_1 + 0x68),1.5707964);
  pvVar1 = DAT_004ce8cc;
  *(float *)(param_1 + 0x68c) = (float)fVar2;
  *(uint *)(param_1 + 0xadc) = *(uint *)(param_1 + 0xadc) | 4;
  FUN_0045c900(this,pvVar1);
  pvVar1 = DAT_004ce8cc;
  if (NAN(*(float *)(param_1 + 0x78)) != (*(float *)(param_1 + 0x78) == 0.0)) {
    *(float *)(param_1 + 0xf38) = *(float *)(param_1 + 0x50) + 32.0 + 192.0;
    *(float *)(param_1 + 0xf3c) = *(float *)(param_1 + 0x54) + 16.0;
    *(undefined4 *)(param_1 + 0xf40) = *(undefined4 *)(param_1 + 0x58);
    FUN_0045c900(pvVar1,pvVar1);
  }
  return 0;
}


