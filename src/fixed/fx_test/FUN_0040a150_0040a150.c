/* undefined4 __fastcall FUN_0040a150(void * param_1) @ 0040a150  151 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0040a150(void *param_1)

{
  int iVar1;
  int in_EAX;
  void *extraout_ECX;
  void *extraout_ECX_00;
  float10 fVar2;
  
  for (iVar1 = *(int *)(in_EAX + 0x14 + (int)param_1 * 4); iVar1 != 0;
      iVar1 = *(int *)(iVar1 + 0x538)) {
    *(float *)(iVar1 + 0x42c) = *(float *)(iVar1 + 0x4bc) + 32.0 + 192.0;
    *(float *)(iVar1 + 0x430) = *(float *)(iVar1 + 0x4c0) + 16.0;
    *(undefined4 *)(iVar1 + 0x434) = *(undefined4 *)(iVar1 + 0x4c4);
    if ((*(uint *)(iVar1 + 0x484) & 0x20000000) != 0) {
      fVar2 = FUN_00464640(*(float *)(iVar1 + 0x4d8),1.5707964);
      *(uint *)(iVar1 + 0x484) = *(uint *)(iVar1 + 0x484) | 4;
      *(float *)(iVar1 + 0x34) = (float)fVar2;
      param_1 = extraout_ECX;
    }
    FUN_0045c900(param_1,DAT_004ce8cc);
    param_1 = extraout_ECX_00;
  }
  return 1;
}


