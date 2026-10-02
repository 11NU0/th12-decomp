/* undefined4 __stdcall FUN_004503f0(int param_1) @ 004503f0  397 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_004503f0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = FUN_004508b0();
  *(double *)(param_1 + 0x40) = (double)fVar2;
  if (fVar2 < (float10)*(double *)(param_1 + 0x48) !=
      (NAN(fVar2) || NAN((float10)*(double *)(param_1 + 0x48)))) {
    *(double *)(param_1 + 0x50) = (double)fVar2;
  }
  *(double *)(param_1 + 0x48) = (double)fVar2;
  if ((float10)1.5 <= ((float10)*(double *)(param_1 + 0x50) - fVar2) * (float10)1000.0) {
    Sleep(1);
  }
  if (*(double *)(param_1 + 0x50) < *(double *)(param_1 + 0x40)) {
    if (*(double *)(param_1 + 0x50) < *(double *)(param_1 + 0x40)) {
      do {
        *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x50) + 0.016666666666666666;
      } while (*(double *)(param_1 + 0x50) < *(double *)(param_1 + 0x40));
    }
    FUN_0045a3c0();
    DAT_004cee34 = &DAT_004cec04;
    FUN_00430910();
    (**(code **)(*DAT_004ce8f0 + 0xbc))(DAT_004ce8f0,DAT_004cee34 + 0xcc);
    _DAT_004cee38 = 1;
    iVar1 = FUN_004624c0();
    if (iVar1 == 0) {
      FUN_00464c40();
      return 1;
    }
    if (iVar1 == -1) {
      FUN_00464c40();
      return 2;
    }
    *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + '\x01';
    if ((int)(DAT_004ceace + 1) <= (int)*(char *)(param_1 + 0x14)) {
      (**(code **)(*DAT_004ce8f0 + 0xa4))(DAT_004ce8f0);
      FUN_0045a380();
      DAT_004cf278 = 0xff;
      FUN_00430300();
      FUN_00462620();
      FUN_0045a3c0();
      (**(code **)(*DAT_004ce8f0 + 0x104))(DAT_004ce8f0,0,0);
      (**(code **)(*DAT_004ce8f0 + 0xa8))(DAT_004ce8f0);
      *(undefined *)(param_1 + 0x14) = 0;
      FUN_00450580();
    }
    fVar2 = FUN_004508b0();
    _DAT_004cf2a0 = (double)(fVar2 - (float10)*(double *)(param_1 + 0x40));
  }
  return 0;
}


