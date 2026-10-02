/* undefined4 __fastcall FUN_0042b100(int param_1) @ 0042b100  182 bytes */
#include "th12.h"

undefined4 __fastcall FUN_0042b100(int param_1)

{
  void *pvVar1;
  void *this;
  float10 fVar2;
  
  *(float *)((int)param_1 + 0xa84) = *(float *)((int)param_1 + 0x50) + 32.0 + 192.0;
  *(float *)((int)param_1 + 0xa88) = *(float *)((int)param_1 + 0x54) + 16.0;
  *(undefined4 *)((int)param_1 + 0xa8c) = *(undefined4 *)((int)param_1 + 0x58);
  fVar2 = FUN_00464640(*(float *)((int)param_1 + 0x68),1.5707964);
  pvVar1 = DAT_004ce8cc;
  *(float *)((int)param_1 + 0x68c) = (float)fVar2;
  *(uint *)((int)param_1 + 0xadc) = *(uint *)((int)param_1 + 0xadc) | 4;
  FUN_0045c900(this,pvVar1);
  pvVar1 = DAT_004ce8cc;
  if (NANP(*(float *)((int)param_1 + 0x78)) != (*(float *)((int)param_1 + 0x78) == 0.0)) {
    *(float *)((int)param_1 + 0xf38) = *(float *)((int)param_1 + 0x50) + 32.0 + 192.0;
    *(float *)((int)param_1 + 0xf3c) = *(float *)((int)param_1 + 0x54) + 16.0;
    *(undefined4 *)((int)param_1 + 0xf40) = *(undefined4 *)((int)param_1 + 0x58);
    FUN_0045c900(pvVar1,pvVar1);
  }
  return 0;
}


